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
  acc_t acc;
  int i;

  acc = 0;
  // Compute two independent partial sums.
  int sum_low = 0;
  int sum_high = 0;

Accum_Low:
  for (int i = 0; i < 64; i++) {
    sum_low += shift_reg[i] * c[i];
  }

Accum_High:
  for (int i = 64; i < 128; i++) {
    sum_high += shift_reg[i] * c[i];
  }

  acc = sum_low + sum_high;
}
