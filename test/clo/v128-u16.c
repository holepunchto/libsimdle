#include <assert.h>

#include "../../include/simdle.h"

int
main () {
  simdle_v128_t v = {
    .u16 = {
      0b1111111111111110,
      0b1111111111111100,
      0b1111111111111000,
      0b1111111111110000,
      0b1111111111100000,
      0b1111111111000000,
      0b1111111110000000,
      0b1111111100000000,
    },
  };

  simdle_v128_t r = simdle_clo_v128_u16(v);

  assert(r.u16[0] == 15);
  assert(r.u16[1] == 14);
  assert(r.u16[2] == 13);
  assert(r.u16[3] == 12);
  assert(r.u16[4] == 11);
  assert(r.u16[5] == 10);
  assert(r.u16[6] == 9);
  assert(r.u16[7] == 8);
}
