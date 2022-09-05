#include <assert.h>

#include "../../include/simdle.h"

int
main () {
  simdle_v128_t v = {
    .u16 = {1, 2, 3, 4, 5, 6, 7, 8},
  };

  uint32_t r = simdle_sum_v128_u16(v);

  assert(r == 36);
}
