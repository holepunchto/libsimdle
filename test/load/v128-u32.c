#include <assert.h>

#include "../../include/simdle.h"

int
main() {
  const uint32_t arr[] = {1, 2, 3, 4};

  simdle_v128_t vec = simdle_load_v128_u32(arr);

  assert(vec.u32[0] == 1);
  assert(vec.u32[1] == 2);
  assert(vec.u32[2] == 3);
  assert(vec.u32[3] == 4);
}
