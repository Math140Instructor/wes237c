/*
        Filename: fir.cpp
                FIR lab wirtten for WES/CSE237C class at UCSD.
                Match filter
        INPUT:
                x: signal (chirp)

        OUTPUT:
                y: filtered output

*/

#include "fir.h"

void fir(data_t *y, data_t x) {

  coef_t c[N] = {10, 11, 11, 8, 3, -3, -8, -11, -11, -10, -10, -10, -10, -10, -10, -10, -10, -10, -10, -10, -10, -10, -10, -10, -10, -10, -10, -10, -10, -10, -10, -10, -10, -11, -11, -8, -3, 3, 8, 11, 11, 10, 10, 10, 10, 10, 10, 10, 10, 11, 11, 8, 3, -3, -8, -11, -11, -10, -10, -10, -10, -10, -10, -10, -10, -11, -11, -8, -3, 3, 8, 11, 11, 10, 10, 10, 10, 10, 10, 10, 10, 11, 11, 8, 3, -3, -8, -11, -11, -10, -10, -10, -10, -10, -10, -10, -10, -11, -11, -8, -3, 3, 8, 11, 11, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10};

  // Write your code here
  static data_t shift_reg[N];

  acc_t sum_low = 0;
  acc_t sum_high = 0;

// Shift previous samples.
Shift_Loop:
  for (int i = N - 1; i > 0; i--) {
    shift_reg[i] = shift_reg[i - 1];
  }

  // Insert newest sample.
  shift_reg[0] = x;

// First 64 taps.
Accum_Low:
  for (int i = 0; i < 64; i++) {
    sum_low += shift_reg[i] * c[i];
  }

// Last 64 taps.
Accum_High:
  for (int i = 64; i < N; i++) {
    sum_high += shift_reg[i] * c[i];
  }

  // Combine partial sums and write output.
  acc_t acc = sum_low + sum_high;
  *y = (data_t)acc;
}