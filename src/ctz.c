#include "../include/simd.h"
#include "platform.h"

#if defined(SIMD_ARCH_ARM)
#include <arm_neon.h>
#endif

simd_v128_t
simd_ctz_v128_u8 (simd_v128_t vec) {
#if defined(SIMD_ARCH_ARM)
  vec.u8 = vclzq_u8(vrbitq_u8(vec.u8));
#else
  for (int i = 0; i < 16; i++) {
    uint8_t x = vec.u8[i];
    uint8_t r;
    uint8_t q;

    if (x == 0) {
      vec.u8[i] = 8;
    } else {
      x &= -x;
      r = (x > 0xf) << 2;
      x >>= r;
      q = (x > 0x3) << 1;
      x >>= q;
      r |= q;
      r |= (x >> 1);

      vec.u8[i] = r;
    }
  }
#endif

  return vec;
}

simd_v128_t
simd_ctz_v128_u16 (simd_v128_t vec) {
#if defined(SIMD_ARCH_ARM)
  vec.u16 = vclzq_u16(vrbitq_u8(vec.u8));
#else
  for (int i = 0; i < 8; i++) {
    uint16_t x = vec.u16[i];
    uint16_t r;
    uint16_t q;

    if (x == 0) {
      vec.u16[i] = 16;
    } else {
      x &= -x;
      r = (x > 0xff) << 3;
      x >>= r;
      q = (x > 0xf) << 2;
      x >>= q;
      r |= q;
      q = (x > 0x3) << 1;
      x >>= q;
      r |= q;
      r |= (x >> 1);

      vec.u16[i] = r;
    }
  }
#endif

  return vec;
}

simd_v128_t
simd_ctz_v128_u32 (simd_v128_t vec) {
#if defined(SIMD_ARCH_ARM)
  vec.u32 = vclzq_u32(vrbitq_u8(vec.u8));
#else
  for (int i = 0; i < 4; i++) {
    uint32_t x = vec.u32[i];
    uint32_t r;
    uint32_t q;

    if (x == 0) {
      vec.u32[i] = 32;
    } else {
      x &= -x;
      r = (x > 0xffff) << 4;
      x >>= r;
      q = (x > 0xff) << 3;
      x >>= q;
      r |= q;
      q = (x > 0xf) << 2;
      x >>= q;
      r |= q;
      q = (x > 0x3) << 1;
      x >>= q;
      r |= q;
      r |= (x >> 1);

      vec.u32[i] = r;
    }
  }
#endif

  return vec;
}
