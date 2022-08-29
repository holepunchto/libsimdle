#ifndef SIMD_H
#define SIMD_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>

typedef uint8_t simd_u8x16_t __attribute__((vector_size(16)));
typedef uint16_t simd_u16x8_t __attribute__((vector_size(16)));
typedef uint32_t simd_u32x4_t __attribute__((vector_size(16)));
typedef uint64_t simd_u64x2_t __attribute__((vector_size(16)));

typedef union simd_v128_u simd_v128_t;

union simd_v128_u {
  simd_u8x16_t u8;
  simd_u16x8_t u16;
  simd_u32x4_t u32;
  simd_u64x2_t u64;
};

simd_v128_t
simd_load_v128_u8 (const uint8_t arr[]);

simd_v128_t
simd_load_v128_u16 (const uint16_t arr[]);

simd_v128_t
simd_load_v128_u32 (const uint32_t arr[]);

// Population count (cnt)

simd_v128_t
simd_cnt_v128_u8 (simd_v128_t vec);

simd_v128_t
simd_cnt_v128_u16 (simd_v128_t vec);

simd_v128_t
simd_cnt_v128_u32 (simd_v128_t vec);

// Count leading zeroes (clz)

simd_v128_t
simd_clz_v128_u8 (simd_v128_t vec);

simd_v128_t
simd_clz_v128_u16 (simd_v128_t vec);

simd_v128_t
simd_clz_v128_u32 (simd_v128_t vec);

// Count leading ones (clo)

simd_v128_t
simd_clo_v128_u8 (simd_v128_t vec);

simd_v128_t
simd_clo_v128_u16 (simd_v128_t vec);

simd_v128_t
simd_clo_v128_u32 (simd_v128_t vec);

// Count trailing zeroes (ctz)

simd_v128_t
simd_ctz_v128_u8 (simd_v128_t vec);

simd_v128_t
simd_ctz_v128_u16 (simd_v128_t vec);

simd_v128_t
simd_ctz_v128_u32 (simd_v128_t vec);

// Count trailing ones (cto)

simd_v128_t
simd_cto_v128_u8 (simd_v128_t vec);

simd_v128_t
simd_cto_v128_u16 (simd_v128_t vec);

simd_v128_t
simd_cto_v128_u32 (simd_v128_t vec);

// Bitwise not

simd_v128_t
simd_not_v128_u8 (simd_v128_t vec);

simd_v128_t
simd_not_v128_u16 (simd_v128_t vec);

simd_v128_t
simd_not_v128_u32 (simd_v128_t vec);

#ifdef __cplusplus
}
#endif
#endif // SIMD_H
