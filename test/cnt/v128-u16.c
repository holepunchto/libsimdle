#include <assert.h>

#include "../../include/simdle.h"

int
main() {
  simdle_v128_t v = {
    .u16 = {
      0b0000000000000001,
      0b1000000000000001,
      0b1000000000000011,
      0b1100000000000011,
      0b1100000000000111,
      0b1110000000000111,
      0b1110000000001111,
      0b1111000000001111,
    },
  };

  simdle_v128_t r = simdle_cnt_v128_u16(v);

  assert(r.u16[0] == 1);
  assert(r.u16[1] == 2);
  assert(r.u16[2] == 3);
  assert(r.u16[3] == 4);
  assert(r.u16[4] == 5);
  assert(r.u16[5] == 6);
  assert(r.u16[6] == 7);
  assert(r.u16[7] == 8);
}
