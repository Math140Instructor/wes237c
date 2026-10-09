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
#pragma HLS PIPELINE II = 1
    shift_reg[i] = shift_reg[i - 1];
  }

  // Insert newest sample.
  shift_reg[0] = x;

// Partitioned accumulation: two independent MAC operations.
Accum_Partitioned:
  for (int i = 0; i < N / 2; i++) {
#pragma HLS PIPELINE II = 1

    sum_low += shift_reg[i] * c[i];
    sum_high += shift_reg[i + N / 2] * c[i + N / 2];
  }

  // Combine partial sums.
  acc_t acc = sum_low + sum_high;
  *y = (data_t)acc;