#include "../include/simd.h"
#include "platform.h"

#if defined(SIMD_ARCH_ARM)
#include <arm_neon.h>
#endif

simd_v128_t
simd_ctz_v128_u8 (simd_v128_t vec) {
#if defined(SIMD_ARCH_ARM)
  vec.u8 = vclzq_u8(vrbitq_u8(vec.u8));
#endif

  return vec;
}

simd_v128_t
simd_ctz_v128_u16 (simd_v128_t vec) {
#if defined(SIMD_ARCH_ARM)
  vec.u16 = vclzq_u16(vrbitq_u8(vec.u8));
#endif

  return vec;
}

simd_v128_t
simd_ctz_v128_u32 (simd_v128_t vec) {
#if defined(SIMD_ARCH_ARM)
  vec.u32 = vclzq_u32(vrbitq_u8(vec.u8));
#endif

  return vec;
}
