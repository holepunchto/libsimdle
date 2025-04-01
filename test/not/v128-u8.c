#include <assert.h>

#include "../../include/simdle.h"

int
main() {
  simdle_v128_t v = {
    .u8 = {
      0b00000000,
      0b00000001,
      0b00000011,
      0b00000111,
      0b00001111,
      0b00011111,
      0b00111111,
      0b01111111,
      0b11111111,
    },
  };

  simdle_v128_t r = simdle_not_v128_u8(v);

  assert(r.u8[0] == 0b11111111);
  assert(r.u8[1] == 0b11111110);
  assert(r.u8[2] == 0b11111100);
  assert(r.u8[3] == 0b11111000);
  assert(r.u8[4] == 0b11110000);
  assert(r.u8[5] == 0b11100000);
  assert(r.u8[6] == 0b11000000);
  assert(r.u8[7] == 0b10000000);
  assert(r.u8[8] == 0b00000000);
}
