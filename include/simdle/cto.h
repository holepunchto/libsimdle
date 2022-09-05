#ifndef SIMDLE_CTO_H
#define SIMDLE_CTO_H

#include "arch.h"
#include "clo.h"
#include "not.h"
#include "vec.h"

// Count trailing ones (cto)

inline simdle_v128_t
simdle_cto_v128_u8 (simdle_v128_t vec) {
#if defined(SIMDLE_ARCH_ARM_NEON)
  vec.u8 = vclzq_u8(vmvnq_u8(vrbitq_u8(vec.u8)));
#else
  vec = simdle_clo_v128_u8(simdle_not_v128_u8(vec));
#endif

  return vec;
}

inline simdle_v128_t
simdle_cto_v128_u16 (simdle_v128_t vec) {
#if defined(SIMDLE_ARCH_ARM_NEON)
  vec.u16 = vclzq_u16(vrev16q_u8(vmvnq_u16(vrbitq_u8(vec.u8))));
#else
  vec = simdle_clo_v128_u16(simdle_not_v128_u16(vec));
#endif

  return vec;
}

inline simdle_v128_t
simdle_cto_v128_u32 (simdle_v128_t vec) {
#if defined(SIMDLE_ARCH_ARM_NEON)
  vec.u32 = vclzq_u32(vrev32q_u8(vmvnq_u32(vrbitq_u8(vec.u8))));
#else
  vec = simdle_clo_v128_u32(simdle_not_v128_u32(vec));
#endif

  return vec;
}

#endif // SIMDLE_CTO_H