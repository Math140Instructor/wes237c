/*
The bit_reverse part of FFT.
INPUT:
        In[]:

OUTPUT:
        Out[]:
 */
#include "bit_reverse.h"
#include <stdio.h>

void bit_reverse(DTYPE X_R[SIZE], DTYPE X_I[SIZE]) {

  for (int i = 0; i < SIZE; i++) {

    INTTYPE reversed = 0;

    // Reverse M = log2(SIZE) bits of the current index.
    for (int j = 0; j < M; j++) {
#pragma HLS UNROLL
      // Build the reversed index by reading i's bits from right to left and placing them from left to right.
      // make its least significant bit the most significant bit.
      reversed = (reversed << 1) | ((i >> j) & 1);
    }

    if (i < reversed) {
      DTYPE temp_R = X_R[i];
      DTYPE temp_I = X_I[i];

      X_R[i] = X_R[reversed];
      X_I[i] = X_I[reversed];

      X_R[reversed] = temp_R;
      X_I[reversed] = temp_I;
    }
  }
}