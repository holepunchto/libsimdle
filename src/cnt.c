#include "../include/simd.h"
#include "platform.h"

#ifdef SIMD_ARCH_ARM
#include <arm_neon.h>
#endif

simd_v128_t
simd_cnt_v128_u8 (simd_v128_t vec) {
#ifdef SIMD_ARCH_ARM
  vec.u8 = vcntq_u8(vec.u8);
#endif

  return vec;
}

simd_v128_t
simd_cnt_v128_u16 (simd_v128_t vec) {
#ifdef SIMD_ARCH_ARM
  vec.u16 = vpaddlq_u8(vcntq_u8(vec.u8));
#endif

  return vec;
}

simd_v128_t
simd_cnt_v128_u32 (simd_v128_t vec) {
#ifdef SIMD_ARCH_ARM
  vec.u32 = vpaddlq_u16(vpaddlq_u8(vcntq_u8(vec.u8)));
#endif

  return vec;
}
