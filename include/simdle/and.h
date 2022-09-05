#ifndef SIMDLE_AND_H
#define SIMDLE_AND_H

#include "arch.h"
#include "vec.h"

// Bitwise AND

inline simdle_v128_t
simdle_and_v128_u8 (simdle_v128_t a, simdle_v128_t b) {
  simdle_v128_t vec;

#if defined(SIMDLE_ARCH_ARM_NEON)
  vec.u8 = vandq_u8(a.u8, b.u8);
#elif defined(SIMDLE_ARCH_INTEL_SSE2)
  vec.__intel = _mm_and_si128(a.__intel, b.__intel);
#else
  vec.u8 = a.u8 & b.u8;
#endif

  return vec;
}

inline simdle_v128_t
simdle_and_v128_u16 (simdle_v128_t a, simdle_v128_t b) {
  simdle_v128_t vec;

#if defined(SIMDLE_ARCH_ARM_NEON)
  vec.u16 = vandq_u16(a.u16, b.u16);
#elif defined(SIMDLE_ARCH_INTEL_SSE2)
  vec.__intel = _mm_and_si128(a.__intel, b.__intel);
#else
  vec.u16 = a.u16 & b.u16;
#endif

  return vec;
}

inline simdle_v128_t
simdle_and_v128_u32 (simdle_v128_t a, simdle_v128_t b) {
  simdle_v128_t vec;

#if defined(SIMDLE_ARCH_ARM_NEON)
  vec.u32 = vandq_u32(a.u32, b.u32);
#elif defined(SIMDLE_ARCH_INTEL_SSE2)
  vec.__intel = _mm_and_si128(a.__intel, b.__intel);
#else
  vec.u32 = a.u32 & b.u32;
#endif

  return vec;
}

#endif // SIMDLE_AND_H
