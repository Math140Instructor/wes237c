/*
This is traditional 2-radix DIT FFT algorithm implementation.
INPUT:
        In_R, In_I[]: Real and Imag parts of Complex signal

OUTPUT:
        Out_R, Out_I[]: Real and Imag parts of Complex signal
*/

#include "fft.h"

void bit_reverse(DTYPE X_R[SIZE], DTYPE X_I[SIZE]);
void fft_stage_first(DTYPE X_R[SIZE], DTYPE X_I[SIZE], DTYPE OUT_R[SIZE], DTYPE OUT_I[SIZE]);
void fft_stages(DTYPE X_R[SIZE], DTYPE X_I[SIZE], int STAGES, DTYPE OUT_R[SIZE], DTYPE OUT_I[SIZE]);
void fft_stage_last(DTYPE X_R[SIZE], DTYPE X_I[SIZE], DTYPE OUT_R[SIZE], DTYPE OUT_I[SIZE]);

void fft(DTYPE X_R[SIZE], DTYPE X_I[SIZE], DTYPE OUT_R[SIZE], DTYPE OUT_I[SIZE]) {
// create an AXI4 memory-mapped master interface so your FFT hardware can write to external DDR memory.
#pragma HLS INTERFACE mode = m_axi port = X_R offset = slave bundle = xreal_in
#pragma HLS INTERFACE mode = m_axi port = X_I offset = slave bundle = ximag_in
#pragma HLS INTERFACE mode = m_axi port = OUT_R offset = slave bundle = xreal_out  
#pragma HLS INTERFACE mode = m_axi port = OUT_I offset = slave bundle = ximag_out  

// #pragma HLS INTERFACE mode = s_axilite port = X_R bundle = control
// #pragma HLS INTERFACE mode = s_axilite port = X_I bundle = control
// #pragma HLS INTERFACE mode = s_axilite port = OUT_R bundle = control
// #pragma HLS INTERFACE mode = s_axilite port = OUT_I bundle = control
// AXI4-Lite control interface so the PYNQ processor can start your FFT and check when it finishes.
#pragma HLS INTERFACE mode = s_axilite port = return bundle = control

  // Combine input reordering and first butterfly stage into one task.
  // Only this task accesses X_R/X_I, which are modified in-place.
#pragma HLS DATAFLOW

  DTYPE Stage1_R[SIZE], Stage1_I[SIZE];
  DTYPE Stage2_R[SIZE], Stage2_I[SIZE];
  DTYPE Stage3_R[SIZE], Stage3_I[SIZE];
  DTYPE Stage4_R[SIZE], Stage4_I[SIZE];
  DTYPE Stage5_R[SIZE], Stage5_I[SIZE];
  DTYPE Stage6_R[SIZE], Stage6_I[SIZE];
  DTYPE Stage7_R[SIZE], Stage7_I[SIZE];
  DTYPE Stage8_R[SIZE], Stage8_I[SIZE];
  DTYPE Stage9_R[SIZE], Stage9_I[SIZE];

  fft_stage_first(X_R, X_I, Stage1_R, Stage1_I);
  fft_stages(Stage1_R, Stage1_I, 2, Stage2_R, Stage2_I);
  fft_stages(Stage2_R, Stage2_I, 3, Stage3_R, Stage3_I);
  fft_stages(Stage3_R, Stage3_I, 4, Stage4_R, Stage4_I);
  fft_stages(Stage4_R, Stage4_I, 5, Stage5_R, Stage5_I);
  fft_stages(Stage5_R, Stage5_I, 6, Stage6_R, Stage6_I);
  fft_stages(Stage6_R, Stage6_I, 7, Stage7_R, Stage7_I);
  fft_stages(Stage7_R, Stage7_I, 8, Stage8_R, Stage8_I);
  fft_stages(Stage8_R, Stage8_I, 9, Stage9_R, Stage9_I);
  fft_stage_last(Stage9_R, Stage9_I, OUT_R, OUT_I);
}

// In-place bit reversal: visit each distinct swap pair exactly once.
// For SIZE=1024 and M=10, there are 496 pairs and 32 fixed points.
void bit_reverse(DTYPE X_R[SIZE], DTYPE X_I[SIZE]) {
#pragma HLS INLINE off
  const int HALF_BITS = M / 2;
  const int HALF = 1 << HALF_BITS;
  const int SWAPS = (SIZE - HALF) / 2;

  int a = 0;
  int b = 1;

  for (int pair = 0; pair < SWAPS; pair++) {
#pragma HLS PIPELINE II = 1
#pragma HLS DEPENDENCE variable = X_R dependent = false
#pragma HLS DEPENDENCE variable = X_I dependent = false

    INTTYPE rev_a = 0;
    INTTYPE rev_b = 0;

    for (int j = 0; j < HALF_BITS; j++) {
#pragma HLS UNROLL
      rev_a = (rev_a << 1) | ((a >> j) & 1);
      rev_b = (rev_b << 1) | ((b >> j) & 1);
    }

    const int i = (a << HALF_BITS) | rev_b;
    const int reversed = (b << HALF_BITS) | rev_a;

    DTYPE temp_R = X_R[i];
    DTYPE temp_I = X_I[i];
    X_R[i] = X_R[reversed];
    X_I[i] = X_I[reversed];
    X_R[reversed] = temp_R;
    X_I[reversed] = temp_I;

    if (b == HALF - 1) {
      a++;
      b = a + 1;
    } else {
      b++;
    }
  }
}

