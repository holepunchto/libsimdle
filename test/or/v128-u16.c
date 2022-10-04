#include <assert.h>

#include "../../include/simdle.h"

int
main () {
  simdle_v128_t a = {
    .u16 = {
      0b0000001111111100,
      0b0000111111111100,
    },
  };

  simdle_v128_t b = {
    .u16 = {
      0b0000111111110000,
      0b0011111111110000,
    },
  };

  simdle_v128_t r = simdle_or_v128_u16(a, b);

  assert(r.u16[0] == 0b0000111111111100);
  assert(r.u16[1] == 0b0011111111111100);
}
