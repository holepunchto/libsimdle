#include <assert.h>

#include "../../include/simdle.h"

int
main() {
  simdle_v128_t v = {
    .u8 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16},
  };

  uint16_t r = simdle_sum_v128_u8(v);

  assert(r == 136);
}