// Stage 1: no twiddle multiplication.
void fft_stage_first(DTYPE X_R[SIZE], DTYPE X_I[SIZE], DTYPE OUT_R[SIZE], DTYPE OUT_I[SIZE]) {
  bit_reverse(X_R, X_I);
#pragma HLS INLINE off
  for (int i = 0; i < SIZE / 2; i++) {
#pragma HLS PIPELINE II = 1
    const int upper = 2 * i;
    const int lower = upper + 1;

    DTYPE a_R = X_R[upper], a_I = X_I[upper];
    DTYPE b_R = X_R[lower], b_I = X_I[lower];

    OUT_R[upper] = a_R + b_R;
    OUT_I[upper] = a_I + b_I;
    OUT_R[lower] = a_R - b_R;
    OUT_I[lower] = a_I - b_I;
  }
}

// Stages 2 through 9.
void fft_stages(DTYPE X_R[SIZE], DTYPE X_I[SIZE], int stage, DTYPE OUT_R[SIZE], DTYPE OUT_I[SIZE]) {
#pragma HLS INLINE off
#pragma HLS FUNCTION_INSTANTIATE variable = stage // create a separate hardware implementation of a function for each stage

  const int half = 1 << (stage - 1);
  const int shift = M - stage;

  for (int i = 0; i < SIZE / 2; i++) {
#pragma HLS PIPELINE II = 1
// each FFT loop iteration writes to different output locations, so iterations can run without waiting for previous writes to finish.
#pragma HLS DEPENDENCE variable = OUT_R direction = WAW dependent = false
#pragma HLS DEPENDENCE variable = OUT_I direction = WAW dependent = false
    const int group = i >> (stage - 1);
    const int j = i & (half - 1);
    const int upper = (group << stage) + j;
    const int lower = upper + half;

    DTYPE a_R = X_R[upper], a_I = X_I[upper];
    DTYPE b_R = X_R[lower], b_I = X_I[lower];
    DTYPE temp_R, temp_I;

    if (stage == 2) {
      if (j == 0) {
        temp_R = b_R;
        temp_I = b_I;
      } else if (W_imag[SIZE / 4] < 0) {
        // Twiddle factor -i.
        temp_R = b_I;
        temp_I = -b_R;
      } else {
        // Twiddle factor +i.
        temp_R = -b_I;
        temp_I = b_R;
      }
    } else {
      const int index = j << shift;
      DTYPE c = W_real[index], s = W_imag[index];
      temp_R = b_R * c - b_I * s;
      temp_I = b_I * c + b_R * s;
    }

    OUT_R[upper] = a_R + temp_R;
    OUT_I[upper] = a_I + temp_I;
    OUT_R[lower] = a_R - temp_R;
    OUT_I[lower] = a_I - temp_I;
  }
}

// Stage 10.
void fft_stage_last(DTYPE X_R[SIZE], DTYPE X_I[SIZE], DTYPE OUT_R[SIZE], DTYPE OUT_I[SIZE]) {
#pragma HLS INLINE off
  for (int j = 0; j < SIZE / 2; j++) {
#pragma HLS PIPELINE II = 1
    const int upper = j;
    const int lower = j + SIZE / 2;
    DTYPE c = W_real[j], s = W_imag[j];

    DTYPE a_R = X_R[upper], a_I = X_I[upper];
    DTYPE b_R = X_R[lower], b_I = X_I[lower];

    DTYPE mul0, mul1;
    // Save DSP resources by performing those multiplications using FPGA fabric instead od dsp blocks
#pragma HLS BIND_OP variable = mul0 op = fmul impl = fabric
#pragma HLS BIND_OP variable = mul1 op = fmul impl = fabric
    mul0 = b_R * c;
    mul1 = b_I * s;

    DTYPE temp_R = mul0 - mul1;
    DTYPE temp_I = b_I * c + b_R * s;

    OUT_R[upper] = a_R + temp_R;
    OUT_I[upper] = a_I + temp_I;
    OUT_R[lower] = a_R - temp_R;
    OUT_I[lower] = a_I - temp_I;
  }
}
