#include <assert.h>

#include "../../include/simdle.h"

int
main() {
  simdle_v128_t v = {
    .u32 = {
      0b01111111111111111111111111111111,
      0b00111111111111111111111111111111,
      0b00011111111111111111111111111111,
      0b00001111111111111111111111111111,
    },
  };

  simdle_v128_t r = simdle_cto_v128_u32(v);

  assert(r.u32[0] == 31);
  assert(r.u32[1] == 30);
  assert(r.u32[2] == 29);
  assert(r.u32[3] == 28);
}
