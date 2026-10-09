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

  static data_t shift_reg[N];

  acc_t sum_low = 0;
  acc_t sum_high = 0;

// Two independent accumulation partitions.
// Shift and accumulate in the same loop.
Shift_Accum_Loop:
  for (int i = N - 1; i >= 0; i--) {
#pragma HLS PIPELINE II = 1

    data_t sample;

    if (i == 0) {
      sample = x;
    } else {
      sample = shift_reg[i - 1];
    }

    shift_reg[i] = sample;

    if (i < N / 2) {
      sum_low += sample * c[i];
    } else {
      sum_high += sample * c[i];
    }
  }

  acc_t acc = sum_low + sum_high;
  *y = (data_t)acc;
}