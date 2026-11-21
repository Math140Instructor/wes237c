#include "fft_stage_first.h"
/*
 * Function: fft_stage_first_op calculates the first stage of the FFT.
 *
INPUT:
        In_R, In_I[]: Real and Imag parts of Complex signal

OUTPUT:
        OUT_R, OUT_I[]: Real and Imag parts of Complex signal
 */

//=======================BEGIN: FFT fft_stage_first_op =========================
void fft_stage_first(DTYPE X_R[SIZE], DTYPE X_I[SIZE], DTYPE OUT_R[SIZE], DTYPE OUT_I[SIZE]) {

  for (int i = 0; i < SIZE / 2; i++) {
#pragma HLS PIPELINE II = 1

    int upper = 2 * i;
    int lower = upper + 1;

    DTYPE a_R = X_R[upper];
    DTYPE a_I = X_I[upper];

    DTYPE b_R = X_R[lower];
    DTYPE b_I = X_I[lower];

    OUT_R[upper] = a_R + b_R;
    OUT_I[upper] = a_I + b_I;

    OUT_R[lower] = a_R - b_R;
    OUT_I[lower] = a_I - b_I;
  }
}
//=======================END: FFT fft_stage_first_op =========================
