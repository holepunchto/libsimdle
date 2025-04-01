#include <assert.h>

#include "../../include/simdle.h"

int
main() {
  simdle_v128_t v = {
    .u32 = {
      0b00000000000000000000000000000001,
      0b10000000000000000000000000000001,
      0b10000000000000000000000000000011,
      0b11000000000000000000000000000011,
    },
  };

  simdle_v128_t r = simdle_cnt_v128_u32(v);

  assert(r.u32[0] == 1);
  assert(r.u32[1] == 2);
  assert(r.u32[2] == 3);
  assert(r.u32[3] == 4);
}
