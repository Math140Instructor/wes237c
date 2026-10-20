#include "cordiccart2pol.h"
#include <math.h>

// data_t my_LUT_th[LUT_SIZE]; // extern only for make test otherwise hls remove
// data_t my_LUT_r[LUT_SIZE];

// Weak definitions allow testbench to provide its own arrays without linker conflicts
// keeps the arrays defined for HLS synthesis.
data_t my_LUT_th[LUT_SIZE] __attribute__((weak));
data_t my_LUT_r[LUT_SIZE] __attribute__((weak));

void init_cart2pol_LUTs(data_t th[LUT_SIZE], data_t r[LUT_SIZE]) {
  for (int i = 0; i < LUT_SIZE; i++) {
    ap_uint<2 * W> index = i;

    ap_fixed<W, I, AP_RND, AP_WRAP, 1> fixed_x;
    ap_fixed<W, I, AP_RND, AP_WRAP, 1> fixed_y;

    for (int j = 0; j < W; j++) {
      fixed_x[W - 1 - j] = index[2 * W - 1 - j];
      fixed_y[W - 1 - j] = index[W - 1 - j];
    }

    float _x = fixed_x;
    float _y = fixed_y;

    if ((_x == 0) && (_y == 0)) {
      th[index] = 0;
      r[index] = 0;
    } else {
      th[index] = atan2f(_y, _x);
      r[index] = sqrtf(_y * _y + _x * _x);
    }
  }
}

void cordiccart2pol(data_t x, data_t y, data_t *r, data_t *theta) {
#pragma HLS INTERFACE s_axilite port = x bundle = CTRL
#pragma HLS INTERFACE s_axilite port = y bundle = CTRL
#pragma HLS INTERFACE s_axilite port = r bundle = CTRL
#pragma HLS INTERFACE s_axilite port = theta bundle = CTRL
#pragma HLS INTERFACE s_axilite port = return bundle = CTRL

  static bool initialized = false;

  if (!initialized) {
    init_cart2pol_LUTs(my_LUT_th, my_LUT_r);
    initialized = true;
  }

  ap_uint<2 * W> index;

  for (int i = 0; i < W; i++) {
#pragma HLS UNROLL
    index[2 * W - 1 - i] = x[W - 1 - i];
    index[W - 1 - i] = y[W - 1 - i];
  }

  *r = my_LUT_r[index];
  *theta = my_LUT_th[index];
}