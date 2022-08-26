#include "../include/simd.h"
#include "platform.h"

#if defined(SIMD_ARCH_ARM)
#include <arm_neon.h>
#endif

simd_v128_t
simd_cto_v128_u8 (simd_v128_t vec) {
#if defined(SIMD_ARCH_ARM)
  vec.u8 = vclzq_u8(vmvnq_u8(vrbitq_u8(vec.u8)));
#else
  vec = simd_clo_v128_u8(simd_not_v128_u8(vec));
#endif

  return vec;
}

simd_v128_t
simd_cto_v128_u16 (simd_v128_t vec) {
#if defined(SIMD_ARCH_ARM)
  vec.u16 = vclzq_u16(vmvnq_u16(vrbitq_u8(vec.u8)));
#else
  vec = simd_clo_v128_u16(simd_not_v128_u16(vec));
#endif

  return vec;
}

simd_v128_t
simd_cto_v128_u32 (simd_v128_t vec) {
#if defined(SIMD_ARCH_ARM)
  vec.u32 = vclzq_u32(vmvnq_u32(vrbitq_u8(vec.u8)));
#else
  vec = simd_clo_v128_u32(simd_not_v128_u32(vec));
#endif

  return vec;
}
