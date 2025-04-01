#include <assert.h>

#include "../../include/simdle.h"

int
main() {
  simdle_v128_t v = {
    .u32 = {1, 2, 3, 4},
  };

  uint64_t r = simdle_sum_v128_u32(v);

  assert(r == 10);
}
