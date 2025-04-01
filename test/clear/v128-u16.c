#include <assert.h>

#include "../../include/simdle.h"

int
main() {
  simdle_v128_t a = {
    .u16 = {
      0b0000001111111100,
      0b0000111111111100,
    },
  };

  simdle_v128_t b = {
    .u16 = {
      0b0000000011110000,
      0b0000001111000000,
    },
  };

  simdle_v128_t r = simdle_clear_v128_u16(a, b);

  assert(r.u16[0] == 0b0000001100001100);
  assert(r.u16[1] == 0b0000110000111100);
}
