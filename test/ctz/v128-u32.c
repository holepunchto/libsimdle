#include <assert.h>

#include "../../include/simdle.h"

int
main() {
  simdle_v128_t v = {
    .u32 = {
      0b10000000000000000000000000000000,
      0b11000000000000000000000000000000,
      0b11100000000000000000000000000000,
      0b11110000000000000000000000000000,
    },
  };

  simdle_v128_t r = simdle_ctz_v128_u32(v);

  assert(r.u32[0] == 31);
  assert(r.u32[1] == 30);
  assert(r.u32[2] == 29);
  assert(r.u32[3] == 28);
}
