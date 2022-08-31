#ifndef SIMD_CLEAR_H
#define SIMD_CLEAR_H

#include "arch.h"
#include "vec.h"

// Bitwise clear (a & ~b)

inline simd_v128_t
simd_clear_v128_u8 (simd_v128_t a, simd_v128_t b) {
  simd_v128_t vec;

#if defined(SIMD_ARCH_ARM_NEON)
  vec.u8 = vbicq_u8(a.u8, b.u8);
#else
  vec.u8 = a.u8 & ~b.u8;
#endif

  return vec;
}

inline simd_v128_t
simd_clear_v128_u16 (simd_v128_t a, simd_v128_t b) {
  simd_v128_t vec;

#if defined(SIMD_ARCH_ARM_NEON)
  vec.u16 = vbicq_u16(a.u16, b.u16);
#else
  vec.u16 = a.u16 & ~b.u16;
#endif

  return vec;
}

inline simd_v128_t
simd_clear_v128_u32 (simd_v128_t a, simd_v128_t b) {
  simd_v128_t vec;

#if defined(SIMD_ARCH_ARM_NEON)
  vec.u32 = vbicq_u32(a.u32, b.u32);
#else
  vec.u32 = a.u32 & ~b.u32;
#endif

  return vec;
}

#endif // SIMD_CLEAR_H
