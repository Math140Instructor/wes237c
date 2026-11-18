
#include "fft_stages.h"
/*
 * Function: fft_stage_first_op calculates the first stage of FFT.
 *
INPUT:
        In_R, In_I[]: Real and Imag parts of Complex signal
        stage: stage number: //Possible values of STAGE=2,3,4,5,6,7,8,9

OUTPUT:
        OUT_R, OUT_I[]: Real and Imag parts of Complex signal
 */

//=======================BEGIN: FFT fft_stages =========================
void fft_stages(DTYPE X_R[SIZE], DTYPE X_I[SIZE], int stage, DTYPE OUT_R[SIZE], DTYPE OUT_I[SIZE]) {

  const int half = 1 << (stage - 1);
  const int shift = M - stage;

  // butterflies
  for (int i = 0; i < SIZE / 2; i++) {
#pragma HLS PIPELINE II = 1
#pragma HLS DEPENDENCE variable = OUT_R type = inter direction = WAW dependent = false
#pragma HLS DEPENDENCE variable = OUT_I type = inter direction = WAW dependent = false

    // Determine butterfly indices
    int group = i >> (stage - 1);
    int j = i & (half - 1);

    int upper = (group << stage) + j;
    int lower = upper + half;

    // Twiddle factor lookup
    int index = j << shift;

    DTYPE c = W_real[index];
    DTYPE s = W_imag[index];

    // Read inputs
    DTYPE a_R = X_R[upper];
    DTYPE a_I = X_I[upper];

    DTYPE b_R = X_R[lower];
    DTYPE b_I = X_I[lower];

    // Complex multiplication
    DTYPE temp_R = b_R * c - b_I * s;
    DTYPE temp_I = b_I * c + b_R * s;

    // Butterfly outputs
    OUT_R[upper] = a_R + temp_R;
    OUT_I[upper] = a_I + temp_I;

    OUT_R[lower] = a_R - temp_R;
    OUT_I[lower] = a_I - temp_I;
  }
}
//=======================END: FFT fft_stages =========================
