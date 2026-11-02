
#include "dft.h"
#include "coefficients1024.h"

void dft(hls::stream<transPkt> &real_in, hls::stream<transPkt> &imag_in, hls::stream<transPkt> &real_out, hls::stream<transPkt> &imag_out) {

#pragma HLS INTERFACE axis port = real_in
#pragma HLS INTERFACE axis port = imag_in
#pragma HLS INTERFACE axis port = real_out
#pragma HLS INTERFACE axis port = imag_out
#pragma HLS INTERFACE s_axilite port = return bundle = CTRL

  DTYPE real_sample[SIZE];
  DTYPE imag_sample[SIZE];

  // Read input streams into local arrays
  for (int n = 0; n < SIZE; n++) {
    transPkt real_pkt = real_in.read();
    transPkt imag_pkt = imag_in.read();

    real_sample[n] = real_pkt.data;
    imag_sample[n] = imag_pkt.data;
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

    // Create output AXI-Stream packets
    transPkt real_pkt;
    transPkt imag_pkt;

    real_pkt.data = real_sum;
    imag_pkt.data = imag_sum;

    real_pkt.keep = 0xF;
    imag_pkt.keep = 0xF;

    real_pkt.strb = 0xF;
    imag_pkt.strb = 0xF;

    // Mark the last sample of each output stream for DMA transfer completion
    real_pkt.last = (k == SIZE - 1);
    imag_pkt.last = (k == SIZE - 1);

    real_out.write(real_pkt);
    imag_out.write(imag_pkt);
  }
}
