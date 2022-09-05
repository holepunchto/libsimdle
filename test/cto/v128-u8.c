#include <assert.h>

#include "../../include/simdle.h"

int
main () {
  simdle_v128_t v = {
    .u8 = {
      0b11111111,
      0b01111111,
      0b00111111,
      0b00011111,
      0b00001111,
      0b00000111,
      0b00000011,
      0b00000001,
      0b00000000,
    },
  };

  simdle_v128_t r = simdle_cto_v128_u8(v);

  assert(r.u8[0] == 8);
  assert(r.u8[1] == 7);
  assert(r.u8[2] == 6);
  assert(r.u8[3] == 5);
  assert(r.u8[4] == 4);
  assert(r.u8[5] == 3);
  assert(r.u8[6] == 2);
  assert(r.u8[7] == 1);
  assert(r.u8[8] == 0);
}
