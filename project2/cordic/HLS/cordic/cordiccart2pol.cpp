#include "cordiccart2pol.h"
#include <cmath>

data_t Kvalues[NO_ITER] = {1, 0.500000000000000, 0.250000000000000, 0.125000000000000, 0.0625000000000000, 0.0312500000000000, 0.0156250000000000, 0.00781250000000000, 0.00390625000000000, 0.00195312500000000, 0.000976562500000000, 0.000488281250000000, 0.000244140625000000, 0.000122070312500000};

data_t angles[NO_ITER] = {0.785398163397448, 0.463647609000806, 0.244978663126864, 0.124354994546761, 0.0624188099959574, 0.0312398334302683, 0.0156237286204768, 0.00781234106010111, 0.00390623013196697, 0.00195312251647882, 0.000976562189559320, 0.000488281211194898, 0.000244140620149362, 0.000122070311893670};

void cordiccart2pol(data_t x, data_t y, data_t *r, data_t *theta) {

  const data_t CORDIC_GAIN = 0.60735;

  data_t current_x = x;
  data_t current_y = y;
  data_t current_theta = 0.0;

  // Handle vectors in the left half plane
  if (current_x < 0) {
    current_x = -current_x;
    current_y = -current_y;
    current_theta = (y >= 0) ? M_PI : -M_PI;
  }

  // Perform CORDIC vectoring iterations
  for (int i = 0; i < NO_ITER; i++) {

    // Determine rotation direction
    int sigma = (current_y >= 0) ? 1 : -1;

    // Calculate shifted values
    data_t x_shift = current_x * Kvalues[i];
    data_t y_shift = current_y * Kvalues[i];

    // Rotate vector toward x-axis
    data_t next_x = current_x + sigma * y_shift;
    data_t next_y = current_y - sigma * x_shift;

    // Update angle
    current_theta += sigma * angles[i];

    // Update vector
    current_x = next_x;
    current_y = next_y;
  }

  // update CORDIC gain
  *r = current_x * CORDIC_GAIN;

  // Return angle in radians
  *theta = current_theta;
}
