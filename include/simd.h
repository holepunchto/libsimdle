#ifndef SIMD_H
#define SIMD_H

#ifdef __cplusplus
extern "C" {
#endif

#include "simd/common.h"
#include "simd/load.h"

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
