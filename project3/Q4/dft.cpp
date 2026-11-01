#include "dft.h"
#include "coefficients32_2D.h"

// #define FACTOR 8  // Test 1, 2, 4, 8, 16, 32
const int FACTOR = 32;

void dft(DTYPE real_sample[SIZE], DTYPE imag_sample[SIZE], DTYPE real_out[SIZE], DTYPE imag_out[SIZE]) {

  // #if FACTOR > 1
  // #pragma HLS ARRAY_PARTITION variable=real_sample type=block factor=2
  // #pragma HLS ARRAY_PARTITION variable=imag_sample type=block factor=2
  // #pragma HLS ARRAY_PARTITION variable=real_out type=block factor=2
  // #pragma HLS ARRAY_PARTITION variable=imag_out type=block factor=2
  // #endif
  if (FACTOR > 1) {
#pragma HLS ARRAY_PARTITION variable = real_sample type = block factor = FACTOR
#pragma HLS ARRAY_PARTITION variable = imag_sample type = block factor = FACTOR
#pragma HLS ARRAY_PARTITION variable = real_out type = block factor = FACTOR
#pragma HLS ARRAY_PARTITION variable = imag_out type = block factor = FACTOR
  }

  for (int k = 0; k < SIZE; k++) {
#pragma HLS PIPELINE II = 1

    real_out[k] = 0;
    imag_out[k] = 0;

    for (int n = 0; n < SIZE; n++) {
      DTYPE c = cos_coeff_table[k][n];
      DTYPE s = sin_coeff_table[k][n];

      real_out[k] += real_sample[n] * c - imag_sample[n] * s;
      imag_out[k] += real_sample[n] * s + imag_sample[n] * c;
    }
  }
}