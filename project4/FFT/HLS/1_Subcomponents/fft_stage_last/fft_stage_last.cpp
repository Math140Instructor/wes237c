#include "fft_stage_last.h"

/*
 * Function: fft_stage_first_op calculates the LAST stage of FFT.
 *
INPUT:
        In_R, In_I[]: Real and Imag parts of Complex signal

OUTPUT:
        OUT_R, OUT_I[]: Real and Imag parts of Complex signal

 */

//=======================BEGIN: FFT fft_stage_last =========================
void fft_stage_last(DTYPE X_R[SIZE], DTYPE X_I[SIZE], DTYPE OUT_R[SIZE], DTYPE OUT_I[SIZE]) {

  for (int j = 0; j < SIZE / 2; j++) {
#pragma HLS PIPELINE II = 1

    int upper = j;
    int lower = j + SIZE / 2;

    // Twiddle factor W_1024^j
    DTYPE c = W_real[j];
    DTYPE s = W_imag[j];

    // Read both inputs before computing the butterfly
    DTYPE a_R = X_R[upper];
    DTYPE a_I = X_I[upper];

    DTYPE b_R = X_R[lower];
    DTYPE b_I = X_I[lower];

    // Complex multiplication: (b_R + j*b_I) * (c + j*s)
    DTYPE temp_R = b_R * c - b_I * s;
    DTYPE temp_I = b_I * c + b_R * s;

    // Butterfly outputs
    OUT_R[upper] = a_R + temp_R;
    OUT_I[upper] = a_I + temp_I;

    OUT_R[lower] = a_R - temp_R;
    OUT_I[lower] = a_I - temp_I;
  }
}
//=======================END: FFT fft_stage_last =========================
