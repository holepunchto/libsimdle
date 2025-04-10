#include <assert.h>

#include "../../include/simdle.h"

int
main() {
  simdle_v128_t a = {
    .u8 = {
      0b00001111,
      0b00111111,
    },
  };

  simdle_v128_t b = {
    .u8 = {
      0b00111100,
      0b11111100,
    },
  };

  simdle_v128_t r = simdle_and_v128_u8(a, b);

  assert(r.u8[0] == 0b00001100);
  assert(r.u8[1] == 0b00111100);
}
