#include <assert.h>

#include "../../include/simdle.h"

int
main() {
  simdle_v128_t a = {
    .u32 = {
      0b00000000001111111111111111000000,
      0b00000000111111111111111111000000,
    },
  };

  simdle_v128_t b = {
    .u32 = {
      0b00000000111111111111111100000000,
      0b00000011111111111111111100000000,
    },
  };

  simdle_v128_t r = simdle_xor_v128_u32(a, b);

  assert(r.u32[0] == 0b00000000110000000000000011000000);
  assert(r.u32[1] == 0b00000011000000000000000011000000);
}
