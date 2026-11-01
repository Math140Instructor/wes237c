#include <math.h>
#include "dft.h"
#include "coefficients32.h"

void dft(DTYPE real_sample[SIZE], DTYPE imag_sample[SIZE]) {
    DTYPE real_out[SIZE], imag_out[SIZE];

    for (int k = 0; k < SIZE; k++) {
        real_out[k] = 0;
        imag_out[k] = 0;

        double w = 2.0 * M_PI * k / SIZE;

        for (int n = 0; n < SIZE; n++) {
            double c = cos(n * w);
            double s = -sin(n * w);

            real_out[k] += real_sample[n] * c - imag_sample[n] * s;
            imag_out[k] += real_sample[n] * s + imag_sample[n] * c;
        }
    }

    for (int k = 0; k < SIZE; k++) {
        real_sample[k] = real_out[k];
        imag_sample[k] = imag_out[k];
    }
}