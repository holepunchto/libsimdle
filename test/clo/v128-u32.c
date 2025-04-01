#include <assert.h>

#include "../../include/simdle.h"

int
main() {
  simdle_v128_t v = {
    .u32 = {
      0b11111111111111111111111111111110,
      0b11111111111111111111111111111100,
      0b11111111111111111111111111111000,
      0b11111111111111111111111111110000,
    },
  };

  simdle_v128_t r = simdle_clo_v128_u32(v);

  assert(r.u32[0] == 31);
  assert(r.u32[1] == 30);
  assert(r.u32[2] == 29);
  assert(r.u32[3] == 28);
}
