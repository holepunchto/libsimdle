#ifndef SIMD_VEC_H
#define SIMD_VEC_H

#include <stdint.h>

typedef int8_t simd_s8x16_t __attribute__((vector_size(16), __aligned__(16)));
typedef int16_t simd_s16x8_t __attribute__((vector_size(16), __aligned__(16)));
typedef int32_t simd_s32x4_t __attribute__((vector_size(16), __aligned__(16)));
typedef int64_t simd_s64x2_t __attribute__((vector_size(16), __aligned__(16)));

typedef uint8_t simd_u8x16_t __attribute__((vector_size(16), __aligned__(16)));
typedef uint16_t simd_u16x8_t __attribute__((vector_size(16), __aligned__(16)));
typedef uint32_t simd_u32x4_t __attribute__((vector_size(16), __aligned__(16)));
typedef uint64_t simd_u64x2_t __attribute__((vector_size(16), __aligned__(16)));

typedef union simd_v128_u simd_v128_t;

union simd_v128_u {
  simd_s8x16_t s8;
  simd_s16x8_t s16;
  simd_s32x4_t s32;
  simd_s64x2_t s64;

  simd_u8x16_t u8;
  simd_u16x8_t u16;
  simd_u32x4_t u32;
  simd_u64x2_t u64;
};

#endif // SIMD_VEC_H
