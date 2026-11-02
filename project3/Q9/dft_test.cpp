
#include "dft.h"
#include <cmath>
#include <cstdio>

struct Rmse {
  int num_sq = 0;
  double sum_sq = 0.0;

  void add_value(double difference) {
    num_sq++;
    sum_sq += difference * difference;
  }

  double error() const { return num_sq > 0 ? std::sqrt(sum_sq / num_sq) : 0.0; }
};

int main() {
  FILE *fp = fopen("out.gold.dat", "r");

  if (fp == nullptr) {
    printf("ERROR: Cannot open out.gold.dat\n");
    return 1;
  }

  hls::stream<transPkt> real_in("real_in");
  hls::stream<transPkt> imag_in("imag_in");
  hls::stream<transPkt> real_out("real_out");
  hls::stream<transPkt> imag_out("imag_out");

  // Prepare 1024 complex input samples
  for (int n = 0; n < SIZE; n++) {
    transPkt real_pkt;
    transPkt imag_pkt;

    real_pkt.data = static_cast<DTYPE>(n);
    imag_pkt.data = static_cast<DTYPE>(0);

    real_pkt.keep = 0xF;
    imag_pkt.keep = 0xF;

    real_pkt.strb = 0xF;
    imag_pkt.strb = 0xF;

    real_pkt.last = (n == SIZE - 1);
    imag_pkt.last = (n == SIZE - 1);

    real_in.write(real_pkt);
    imag_in.write(imag_pkt);
  }

  // Execute streaming DFT
  dft(real_in, imag_in, real_out, imag_out);

  Rmse rmse_R, rmse_I;

  // Read each output and compare with golden data
  for (int k = 0; k < SIZE; k++) {
    if (real_out.empty() || imag_out.empty()) {
      printf("FAIL: Missing output at k=%d\n", k);
      fclose(fp);
      return 1;
    }

    transPkt real_pkt = real_out.read();
    transPkt imag_pkt = imag_out.read();

    DTYPE result_R = real_pkt.data;
    DTYPE result_I = imag_pkt.data;

    // Verify TLAST is asserted only on the final sample
    bool expected_last = (k == SIZE - 1);

    if (static_cast<bool>(real_pkt.last) != expected_last || static_cast<bool>(imag_pkt.last) != expected_last) {
      printf("FAIL: Incorrect TLAST at k=%d\n", k);
      fclose(fp);
      return 1;
    }

    int index;
    float gold_R, gold_I;

    if (fscanf(fp, "%d %f %f", &index, &gold_R, &gold_I) != 3) {
      printf("FAIL: Invalid golden data at k=%d\n", k);
      fclose(fp);
      return 1;
    }

    if (index != k) {
      printf("FAIL: Golden index mismatch at k=%d\n", k);
      fclose(fp);
      return 1;
    }

    rmse_R.add_value(static_cast<double>(result_R) - gold_R);
    rmse_I.add_value(static_cast<double>(result_I) - gold_I);
  }

  fclose(fp);

  if (!real_out.empty() || !imag_out.empty()) {
    printf("FAIL: Unexpected extra output samples\n");
    return 1;
  }

  double error_R = rmse_R.error();
  double error_I = rmse_I.error();

  printf("----------------------------------------------\n");
  printf("   RMSE(R)           RMSE(I)\n");
  printf("%.15f %.15f\n", error_R, error_I);
  printf("----------------------------------------------\n");

  if (!std::isfinite(error_R) || !std::isfinite(error_I) || error_R > 0.1 || error_I > 0.1) {
    printf("FAIL: Output DOES NOT match the golden output\n");
    return 1;
  }

  printf("PASS: The output matches the golden output!\n");
  return 0;
}
