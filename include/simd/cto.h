#ifndef SIMD_CTO_H
#define SIMD_CTO_H

#include "arch.h"
#include "clo.h"
#include "not.h"
#include "vec.h"

// Count trailing ones (cto)

inline simd_v128_t
simd_cto_v128_u8 (simd_v128_t vec) {
#if defined(SIMD_ARCH_ARM_NEON)
  vec.u8 = vclzq_u8(vmvnq_u8(vrbitq_u8(vec.u8)));
#else
  vec = simd_clo_v128_u8(simd_not_v128_u8(vec));
#endif

  return vec;
}

inline simd_v128_t
simd_cto_v128_u16 (simd_v128_t vec) {
#if defined(SIMD_ARCH_ARM_NEON)
  vec.u16 = vclzq_u16(vrev16q_u8(vmvnq_u16(vrbitq_u8(vec.u8))));
#else
  vec = simd_clo_v128_u16(simd_not_v128_u16(vec));
#endif

  return vec;
}

inline simd_v128_t
simd_cto_v128_u32 (simd_v128_t vec) {
#if defined(SIMD_ARCH_ARM_NEON)
  vec.u32 = vclzq_u32(vrev32q_u8(vmvnq_u32(vrbitq_u8(vec.u8))));
#else
  vec = simd_clo_v128_u32(simd_not_v128_u32(vec));
#endif

  return vec;
}

#endif // SIMD_CTO_H
