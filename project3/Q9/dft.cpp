
#include "dft.h"
#include "coefficients1024.h"

void dft(hls::stream<DTYPE> &real_in, hls::stream<DTYPE> &imag_in, hls::stream<DTYPE> &real_out, hls::stream<DTYPE> &imag_out) {

#pragma HLS INTERFACE axis port = real_in
#pragma HLS INTERFACE axis port = imag_in
#pragma HLS INTERFACE axis port = real_out
#pragma HLS INTERFACE axis port = imag_out
#pragma HLS INTERFACE ap_ctrl_hs port = return

  DTYPE real_sample[SIZE];
  DTYPE imag_sample[SIZE];

  // Read input streams into local arrays
  for (int n = 0; n < SIZE; n++) {
    real_sample[n] = real_in.read();
    imag_sample[n] = imag_in.read();
  }

  // Optimized DFT1024
  for (int k = 0; k < SIZE; k++) {
    DTYPE real_sum = 0;
    DTYPE imag_sum = 0;

    for (int n = 0; n < SIZE; n++) {
#pragma HLS UNROLL factor = 2

      int index = (k * n) % SIZE;

      DTYPE c = cos_coefficients_table[index];
      DTYPE s = sin_coefficients_table[index];

      real_sum += real_sample[n] * c - imag_sample[n] * s;

      imag_sum += real_sample[n] * s + imag_sample[n] * c;
    }

    // Write results to output streams
    real_out.write(real_sum);
    imag_out.write(imag_sum);
  }
}
