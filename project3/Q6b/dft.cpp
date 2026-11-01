
#include "dft.h"
#include "coefficients1024.h"

void dft(DTYPE real_sample[SIZE], DTYPE imag_sample[SIZE], DTYPE real_op[SIZE], DTYPE imag_op[SIZE]) {
  for (int k = 0; k < SIZE; k++) {
    real_op[k] = 0;
    imag_op[k] = 0;

    for (int n = 0; n < SIZE; n++) {

      int index = (k * n) % SIZE;

      DTYPE c = cos_coefficients_table[index];
      DTYPE s = sin_coefficients_table[index];

      real_op[k] += real_sample[n] * c - imag_sample[n] * s;
      imag_op[k] += real_sample[n] * s + imag_sample[n] * c;
    }
  }

  for (int k = 0; k < SIZE; k++) {
    real_sample[k] = real_op[k];
    imag_sample[k] = imag_op[k];
  }
}
