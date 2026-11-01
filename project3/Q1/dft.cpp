#include "dft.h"
#include "coefficients32.h"
#include <math.h>

void dft(DTYPE real_sample[SIZE], DTYPE imag_sample[SIZE]) {

  DTYPE real_out[SIZE], imag_out[SIZE];

  // Calculate each frequency bin k
  for (int k = 0; k < SIZE; k++) {
    real_out[k] = 0;
    imag_out[k] = 0;

    // Calculate the angle for frequency bin k
    double w = 2.0 * M_PI * k / SIZE;

    // Calculate the DFT sum for frequency bin k
    for (int n = 0; n < SIZE; n++) {
      double c = cos(n * w);
      double s = -sin(n * w);
      real_out[k] += real_sample[n] * c - imag_sample[n] * s;
      imag_out[k] += real_sample[n] * s + imag_sample[n] * c;
    }
  }

  // Copy the DFT results
  for (int k = 0; k < SIZE; k++) {
    real_sample[k] = real_out[k];
    imag_sample[k] = imag_out[k];
  }
}