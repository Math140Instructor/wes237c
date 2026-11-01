
#include "dft.h"
#include "coefficients1024.h"
#include <math.h>

void dft(DTYPE real_sample[SIZE], DTYPE imag_sample[SIZE], DTYPE real_op[SIZE], DTYPE imag_op[SIZE]) {

  for (int k = 0; k < SIZE; k++) {
    real_op[k] = 0;
    imag_op[k] = 0;
  }

  // Interchanged loops
  for (int n = 0; n < SIZE; n++) {
    for (int k = 0; k < SIZE; k++) {

      double w = 2.0 * M_PI * k / SIZE;
      double c = cos(n * w);
      double s = -sin(n * w);

      real_op[k] += real_sample[n] * c - imag_sample[n] * s;
      imag_op[k] += real_sample[n] * s + imag_sample[n] * c;
    }
  }

  for (int k = 0; k < SIZE; k++) {
    real_sample[k] = real_op[k];
    imag_sample[k] = imag_op[k];
  }
}
