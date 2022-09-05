#ifndef SIMDLE_VEC_H
#define SIMDLE_VEC_H

#include <stdint.h>

typedef int8_t simdle_s8x16_t __attribute__((vector_size(16), __aligned__(16)));
typedef int16_t simdle_s16x8_t __attribute__((vector_size(16), __aligned__(16)));
typedef int32_t simdle_s32x4_t __attribute__((vector_size(16), __aligned__(16)));
typedef int64_t simdle_s64x2_t __attribute__((vector_size(16), __aligned__(16)));

typedef uint8_t simdle_u8x16_t __attribute__((vector_size(16), __aligned__(16)));
typedef uint16_t simdle_u16x8_t __attribute__((vector_size(16), __aligned__(16)));
typedef uint32_t simdle_u32x4_t __attribute__((vector_size(16), __aligned__(16)));
typedef uint64_t simdle_u64x2_t __attribute__((vector_size(16), __aligned__(16)));

typedef union simdle_v128_u simdle_v128_t;

union simdle_v128_u {
  simdle_s8x16_t s8;
  simdle_s16x8_t s16;
  simdle_s32x4_t s32;
  simdle_s64x2_t s64;

  simdle_u8x16_t u8;
  simdle_u16x8_t u16;
  simdle_u32x4_t u32;
  simdle_u64x2_t u64;
};

#endif // SIMDLE_VEC_H
