#include "dft.h"
#include "coefficients32_2D.h"

void dft(DTYPE real_sample[SIZE], DTYPE imag_sample[SIZE], DTYPE real_out[SIZE], DTYPE imag_out[SIZE]) {

  for (int k = 0; k < SIZE; k++) {
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