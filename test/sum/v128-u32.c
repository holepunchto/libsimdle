#include <assert.h>

#include "../../include/simd.h"

int
main () {
  simd_v128_t v = {
    .u32 = {1, 2, 3, 4},
  };

  uint64_t r = simd_sum_v128_u32(v);

  assert(r == 10);
}
