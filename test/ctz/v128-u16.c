#include <assert.h>

#include "../../include/simdle.h"

int
main() {
  simdle_v128_t v = {
    .u16 = {
      0b1000000000000000,
      0b1100000000000000,
      0b1110000000000000,
      0b1111000000000000,
      0b1111100000000000,
      0b1111110000000000,
      0b1111111000000000,
      0b1111111100000000,
    },
  };

  simdle_v128_t r = simdle_ctz_v128_u16(v);

  assert(r.u16[0] == 15);
  assert(r.u16[1] == 14);
  assert(r.u16[2] == 13);
  assert(r.u16[3] == 12);
  assert(r.u16[4] == 11);
  assert(r.u16[5] == 10);
  assert(r.u16[6] == 9);
  assert(r.u16[7] == 8);
}
