#include <assert.h>

#include "../../include/simdle.h"

int
main() {
  simdle_v128_t v = {
    .u32 = {
      0b00000000000000000000000000000000,
      0b00000000000000000000000000000000,
      0b00000000000000000000000000000000,
      0b00000000000000000000000000000000,
    },
  };

  assert(simdle_allz_v128(v));

  v.u32[0] = 1;
  assert(!simdle_allz_v128(v));
}
