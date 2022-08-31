#include "../include/simd.h"

extern simd_v128_t
simd_and_v128_u8 (simd_v128_t a, simd_v128_t b);

extern simd_v128_t
simd_and_v128_u16 (simd_v128_t a, simd_v128_t b);

extern simd_v128_t
simd_and_v128_u32 (simd_v128_t a, simd_v128_t b);

extern simd_v128_t
simd_clear_v128_u8 (simd_v128_t a, simd_v128_t b);

extern simd_v128_t
simd_clear_v128_u16 (simd_v128_t a, simd_v128_t b);

extern simd_v128_t
simd_clear_v128_u32 (simd_v128_t a, simd_v128_t b);

extern simd_v128_t
simd_clo_v128_u8 (simd_v128_t vec);

extern simd_v128_t
simd_clo_v128_u16 (simd_v128_t vec);

extern simd_v128_t
simd_clo_v128_u32 (simd_v128_t vec);

extern simd_v128_t
simd_clz_v128_u8 (simd_v128_t vec);

extern simd_v128_t
simd_clz_v128_u16 (simd_v128_t vec);

extern simd_v128_t
simd_clz_v128_u32 (simd_v128_t vec);

extern simd_v128_t
simd_cnt_v128_u8 (simd_v128_t vec);

extern simd_v128_t
simd_cnt_v128_u16 (simd_v128_t vec);

extern simd_v128_t
simd_cnt_v128_u32 (simd_v128_t vec);

extern simd_v128_t
simd_cto_v128_u8 (simd_v128_t vec);

extern simd_v128_t
simd_cto_v128_u16 (simd_v128_t vec);

extern simd_v128_t
simd_cto_v128_u32 (simd_v128_t vec);

extern simd_v128_t
simd_ctz_v128_u8 (simd_v128_t vec);

extern simd_v128_t
simd_ctz_v128_u16 (simd_v128_t vec);

extern simd_v128_t
simd_ctz_v128_u32 (simd_v128_t vec);

extern simd_v128_t
simd_load_v128_u8 (const uint8_t arr[]);

extern simd_v128_t
simd_load_v128_u16 (const uint16_t arr[]);

extern simd_v128_t
simd_load_v128_u32 (const uint32_t arr[]);

extern simd_v128_t
simd_not_v128_u8 (simd_v128_t vec);

extern simd_v128_t
simd_not_v128_u16 (simd_v128_t vec);

extern simd_v128_t
simd_not_v128_u32 (simd_v128_t vec);

extern simd_v128_t
simd_or_v128_u8 (simd_v128_t a, simd_v128_t b);

extern simd_v128_t
simd_or_v128_u16 (simd_v128_t a, simd_v128_t b);

extern simd_v128_t
simd_or_v128_u32 (simd_v128_t a, simd_v128_t b);

extern uint16_t
simd_sum_v128_u8 (simd_v128_t vec);

extern uint32_t
simd_sum_v128_u16 (simd_v128_t vec);

extern uint64_t
simd_sum_v128_u32 (simd_v128_t vec);

extern simd_v128_t
simd_xor_v128_u8 (simd_v128_t a, simd_v128_t b);

extern simd_v128_t
simd_xor_v128_u16 (simd_v128_t a, simd_v128_t b);

extern simd_v128_t
simd_xor_v128_u32 (simd_v128_t a, simd_v128_t b);
