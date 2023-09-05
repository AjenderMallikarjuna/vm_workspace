/* Generated automatically by the program `genconditions' from the target
   machine description file.  */

#define IN_TARGET_CODE 1
#include "bconfig.h"
#define INCLUDE_STRING
#include "system.h"

/* It is necessary, but not entirely safe, to include the headers below
   in a generator program.  As a defensive measure, don't do so when the
   table isn't going to have anything in it.  */
#if GCC_VERSION >= 3001

/* Do not allow checking to confuse the issue.  */
#undef CHECKING_P
#define CHECKING_P 0
#undef ENABLE_TREE_CHECKING
#undef ENABLE_RTL_CHECKING
#undef ENABLE_RTL_FLAG_CHECKING
#undef ENABLE_GC_CHECKING
#undef ENABLE_GC_ALWAYS_COLLECT
#define USE_ENUM_MODES

#include "coretypes.h"
#include "tm.h"
#include "insn-constants.h"
#include "rtl.h"
#include "memmodel.h"
#include "tm_p.h"
#include "hard-reg-set.h"
#include "function.h"
#include "emit-rtl.h"

/* Fake - insn-config.h doesn't exist yet.  */
#define MAX_RECOG_OPERANDS 10
#define MAX_DUP_OPERANDS 10
#define MAX_INSNS_PER_SPLIT 5

#include "regs.h"
#include "recog.h"
#include "output.h"
#include "flags.h"
#include "hard-reg-set.h"
#include "predict.h"
#include "basic-block.h"
#include "bitmap.h"
#include "df.h"
#include "resource.h"
#include "diagnostic-core.h"
#include "reload.h"
#include "tm-constrs.h"

#define HAVE_eh_return 1
#include "except.h"

/* Dummy external declarations.  */
extern rtx_insn *insn;
extern rtx ins1;
extern rtx operands[];

#endif /* gcc >= 3.0.1 */

/* Structure definition duplicated from gensupport.h rather than
   drag in that file and its dependencies.  */
struct c_test
{
  const char *expr;
  int value;
};

/* This table lists each condition found in the machine description.
   Each condition is mapped to its truth value (0 or 1), or -1 if that
   cannot be calculated at compile time.
   If we don't have __builtin_constant_p, or it's not acceptable in array
   initializers, fall back to assuming that all conditions potentially
   vary at run time.  It works in 3.0.1 and later; 3.0 only when not
   optimizing.  */

#if GCC_VERSION >= 3001
static const struct c_test insn_conditions[] = {

#line 1140 "../../gcc/config/arm/thumb2.md"
  { "TARGET_THUMB2 && !flag_pic",
    __builtin_constant_p 
#line 1140 "../../gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && !flag_pic)
    ? (int) 
#line 1140 "../../gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && !flag_pic)
    : -1 },
#line 1625 "../../gcc/config/arm/thumb1.md"
  { "TARGET_THUMB1\n\
   && (GET_CODE (operands[3]) == EQ\n\
       || GET_CODE (operands[3]) == NE\n\
       || GET_CODE (operands[3]) == GE\n\
       || GET_CODE (operands[3]) == LT)",
    __builtin_constant_p 
#line 1625 "../../gcc/config/arm/thumb1.md"
(TARGET_THUMB1
   && (GET_CODE (operands[3]) == EQ
       || GET_CODE (operands[3]) == NE
       || GET_CODE (operands[3]) == GE
       || GET_CODE (operands[3]) == LT))
    ? (int) 
#line 1625 "../../gcc/config/arm/thumb1.md"
(TARGET_THUMB1
   && (GET_CODE (operands[3]) == EQ
       || GET_CODE (operands[3]) == NE
       || GET_CODE (operands[3]) == GE
       || GET_CODE (operands[3]) == LT))
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_THUMB2 && TARGET_HAVE_FPCXT_CMSE && use_cmse && reload_completed)",
    __builtin_constant_p (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 1677 "../../gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && TARGET_HAVE_FPCXT_CMSE && use_cmse && reload_completed))
    ? (int) (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 1677 "../../gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && TARGET_HAVE_FPCXT_CMSE && use_cmse && reload_completed))
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_HAVE_FPCXT_CMSE && use_cmse && reload_completed)",
    __builtin_constant_p (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 1678 "../../gcc/config/arm/vfp.md"
(TARGET_HAVE_FPCXT_CMSE && use_cmse && reload_completed))
    ? (int) (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 1678 "../../gcc/config/arm/vfp.md"
(TARGET_HAVE_FPCXT_CMSE && use_cmse && reload_completed))
    : -1 },
#line 6242 "../../gcc/config/arm/arm.md"
  { "TARGET_32BIT\n\
   && !(TARGET_HARD_FLOAT)\n\
   && !(TARGET_HAVE_MVE || TARGET_HAVE_MVE_FLOAT)\n\
   && !TARGET_IWMMXT\n\
   && (   register_operand (operands[0], DImode)\n\
       || register_operand (operands[1], DImode))",
    __builtin_constant_p 
#line 6242 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && !(TARGET_HARD_FLOAT)
   && !(TARGET_HAVE_MVE || TARGET_HAVE_MVE_FLOAT)
   && !TARGET_IWMMXT
   && (   register_operand (operands[0], DImode)
       || register_operand (operands[1], DImode)))
    ? (int) 
#line 6242 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && !(TARGET_HARD_FLOAT)
   && !(TARGET_HAVE_MVE || TARGET_HAVE_MVE_FLOAT)
   && !TARGET_IWMMXT
   && (   register_operand (operands[0], DImode)
       || register_operand (operands[1], DImode)))
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_ARM && !TARGET_IWMMXT && !TARGET_HARD_FLOAT\n\
   && (   register_operand (operands[0], SImode)\n\
       || register_operand (operands[1], SImode)))",
    __builtin_constant_p (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 6454 "../../gcc/config/arm/arm.md"
(TARGET_ARM && !TARGET_IWMMXT && !TARGET_HARD_FLOAT
   && (   register_operand (operands[0], SImode)
       || register_operand (operands[1], SImode))))
    ? (int) (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 6454 "../../gcc/config/arm/arm.md"
(TARGET_ARM && !TARGET_IWMMXT && !TARGET_HARD_FLOAT
   && (   register_operand (operands[0], SImode)
       || register_operand (operands[1], SImode))))
    : -1 },
#line 12544 "../../gcc/config/arm/arm.md"
  { "TARGET_CRC32",
    __builtin_constant_p 
#line 12544 "../../gcc/config/arm/arm.md"
(TARGET_CRC32)
    ? (int) 
#line 12544 "../../gcc/config/arm/arm.md"
(TARGET_CRC32)
    : -1 },
#line 214 "../../gcc/config/arm/vec-common.md"
  { "ARM_HAVE_V4HF_ARITH && !TARGET_REALLY_IWMMXT",
    __builtin_constant_p 
#line 214 "../../gcc/config/arm/vec-common.md"
(ARM_HAVE_V4HF_ARITH && !TARGET_REALLY_IWMMXT)
    ? (int) 
#line 214 "../../gcc/config/arm/vec-common.md"
(ARM_HAVE_V4HF_ARITH && !TARGET_REALLY_IWMMXT)
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (arm_arch_thumb2\n\
   && IN_RANGE (INTVAL (operands[3]), 0, 31)\n\
   && IN_RANGE (INTVAL (operands[2]), 1, 32 - INTVAL (operands[3])))",
    __builtin_constant_p (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 5015 "../../gcc/config/arm/arm.md"
(arm_arch_thumb2
   && IN_RANGE (INTVAL (operands[3]), 0, 31)
   && IN_RANGE (INTVAL (operands[2]), 1, 32 - INTVAL (operands[3]))))
    ? (int) (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 5015 "../../gcc/config/arm/arm.md"
(arm_arch_thumb2
   && IN_RANGE (INTVAL (operands[3]), 0, 31)
   && IN_RANGE (INTVAL (operands[2]), 1, 32 - INTVAL (operands[3]))))
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_THUMB2 && TARGET_VFP_BASE\n\
   && (   s_register_operand (operands[0], SImode)\n\
       || s_register_operand (operands[1], SImode)))",
    __builtin_constant_p (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 273 "../../gcc/config/arm/vfp.md"
(TARGET_THUMB2 && TARGET_VFP_BASE
   && (   s_register_operand (operands[0], SImode)
       || s_register_operand (operands[1], SImode))))
    ? (int) (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 273 "../../gcc/config/arm/vfp.md"
(TARGET_THUMB2 && TARGET_VFP_BASE
   && (   s_register_operand (operands[0], SImode)
       || s_register_operand (operands[1], SImode))))
    : -1 },
#line 1162 "../../gcc/config/arm/arm.md"
  { "TARGET_32BIT\n\
   && (INTVAL (operands[2])\n\
       == trunc_int_for_mode (-INTVAL (operands[3]), SImode))",
    __builtin_constant_p 
#line 1162 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (INTVAL (operands[2])
       == trunc_int_for_mode (-INTVAL (operands[3]), SImode)))
    ? (int) 
#line 1162 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (INTVAL (operands[2])
       == trunc_int_for_mode (-INTVAL (operands[3]), SImode)))
    : -1 },
#line 6441 "../../gcc/config/arm/arm.md"
  { "TARGET_HAVE_MOVT && arm_valid_symbolic_address_p (operands[2])",
    __builtin_constant_p 
#line 6441 "../../gcc/config/arm/arm.md"
(TARGET_HAVE_MOVT && arm_valid_symbolic_address_p (operands[2]))
    ? (int) 
#line 6441 "../../gcc/config/arm/arm.md"
(TARGET_HAVE_MOVT && arm_valid_symbolic_address_p (operands[2]))
    : -1 },
#line 2395 "../../gcc/config/arm/arm.md"
  { "TARGET_ARM && arm_arch6 && optimize_size",
    __builtin_constant_p 
#line 2395 "../../gcc/config/arm/arm.md"
(TARGET_ARM && arm_arch6 && optimize_size)
    ? (int) 
#line 2395 "../../gcc/config/arm/arm.md"
(TARGET_ARM && arm_arch6 && optimize_size)
    : -1 },
#line 273 "../../gcc/config/arm/vfp.md"
  { "TARGET_THUMB2 && TARGET_VFP_BASE\n\
   && (   s_register_operand (operands[0], SImode)\n\
       || s_register_operand (operands[1], SImode))",
    __builtin_constant_p 
#line 273 "../../gcc/config/arm/vfp.md"
(TARGET_THUMB2 && TARGET_VFP_BASE
   && (   s_register_operand (operands[0], SImode)
       || s_register_operand (operands[1], SImode)))
    ? (int) 
#line 273 "../../gcc/config/arm/vfp.md"
(TARGET_THUMB2 && TARGET_VFP_BASE
   && (   s_register_operand (operands[0], SImode)
       || s_register_operand (operands[1], SImode)))
    : -1 },
#line 4348 "../../gcc/config/arm/arm.md"
  { "TARGET_ARM_QBIT",
    __builtin_constant_p 
#line 4348 "../../gcc/config/arm/arm.md"
(TARGET_ARM_QBIT)
    ? (int) 
#line 4348 "../../gcc/config/arm/arm.md"
(TARGET_ARM_QBIT)
    : -1 },
#line 202 "../../gcc/config/arm/vec-common.md"
  { "ARM_HAVE_V2DI_ARITH",
    __builtin_constant_p 
#line 202 "../../gcc/config/arm/vec-common.md"
(ARM_HAVE_V2DI_ARITH)
    ? (int) 
#line 202 "../../gcc/config/arm/vec-common.md"
(ARM_HAVE_V2DI_ARITH)
    : -1 },
#line 100 "../../gcc/config/arm/thumb2.md"
  { "TARGET_THUMB2 && reload_completed",
    __builtin_constant_p 
#line 100 "../../gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && reload_completed)
    ? (int) 
#line 100 "../../gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && reload_completed)
    : -1 },
#line 2512 "../../gcc/config/arm/neon.md"
  { "TARGET_NEON && flag_unsafe_math_optimizations",
    __builtin_constant_p 
#line 2512 "../../gcc/config/arm/neon.md"
(TARGET_NEON && flag_unsafe_math_optimizations)
    ? (int) 
#line 2512 "../../gcc/config/arm/neon.md"
(TARGET_NEON && flag_unsafe_math_optimizations)
    : -1 },
#line 12740 "../../gcc/config/arm/arm.md"
  { "arm_coproc_builtin_available (VUNSPEC_MRC)",
    __builtin_constant_p 
#line 12740 "../../gcc/config/arm/arm.md"
(arm_coproc_builtin_available (VUNSPEC_MRC))
    ? (int) 
#line 12740 "../../gcc/config/arm/arm.md"
(arm_coproc_builtin_available (VUNSPEC_MRC))
    : -1 },
#line 41 "../../gcc/config/arm/neon.md"
  { "TARGET_NEON\n\
   && (register_operand (operands[0], V4HFmode)\n\
       || register_operand (operands[1], V4HFmode))",
    __builtin_constant_p 
#line 41 "../../gcc/config/arm/neon.md"
(TARGET_NEON
   && (register_operand (operands[0], V4HFmode)
       || register_operand (operands[1], V4HFmode)))
    ? (int) 
#line 41 "../../gcc/config/arm/neon.md"
(TARGET_NEON
   && (register_operand (operands[0], V4HFmode)
       || register_operand (operands[1], V4HFmode)))
    : -1 },
#line 6711 "../../gcc/config/arm/arm.md"
  { "flag_pic",
    __builtin_constant_p 
#line 6711 "../../gcc/config/arm/arm.md"
(flag_pic)
    ? (int) 
#line 6711 "../../gcc/config/arm/arm.md"
(flag_pic)
    : -1 },
#line 7555 "../../gcc/config/arm/arm.md"
  { "arm_disable_literal_pool && TARGET_SOFT_FLOAT",
    __builtin_constant_p 
#line 7555 "../../gcc/config/arm/arm.md"
(arm_disable_literal_pool && TARGET_SOFT_FLOAT)
    ? (int) 
#line 7555 "../../gcc/config/arm/arm.md"
(arm_disable_literal_pool && TARGET_SOFT_FLOAT)
    : -1 },
#line 1806 "../../gcc/config/arm/thumb1.md"
  { "TARGET_THUMB1 && arm_arch5t && !SIBLING_CALL_P (insn)",
    __builtin_constant_p 
#line 1806 "../../gcc/config/arm/thumb1.md"
(TARGET_THUMB1 && arm_arch5t && !SIBLING_CALL_P (insn))
    ? (int) 
#line 1806 "../../gcc/config/arm/thumb1.md"
(TARGET_THUMB1 && arm_arch5t && !SIBLING_CALL_P (insn))
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_HARD_TP)",
    __builtin_constant_p (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 12130 "../../gcc/config/arm/arm.md"
(TARGET_HARD_TP))
    ? (int) (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 12130 "../../gcc/config/arm/arm.md"
(TARGET_HARD_TP))
    : -1 },
#line 12067 "../../gcc/config/arm/arm.md"
  { "TARGET_32BIT && arm_arch5te",
    __builtin_constant_p 
#line 12067 "../../gcc/config/arm/arm.md"
(TARGET_32BIT && arm_arch5te)
    ? (int) 
#line 12067 "../../gcc/config/arm/arm.md"
(TARGET_32BIT && arm_arch5te)
    : -1 },
#line 12170 "../../gcc/config/arm/arm.md"
  { "TARGET_GNU2_TLS",
    __builtin_constant_p 
#line 12170 "../../gcc/config/arm/arm.md"
(TARGET_GNU2_TLS)
    ? (int) 
#line 12170 "../../gcc/config/arm/arm.md"
(TARGET_GNU2_TLS)
    : -1 },
#line 1665 "../../gcc/config/arm/thumb2.md"
  { "TARGET_THUMB2 && TARGET_HAVE_FPCXT_CMSE && use_cmse",
    __builtin_constant_p 
#line 1665 "../../gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && TARGET_HAVE_FPCXT_CMSE && use_cmse)
    ? (int) 
#line 1665 "../../gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && TARGET_HAVE_FPCXT_CMSE && use_cmse)
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_32BIT && reload_completed)",
    __builtin_constant_p (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 12566 "../../gcc/config/arm/arm.md"
(TARGET_32BIT && reload_completed))
    ? (int) (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 12566 "../../gcc/config/arm/arm.md"
(TARGET_32BIT && reload_completed))
    : -1 },
#line 397 "../../gcc/config/arm/vfp.md"
  { "TARGET_32BIT\n\
   && (TARGET_VFP_FP16INST || TARGET_HAVE_MVE)\n\
   && (s_register_operand (operands[0], HFmode)\n\
       || s_register_operand (operands[1], HFmode))",
    __builtin_constant_p 
#line 397 "../../gcc/config/arm/vfp.md"
(TARGET_32BIT
   && (TARGET_VFP_FP16INST || TARGET_HAVE_MVE)
   && (s_register_operand (operands[0], HFmode)
       || s_register_operand (operands[1], HFmode)))
    ? (int) 
#line 397 "../../gcc/config/arm/vfp.md"
(TARGET_32BIT
   && (TARGET_VFP_FP16INST || TARGET_HAVE_MVE)
   && (s_register_operand (operands[0], HFmode)
       || s_register_operand (operands[1], HFmode)))
    : -1 },
#line 534 "../../gcc/config/arm/vfp.md"
  { "TARGET_32BIT\n\
   && TARGET_HARD_FLOAT\n\
   && !TARGET_NEON_FP16\n\
   && !TARGET_VFP_FP16INST\n\
   && (   s_register_operand (operands[0], BFmode)\n\
       || s_register_operand (operands[1], BFmode))",
    __builtin_constant_p 
#line 534 "../../gcc/config/arm/vfp.md"
(TARGET_32BIT
   && TARGET_HARD_FLOAT
   && !TARGET_NEON_FP16
   && !TARGET_VFP_FP16INST
   && (   s_register_operand (operands[0], BFmode)
       || s_register_operand (operands[1], BFmode)))
    ? (int) 
#line 534 "../../gcc/config/arm/vfp.md"
(TARGET_32BIT
   && TARGET_HARD_FLOAT
   && !TARGET_NEON_FP16
   && !TARGET_VFP_FP16INST
   && (   s_register_operand (operands[0], BFmode)
       || s_register_operand (operands[1], BFmode)))
    : -1 },
#line 407 "../../gcc/config/arm/arm-fixed.md"
  { "TARGET_DSP_MULTIPLY",
    __builtin_constant_p 
#line 407 "../../gcc/config/arm/arm-fixed.md"
(TARGET_DSP_MULTIPLY)
    ? (int) 
#line 407 "../../gcc/config/arm/arm-fixed.md"
(TARGET_DSP_MULTIPLY)
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_HAVE_MVE)",
    __builtin_constant_p (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 10653 "../../gcc/config/arm/mve.md"
(TARGET_HAVE_MVE))
    ? (int) (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 10653 "../../gcc/config/arm/mve.md"
(TARGET_HAVE_MVE))
    : -1 },
#line 12711 "../../gcc/config/arm/arm.md"
  { "arm_coproc_builtin_available (VUNSPEC_STC2L)",
    __builtin_constant_p 
#line 12711 "../../gcc/config/arm/arm.md"
(arm_coproc_builtin_available (VUNSPEC_STC2L))
    ? (int) 
#line 12711 "../../gcc/config/arm/arm.md"
(arm_coproc_builtin_available (VUNSPEC_STC2L))
    : -1 },
#line 610 "../../gcc/config/arm/neon.md"
  { "ARM_HAVE_NEON_V4HF_ARITH",
    __builtin_constant_p 
#line 610 "../../gcc/config/arm/neon.md"
(ARM_HAVE_NEON_V4HF_ARITH)
    ? (int) 
#line 610 "../../gcc/config/arm/neon.md"
(ARM_HAVE_NEON_V4HF_ARITH)
    : -1 },
#line 12662 "../../gcc/config/arm/arm.md"
  { "arm_coproc_builtin_available (VUNSPEC_CDP)",
    __builtin_constant_p 
#line 12662 "../../gcc/config/arm/arm.md"
(arm_coproc_builtin_available (VUNSPEC_CDP))
    ? (int) 
#line 12662 "../../gcc/config/arm/arm.md"
(arm_coproc_builtin_available (VUNSPEC_CDP))
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_LDRD && TARGET_THUMB2 && reload_completed\n\
     && (operands_ok_ldrd_strd (operands[0], operands[2],\n\
                                  operands[1], 0, false, true)))",
    __builtin_constant_p (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 12476 "../../gcc/config/arm/arm.md"
(TARGET_LDRD && TARGET_THUMB2 && reload_completed
     && (operands_ok_ldrd_strd (operands[0], operands[2],
                                  operands[1], 0, false, true))))
    ? (int) (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 12476 "../../gcc/config/arm/arm.md"
(TARGET_LDRD && TARGET_THUMB2 && reload_completed
     && (operands_ok_ldrd_strd (operands[0], operands[2],
                                  operands[1], 0, false, true))))
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_THUMB2 && (TARGET_VFP_FP16INST || TARGET_HAVE_MVE)\n\
  && (register_operand (operands[0], HImode)\n\
       || register_operand (operands[1], HImode)))",
    __builtin_constant_p (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 180 "../../gcc/config/arm/vfp.md"
(TARGET_THUMB2 && (TARGET_VFP_FP16INST || TARGET_HAVE_MVE)
  && (register_operand (operands[0], HImode)
       || register_operand (operands[1], HImode))))
    ? (int) (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 180 "../../gcc/config/arm/vfp.md"
(TARGET_THUMB2 && (TARGET_VFP_FP16INST || TARGET_HAVE_MVE)
  && (register_operand (operands[0], HImode)
       || register_operand (operands[1], HImode))))
    : -1 },
#line 2372 "../../gcc/config/arm/neon.md"
  { "TARGET_NEON && !(GET_MODE_CLASS (V16QImode) == MODE_VECTOR_FLOAT\n\
                    && !flag_unsafe_math_optimizations)",
    __builtin_constant_p 
#line 2372 "../../gcc/config/arm/neon.md"
(TARGET_NEON && !(GET_MODE_CLASS (V16QImode) == MODE_VECTOR_FLOAT
                    && !flag_unsafe_math_optimizations))
    ? (int) 
#line 2372 "../../gcc/config/arm/neon.md"
(TARGET_NEON && !(GET_MODE_CLASS (V16QImode) == MODE_VECTOR_FLOAT
                    && !flag_unsafe_math_optimizations))
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_ARM && XVECLEN (operands[0], 0) == 5)",
    __builtin_constant_p (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 283 "../../gcc/config/arm/ldmstm.md"
(TARGET_ARM && XVECLEN (operands[0], 0) == 5))
    ? (int) (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 283 "../../gcc/config/arm/ldmstm.md"
(TARGET_ARM && XVECLEN (operands[0], 0) == 5))
    : -1 },
#line 715 "../../gcc/config/arm/vfp.md"
  { "TARGET_THUMB2 && TARGET_VFP_BASE\n\
   && (   register_operand (operands[0], DFmode)\n\
       || register_operand (operands[1], DFmode))",
    __builtin_constant_p 
#line 715 "../../gcc/config/arm/vfp.md"
(TARGET_THUMB2 && TARGET_VFP_BASE
   && (   register_operand (operands[0], DFmode)
       || register_operand (operands[1], DFmode)))
    ? (int) 
#line 715 "../../gcc/config/arm/vfp.md"
(TARGET_THUMB2 && TARGET_VFP_BASE
   && (   register_operand (operands[0], DFmode)
       || register_operand (operands[1], DFmode)))
    : -1 },
#line 287 "../../gcc/config/arm/vec-common.md"
  { "ARM_HAVE_V4HF_LDST && !BYTES_BIG_ENDIAN\n\
  && unaligned_access && !TARGET_REALLY_IWMMXT",
    __builtin_constant_p 
#line 287 "../../gcc/config/arm/vec-common.md"
(ARM_HAVE_V4HF_LDST && !BYTES_BIG_ENDIAN
  && unaligned_access && !TARGET_REALLY_IWMMXT)
    ? (int) 
#line 287 "../../gcc/config/arm/vec-common.md"
(ARM_HAVE_V4HF_LDST && !BYTES_BIG_ENDIAN
  && unaligned_access && !TARGET_REALLY_IWMMXT)
    : -1 },
#line 6503 "../../gcc/config/arm/arm.md"
  { "TARGET_THUMB\n\
   && TARGET_HAVE_MOVT\n\
   && arm_disable_literal_pool\n\
   && reload_completed\n\
   && GET_CODE (operands[1]) == SYMBOL_REF",
    __builtin_constant_p 
#line 6503 "../../gcc/config/arm/arm.md"
(TARGET_THUMB
   && TARGET_HAVE_MOVT
   && arm_disable_literal_pool
   && reload_completed
   && GET_CODE (operands[1]) == SYMBOL_REF)
    ? (int) 
#line 6503 "../../gcc/config/arm/arm.md"
(TARGET_THUMB
   && TARGET_HAVE_MOVT
   && arm_disable_literal_pool
   && reload_completed
   && GET_CODE (operands[1]) == SYMBOL_REF)
    : -1 },
#line 1218 "../../gcc/config/arm/thumb2.md"
  { "TARGET_THUMB2 && IS_CMSE_ENTRY (arm_current_func_type ())",
    __builtin_constant_p 
#line 1218 "../../gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && IS_CMSE_ENTRY (arm_current_func_type ()))
    ? (int) 
#line 1218 "../../gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && IS_CMSE_ENTRY (arm_current_func_type ()))
    : -1 },
#line 12352 "../../gcc/config/arm/arm.md"
  { "TARGET_EITHER && (arm_arch6 || !optimize_size)",
    __builtin_constant_p 
#line 12352 "../../gcc/config/arm/arm.md"
(TARGET_EITHER && (arm_arch6 || !optimize_size))
    ? (int) 
#line 12352 "../../gcc/config/arm/arm.md"
(TARGET_EITHER && (arm_arch6 || !optimize_size))
    : -1 },
#line 415 "../../gcc/config/arm/thumb1.md"
  { "TARGET_THUMB1 && !arm_arch6",
    __builtin_constant_p 
#line 415 "../../gcc/config/arm/thumb1.md"
(TARGET_THUMB1 && !arm_arch6)
    ? (int) 
#line 415 "../../gcc/config/arm/thumb1.md"
(TARGET_THUMB1 && !arm_arch6)
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_32BIT && TARGET_HARD_FLOAT && (TARGET_FP16 || TARGET_VFP_FP16INST))",
    __builtin_constant_p (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 1493 "../../gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && (TARGET_FP16 || TARGET_VFP_FP16INST)))
    ? (int) (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 1493 "../../gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && (TARGET_FP16 || TARGET_VFP_FP16INST)))
    : -1 },
#line 2372 "../../gcc/config/arm/neon.md"
  { "TARGET_NEON && !(GET_MODE_CLASS (V4SImode) == MODE_VECTOR_FLOAT\n\
                    && !flag_unsafe_math_optimizations)",
    __builtin_constant_p 
#line 2372 "../../gcc/config/arm/neon.md"
(TARGET_NEON && !(GET_MODE_CLASS (V4SImode) == MODE_VECTOR_FLOAT
                    && !flag_unsafe_math_optimizations))
    ? (int) 
#line 2372 "../../gcc/config/arm/neon.md"
(TARGET_NEON && !(GET_MODE_CLASS (V4SImode) == MODE_VECTOR_FLOAT
                    && !flag_unsafe_math_optimizations))
    : -1 },
#line 355 "../../gcc/config/arm/ldmstm.md"
  { "TARGET_32BIT && XVECLEN (operands[0], 0) == 5",
    __builtin_constant_p 
#line 355 "../../gcc/config/arm/ldmstm.md"
(TARGET_32BIT && XVECLEN (operands[0], 0) == 5)
    ? (int) 
#line 355 "../../gcc/config/arm/ldmstm.md"
(TARGET_32BIT && XVECLEN (operands[0], 0) == 5)
    : -1 },
#line 9292 "../../gcc/config/arm/arm.md"
  { "reload_completed",
    __builtin_constant_p 
#line 9292 "../../gcc/config/arm/arm.md"
(reload_completed)
    ? (int) 
#line 9292 "../../gcc/config/arm/arm.md"
(reload_completed)
    : -1 },
#line 1786 "../../gcc/config/arm/vfp.md"
  { "TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_VFP_DOUBLE",
    __builtin_constant_p 
#line 1786 "../../gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_VFP_DOUBLE)
    ? (int) 
#line 1786 "../../gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_VFP_DOUBLE)
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_32BIT && arm_arch6)",
    __builtin_constant_p (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 5837 "../../gcc/config/arm/arm.md"
(TARGET_32BIT && arm_arch6))
    ? (int) (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 5837 "../../gcc/config/arm/arm.md"
(TARGET_32BIT && arm_arch6))
    : -1 },
#line 3924 "../../gcc/config/arm/arm.md"
  { "TARGET_32BIT\n\
   && GET_CODE (operands[1]) == GET_CODE (operands[9])\n\
   && INTVAL (operands[3]) == 32 - INTVAL (operands[6])",
    __builtin_constant_p 
#line 3924 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && GET_CODE (operands[1]) == GET_CODE (operands[9])
   && INTVAL (operands[3]) == 32 - INTVAL (operands[6]))
    ? (int) 
#line 3924 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && GET_CODE (operands[1]) == GET_CODE (operands[9])
   && INTVAL (operands[3]) == 32 - INTVAL (operands[6]))
    : -1 },
#line 1070 "../../gcc/config/arm/ldmstm.md"
  { "TARGET_32BIT && XVECLEN (operands[0], 0) == 2",
    __builtin_constant_p 
#line 1070 "../../gcc/config/arm/ldmstm.md"
(TARGET_32BIT && XVECLEN (operands[0], 0) == 2)
    ? (int) 
#line 1070 "../../gcc/config/arm/ldmstm.md"
(TARGET_32BIT && XVECLEN (operands[0], 0) == 2)
    : -1 },
#line 12758 "../../gcc/config/arm/arm.md"
  { "arm_coproc_builtin_available (VUNSPEC_MCRR2)",
    __builtin_constant_p 
#line 12758 "../../gcc/config/arm/arm.md"
(arm_coproc_builtin_available (VUNSPEC_MCRR2))
    ? (int) 
#line 12758 "../../gcc/config/arm/arm.md"
(arm_coproc_builtin_available (VUNSPEC_MCRR2))
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (unaligned_access)",
    __builtin_constant_p (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 4984 "../../gcc/config/arm/arm.md"
(unaligned_access))
    ? (int) (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 4984 "../../gcc/config/arm/arm.md"
(unaligned_access))
    : -1 },
#line 6419 "../../gcc/config/arm/neon.md"
  { "TARGET_I8MM",
    __builtin_constant_p 
#line 6419 "../../gcc/config/arm/neon.md"
(TARGET_I8MM)
    ? (int) 
#line 6419 "../../gcc/config/arm/neon.md"
(TARGET_I8MM)
    : -1 },
#line 202 "../../gcc/config/arm/vec-common.md"
  { "ARM_HAVE_V8HI_ARITH",
    __builtin_constant_p 
#line 202 "../../gcc/config/arm/vec-common.md"
(ARM_HAVE_V8HI_ARITH)
    ? (int) 
#line 202 "../../gcc/config/arm/vec-common.md"
(ARM_HAVE_V8HI_ARITH)
    : -1 },
#line 26 "../../gcc/config/arm/vec-common.md"
  { "TARGET_NEON\n\
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V4SImode))\n\
   || (TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V4SImode))\n\
   || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V4SImode))",
    __builtin_constant_p 
#line 26 "../../gcc/config/arm/vec-common.md"
(TARGET_NEON
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V4SImode))
   || (TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V4SImode))
   || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V4SImode)))
    ? (int) 
#line 26 "../../gcc/config/arm/vec-common.md"
(TARGET_NEON
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V4SImode))
   || (TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V4SImode))
   || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V4SImode)))
    : -1 },
#line 202 "../../gcc/config/arm/vec-common.md"
  { "ARM_HAVE_V4SF_ARITH",
    __builtin_constant_p 
#line 202 "../../gcc/config/arm/vec-common.md"
(ARM_HAVE_V4SF_ARITH)
    ? (int) 
#line 202 "../../gcc/config/arm/vec-common.md"
(ARM_HAVE_V4SF_ARITH)
    : -1 },
#line 202 "../../gcc/config/arm/vec-common.md"
  { "ARM_HAVE_V4HF_ARITH",
    __builtin_constant_p 
#line 202 "../../gcc/config/arm/vec-common.md"
(ARM_HAVE_V4HF_ARITH)
    ? (int) 
#line 202 "../../gcc/config/arm/vec-common.md"
(ARM_HAVE_V4HF_ARITH)
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_THUMB2\n\
  && (register_operand (operands[0], HImode)\n\
     || register_operand (operands[1], HImode)))",
    __builtin_constant_p (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 289 "../../gcc/config/arm/thumb2.md"
(TARGET_THUMB2
  && (register_operand (operands[0], HImode)
     || register_operand (operands[1], HImode))))
    ? (int) (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 289 "../../gcc/config/arm/thumb2.md"
(TARGET_THUMB2
  && (register_operand (operands[0], HImode)
     || register_operand (operands[1], HImode))))
    : -1 },
#line 8723 "../../gcc/config/arm/arm.md"
  { "TARGET_ARM && arm_arch5t && !SIBLING_CALL_P (insn)",
    __builtin_constant_p 
#line 8723 "../../gcc/config/arm/arm.md"
(TARGET_ARM && arm_arch5t && !SIBLING_CALL_P (insn))
    ? (int) 
#line 8723 "../../gcc/config/arm/arm.md"
(TARGET_ARM && arm_arch5t && !SIBLING_CALL_P (insn))
    : -1 },
#line 88 "../../gcc/config/arm/neon.md"
  { "TARGET_NEON\n\
   && (register_operand (operands[0], V4SFmode)\n\
       || register_operand (operands[1], V4SFmode))",
    __builtin_constant_p 
#line 88 "../../gcc/config/arm/neon.md"
(TARGET_NEON
   && (register_operand (operands[0], V4SFmode)
       || register_operand (operands[1], V4SFmode)))
    ? (int) 
#line 88 "../../gcc/config/arm/neon.md"
(TARGET_NEON
   && (register_operand (operands[0], V4SFmode)
       || register_operand (operands[1], V4SFmode)))
    : -1 },
#line 2372 "../../gcc/config/arm/neon.md"
  { "TARGET_NEON && !(GET_MODE_CLASS (V4HImode) == MODE_VECTOR_FLOAT\n\
                    && !flag_unsafe_math_optimizations)",
    __builtin_constant_p 
#line 2372 "../../gcc/config/arm/neon.md"
(TARGET_NEON && !(GET_MODE_CLASS (V4HImode) == MODE_VECTOR_FLOAT
                    && !flag_unsafe_math_optimizations))
    ? (int) 
#line 2372 "../../gcc/config/arm/neon.md"
(TARGET_NEON && !(GET_MODE_CLASS (V4HImode) == MODE_VECTOR_FLOAT
                    && !flag_unsafe_math_optimizations))
    : -1 },
#line 3071 "../../gcc/config/arm/arm.md"
  { "TARGET_32BIT\n\
  && (INTVAL (operands[2]) >= 0 && INTVAL (operands[2]) < 32\n\
      && INTVAL (operands[1]) > 0 \n\
      && INTVAL (operands[1]) + (INTVAL (operands[2]) & 1) <= 8\n\
      && INTVAL (operands[1]) + INTVAL (operands[2]) <= 32)",
    __builtin_constant_p 
#line 3071 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
  && (INTVAL (operands[2]) >= 0 && INTVAL (operands[2]) < 32
      && INTVAL (operands[1]) > 0 
      && INTVAL (operands[1]) + (INTVAL (operands[2]) & 1) <= 8
      && INTVAL (operands[1]) + INTVAL (operands[2]) <= 32))
    ? (int) 
#line 3071 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
  && (INTVAL (operands[2]) >= 0 && INTVAL (operands[2]) < 32
      && INTVAL (operands[1]) > 0 
      && INTVAL (operands[1]) + (INTVAL (operands[2]) & 1) <= 8
      && INTVAL (operands[1]) + INTVAL (operands[2]) <= 32))
    : -1 },
#line 86 "../../gcc/config/arm/ldrdstrd.md"
  { "TARGET_LDRD",
    __builtin_constant_p 
#line 86 "../../gcc/config/arm/ldrdstrd.md"
(TARGET_LDRD)
    ? (int) 
#line 86 "../../gcc/config/arm/ldrdstrd.md"
(TARGET_LDRD)
    : -1 },
#line 4257 "../../gcc/config/arm/arm.md"
  { "TARGET_DSP_MULTIPLY && ARM_Q_BIT_READ",
    __builtin_constant_p 
#line 4257 "../../gcc/config/arm/arm.md"
(TARGET_DSP_MULTIPLY && ARM_Q_BIT_READ)
    ? (int) 
#line 4257 "../../gcc/config/arm/arm.md"
(TARGET_DSP_MULTIPLY && ARM_Q_BIT_READ)
    : -1 },
#line 8703 "../../gcc/config/arm/arm.md"
  { "use_cmse",
    __builtin_constant_p 
#line 8703 "../../gcc/config/arm/arm.md"
(use_cmse)
    ? (int) 
#line 8703 "../../gcc/config/arm/arm.md"
(use_cmse)
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_LDRD && TARGET_THUMB2 && reload_completed\n\
     && (operands_ok_ldrd_strd (operands[0], operands[2],\n\
                                  operands[1], -4, false, true)))",
    __builtin_constant_p (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 12489 "../../gcc/config/arm/arm.md"
(TARGET_LDRD && TARGET_THUMB2 && reload_completed
     && (operands_ok_ldrd_strd (operands[0], operands[2],
                                  operands[1], -4, false, true))))
    ? (int) (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 12489 "../../gcc/config/arm/arm.md"
(TARGET_LDRD && TARGET_THUMB2 && reload_completed
     && (operands_ok_ldrd_strd (operands[0], operands[2],
                                  operands[1], -4, false, true))))
    : -1 },
#line 106 "../../gcc/config/arm/vec-common.md"
  { "ARM_HAVE_V8HI_ARITH\n\
   && (!TARGET_REALLY_IWMMXT\n\
       || V8HImode == V4HImode\n\
       || V8HImode == V2SImode)",
    __builtin_constant_p 
#line 106 "../../gcc/config/arm/vec-common.md"
(ARM_HAVE_V8HI_ARITH
   && (!TARGET_REALLY_IWMMXT
       || V8HImode == V4HImode
       || V8HImode == V2SImode))
    ? (int) 
#line 106 "../../gcc/config/arm/vec-common.md"
(ARM_HAVE_V8HI_ARITH
   && (!TARGET_REALLY_IWMMXT
       || V8HImode == V4HImode
       || V8HImode == V2SImode))
    : -1 },
#line 106 "../../gcc/config/arm/vec-common.md"
  { "ARM_HAVE_V2SF_ARITH\n\
   && (!TARGET_REALLY_IWMMXT\n\
       || V2SFmode == V4HImode\n\
       || V2SFmode == V2SImode)",
    __builtin_constant_p 
#line 106 "../../gcc/config/arm/vec-common.md"
(ARM_HAVE_V2SF_ARITH
   && (!TARGET_REALLY_IWMMXT
       || V2SFmode == V4HImode
       || V2SFmode == V2SImode))
    ? (int) 
#line 106 "../../gcc/config/arm/vec-common.md"
(ARM_HAVE_V2SF_ARITH
   && (!TARGET_REALLY_IWMMXT
       || V2SFmode == V4HImode
       || V2SFmode == V2SImode))
    : -1 },
#line 8962 "../../gcc/config/arm/arm.md"
  { "TARGET_ARM  && use_simple_return_p ()",
    __builtin_constant_p 
#line 8962 "../../gcc/config/arm/arm.md"
(TARGET_ARM  && use_simple_return_p ())
    ? (int) 
#line 8962 "../../gcc/config/arm/arm.md"
(TARGET_ARM  && use_simple_return_p ())
    : -1 },
#line 449 "../../gcc/config/arm/arm-fixed.md"
  { "TARGET_INT_SIMD",
    __builtin_constant_p 
#line 449 "../../gcc/config/arm/arm-fixed.md"
(TARGET_INT_SIMD)
    ? (int) 
#line 449 "../../gcc/config/arm/arm-fixed.md"
(TARGET_INT_SIMD)
    : -1 },
  { "((TARGET_HAVE_LDREXD && ARM_DOUBLEWORD_ALIGN\n\
	&& TARGET_HAVE_MEMORY_BARRIER) && (TARGET_32BIT)) && ( reload_completed)",
    __builtin_constant_p ((
#line 235 "../../gcc/config/arm/sync.md"
(TARGET_HAVE_LDREXD && ARM_DOUBLEWORD_ALIGN
	&& TARGET_HAVE_MEMORY_BARRIER) && 
#line 53 "../../gcc/config/arm/iterators.md"
(TARGET_32BIT)) && 
#line 237 "../../gcc/config/arm/sync.md"
( reload_completed))
    ? (int) ((
#line 235 "../../gcc/config/arm/sync.md"
(TARGET_HAVE_LDREXD && ARM_DOUBLEWORD_ALIGN
	&& TARGET_HAVE_MEMORY_BARRIER) && 
#line 53 "../../gcc/config/arm/iterators.md"
(TARGET_32BIT)) && 
#line 237 "../../gcc/config/arm/sync.md"
( reload_completed))
    : -1 },
  { "(TARGET_THUMB2 && !arm_restrict_it) && ( true)",
    __builtin_constant_p (
#line 396 "../../gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && !arm_restrict_it) && 
#line 398 "../../gcc/config/arm/thumb2.md"
( true))
    ? (int) (
#line 396 "../../gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && !arm_restrict_it) && 
#line 398 "../../gcc/config/arm/thumb2.md"
( true))
    : -1 },
#line 6690 "../../gcc/config/arm/arm.md"
  { "TARGET_ARM && peep2_reg_dead_p (2, operands[0])",
    __builtin_constant_p 
#line 6690 "../../gcc/config/arm/arm.md"
(TARGET_ARM && peep2_reg_dead_p (2, operands[0]))
    ? (int) 
#line 6690 "../../gcc/config/arm/arm.md"
(TARGET_ARM && peep2_reg_dead_p (2, operands[0]))
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_32BIT && TARGET_FP16_TO_DOUBLE)",
    __builtin_constant_p (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 1484 "../../gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_FP16_TO_DOUBLE))
    ? (int) (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 1484 "../../gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_FP16_TO_DOUBLE))
    : -1 },
#line 7399 "../../gcc/config/arm/arm.md"
  { "TARGET_32BIT\n\
   && TARGET_SOFT_FLOAT && !TARGET_HAVE_MVE\n\
   && (!MEM_P (operands[0])\n\
       || register_operand (operands[1], SFmode))",
    __builtin_constant_p 
#line 7399 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && TARGET_SOFT_FLOAT && !TARGET_HAVE_MVE
   && (!MEM_P (operands[0])
       || register_operand (operands[1], SFmode)))
    ? (int) 
#line 7399 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && TARGET_SOFT_FLOAT && !TARGET_HAVE_MVE
   && (!MEM_P (operands[0])
       || register_operand (operands[1], SFmode)))
    : -1 },
#line 12200 "../../gcc/config/arm/arm.md"
  { "TARGET_HAVE_MOVT",
    __builtin_constant_p 
#line 12200 "../../gcc/config/arm/arm.md"
(TARGET_HAVE_MOVT)
    ? (int) 
#line 12200 "../../gcc/config/arm/arm.md"
(TARGET_HAVE_MOVT)
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (arm_arch6)",
    __builtin_constant_p (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 12213 "../../gcc/config/arm/arm.md"
(arm_arch6))
    ? (int) (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 12213 "../../gcc/config/arm/arm.md"
(arm_arch6))
    : -1 },
#line 1242 "../../gcc/config/arm/neon.md"
  { "ARM_HAVE_NEON_V4SF_ARITH && !BYTES_BIG_ENDIAN",
    __builtin_constant_p 
#line 1242 "../../gcc/config/arm/neon.md"
(ARM_HAVE_NEON_V4SF_ARITH && !BYTES_BIG_ENDIAN)
    ? (int) 
#line 1242 "../../gcc/config/arm/neon.md"
(ARM_HAVE_NEON_V4SF_ARITH && !BYTES_BIG_ENDIAN)
    : -1 },
#line 6474 "../../gcc/config/arm/arm.md"
  { "(TARGET_32BIT || TARGET_HAVE_MOVT)\n\
  && (!(const_ok_for_arm (INTVAL (operands[1]))\n\
        || const_ok_for_arm (~INTVAL (operands[1]))))",
    __builtin_constant_p 
#line 6474 "../../gcc/config/arm/arm.md"
((TARGET_32BIT || TARGET_HAVE_MOVT)
  && (!(const_ok_for_arm (INTVAL (operands[1]))
        || const_ok_for_arm (~INTVAL (operands[1])))))
    ? (int) 
#line 6474 "../../gcc/config/arm/arm.md"
((TARGET_32BIT || TARGET_HAVE_MOVT)
  && (!(const_ok_for_arm (INTVAL (operands[1]))
        || const_ok_for_arm (~INTVAL (operands[1])))))
    : -1 },
#line 4198 "../../gcc/config/arm/arm.md"
  { "TARGET_32BIT && !arm_eliminable_register (operands[1])\n\
   && !(arm_restrict_it && CONST_INT_P (operands[3]))",
    __builtin_constant_p 
#line 4198 "../../gcc/config/arm/arm.md"
(TARGET_32BIT && !arm_eliminable_register (operands[1])
   && !(arm_restrict_it && CONST_INT_P (operands[3])))
    ? (int) 
#line 4198 "../../gcc/config/arm/arm.md"
(TARGET_32BIT && !arm_eliminable_register (operands[1])
   && !(arm_restrict_it && CONST_INT_P (operands[3])))
    : -1 },
#line 859 "../../gcc/config/arm/thumb1.md"
  { "TARGET_THUMB1\n\
   && (   register_operand (operands[0], QImode)\n\
       || register_operand (operands[1], QImode))",
    __builtin_constant_p 
#line 859 "../../gcc/config/arm/thumb1.md"
(TARGET_THUMB1
   && (   register_operand (operands[0], QImode)
       || register_operand (operands[1], QImode)))
    ? (int) 
#line 859 "../../gcc/config/arm/thumb1.md"
(TARGET_THUMB1
   && (   register_operand (operands[0], QImode)
       || register_operand (operands[1], QImode)))
    : -1 },
#line 407 "../../gcc/config/arm/vec-common.md"
  { "ARM_HAVE_V8HI_ARITH && !TARGET_REALLY_IWMMXT",
    __builtin_constant_p 
#line 407 "../../gcc/config/arm/vec-common.md"
(ARM_HAVE_V8HI_ARITH && !TARGET_REALLY_IWMMXT)
    ? (int) 
#line 407 "../../gcc/config/arm/vec-common.md"
(ARM_HAVE_V8HI_ARITH && !TARGET_REALLY_IWMMXT)
    : -1 },
#line 69 "../../gcc/config/arm/vec-common.md"
  { "TARGET_NEON || TARGET_HAVE_MVE_FLOAT",
    __builtin_constant_p 
#line 69 "../../gcc/config/arm/vec-common.md"
(TARGET_NEON || TARGET_HAVE_MVE_FLOAT)
    ? (int) 
#line 69 "../../gcc/config/arm/vec-common.md"
(TARGET_NEON || TARGET_HAVE_MVE_FLOAT)
    : -1 },
  { "(TARGET_THUMB1) && ( reload_completed)",
    __builtin_constant_p (
#line 2032 "../../gcc/config/arm/thumb1.md"
(TARGET_THUMB1) && 
#line 2034 "../../gcc/config/arm/thumb1.md"
( reload_completed))
    ? (int) (
#line 2032 "../../gcc/config/arm/thumb1.md"
(TARGET_THUMB1) && 
#line 2034 "../../gcc/config/arm/thumb1.md"
( reload_completed))
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_32BIT && GET_CODE (operands[2]) != MULT)",
    __builtin_constant_p (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 9536 "../../gcc/config/arm/arm.md"
(TARGET_32BIT && GET_CODE (operands[2]) != MULT))
    ? (int) (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 9536 "../../gcc/config/arm/arm.md"
(TARGET_32BIT && GET_CODE (operands[2]) != MULT))
    : -1 },
#line 8901 "../../gcc/config/arm/arm.md"
  { "(TARGET_ARM || (TARGET_THUMB2\n\
                   && ARM_FUNC_TYPE (arm_current_func_type ()) == ARM_FT_NORMAL\n\
                   && !IS_STACKALIGN (arm_current_func_type ())))\n\
     && USE_RETURN_INSN (FALSE)",
    __builtin_constant_p 
#line 8901 "../../gcc/config/arm/arm.md"
((TARGET_ARM || (TARGET_THUMB2
                   && ARM_FUNC_TYPE (arm_current_func_type ()) == ARM_FT_NORMAL
                   && !IS_STACKALIGN (arm_current_func_type ())))
     && USE_RETURN_INSN (FALSE))
    ? (int) 
#line 8901 "../../gcc/config/arm/arm.md"
((TARGET_ARM || (TARGET_THUMB2
                   && ARM_FUNC_TYPE (arm_current_func_type ()) == ARM_FT_NORMAL
                   && !IS_STACKALIGN (arm_current_func_type ())))
     && USE_RETURN_INSN (FALSE))
    : -1 },
#line 2552 "../../gcc/config/arm/neon.md"
  { "TARGET_NEON_FP16INST && flag_unsafe_math_optimizations",
    __builtin_constant_p 
#line 2552 "../../gcc/config/arm/neon.md"
(TARGET_NEON_FP16INST && flag_unsafe_math_optimizations)
    ? (int) 
#line 2552 "../../gcc/config/arm/neon.md"
(TARGET_NEON_FP16INST && flag_unsafe_math_optimizations)
    : -1 },
#line 105 "../../gcc/config/arm/arm-fixed.md"
  { "TARGET_INT_SIMD && !ARM_GE_BITS_READ",
    __builtin_constant_p 
#line 105 "../../gcc/config/arm/arm-fixed.md"
(TARGET_INT_SIMD && !ARM_GE_BITS_READ)
    ? (int) 
#line 105 "../../gcc/config/arm/arm-fixed.md"
(TARGET_INT_SIMD && !ARM_GE_BITS_READ)
    : -1 },
#line 6704 "../../gcc/config/arm/arm.md"
  { "TARGET_VXWORKS_RTP && TARGET_ARM && flag_pic",
    __builtin_constant_p 
#line 6704 "../../gcc/config/arm/arm.md"
(TARGET_VXWORKS_RTP && TARGET_ARM && flag_pic)
    ? (int) 
#line 6704 "../../gcc/config/arm/arm.md"
(TARGET_VXWORKS_RTP && TARGET_ARM && flag_pic)
    : -1 },
#line 4400 "../../gcc/config/arm/arm.md"
  { "TARGET_32BIT && arm_arch6 && !ARM_Q_BIT_READ\n\
   && arm_sat_operator_match (operands[1], operands[2], NULL, NULL)",
    __builtin_constant_p 
#line 4400 "../../gcc/config/arm/arm.md"
(TARGET_32BIT && arm_arch6 && !ARM_Q_BIT_READ
   && arm_sat_operator_match (operands[1], operands[2], NULL, NULL))
    ? (int) 
#line 4400 "../../gcc/config/arm/arm.md"
(TARGET_32BIT && arm_arch6 && !ARM_Q_BIT_READ
   && arm_sat_operator_match (operands[1], operands[2], NULL, NULL))
    : -1 },
#line 1455 "../../gcc/config/arm/thumb2.md"
  { "TARGET_THUMB2 && optimize_size",
    __builtin_constant_p 
#line 1455 "../../gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && optimize_size)
    ? (int) 
#line 1455 "../../gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && optimize_size)
    : -1 },
#line 1049 "../../gcc/config/arm/arm.md"
  { "TARGET_32BIT\n\
   && INTVAL (operands[1]) == ARM_SIGN_EXTEND (INTVAL (operands[1]))",
    __builtin_constant_p 
#line 1049 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && INTVAL (operands[1]) == ARM_SIGN_EXTEND (INTVAL (operands[1])))
    ? (int) 
#line 1049 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && INTVAL (operands[1]) == ARM_SIGN_EXTEND (INTVAL (operands[1])))
    : -1 },
#line 8774 "../../gcc/config/arm/arm.md"
  { "TARGET_32BIT\n\
   && !SIBLING_CALL_P (insn)\n\
   && (GET_CODE (operands[1]) == SYMBOL_REF)\n\
   && !arm_is_long_call_p (SYMBOL_REF_DECL (operands[1]))",
    __builtin_constant_p 
#line 8774 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && !SIBLING_CALL_P (insn)
   && (GET_CODE (operands[1]) == SYMBOL_REF)
   && !arm_is_long_call_p (SYMBOL_REF_DECL (operands[1])))
    ? (int) 
#line 8774 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && !SIBLING_CALL_P (insn)
   && (GET_CODE (operands[1]) == SYMBOL_REF)
   && !arm_is_long_call_p (SYMBOL_REF_DECL (operands[1])))
    : -1 },
#line 478 "../../gcc/config/arm/vfp.md"
  { "TARGET_32BIT\n\
   && TARGET_HARD_FLOAT && TARGET_NEON_FP16\n\
   && !TARGET_VFP_FP16INST\n\
   && (   s_register_operand (operands[0], BFmode)\n\
       || s_register_operand (operands[1], BFmode))",
    __builtin_constant_p 
#line 478 "../../gcc/config/arm/vfp.md"
(TARGET_32BIT
   && TARGET_HARD_FLOAT && TARGET_NEON_FP16
   && !TARGET_VFP_FP16INST
   && (   s_register_operand (operands[0], BFmode)
       || s_register_operand (operands[1], BFmode)))
    ? (int) 
#line 478 "../../gcc/config/arm/vfp.md"
(TARGET_32BIT
   && TARGET_HARD_FLOAT && TARGET_NEON_FP16
   && !TARGET_VFP_FP16INST
   && (   s_register_operand (operands[0], BFmode)
       || s_register_operand (operands[1], BFmode)))
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_VFP3 && !flag_rounding_math\n\
  && !TARGET_VFP_SINGLE)",
    __builtin_constant_p (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 1868 "../../gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_VFP3 && !flag_rounding_math
  && !TARGET_VFP_SINGLE))
    ? (int) (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 1868 "../../gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_VFP3 && !flag_rounding_math
  && !TARGET_VFP_SINGLE))
    : -1 },
#line 12711 "../../gcc/config/arm/arm.md"
  { "arm_coproc_builtin_available (VUNSPEC_STCL)",
    __builtin_constant_p 
#line 12711 "../../gcc/config/arm/arm.md"
(arm_coproc_builtin_available (VUNSPEC_STCL))
    ? (int) 
#line 12711 "../../gcc/config/arm/arm.md"
(arm_coproc_builtin_available (VUNSPEC_STCL))
    : -1 },
#line 2438 "../../gcc/config/arm/neon.md"
  { "TARGET_NEON_FP16INST\n\
  && !(GET_MODE_CLASS (V4HFmode) == MODE_VECTOR_FLOAT\n\
  && !flag_unsafe_math_optimizations)",
    __builtin_constant_p 
#line 2438 "../../gcc/config/arm/neon.md"
(TARGET_NEON_FP16INST
  && !(GET_MODE_CLASS (V4HFmode) == MODE_VECTOR_FLOAT
  && !flag_unsafe_math_optimizations))
    ? (int) 
#line 2438 "../../gcc/config/arm/neon.md"
(TARGET_NEON_FP16INST
  && !(GET_MODE_CLASS (V4HFmode) == MODE_VECTOR_FLOAT
  && !flag_unsafe_math_optimizations))
    : -1 },
#line 5434 "../../gcc/config/arm/arm.md"
  { "(TARGET_EITHER && flag_unsafe_math_optimizations)\n\
   || (TARGET_32BIT && TARGET_FP16_TO_DOUBLE)",
    __builtin_constant_p 
#line 5434 "../../gcc/config/arm/arm.md"
((TARGET_EITHER && flag_unsafe_math_optimizations)
   || (TARGET_32BIT && TARGET_FP16_TO_DOUBLE))
    ? (int) 
#line 5434 "../../gcc/config/arm/arm.md"
((TARGET_EITHER && flag_unsafe_math_optimizations)
   || (TARGET_32BIT && TARGET_FP16_TO_DOUBLE))
    : -1 },
#line 172 "../../gcc/config/arm/crypto.md"
  { "TARGET_CRYPTO && INTVAL (operands[4]) == NEON_ENDIAN_LANE_N (V2SImode, 0)",
    __builtin_constant_p 
#line 172 "../../gcc/config/arm/crypto.md"
(TARGET_CRYPTO && INTVAL (operands[4]) == NEON_ENDIAN_LANE_N (V2SImode, 0))
    ? (int) 
#line 172 "../../gcc/config/arm/crypto.md"
(TARGET_CRYPTO && INTVAL (operands[4]) == NEON_ENDIAN_LANE_N (V2SImode, 0))
    : -1 },
#line 7253 "../../gcc/config/arm/arm.md"
  { "TARGET_32BIT\n\
   && (   register_operand (operands[0], QImode)\n\
       || register_operand (operands[1], QImode))",
    __builtin_constant_p 
#line 7253 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (   register_operand (operands[0], QImode)
       || register_operand (operands[1], QImode)))
    ? (int) 
#line 7253 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (   register_operand (operands[0], QImode)
       || register_operand (operands[1], QImode)))
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_32BIT\n\
   && (TARGET_VFP_FP16INST || TARGET_HAVE_MVE)\n\
   && (s_register_operand (operands[0], BFmode)\n\
       || s_register_operand (operands[1], BFmode)))",
    __builtin_constant_p (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 397 "../../gcc/config/arm/vfp.md"
(TARGET_32BIT
   && (TARGET_VFP_FP16INST || TARGET_HAVE_MVE)
   && (s_register_operand (operands[0], BFmode)
       || s_register_operand (operands[1], BFmode))))
    ? (int) (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 397 "../../gcc/config/arm/vfp.md"
(TARGET_32BIT
   && (TARGET_VFP_FP16INST || TARGET_HAVE_MVE)
   && (s_register_operand (operands[0], BFmode)
       || s_register_operand (operands[1], BFmode))))
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_32BIT && XVECLEN (operands[0], 0) == 5)",
    __builtin_constant_p (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 355 "../../gcc/config/arm/ldmstm.md"
(TARGET_32BIT && XVECLEN (operands[0], 0) == 5))
    ? (int) (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 355 "../../gcc/config/arm/ldmstm.md"
(TARGET_32BIT && XVECLEN (operands[0], 0) == 5))
    : -1 },
#line 12662 "../../gcc/config/arm/arm.md"
  { "arm_coproc_builtin_available (VUNSPEC_CDP2)",
    __builtin_constant_p 
#line 12662 "../../gcc/config/arm/arm.md"
(arm_coproc_builtin_available (VUNSPEC_CDP2))
    ? (int) 
#line 12662 "../../gcc/config/arm/arm.md"
(arm_coproc_builtin_available (VUNSPEC_CDP2))
    : -1 },
#line 6856 "../../gcc/config/arm/arm.md"
  { "TARGET_32BIT && arm_arch4",
    __builtin_constant_p 
#line 6856 "../../gcc/config/arm/arm.md"
(TARGET_32BIT && arm_arch4)
    ? (int) 
#line 6856 "../../gcc/config/arm/arm.md"
(TARGET_32BIT && arm_arch4)
    : -1 },
#line 1242 "../../gcc/config/arm/neon.md"
  { "ARM_HAVE_NEON_V4SI_ARITH && !BYTES_BIG_ENDIAN",
    __builtin_constant_p 
#line 1242 "../../gcc/config/arm/neon.md"
(ARM_HAVE_NEON_V4SI_ARITH && !BYTES_BIG_ENDIAN)
    ? (int) 
#line 1242 "../../gcc/config/arm/neon.md"
(ARM_HAVE_NEON_V4SI_ARITH && !BYTES_BIG_ENDIAN)
    : -1 },
#line 130 "../../gcc/config/arm/vfp.md"
  { "TARGET_ARM && TARGET_VFP_FP16INST\n\
  && (register_operand (operands[0], HImode)\n\
       || register_operand (operands[1], HImode))",
    __builtin_constant_p 
#line 130 "../../gcc/config/arm/vfp.md"
(TARGET_ARM && TARGET_VFP_FP16INST
  && (register_operand (operands[0], HImode)
       || register_operand (operands[1], HImode)))
    ? (int) 
#line 130 "../../gcc/config/arm/vfp.md"
(TARGET_ARM && TARGET_VFP_FP16INST
  && (register_operand (operands[0], HImode)
       || register_operand (operands[1], HImode)))
    : -1 },
  { "(TARGET_THUMB2 && !arm_restrict_it) && ( reload_completed\n\
    && REGNO (operands [0]) != REGNO (operands[3]))",
    __builtin_constant_p (
#line 646 "../../gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && !arm_restrict_it) && 
#line 651 "../../gcc/config/arm/thumb2.md"
( reload_completed
    && REGNO (operands [0]) != REGNO (operands[3])))
    ? (int) (
#line 646 "../../gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && !arm_restrict_it) && 
#line 651 "../../gcc/config/arm/thumb2.md"
( reload_completed
    && REGNO (operands [0]) != REGNO (operands[3])))
    : -1 },
#line 2147 "../../gcc/config/arm/arm.md"
  { "TARGET_32BIT\n\
   && (UINTVAL (operands[2]) & 0xffffffff) == UINTVAL (operands[3])",
    __builtin_constant_p 
#line 2147 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (UINTVAL (operands[2]) & 0xffffffff) == UINTVAL (operands[3]))
    ? (int) 
#line 2147 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (UINTVAL (operands[2]) & 0xffffffff) == UINTVAL (operands[3]))
    : -1 },
#line 88 "../../gcc/config/arm/neon.md"
  { "TARGET_NEON\n\
   && (register_operand (operands[0], V4SImode)\n\
       || register_operand (operands[1], V4SImode))",
    __builtin_constant_p 
#line 88 "../../gcc/config/arm/neon.md"
(TARGET_NEON
   && (register_operand (operands[0], V4SImode)
       || register_operand (operands[1], V4SImode)))
    ? (int) 
#line 88 "../../gcc/config/arm/neon.md"
(TARGET_NEON
   && (register_operand (operands[0], V4SImode)
       || register_operand (operands[1], V4SImode)))
    : -1 },
#line 26 "../../gcc/config/arm/vec-common.md"
  { "TARGET_NEON\n\
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V8HImode))\n\
   || (TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V8HImode))\n\
   || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V8HImode))",
    __builtin_constant_p 
#line 26 "../../gcc/config/arm/vec-common.md"
(TARGET_NEON
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V8HImode))
   || (TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V8HImode))
   || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V8HImode)))
    ? (int) 
#line 26 "../../gcc/config/arm/vec-common.md"
(TARGET_NEON
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V8HImode))
   || (TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V8HImode))
   || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V8HImode)))
    : -1 },
#line 164 "../../gcc/config/arm/ldrdstrd.md"
  { "TARGET_LDRD && TARGET_ARM && reload_completed\n\
  && valid_operands_ldrd_strd (operands, true)",
    __builtin_constant_p 
#line 164 "../../gcc/config/arm/ldrdstrd.md"
(TARGET_LDRD && TARGET_ARM && reload_completed
  && valid_operands_ldrd_strd (operands, true))
    ? (int) 
#line 164 "../../gcc/config/arm/ldrdstrd.md"
(TARGET_LDRD && TARGET_ARM && reload_completed
  && valid_operands_ldrd_strd (operands, true))
    : -1 },
  { "(TARGET_NEON || TARGET_HAVE_MVE) && (!TARGET_HAVE_MVE)",
    __builtin_constant_p (
#line 152 "../../gcc/config/arm/neon.md"
(TARGET_NEON || TARGET_HAVE_MVE) && 
#line 138 "../../gcc/config/arm/iterators.md"
(!TARGET_HAVE_MVE))
    ? (int) (
#line 152 "../../gcc/config/arm/neon.md"
(TARGET_NEON || TARGET_HAVE_MVE) && 
#line 138 "../../gcc/config/arm/iterators.md"
(!TARGET_HAVE_MVE))
    : -1 },
#line 1850 "../../gcc/config/arm/thumb1.md"
  { "TARGET_THUMB1 && arm_arch5t",
    __builtin_constant_p 
#line 1850 "../../gcc/config/arm/thumb1.md"
(TARGET_THUMB1 && arm_arch5t)
    ? (int) 
#line 1850 "../../gcc/config/arm/thumb1.md"
(TARGET_THUMB1 && arm_arch5t)
    : -1 },
#line 287 "../../gcc/config/arm/vec-common.md"
  { "ARM_HAVE_V2DI_LDST && !BYTES_BIG_ENDIAN\n\
  && unaligned_access && !TARGET_REALLY_IWMMXT",
    __builtin_constant_p 
#line 287 "../../gcc/config/arm/vec-common.md"
(ARM_HAVE_V2DI_LDST && !BYTES_BIG_ENDIAN
  && unaligned_access && !TARGET_REALLY_IWMMXT)
    ? (int) 
#line 287 "../../gcc/config/arm/vec-common.md"
(ARM_HAVE_V2DI_LDST && !BYTES_BIG_ENDIAN
  && unaligned_access && !TARGET_REALLY_IWMMXT)
    : -1 },
  { "(TARGET_HARD_FLOAT && TARGET_VFP5 && TARGET_VFP_DOUBLE) && (TARGET_VFP_DOUBLE)",
    __builtin_constant_p (
#line 2096 "../../gcc/config/arm/vfp.md"
(TARGET_HARD_FLOAT && TARGET_VFP5 && TARGET_VFP_DOUBLE) && 
#line 56 "../../gcc/config/arm/iterators.md"
(TARGET_VFP_DOUBLE))
    ? (int) (
#line 2096 "../../gcc/config/arm/vfp.md"
(TARGET_HARD_FLOAT && TARGET_VFP5 && TARGET_VFP_DOUBLE) && 
#line 56 "../../gcc/config/arm/iterators.md"
(TARGET_VFP_DOUBLE))
    : -1 },
#line 283 "../../gcc/config/arm/ldmstm.md"
  { "TARGET_ARM && XVECLEN (operands[0], 0) == 5",
    __builtin_constant_p 
#line 283 "../../gcc/config/arm/ldmstm.md"
(TARGET_ARM && XVECLEN (operands[0], 0) == 5)
    ? (int) 
#line 283 "../../gcc/config/arm/ldmstm.md"
(TARGET_ARM && XVECLEN (operands[0], 0) == 5)
    : -1 },
#line 4933 "../../gcc/config/arm/arm.md"
  { "unaligned_access && TARGET_32BIT",
    __builtin_constant_p 
#line 4933 "../../gcc/config/arm/arm.md"
(unaligned_access && TARGET_32BIT)
    ? (int) 
#line 4933 "../../gcc/config/arm/arm.md"
(unaligned_access && TARGET_32BIT)
    : -1 },
#line 1754 "../../gcc/config/arm/thumb2.md"
  { "TARGET_32BIT && TARGET_HAVE_LOB",
    __builtin_constant_p 
#line 1754 "../../gcc/config/arm/thumb2.md"
(TARGET_32BIT && TARGET_HAVE_LOB)
    ? (int) 
#line 1754 "../../gcc/config/arm/thumb2.md"
(TARGET_32BIT && TARGET_HAVE_LOB)
    : -1 },
#line 41 "../../gcc/config/arm/neon.md"
  { "TARGET_NEON\n\
   && (register_operand (operands[0], DImode)\n\
       || register_operand (operands[1], DImode))",
    __builtin_constant_p 
#line 41 "../../gcc/config/arm/neon.md"
(TARGET_NEON
   && (register_operand (operands[0], DImode)
       || register_operand (operands[1], DImode)))
    ? (int) 
#line 41 "../../gcc/config/arm/neon.md"
(TARGET_NEON
   && (register_operand (operands[0], DImode)
       || register_operand (operands[1], DImode)))
    : -1 },
#line 1229 "../../gcc/config/arm/neon.md"
  { "ARM_HAVE_NEON_V2SI_ARITH",
    __builtin_constant_p 
#line 1229 "../../gcc/config/arm/neon.md"
(ARM_HAVE_NEON_V2SI_ARITH)
    ? (int) 
#line 1229 "../../gcc/config/arm/neon.md"
(ARM_HAVE_NEON_V2SI_ARITH)
    : -1 },
#line 6408 "../../gcc/config/arm/neon.md"
  { "ARM_HAVE_NEON_V4SF_ARITH",
    __builtin_constant_p 
#line 6408 "../../gcc/config/arm/neon.md"
(ARM_HAVE_NEON_V4SF_ARITH)
    ? (int) 
#line 6408 "../../gcc/config/arm/neon.md"
(ARM_HAVE_NEON_V4SF_ARITH)
    : -1 },
#line 88 "../../gcc/config/arm/neon.md"
  { "TARGET_NEON\n\
   && (register_operand (operands[0], V8BFmode)\n\
       || register_operand (operands[1], V8BFmode))",
    __builtin_constant_p 
#line 88 "../../gcc/config/arm/neon.md"
(TARGET_NEON
   && (register_operand (operands[0], V8BFmode)
       || register_operand (operands[1], V8BFmode)))
    ? (int) 
#line 88 "../../gcc/config/arm/neon.md"
(TARGET_NEON
   && (register_operand (operands[0], V8BFmode)
       || register_operand (operands[1], V8BFmode)))
    : -1 },
#line 4011 "../../gcc/config/arm/neon.md"
  { "TARGET_NEON_RDMA",
    __builtin_constant_p 
#line 4011 "../../gcc/config/arm/neon.md"
(TARGET_NEON_RDMA)
    ? (int) 
#line 4011 "../../gcc/config/arm/neon.md"
(TARGET_NEON_RDMA)
    : -1 },
#line 29 "../../gcc/config/arm/vfp.md"
  { "TARGET_ARM && TARGET_HARD_FLOAT\n\
  && !TARGET_VFP_FP16INST\n\
  && (register_operand (operands[0], HImode)\n\
       || register_operand (operands[1], HImode))",
    __builtin_constant_p 
#line 29 "../../gcc/config/arm/vfp.md"
(TARGET_ARM && TARGET_HARD_FLOAT
  && !TARGET_VFP_FP16INST
  && (register_operand (operands[0], HImode)
       || register_operand (operands[1], HImode)))
    ? (int) 
#line 29 "../../gcc/config/arm/vfp.md"
(TARGET_ARM && TARGET_HARD_FLOAT
  && !TARGET_VFP_FP16INST
  && (register_operand (operands[0], HImode)
       || register_operand (operands[1], HImode)))
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_HAVE_LDACQEXD && ARM_DOUBLEWORD_ALIGN)",
    __builtin_constant_p (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 549 "../../gcc/config/arm/sync.md"
(TARGET_HAVE_LDACQEXD && ARM_DOUBLEWORD_ALIGN))
    ? (int) (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 549 "../../gcc/config/arm/sync.md"
(TARGET_HAVE_LDACQEXD && ARM_DOUBLEWORD_ALIGN))
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_ARM_QBIT)",
    __builtin_constant_p (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 4326 "../../gcc/config/arm/arm.md"
(TARGET_ARM_QBIT))
    ? (int) (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 4326 "../../gcc/config/arm/arm.md"
(TARGET_ARM_QBIT))
    : -1 },
#line 512 "../../gcc/config/arm/thumb1.md"
  { "TARGET_THUMB1 && reload_completed",
    __builtin_constant_p 
#line 512 "../../gcc/config/arm/thumb1.md"
(TARGET_THUMB1 && reload_completed)
    ? (int) 
#line 512 "../../gcc/config/arm/thumb1.md"
(TARGET_THUMB1 && reload_completed)
    : -1 },
#line 930 "../../gcc/config/arm/ldmstm.md"
  { "TARGET_THUMB1 && XVECLEN (operands[0], 0) == 3",
    __builtin_constant_p 
#line 930 "../../gcc/config/arm/ldmstm.md"
(TARGET_THUMB1 && XVECLEN (operands[0], 0) == 3)
    ? (int) 
#line 930 "../../gcc/config/arm/ldmstm.md"
(TARGET_THUMB1 && XVECLEN (operands[0], 0) == 3)
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_ARM)",
    __builtin_constant_p (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 9474 "../../gcc/config/arm/arm.md"
(TARGET_ARM))
    ? (int) (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 9474 "../../gcc/config/arm/arm.md"
(TARGET_ARM))
    : -1 },
#line 7300 "../../gcc/config/arm/arm.md"
  { "TARGET_32BIT\n\
   && !TARGET_HARD_FLOAT\n\
   && !TARGET_HAVE_MVE\n\
   && (	  s_register_operand (operands[0], HFmode)\n\
       || s_register_operand (operands[1], HFmode))",
    __builtin_constant_p 
#line 7300 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && !TARGET_HARD_FLOAT
   && !TARGET_HAVE_MVE
   && (	  s_register_operand (operands[0], HFmode)
       || s_register_operand (operands[1], HFmode)))
    ? (int) 
#line 7300 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && !TARGET_HARD_FLOAT
   && !TARGET_HAVE_MVE
   && (	  s_register_operand (operands[0], HFmode)
       || s_register_operand (operands[1], HFmode)))
    : -1 },
#line 1896 "../../gcc/config/arm/thumb1.md"
  { "TARGET_THUMB1\n\
   && GET_CODE (operands[0]) == SYMBOL_REF\n\
   && !arm_is_long_call_p (SYMBOL_REF_DECL (operands[0]))",
    __builtin_constant_p 
#line 1896 "../../gcc/config/arm/thumb1.md"
(TARGET_THUMB1
   && GET_CODE (operands[0]) == SYMBOL_REF
   && !arm_is_long_call_p (SYMBOL_REF_DECL (operands[0])))
    ? (int) 
#line 1896 "../../gcc/config/arm/thumb1.md"
(TARGET_THUMB1
   && GET_CODE (operands[0]) == SYMBOL_REF
   && !arm_is_long_call_p (SYMBOL_REF_DECL (operands[0])))
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_ARM && TARGET_VFP_FP16INST\n\
  && (register_operand (operands[0], HImode)\n\
       || register_operand (operands[1], HImode)))",
    __builtin_constant_p (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 130 "../../gcc/config/arm/vfp.md"
(TARGET_ARM && TARGET_VFP_FP16INST
  && (register_operand (operands[0], HImode)
       || register_operand (operands[1], HImode))))
    ? (int) (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 130 "../../gcc/config/arm/vfp.md"
(TARGET_ARM && TARGET_VFP_FP16INST
  && (register_operand (operands[0], HImode)
       || register_operand (operands[1], HImode))))
    : -1 },
#line 6305 "../../gcc/config/arm/arm.md"
  { "TARGET_ARM && reload_completed\n\
   && arm_const_double_by_parts (operands[1])",
    __builtin_constant_p 
#line 6305 "../../gcc/config/arm/arm.md"
(TARGET_ARM && reload_completed
   && arm_const_double_by_parts (operands[1]))
    ? (int) 
#line 6305 "../../gcc/config/arm/arm.md"
(TARGET_ARM && reload_completed
   && arm_const_double_by_parts (operands[1]))
    : -1 },
#line 407 "../../gcc/config/arm/vec-common.md"
  { "ARM_HAVE_V4SI_ARITH && !TARGET_REALLY_IWMMXT",
    __builtin_constant_p 
#line 407 "../../gcc/config/arm/vec-common.md"
(ARM_HAVE_V4SI_ARITH && !TARGET_REALLY_IWMMXT)
    ? (int) 
#line 407 "../../gcc/config/arm/vec-common.md"
(ARM_HAVE_V4SI_ARITH && !TARGET_REALLY_IWMMXT)
    : -1 },
#line 322 "../../gcc/config/arm/arm-fixed.md"
  { "TARGET_32BIT && arm_arch6",
    __builtin_constant_p 
#line 322 "../../gcc/config/arm/arm-fixed.md"
(TARGET_32BIT && arm_arch6)
    ? (int) 
#line 322 "../../gcc/config/arm/arm-fixed.md"
(TARGET_32BIT && arm_arch6)
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_DSP_MULTIPLY && !ARM_Q_BIT_READ)",
    __builtin_constant_p (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 4257 "../../gcc/config/arm/arm.md"
(TARGET_DSP_MULTIPLY && !ARM_Q_BIT_READ))
    ? (int) (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 4257 "../../gcc/config/arm/arm.md"
(TARGET_DSP_MULTIPLY && !ARM_Q_BIT_READ))
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (arm_arch_thumb2)",
    __builtin_constant_p (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 3491 "../../gcc/config/arm/arm.md"
(arm_arch_thumb2))
    ? (int) (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 3491 "../../gcc/config/arm/arm.md"
(arm_arch_thumb2))
    : -1 },
#line 202 "../../gcc/config/arm/vec-common.md"
  { "ARM_HAVE_V2SF_ARITH",
    __builtin_constant_p 
#line 202 "../../gcc/config/arm/vec-common.md"
(ARM_HAVE_V2SF_ARITH)
    ? (int) 
#line 202 "../../gcc/config/arm/vec-common.md"
(ARM_HAVE_V2SF_ARITH)
    : -1 },
#line 7109 "../../gcc/config/arm/arm.md"
  { "TARGET_ARM\n\
   && arm_arch4 && !TARGET_HARD_FLOAT\n\
   && (register_operand (operands[0], HImode)\n\
       || register_operand (operands[1], HImode))",
    __builtin_constant_p 
#line 7109 "../../gcc/config/arm/arm.md"
(TARGET_ARM
   && arm_arch4 && !TARGET_HARD_FLOAT
   && (register_operand (operands[0], HImode)
       || register_operand (operands[1], HImode)))
    ? (int) 
#line 7109 "../../gcc/config/arm/arm.md"
(TARGET_ARM
   && arm_arch4 && !TARGET_HARD_FLOAT
   && (register_operand (operands[0], HImode)
       || register_operand (operands[1], HImode)))
    : -1 },
#line 1876 "../../gcc/config/arm/thumb1.md"
  { "TARGET_THUMB1 && !arm_arch5t",
    __builtin_constant_p 
#line 1876 "../../gcc/config/arm/thumb1.md"
(TARGET_THUMB1 && !arm_arch5t)
    ? (int) 
#line 1876 "../../gcc/config/arm/thumb1.md"
(TARGET_THUMB1 && !arm_arch5t)
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_32BIT && arm_arch6 && !ARM_Q_BIT_READ\n\
   && arm_sat_operator_match (operands[1], operands[2], NULL, NULL))",
    __builtin_constant_p (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 4400 "../../gcc/config/arm/arm.md"
(TARGET_32BIT && arm_arch6 && !ARM_Q_BIT_READ
   && arm_sat_operator_match (operands[1], operands[2], NULL, NULL)))
    ? (int) (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 4400 "../../gcc/config/arm/arm.md"
(TARGET_32BIT && arm_arch6 && !ARM_Q_BIT_READ
   && arm_sat_operator_match (operands[1], operands[2], NULL, NULL)))
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_HAVE_MOVT)",
    __builtin_constant_p (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 12200 "../../gcc/config/arm/arm.md"
(TARGET_HAVE_MOVT))
    ? (int) (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 12200 "../../gcc/config/arm/arm.md"
(TARGET_HAVE_MOVT))
    : -1 },
#line 664 "../../gcc/config/arm/vfp.md"
  { "TARGET_ARM && TARGET_HARD_FLOAT\n\
   && (   register_operand (operands[0], DFmode)\n\
       || register_operand (operands[1], DFmode))",
    __builtin_constant_p 
#line 664 "../../gcc/config/arm/vfp.md"
(TARGET_ARM && TARGET_HARD_FLOAT
   && (   register_operand (operands[0], DFmode)
       || register_operand (operands[1], DFmode)))
    ? (int) 
#line 664 "../../gcc/config/arm/vfp.md"
(TARGET_ARM && TARGET_HARD_FLOAT
   && (   register_operand (operands[0], DFmode)
       || register_operand (operands[1], DFmode)))
    : -1 },
#line 287 "../../gcc/config/arm/vec-common.md"
  { "ARM_HAVE_V4HI_LDST && !BYTES_BIG_ENDIAN\n\
  && unaligned_access && !TARGET_REALLY_IWMMXT",
    __builtin_constant_p 
#line 287 "../../gcc/config/arm/vec-common.md"
(ARM_HAVE_V4HI_LDST && !BYTES_BIG_ENDIAN
  && unaligned_access && !TARGET_REALLY_IWMMXT)
    ? (int) 
#line 287 "../../gcc/config/arm/vec-common.md"
(ARM_HAVE_V4HI_LDST && !BYTES_BIG_ENDIAN
  && unaligned_access && !TARGET_REALLY_IWMMXT)
    : -1 },
#line 564 "../../gcc/config/arm/sync.md"
  { "TARGET_HAVE_LDACQ",
    __builtin_constant_p 
#line 564 "../../gcc/config/arm/sync.md"
(TARGET_HAVE_LDACQ)
    ? (int) 
#line 564 "../../gcc/config/arm/sync.md"
(TARGET_HAVE_LDACQ)
    : -1 },
#line 12476 "../../gcc/config/arm/arm.md"
  { "TARGET_LDRD && TARGET_THUMB2 && reload_completed\n\
     && (operands_ok_ldrd_strd (operands[0], operands[2],\n\
                                  operands[1], 0, false, true))",
    __builtin_constant_p 
#line 12476 "../../gcc/config/arm/arm.md"
(TARGET_LDRD && TARGET_THUMB2 && reload_completed
     && (operands_ok_ldrd_strd (operands[0], operands[2],
                                  operands[1], 0, false, true)))
    ? (int) 
#line 12476 "../../gcc/config/arm/arm.md"
(TARGET_LDRD && TARGET_THUMB2 && reload_completed
     && (operands_ok_ldrd_strd (operands[0], operands[2],
                                  operands[1], 0, false, true)))
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_LDRD && TARGET_THUMB2 && reload_completed\n\
     && (operands_ok_ldrd_strd (operands[1], operands[2],\n\
                                  operands[0], -4, false, false)))",
    __builtin_constant_p (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 12531 "../../gcc/config/arm/arm.md"
(TARGET_LDRD && TARGET_THUMB2 && reload_completed
     && (operands_ok_ldrd_strd (operands[1], operands[2],
                                  operands[0], -4, false, false))))
    ? (int) (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 12531 "../../gcc/config/arm/arm.md"
(TARGET_LDRD && TARGET_THUMB2 && reload_completed
     && (operands_ok_ldrd_strd (operands[1], operands[2],
                                  operands[0], -4, false, false))))
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_THUMB2 && TARGET_VFP_BASE\n\
   && (   s_register_operand (operands[0], SFmode)\n\
       || s_register_operand (operands[1], SFmode)))",
    __builtin_constant_p (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 626 "../../gcc/config/arm/vfp.md"
(TARGET_THUMB2 && TARGET_VFP_BASE
   && (   s_register_operand (operands[0], SFmode)
       || s_register_operand (operands[1], SFmode))))
    ? (int) (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 626 "../../gcc/config/arm/vfp.md"
(TARGET_THUMB2 && TARGET_VFP_BASE
   && (   s_register_operand (operands[0], SFmode)
       || s_register_operand (operands[1], SFmode))))
    : -1 },
#line 214 "../../gcc/config/arm/vec-common.md"
  { "ARM_HAVE_V4SF_ARITH && !TARGET_REALLY_IWMMXT",
    __builtin_constant_p 
#line 214 "../../gcc/config/arm/vec-common.md"
(ARM_HAVE_V4SF_ARITH && !TARGET_REALLY_IWMMXT)
    ? (int) 
#line 214 "../../gcc/config/arm/vec-common.md"
(ARM_HAVE_V4SF_ARITH && !TARGET_REALLY_IWMMXT)
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_32BIT && (reload_in_progress || reload_completed))",
    __builtin_constant_p (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 11854 "../../gcc/config/arm/arm.md"
(TARGET_32BIT && (reload_in_progress || reload_completed)))
    ? (int) (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 11854 "../../gcc/config/arm/arm.md"
(TARGET_32BIT && (reload_in_progress || reload_completed)))
    : -1 },
#line 772 "../../gcc/config/arm/thumb1.md"
  { "TARGET_THUMB1 && satisfies_constraint_Pe (operands[1])\n\
   && !(TARGET_HAVE_MOVT && satisfies_constraint_j (operands[1]))",
    __builtin_constant_p 
#line 772 "../../gcc/config/arm/thumb1.md"
(TARGET_THUMB1 && satisfies_constraint_Pe (operands[1])
   && !(TARGET_HAVE_MOVT && satisfies_constraint_j (operands[1])))
    ? (int) 
#line 772 "../../gcc/config/arm/thumb1.md"
(TARGET_THUMB1 && satisfies_constraint_Pe (operands[1])
   && !(TARGET_HAVE_MOVT && satisfies_constraint_j (operands[1])))
    : -1 },
  { "((TARGET_NEON || TARGET_HAVE_MVE)\n\
   && (register_operand (operands[0], CImode)\n\
       || register_operand (operands[1], CImode))) && (!TARGET_HAVE_MVE)",
    __builtin_constant_p (
#line 184 "../../gcc/config/arm/neon.md"
((TARGET_NEON || TARGET_HAVE_MVE)
   && (register_operand (operands[0], CImode)
       || register_operand (operands[1], CImode))) && 
#line 138 "../../gcc/config/arm/iterators.md"
(!TARGET_HAVE_MVE))
    ? (int) (
#line 184 "../../gcc/config/arm/neon.md"
((TARGET_NEON || TARGET_HAVE_MVE)
   && (register_operand (operands[0], CImode)
       || register_operand (operands[1], CImode))) && 
#line 138 "../../gcc/config/arm/iterators.md"
(!TARGET_HAVE_MVE))
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_INT_SIMD)",
    __builtin_constant_p (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 115 "../../gcc/config/arm/arm-fixed.md"
(TARGET_INT_SIMD))
    ? (int) (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 115 "../../gcc/config/arm/arm-fixed.md"
(TARGET_INT_SIMD))
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_HAVE_LDREX && TARGET_HAVE_MEMORY_BARRIER)",
    __builtin_constant_p (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 523 "../../gcc/config/arm/sync.md"
(TARGET_HAVE_LDREX && TARGET_HAVE_MEMORY_BARRIER))
    ? (int) (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 523 "../../gcc/config/arm/sync.md"
(TARGET_HAVE_LDREX && TARGET_HAVE_MEMORY_BARRIER))
    : -1 },
#line 4740 "../../gcc/config/arm/arm.md"
  { "TARGET_THUMB1 || arm_arch_thumb2",
    __builtin_constant_p 
#line 4740 "../../gcc/config/arm/arm.md"
(TARGET_THUMB1 || arm_arch_thumb2)
    ? (int) 
#line 4740 "../../gcc/config/arm/arm.md"
(TARGET_THUMB1 || arm_arch_thumb2)
    : -1 },
#line 947 "../../gcc/config/arm/arm.md"
  { "TARGET_32BIT\n\
   && CONST_INT_P (operands[2])\n\
   && !const_ok_for_op (INTVAL (operands[2]), PLUS)\n\
   && (reload_completed || !arm_eliminable_register (operands[1]))",
    __builtin_constant_p 
#line 947 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && CONST_INT_P (operands[2])
   && !const_ok_for_op (INTVAL (operands[2]), PLUS)
   && (reload_completed || !arm_eliminable_register (operands[1])))
    ? (int) 
#line 947 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && CONST_INT_P (operands[2])
   && !const_ok_for_op (INTVAL (operands[2]), PLUS)
   && (reload_completed || !arm_eliminable_register (operands[1])))
    : -1 },
#line 3015 "../../gcc/config/arm/neon.md"
  { "TARGET_DOTPROD",
    __builtin_constant_p 
#line 3015 "../../gcc/config/arm/neon.md"
(TARGET_DOTPROD)
    ? (int) 
#line 3015 "../../gcc/config/arm/neon.md"
(TARGET_DOTPROD)
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_INT_SIMD && !ARM_GE_BITS_READ)",
    __builtin_constant_p (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 105 "../../gcc/config/arm/arm-fixed.md"
(TARGET_INT_SIMD && !ARM_GE_BITS_READ))
    ? (int) (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 105 "../../gcc/config/arm/arm-fixed.md"
(TARGET_INT_SIMD && !ARM_GE_BITS_READ))
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_ARM && XVECLEN (operands[0], 0) == 2)",
    __builtin_constant_p (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 1018 "../../gcc/config/arm/ldmstm.md"
(TARGET_ARM && XVECLEN (operands[0], 0) == 2))
    ? (int) (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 1018 "../../gcc/config/arm/ldmstm.md"
(TARGET_ARM && XVECLEN (operands[0], 0) == 2))
    : -1 },
#line 208 "../../gcc/config/arm/vec-common.md"
  { "ARM_HAVE_V2DI_ARITH && !TARGET_REALLY_IWMMXT",
    __builtin_constant_p 
#line 208 "../../gcc/config/arm/vec-common.md"
(ARM_HAVE_V2DI_ARITH && !TARGET_REALLY_IWMMXT)
    ? (int) 
#line 208 "../../gcc/config/arm/vec-common.md"
(ARM_HAVE_V2DI_ARITH && !TARGET_REALLY_IWMMXT)
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_32BIT\n\
  && (INTVAL (operands[2]) >= 0 && INTVAL (operands[2]) < 32\n\
      && INTVAL (operands[1]) > 0 \n\
      && INTVAL (operands[1]) + (INTVAL (operands[2]) & 1) <= 8\n\
      && INTVAL (operands[1]) + INTVAL (operands[2]) <= 32))",
    __builtin_constant_p (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 3071 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
  && (INTVAL (operands[2]) >= 0 && INTVAL (operands[2]) < 32
      && INTVAL (operands[1]) > 0 
      && INTVAL (operands[1]) + (INTVAL (operands[2]) & 1) <= 8
      && INTVAL (operands[1]) + INTVAL (operands[2]) <= 32)))
    ? (int) (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 3071 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
  && (INTVAL (operands[2]) >= 0 && INTVAL (operands[2]) < 32
      && INTVAL (operands[1]) > 0 
      && INTVAL (operands[1]) + (INTVAL (operands[2]) & 1) <= 8
      && INTVAL (operands[1]) + INTVAL (operands[2]) <= 32)))
    : -1 },
#line 427 "../../gcc/config/arm/thumb1.md"
  { "TARGET_THUMB1 && arm_arch6",
    __builtin_constant_p 
#line 427 "../../gcc/config/arm/thumb1.md"
(TARGET_THUMB1 && arm_arch6)
    ? (int) 
#line 427 "../../gcc/config/arm/thumb1.md"
(TARGET_THUMB1 && arm_arch6)
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_INT_SIMD && !ARM_Q_BIT_READ)",
    __builtin_constant_p (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 490 "../../gcc/config/arm/arm-fixed.md"
(TARGET_INT_SIMD && !ARM_Q_BIT_READ))
    ? (int) (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 490 "../../gcc/config/arm/arm-fixed.md"
(TARGET_INT_SIMD && !ARM_Q_BIT_READ))
    : -1 },
#line 2191 "../../gcc/config/arm/arm.md"
  { "TARGET_32BIT\n\
   && INTVAL (operands[2]) == ARM_SIGN_EXTEND (INTVAL (operands[2]))",
    __builtin_constant_p 
#line 2191 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && INTVAL (operands[2]) == ARM_SIGN_EXTEND (INTVAL (operands[2])))
    ? (int) 
#line 2191 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && INTVAL (operands[2]) == ARM_SIGN_EXTEND (INTVAL (operands[2])))
    : -1 },
#line 106 "../../gcc/config/arm/vec-common.md"
  { "ARM_HAVE_V4HI_ARITH\n\
   && (!TARGET_REALLY_IWMMXT\n\
       || V4HImode == V4HImode\n\
       || V4HImode == V2SImode)",
    __builtin_constant_p 
#line 106 "../../gcc/config/arm/vec-common.md"
(ARM_HAVE_V4HI_ARITH
   && (!TARGET_REALLY_IWMMXT
       || V4HImode == V4HImode
       || V4HImode == V2SImode))
    ? (int) 
#line 106 "../../gcc/config/arm/vec-common.md"
(ARM_HAVE_V4HI_ARITH
   && (!TARGET_REALLY_IWMMXT
       || V4HImode == V4HImode
       || V4HImode == V2SImode))
    : -1 },
#line 6275 "../../gcc/config/arm/arm.md"
  { "TARGET_32BIT\n\
   && reload_completed\n\
   && (arm_disable_literal_pool\n\
       || (arm_const_double_inline_cost (operands[1])\n\
	   <= arm_max_const_double_inline_cost ()))",
    __builtin_constant_p 
#line 6275 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && reload_completed
   && (arm_disable_literal_pool
       || (arm_const_double_inline_cost (operands[1])
	   <= arm_max_const_double_inline_cost ())))
    ? (int) 
#line 6275 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && reload_completed
   && (arm_disable_literal_pool
       || (arm_const_double_inline_cost (operands[1])
	   <= arm_max_const_double_inline_cost ())))
    : -1 },
  { "(TARGET_COMPLEX) && (TARGET_NEON_FP16INST)",
    __builtin_constant_p (
#line 2917 "../../gcc/config/arm/neon.md"
(TARGET_COMPLEX) && 
#line 154 "../../gcc/config/arm/iterators.md"
(TARGET_NEON_FP16INST))
    ? (int) (
#line 2917 "../../gcc/config/arm/neon.md"
(TARGET_COMPLEX) && 
#line 154 "../../gcc/config/arm/iterators.md"
(TARGET_NEON_FP16INST))
    : -1 },
#line 9826 "../../gcc/config/arm/arm.md"
  { "arm_arch5t && TARGET_32BIT && peep2_regno_dead_p (3, CC_REGNUM)",
    __builtin_constant_p 
#line 9826 "../../gcc/config/arm/arm.md"
(arm_arch5t && TARGET_32BIT && peep2_regno_dead_p (3, CC_REGNUM))
    ? (int) 
#line 9826 "../../gcc/config/arm/arm.md"
(arm_arch5t && TARGET_32BIT && peep2_regno_dead_p (3, CC_REGNUM))
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_ARM && TARGET_HARD_FLOAT\n\
   && (   s_register_operand (operands[0], SImode)\n\
       || s_register_operand (operands[1], SImode)))",
    __builtin_constant_p (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 228 "../../gcc/config/arm/vfp.md"
(TARGET_ARM && TARGET_HARD_FLOAT
   && (   s_register_operand (operands[0], SImode)
       || s_register_operand (operands[1], SImode))))
    ? (int) (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 228 "../../gcc/config/arm/vfp.md"
(TARGET_ARM && TARGET_HARD_FLOAT
   && (   s_register_operand (operands[0], SImode)
       || s_register_operand (operands[1], SImode))))
    : -1 },
#line 2158 "../../gcc/config/arm/vfp.md"
  { "arm_disable_literal_pool\n\
   && TARGET_VFP_BASE\n\
   && !vfp3_const_double_rtx (operands[1])",
    __builtin_constant_p 
#line 2158 "../../gcc/config/arm/vfp.md"
(arm_disable_literal_pool
   && TARGET_VFP_BASE
   && !vfp3_const_double_rtx (operands[1]))
    ? (int) 
#line 2158 "../../gcc/config/arm/vfp.md"
(arm_disable_literal_pool
   && TARGET_VFP_BASE
   && !vfp3_const_double_rtx (operands[1]))
    : -1 },
  { "(TARGET_HAVE_LDREXD && ARM_DOUBLEWORD_ALIGN\n\
	&& TARGET_HAVE_MEMORY_BARRIER) && (TARGET_32BIT)",
    __builtin_constant_p (
#line 235 "../../gcc/config/arm/sync.md"
(TARGET_HAVE_LDREXD && ARM_DOUBLEWORD_ALIGN
	&& TARGET_HAVE_MEMORY_BARRIER) && 
#line 53 "../../gcc/config/arm/iterators.md"
(TARGET_32BIT))
    ? (int) (
#line 235 "../../gcc/config/arm/sync.md"
(TARGET_HAVE_LDREXD && ARM_DOUBLEWORD_ALIGN
	&& TARGET_HAVE_MEMORY_BARRIER) && 
#line 53 "../../gcc/config/arm/iterators.md"
(TARGET_32BIT))
    : -1 },
#line 1179 "../../gcc/config/arm/thumb2.md"
  { "TARGET_THUMB2 && flag_pic",
    __builtin_constant_p 
#line 1179 "../../gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && flag_pic)
    ? (int) 
#line 1179 "../../gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && flag_pic)
    : -1 },
#line 10485 "../../gcc/config/arm/mve.md"
  { "(TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V16QImode))\n\
   || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V16QImode))",
    __builtin_constant_p 
#line 10485 "../../gcc/config/arm/mve.md"
((TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V16QImode))
   || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V16QImode)))
    ? (int) 
#line 10485 "../../gcc/config/arm/mve.md"
((TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V16QImode))
   || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V16QImode)))
    : -1 },
#line 8734 "../../gcc/config/arm/arm.md"
  { "TARGET_ARM && !arm_arch5t && !SIBLING_CALL_P (insn)",
    __builtin_constant_p 
#line 8734 "../../gcc/config/arm/arm.md"
(TARGET_ARM && !arm_arch5t && !SIBLING_CALL_P (insn))
    ? (int) 
#line 8734 "../../gcc/config/arm/arm.md"
(TARGET_ARM && !arm_arch5t && !SIBLING_CALL_P (insn))
    : -1 },
#line 7136 "../../gcc/config/arm/arm.md"
  { "TARGET_ARM && !TARGET_HARD_FLOAT",
    __builtin_constant_p 
#line 7136 "../../gcc/config/arm/arm.md"
(TARGET_ARM && !TARGET_HARD_FLOAT)
    ? (int) 
#line 7136 "../../gcc/config/arm/arm.md"
(TARGET_ARM && !TARGET_HARD_FLOAT)
    : -1 },
#line 287 "../../gcc/config/arm/vec-common.md"
  { "ARM_HAVE_V8HF_LDST && !BYTES_BIG_ENDIAN\n\
  && unaligned_access && !TARGET_REALLY_IWMMXT",
    __builtin_constant_p 
#line 287 "../../gcc/config/arm/vec-common.md"
(ARM_HAVE_V8HF_LDST && !BYTES_BIG_ENDIAN
  && unaligned_access && !TARGET_REALLY_IWMMXT)
    ? (int) 
#line 287 "../../gcc/config/arm/vec-common.md"
(ARM_HAVE_V8HF_LDST && !BYTES_BIG_ENDIAN
  && unaligned_access && !TARGET_REALLY_IWMMXT)
    : -1 },
#line 1012 "../../gcc/config/arm/thumb2.md"
  { "TARGET_THUMB2 && !TARGET_COND_ARITH",
    __builtin_constant_p 
#line 1012 "../../gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && !TARGET_COND_ARITH)
    ? (int) 
#line 1012 "../../gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && !TARGET_COND_ARITH)
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_32BIT)",
    __builtin_constant_p (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 84 "../../gcc/config/arm/arm-fixed.md"
(TARGET_32BIT))
    ? (int) (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 84 "../../gcc/config/arm/arm-fixed.md"
(TARGET_32BIT))
    : -1 },
#line 6590 "../../gcc/config/arm/neon.md"
  { "TARGET_BF16_SIMD",
    __builtin_constant_p 
#line 6590 "../../gcc/config/arm/neon.md"
(TARGET_BF16_SIMD)
    ? (int) 
#line 6590 "../../gcc/config/arm/neon.md"
(TARGET_BF16_SIMD)
    : -1 },
#line 2887 "../../gcc/config/arm/arm.md"
  { "TARGET_32BIT && reload_completed\n\
   && ! IS_IWMMXT_REGNUM (REGNO (operands[0]))",
    __builtin_constant_p 
#line 2887 "../../gcc/config/arm/arm.md"
(TARGET_32BIT && reload_completed
   && ! IS_IWMMXT_REGNUM (REGNO (operands[0])))
    ? (int) 
#line 2887 "../../gcc/config/arm/arm.md"
(TARGET_32BIT && reload_completed
   && ! IS_IWMMXT_REGNUM (REGNO (operands[0])))
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_HAVE_LDREXD && ARM_DOUBLEWORD_ALIGN\n\
	&& TARGET_HAVE_MEMORY_BARRIER)",
    __builtin_constant_p (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 523 "../../gcc/config/arm/sync.md"
(TARGET_HAVE_LDREXD && ARM_DOUBLEWORD_ALIGN
	&& TARGET_HAVE_MEMORY_BARRIER))
    ? (int) (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 523 "../../gcc/config/arm/sync.md"
(TARGET_HAVE_LDREXD && ARM_DOUBLEWORD_ALIGN
	&& TARGET_HAVE_MEMORY_BARRIER))
    : -1 },
#line 1756 "../../gcc/config/arm/vfp.md"
  { "TARGET_32BIT && TARGET_HARD_FLOAT",
    __builtin_constant_p 
#line 1756 "../../gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_HARD_FLOAT)
    ? (int) 
#line 1756 "../../gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_HARD_FLOAT)
    : -1 },
#line 839 "../../gcc/config/arm/vfp.md"
  { "TARGET_THUMB2 && TARGET_VFP_BASE && TARGET_VFP_DOUBLE\n\
   && !arm_restrict_it",
    __builtin_constant_p 
#line 839 "../../gcc/config/arm/vfp.md"
(TARGET_THUMB2 && TARGET_VFP_BASE && TARGET_VFP_DOUBLE
   && !arm_restrict_it)
    ? (int) 
#line 839 "../../gcc/config/arm/vfp.md"
(TARGET_THUMB2 && TARGET_VFP_BASE && TARGET_VFP_DOUBLE
   && !arm_restrict_it)
    : -1 },
#line 1436 "../../gcc/config/arm/vfp.md"
  { "TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_FMA ",
    __builtin_constant_p 
#line 1436 "../../gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_FMA )
    ? (int) 
#line 1436 "../../gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_FMA )
    : -1 },
#line 503 "../../gcc/config/arm/sync.md"
  { "TARGET_HAVE_LDREXD",
    __builtin_constant_p 
#line 503 "../../gcc/config/arm/sync.md"
(TARGET_HAVE_LDREXD)
    ? (int) 
#line 503 "../../gcc/config/arm/sync.md"
(TARGET_HAVE_LDREXD)
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_LDRD && TARGET_THUMB2 && reload_completed\n\
     && (operands_ok_ldrd_strd (operands[1], operands[2],\n\
                                  operands[0], 0, false, false)))",
    __builtin_constant_p (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 12518 "../../gcc/config/arm/arm.md"
(TARGET_LDRD && TARGET_THUMB2 && reload_completed
     && (operands_ok_ldrd_strd (operands[1], operands[2],
                                  operands[0], 0, false, false))))
    ? (int) (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 12518 "../../gcc/config/arm/arm.md"
(TARGET_LDRD && TARGET_THUMB2 && reload_completed
     && (operands_ok_ldrd_strd (operands[1], operands[2],
                                  operands[0], 0, false, false))))
    : -1 },
#line 1725 "../../gcc/config/arm/vfp.md"
  { "use_cmse && reload_completed",
    __builtin_constant_p 
#line 1725 "../../gcc/config/arm/vfp.md"
(use_cmse && reload_completed)
    ? (int) 
#line 1725 "../../gcc/config/arm/vfp.md"
(use_cmse && reload_completed)
    : -1 },
#line 41 "../../gcc/config/arm/neon.md"
  { "TARGET_NEON\n\
   && (register_operand (operands[0], V4BFmode)\n\
       || register_operand (operands[1], V4BFmode))",
    __builtin_constant_p 
#line 41 "../../gcc/config/arm/neon.md"
(TARGET_NEON
   && (register_operand (operands[0], V4BFmode)
       || register_operand (operands[1], V4BFmode)))
    ? (int) 
#line 41 "../../gcc/config/arm/neon.md"
(TARGET_NEON
   && (register_operand (operands[0], V4BFmode)
       || register_operand (operands[1], V4BFmode)))
    : -1 },
#line 7524 "../../gcc/config/arm/arm.md"
  { "TARGET_32BIT && TARGET_SOFT_FLOAT && !TARGET_HAVE_MVE\n\
   && (   register_operand (operands[0], DFmode)\n\
       || register_operand (operands[1], DFmode))",
    __builtin_constant_p 
#line 7524 "../../gcc/config/arm/arm.md"
(TARGET_32BIT && TARGET_SOFT_FLOAT && !TARGET_HAVE_MVE
   && (   register_operand (operands[0], DFmode)
       || register_operand (operands[1], DFmode)))
    ? (int) 
#line 7524 "../../gcc/config/arm/arm.md"
(TARGET_32BIT && TARGET_SOFT_FLOAT && !TARGET_HAVE_MVE
   && (   register_operand (operands[0], DFmode)
       || register_operand (operands[1], DFmode)))
    : -1 },
  { "(TARGET_NEON) && (TARGET_BF16_SIMD)",
    __builtin_constant_p (
#line 5975 "../../gcc/config/arm/neon.md"
(TARGET_NEON) && 
#line 116 "../../gcc/config/arm/iterators.md"
(TARGET_BF16_SIMD))
    ? (int) (
#line 5975 "../../gcc/config/arm/neon.md"
(TARGET_NEON) && 
#line 116 "../../gcc/config/arm/iterators.md"
(TARGET_BF16_SIMD))
    : -1 },
#line 80 "../../gcc/config/arm/vfp.md"
  { "TARGET_THUMB2 && TARGET_VFP_BASE\n\
  && !TARGET_VFP_FP16INST\n\
  && (register_operand (operands[0], HImode)\n\
       || register_operand (operands[1], HImode))",
    __builtin_constant_p 
#line 80 "../../gcc/config/arm/vfp.md"
(TARGET_THUMB2 && TARGET_VFP_BASE
  && !TARGET_VFP_FP16INST
  && (register_operand (operands[0], HImode)
       || register_operand (operands[1], HImode)))
    ? (int) 
#line 80 "../../gcc/config/arm/vfp.md"
(TARGET_THUMB2 && TARGET_VFP_BASE
  && !TARGET_VFP_FP16INST
  && (register_operand (operands[0], HImode)
       || register_operand (operands[1], HImode)))
    : -1 },
#line 10840 "../../gcc/config/arm/mve.md"
  { "((TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V16QImode))\n\
    || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V16QImode)))\n\
   && !BYTES_BIG_ENDIAN && unaligned_access",
    __builtin_constant_p 
#line 10840 "../../gcc/config/arm/mve.md"
(((TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V16QImode))
    || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V16QImode)))
   && !BYTES_BIG_ENDIAN && unaligned_access)
    ? (int) 
#line 10840 "../../gcc/config/arm/mve.md"
(((TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V16QImode))
    || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V16QImode)))
   && !BYTES_BIG_ENDIAN && unaligned_access)
    : -1 },
#line 2132 "../../gcc/config/arm/vfp.md"
  { "arm_disable_literal_pool\n\
   && TARGET_VFP_BASE\n\
   && !arm_const_double_rtx (operands[1])\n\
   && !(TARGET_VFP_DOUBLE && vfp3_const_double_rtx (operands[1]))",
    __builtin_constant_p 
#line 2132 "../../gcc/config/arm/vfp.md"
(arm_disable_literal_pool
   && TARGET_VFP_BASE
   && !arm_const_double_rtx (operands[1])
   && !(TARGET_VFP_DOUBLE && vfp3_const_double_rtx (operands[1])))
    ? (int) 
#line 2132 "../../gcc/config/arm/vfp.md"
(arm_disable_literal_pool
   && TARGET_VFP_BASE
   && !arm_const_double_rtx (operands[1])
   && !(TARGET_VFP_DOUBLE && vfp3_const_double_rtx (operands[1])))
    : -1 },
#line 1714 "../../gcc/config/arm/arm.md"
  { "TARGET_ARM || (TARGET_THUMB2 && !CONST_INT_P (operands[2]))",
    __builtin_constant_p 
#line 1714 "../../gcc/config/arm/arm.md"
(TARGET_ARM || (TARGET_THUMB2 && !CONST_INT_P (operands[2])))
    ? (int) 
#line 1714 "../../gcc/config/arm/arm.md"
(TARGET_ARM || (TARGET_THUMB2 && !CONST_INT_P (operands[2])))
    : -1 },
#line 6063 "../../gcc/config/arm/arm.md"
  { "TARGET_INT_SIMD && ARM_Q_BIT_READ",
    __builtin_constant_p 
#line 6063 "../../gcc/config/arm/arm.md"
(TARGET_INT_SIMD && ARM_Q_BIT_READ)
    ? (int) 
#line 6063 "../../gcc/config/arm/arm.md"
(TARGET_INT_SIMD && ARM_Q_BIT_READ)
    : -1 },
#line 6624 "../../gcc/config/arm/arm.md"
  { "TARGET_THUMB1 && flag_pic",
    __builtin_constant_p 
#line 6624 "../../gcc/config/arm/arm.md"
(TARGET_THUMB1 && flag_pic)
    ? (int) 
#line 6624 "../../gcc/config/arm/arm.md"
(TARGET_THUMB1 && flag_pic)
    : -1 },
#line 1829 "../../gcc/config/arm/thumb1.md"
  { "TARGET_THUMB1 && !arm_arch5t && !SIBLING_CALL_P (insn)",
    __builtin_constant_p 
#line 1829 "../../gcc/config/arm/thumb1.md"
(TARGET_THUMB1 && !arm_arch5t && !SIBLING_CALL_P (insn))
    ? (int) 
#line 1829 "../../gcc/config/arm/thumb1.md"
(TARGET_THUMB1 && !arm_arch5t && !SIBLING_CALL_P (insn))
    : -1 },
#line 12503 "../../gcc/config/arm/arm.md"
  { "TARGET_LDRD && TARGET_THUMB2 && reload_completed\n\
     && ((INTVAL (operands[1]) + 4) == INTVAL (operands[3]))\n\
     && (operands_ok_ldrd_strd (operands[2], operands[4],\n\
                                  operands[0], INTVAL (operands[1]),\n\
                                  false, false))",
    __builtin_constant_p 
#line 12503 "../../gcc/config/arm/arm.md"
(TARGET_LDRD && TARGET_THUMB2 && reload_completed
     && ((INTVAL (operands[1]) + 4) == INTVAL (operands[3]))
     && (operands_ok_ldrd_strd (operands[2], operands[4],
                                  operands[0], INTVAL (operands[1]),
                                  false, false)))
    ? (int) 
#line 12503 "../../gcc/config/arm/arm.md"
(TARGET_LDRD && TARGET_THUMB2 && reload_completed
     && ((INTVAL (operands[1]) + 4) == INTVAL (operands[3]))
     && (operands_ok_ldrd_strd (operands[2], operands[4],
                                  operands[0], INTVAL (operands[1]),
                                  false, false)))
    : -1 },
#line 1691 "../../gcc/config/arm/neon.md"
  { "TARGET_NEON && TARGET_FMA",
    __builtin_constant_p 
#line 1691 "../../gcc/config/arm/neon.md"
(TARGET_NEON && TARGET_FMA)
    ? (int) 
#line 1691 "../../gcc/config/arm/neon.md"
(TARGET_NEON && TARGET_FMA)
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_HAVE_FPCXT_CMSE && use_cmse)",
    __builtin_constant_p (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 1656 "../../gcc/config/arm/vfp.md"
(TARGET_HAVE_FPCXT_CMSE && use_cmse))
    ? (int) (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 1656 "../../gcc/config/arm/vfp.md"
(TARGET_HAVE_FPCXT_CMSE && use_cmse))
    : -1 },
#line 1429 "../../gcc/config/arm/thumb2.md"
  { "TARGET_THUMB2 && optimize_size && reload_completed",
    __builtin_constant_p 
#line 1429 "../../gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && optimize_size && reload_completed)
    ? (int) 
#line 1429 "../../gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && optimize_size && reload_completed)
    : -1 },
#line 49 "../../gcc/config/arm/vec-common.md"
  { "TARGET_NEON\n\
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V2SFmode))",
    __builtin_constant_p 
#line 49 "../../gcc/config/arm/vec-common.md"
(TARGET_NEON
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V2SFmode)))
    ? (int) 
#line 49 "../../gcc/config/arm/vec-common.md"
(TARGET_NEON
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V2SFmode)))
    : -1 },
#line 5488 "../../gcc/config/arm/arm.md"
  { "TARGET_32BIT ",
    __builtin_constant_p 
#line 5488 "../../gcc/config/arm/arm.md"
(TARGET_32BIT )
    ? (int) 
#line 5488 "../../gcc/config/arm/arm.md"
(TARGET_32BIT )
    : -1 },
#line 12624 "../../gcc/config/arm/arm.md"
  { "unaligned_access",
    __builtin_constant_p 
#line 12624 "../../gcc/config/arm/arm.md"
(unaligned_access)
    ? (int) 
#line 12624 "../../gcc/config/arm/arm.md"
(unaligned_access)
    : -1 },
#line 287 "../../gcc/config/arm/vec-common.md"
  { "ARM_HAVE_V8HI_LDST && !BYTES_BIG_ENDIAN\n\
  && unaligned_access && !TARGET_REALLY_IWMMXT",
    __builtin_constant_p 
#line 287 "../../gcc/config/arm/vec-common.md"
(ARM_HAVE_V8HI_LDST && !BYTES_BIG_ENDIAN
  && unaligned_access && !TARGET_REALLY_IWMMXT)
    ? (int) 
#line 287 "../../gcc/config/arm/vec-common.md"
(ARM_HAVE_V8HI_LDST && !BYTES_BIG_ENDIAN
  && unaligned_access && !TARGET_REALLY_IWMMXT)
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_ARM && TARGET_HARD_FLOAT\n\
   && (   s_register_operand (operands[0], SFmode)\n\
       || s_register_operand (operands[1], SFmode)))",
    __builtin_constant_p (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 590 "../../gcc/config/arm/vfp.md"
(TARGET_ARM && TARGET_HARD_FLOAT
   && (   s_register_operand (operands[0], SFmode)
       || s_register_operand (operands[1], SFmode))))
    ? (int) (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 590 "../../gcc/config/arm/vfp.md"
(TARGET_ARM && TARGET_HARD_FLOAT
   && (   s_register_operand (operands[0], SFmode)
       || s_register_operand (operands[1], SFmode))))
    : -1 },
#line 10007 "../../gcc/config/arm/mve.md"
  { "TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT",
    __builtin_constant_p 
#line 10007 "../../gcc/config/arm/mve.md"
(TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
    ? (int) 
#line 10007 "../../gcc/config/arm/mve.md"
(TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
    : -1 },
  { "(TARGET_NEON) && ( reload_completed)",
    __builtin_constant_p (
#line 5090 "../../gcc/config/arm/neon.md"
(TARGET_NEON) && 
#line 5092 "../../gcc/config/arm/neon.md"
( reload_completed))
    ? (int) (
#line 5090 "../../gcc/config/arm/neon.md"
(TARGET_NEON) && 
#line 5092 "../../gcc/config/arm/neon.md"
( reload_completed))
    : -1 },
#line 10485 "../../gcc/config/arm/mve.md"
  { "(TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V8HImode))\n\
   || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V8HImode))",
    __builtin_constant_p 
#line 10485 "../../gcc/config/arm/mve.md"
((TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V8HImode))
   || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V8HImode)))
    ? (int) 
#line 10485 "../../gcc/config/arm/mve.md"
((TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V8HImode))
   || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V8HImode)))
    : -1 },
#line 12721 "../../gcc/config/arm/arm.md"
  { "arm_coproc_builtin_available (VUNSPEC_MCR)",
    __builtin_constant_p 
#line 12721 "../../gcc/config/arm/arm.md"
(arm_coproc_builtin_available (VUNSPEC_MCR))
    ? (int) 
#line 12721 "../../gcc/config/arm/arm.md"
(arm_coproc_builtin_available (VUNSPEC_MCR))
    : -1 },
#line 520 "../../gcc/config/arm/neon.md"
  { "TARGET_NEON && !optimize_size\n\
   && flag_reciprocal_math",
    __builtin_constant_p 
#line 520 "../../gcc/config/arm/neon.md"
(TARGET_NEON && !optimize_size
   && flag_reciprocal_math)
    ? (int) 
#line 520 "../../gcc/config/arm/neon.md"
(TARGET_NEON && !optimize_size
   && flag_reciprocal_math)
    : -1 },
  { "(TARGET_32BIT) && ( (CONST_INT_P (operands[1])\n\
       && !const_ok_for_arm (INTVAL (operands[1]))))",
    __builtin_constant_p (
#line 2005 "../../gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 2016 "../../gcc/config/arm/arm.md"
( (CONST_INT_P (operands[1])
       && !const_ok_for_arm (INTVAL (operands[1])))))
    ? (int) (
#line 2005 "../../gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 2016 "../../gcc/config/arm/arm.md"
( (CONST_INT_P (operands[1])
       && !const_ok_for_arm (INTVAL (operands[1])))))
    : -1 },
#line 3641 "../../gcc/config/arm/arm.md"
  { "TARGET_32BIT\n\
   && CONST_INT_P (operands[2])\n\
   && !(const_ok_for_arm (INTVAL (operands[2]))\n\
        || (TARGET_THUMB2 && const_ok_for_arm (~INTVAL (operands[2]))))",
    __builtin_constant_p 
#line 3641 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && CONST_INT_P (operands[2])
   && !(const_ok_for_arm (INTVAL (operands[2]))
        || (TARGET_THUMB2 && const_ok_for_arm (~INTVAL (operands[2])))))
    ? (int) 
#line 3641 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && CONST_INT_P (operands[2])
   && !(const_ok_for_arm (INTVAL (operands[2]))
        || (TARGET_THUMB2 && const_ok_for_arm (~INTVAL (operands[2])))))
    : -1 },
  { "((TARGET_NEON || TARGET_HAVE_MVE)\n\
   && (register_operand (operands[0], EImode)\n\
       || register_operand (operands[1], EImode))) && (!TARGET_HAVE_MVE)",
    __builtin_constant_p (
#line 184 "../../gcc/config/arm/neon.md"
((TARGET_NEON || TARGET_HAVE_MVE)
   && (register_operand (operands[0], EImode)
       || register_operand (operands[1], EImode))) && 
#line 137 "../../gcc/config/arm/iterators.md"
(!TARGET_HAVE_MVE))
    ? (int) (
#line 184 "../../gcc/config/arm/neon.md"
((TARGET_NEON || TARGET_HAVE_MVE)
   && (register_operand (operands[0], EImode)
       || register_operand (operands[1], EImode))) && 
#line 137 "../../gcc/config/arm/iterators.md"
(!TARGET_HAVE_MVE))
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_DSP_MULTIPLY && ARM_Q_BIT_READ)",
    __builtin_constant_p (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 4257 "../../gcc/config/arm/arm.md"
(TARGET_DSP_MULTIPLY && ARM_Q_BIT_READ))
    ? (int) (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 4257 "../../gcc/config/arm/arm.md"
(TARGET_DSP_MULTIPLY && ARM_Q_BIT_READ))
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_32BIT && TARGET_VFP_BASE\n\
   && (   register_operand (operands[0], DImode)\n\
       || register_operand (operands[1], DImode))\n\
   && !((TARGET_NEON || TARGET_HAVE_MVE) && CONST_INT_P (operands[1])\n\
       && simd_immediate_valid_for_move (operands[1], DImode, NULL, NULL)))",
    __builtin_constant_p (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 334 "../../gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_VFP_BASE
   && (   register_operand (operands[0], DImode)
       || register_operand (operands[1], DImode))
   && !((TARGET_NEON || TARGET_HAVE_MVE) && CONST_INT_P (operands[1])
       && simd_immediate_valid_for_move (operands[1], DImode, NULL, NULL))))
    ? (int) (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 334 "../../gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_VFP_BASE
   && (   register_operand (operands[0], DImode)
       || register_operand (operands[1], DImode))
   && !((TARGET_NEON || TARGET_HAVE_MVE) && CONST_INT_P (operands[1])
       && simd_immediate_valid_for_move (operands[1], DImode, NULL, NULL))))
    : -1 },
#line 103 "../../gcc/config/arm/iwmmxt.md"
  { "TARGET_REALLY_IWMMXT\n\
   && (   register_operand (operands[0], DImode)\n\
       || register_operand (operands[1], DImode))",
    __builtin_constant_p 
#line 103 "../../gcc/config/arm/iwmmxt.md"
(TARGET_REALLY_IWMMXT
   && (   register_operand (operands[0], DImode)
       || register_operand (operands[1], DImode)))
    ? (int) 
#line 103 "../../gcc/config/arm/iwmmxt.md"
(TARGET_REALLY_IWMMXT
   && (   register_operand (operands[0], DImode)
       || register_operand (operands[1], DImode)))
    : -1 },
#line 12130 "../../gcc/config/arm/arm.md"
  { "TARGET_HARD_TP",
    __builtin_constant_p 
#line 12130 "../../gcc/config/arm/arm.md"
(TARGET_HARD_TP)
    ? (int) 
#line 12130 "../../gcc/config/arm/arm.md"
(TARGET_HARD_TP)
    : -1 },
  { "(TARGET_HAVE_LDREX && TARGET_HAVE_MEMORY_BARRIER) && (TARGET_THUMB1)",
    __builtin_constant_p (
#line 235 "../../gcc/config/arm/sync.md"
(TARGET_HAVE_LDREX && TARGET_HAVE_MEMORY_BARRIER) && 
#line 53 "../../gcc/config/arm/iterators.md"
(TARGET_THUMB1))
    ? (int) (
#line 235 "../../gcc/config/arm/sync.md"
(TARGET_HAVE_LDREX && TARGET_HAVE_MEMORY_BARRIER) && 
#line 53 "../../gcc/config/arm/iterators.md"
(TARGET_THUMB1))
    : -1 },
#line 12155 "../../gcc/config/arm/arm.md"
  { "TARGET_SOFT_TP && !TARGET_FDPIC",
    __builtin_constant_p 
#line 12155 "../../gcc/config/arm/arm.md"
(TARGET_SOFT_TP && !TARGET_FDPIC)
    ? (int) 
#line 12155 "../../gcc/config/arm/arm.md"
(TARGET_SOFT_TP && !TARGET_FDPIC)
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_ARM || (TARGET_THUMB2 && !CONST_INT_P (operands[2])))",
    __builtin_constant_p (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 1714 "../../gcc/config/arm/arm.md"
(TARGET_ARM || (TARGET_THUMB2 && !CONST_INT_P (operands[2]))))
    ? (int) (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 1714 "../../gcc/config/arm/arm.md"
(TARGET_ARM || (TARGET_THUMB2 && !CONST_INT_P (operands[2]))))
    : -1 },
  { "(TARGET_HAVE_LDREXBH && TARGET_HAVE_MEMORY_BARRIER) && (TARGET_THUMB1)",
    __builtin_constant_p (
#line 204 "../../gcc/config/arm/sync.md"
(TARGET_HAVE_LDREXBH && TARGET_HAVE_MEMORY_BARRIER) && 
#line 53 "../../gcc/config/arm/iterators.md"
(TARGET_THUMB1))
    ? (int) (
#line 204 "../../gcc/config/arm/sync.md"
(TARGET_HAVE_LDREXBH && TARGET_HAVE_MEMORY_BARRIER) && 
#line 53 "../../gcc/config/arm/iterators.md"
(TARGET_THUMB1))
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_32BIT && arm_arch6 && !ARM_Q_BIT_READ\n\
   && arm_sat_operator_match (operands[2], operands[1], NULL, NULL))",
    __builtin_constant_p (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 4400 "../../gcc/config/arm/arm.md"
(TARGET_32BIT && arm_arch6 && !ARM_Q_BIT_READ
   && arm_sat_operator_match (operands[2], operands[1], NULL, NULL)))
    ? (int) (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 4400 "../../gcc/config/arm/arm.md"
(TARGET_32BIT && arm_arch6 && !ARM_Q_BIT_READ
   && arm_sat_operator_match (operands[2], operands[1], NULL, NULL)))
    : -1 },
  { "(TARGET_HAVE_LDREXD && ARM_DOUBLEWORD_ALIGN\n\
	&& TARGET_HAVE_MEMORY_BARRIER) && ( reload_completed)",
    __builtin_constant_p (
#line 437 "../../gcc/config/arm/sync.md"
(TARGET_HAVE_LDREXD && ARM_DOUBLEWORD_ALIGN
	&& TARGET_HAVE_MEMORY_BARRIER) && 
#line 439 "../../gcc/config/arm/sync.md"
( reload_completed))
    ? (int) (
#line 437 "../../gcc/config/arm/sync.md"
(TARGET_HAVE_LDREXD && ARM_DOUBLEWORD_ALIGN
	&& TARGET_HAVE_MEMORY_BARRIER) && 
#line 439 "../../gcc/config/arm/sync.md"
( reload_completed))
    : -1 },
#line 491 "../../gcc/config/arm/neon.md"
  { "ARM_HAVE_NEON_V2DI_ARITH",
    __builtin_constant_p 
#line 491 "../../gcc/config/arm/neon.md"
(ARM_HAVE_NEON_V2DI_ARITH)
    ? (int) 
#line 491 "../../gcc/config/arm/neon.md"
(ARM_HAVE_NEON_V2DI_ARITH)
    : -1 },
#line 287 "../../gcc/config/arm/vec-common.md"
  { "ARM_HAVE_V4SI_LDST && !BYTES_BIG_ENDIAN\n\
  && unaligned_access && !TARGET_REALLY_IWMMXT",
    __builtin_constant_p 
#line 287 "../../gcc/config/arm/vec-common.md"
(ARM_HAVE_V4SI_LDST && !BYTES_BIG_ENDIAN
  && unaligned_access && !TARGET_REALLY_IWMMXT)
    ? (int) 
#line 287 "../../gcc/config/arm/vec-common.md"
(ARM_HAVE_V4SI_LDST && !BYTES_BIG_ENDIAN
  && unaligned_access && !TARGET_REALLY_IWMMXT)
    : -1 },
#line 40 "../../gcc/config/arm/sync.md"
  { "TARGET_HAVE_MEMORY_BARRIER",
    __builtin_constant_p 
#line 40 "../../gcc/config/arm/sync.md"
(TARGET_HAVE_MEMORY_BARRIER)
    ? (int) 
#line 40 "../../gcc/config/arm/sync.md"
(TARGET_HAVE_MEMORY_BARRIER)
    : -1 },
#line 9733 "../../gcc/config/arm/arm.md"
  { "arm_arch5t && TARGET_32BIT",
    __builtin_constant_p 
#line 9733 "../../gcc/config/arm/arm.md"
(arm_arch5t && TARGET_32BIT)
    ? (int) 
#line 9733 "../../gcc/config/arm/arm.md"
(arm_arch5t && TARGET_32BIT)
    : -1 },
#line 180 "../../gcc/config/arm/vfp.md"
  { "TARGET_THUMB2 && (TARGET_VFP_FP16INST || TARGET_HAVE_MVE)\n\
  && (register_operand (operands[0], HImode)\n\
       || register_operand (operands[1], HImode))",
    __builtin_constant_p 
#line 180 "../../gcc/config/arm/vfp.md"
(TARGET_THUMB2 && (TARGET_VFP_FP16INST || TARGET_HAVE_MVE)
  && (register_operand (operands[0], HImode)
       || register_operand (operands[1], HImode)))
    ? (int) 
#line 180 "../../gcc/config/arm/vfp.md"
(TARGET_THUMB2 && (TARGET_VFP_FP16INST || TARGET_HAVE_MVE)
  && (register_operand (operands[0], HImode)
       || register_operand (operands[1], HImode)))
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_ARM && arm_arch4 && !arm_arch6)",
    __builtin_constant_p (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 5918 "../../gcc/config/arm/arm.md"
(TARGET_ARM && arm_arch4 && !arm_arch6))
    ? (int) (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 5918 "../../gcc/config/arm/arm.md"
(TARGET_ARM && arm_arch4 && !arm_arch6))
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_32BIT && arm_arch5t)",
    __builtin_constant_p (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 12031 "../../gcc/config/arm/arm.md"
(TARGET_32BIT && arm_arch5t))
    ? (int) (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 12031 "../../gcc/config/arm/arm.md"
(TARGET_32BIT && arm_arch5t))
    : -1 },
#line 234 "../../gcc/config/arm/vec-common.md"
  { "(TARGET_COMPLEX || (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT))\n\
   && !BYTES_BIG_ENDIAN",
    __builtin_constant_p 
#line 234 "../../gcc/config/arm/vec-common.md"
((TARGET_COMPLEX || (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT))
   && !BYTES_BIG_ENDIAN)
    ? (int) 
#line 234 "../../gcc/config/arm/vec-common.md"
((TARGET_COMPLEX || (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT))
   && !BYTES_BIG_ENDIAN)
    : -1 },
#line 137 "../../gcc/config/arm/sync.md"
  { "(TARGET_HAVE_LDREXD || TARGET_HAVE_LPAE || TARGET_HAVE_LDACQEXD)\n\
   && ARM_DOUBLEWORD_ALIGN",
    __builtin_constant_p 
#line 137 "../../gcc/config/arm/sync.md"
((TARGET_HAVE_LDREXD || TARGET_HAVE_LPAE || TARGET_HAVE_LDACQEXD)
   && ARM_DOUBLEWORD_ALIGN)
    ? (int) 
#line 137 "../../gcc/config/arm/sync.md"
((TARGET_HAVE_LDREXD || TARGET_HAVE_LPAE || TARGET_HAVE_LDACQEXD)
   && ARM_DOUBLEWORD_ALIGN)
    : -1 },
#line 1859 "../../gcc/config/arm/neon.md"
  { "TARGET_FP16FML",
    __builtin_constant_p 
#line 1859 "../../gcc/config/arm/neon.md"
(TARGET_FP16FML)
    ? (int) 
#line 1859 "../../gcc/config/arm/neon.md"
(TARGET_FP16FML)
    : -1 },
#line 214 "../../gcc/config/arm/vec-common.md"
  { "ARM_HAVE_V8HF_ARITH && !TARGET_REALLY_IWMMXT",
    __builtin_constant_p 
#line 214 "../../gcc/config/arm/vec-common.md"
(ARM_HAVE_V8HF_ARITH && !TARGET_REALLY_IWMMXT)
    ? (int) 
#line 214 "../../gcc/config/arm/vec-common.md"
(ARM_HAVE_V8HF_ARITH && !TARGET_REALLY_IWMMXT)
    : -1 },
  { "(TARGET_HAVE_LDREXD && ARM_DOUBLEWORD_ALIGN\n\
	&& TARGET_HAVE_MEMORY_BARRIER) && (TARGET_THUMB1)",
    __builtin_constant_p (
#line 235 "../../gcc/config/arm/sync.md"
(TARGET_HAVE_LDREXD && ARM_DOUBLEWORD_ALIGN
	&& TARGET_HAVE_MEMORY_BARRIER) && 
#line 53 "../../gcc/config/arm/iterators.md"
(TARGET_THUMB1))
    ? (int) (
#line 235 "../../gcc/config/arm/sync.md"
(TARGET_HAVE_LDREXD && ARM_DOUBLEWORD_ALIGN
	&& TARGET_HAVE_MEMORY_BARRIER) && 
#line 53 "../../gcc/config/arm/iterators.md"
(TARGET_THUMB1))
    : -1 },
#line 2750 "../../gcc/config/arm/neon.md"
  { "TARGET_NEON && TARGET_VFP5",
    __builtin_constant_p 
#line 2750 "../../gcc/config/arm/neon.md"
(TARGET_NEON && TARGET_VFP5)
    ? (int) 
#line 2750 "../../gcc/config/arm/neon.md"
(TARGET_NEON && TARGET_VFP5)
    : -1 },
#line 957 "../../gcc/config/arm/thumb1.md"
  { "TARGET_THUMB1\n\
   && (   register_operand (operands[0], DFmode)\n\
       || register_operand (operands[1], DFmode))",
    __builtin_constant_p 
#line 957 "../../gcc/config/arm/thumb1.md"
(TARGET_THUMB1
   && (   register_operand (operands[0], DFmode)
       || register_operand (operands[1], DFmode)))
    ? (int) 
#line 957 "../../gcc/config/arm/thumb1.md"
(TARGET_THUMB1
   && (   register_operand (operands[0], DFmode)
       || register_operand (operands[1], DFmode)))
    : -1 },
#line 615 "../../gcc/config/arm/thumb1.md"
  { "TARGET_THUMB1\n\
   && (   register_operand (operands[0], DImode)\n\
       || register_operand (operands[1], DImode))",
    __builtin_constant_p 
#line 615 "../../gcc/config/arm/thumb1.md"
(TARGET_THUMB1
   && (   register_operand (operands[0], DImode)
       || register_operand (operands[1], DImode)))
    ? (int) 
#line 615 "../../gcc/config/arm/thumb1.md"
(TARGET_THUMB1
   && (   register_operand (operands[0], DImode)
       || register_operand (operands[1], DImode)))
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && ((TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_FMA && TARGET_VFP_DOUBLE) && (TARGET_VFP_DOUBLE))",
    __builtin_constant_p (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (
#line 1436 "../../gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_FMA && TARGET_VFP_DOUBLE) && 
#line 56 "../../gcc/config/arm/iterators.md"
(TARGET_VFP_DOUBLE)))
    ? (int) (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (
#line 1436 "../../gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_FMA && TARGET_VFP_DOUBLE) && 
#line 56 "../../gcc/config/arm/iterators.md"
(TARGET_VFP_DOUBLE)))
    : -1 },
#line 10485 "../../gcc/config/arm/mve.md"
  { "(TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V8HFmode))\n\
   || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V8HFmode))",
    __builtin_constant_p 
#line 10485 "../../gcc/config/arm/mve.md"
((TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V8HFmode))
   || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V8HFmode)))
    ? (int) 
#line 10485 "../../gcc/config/arm/mve.md"
((TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V8HFmode))
   || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V8HFmode)))
    : -1 },
#line 2016 "../../gcc/config/arm/vfp.md"
  { "TARGET_32BIT && TARGET_VFP_BASE",
    __builtin_constant_p 
#line 2016 "../../gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_VFP_BASE)
    ? (int) 
#line 2016 "../../gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_VFP_BASE)
    : -1 },
#line 300 "../../gcc/config/arm/iwmmxt.md"
  { "TARGET_REALLY_IWMMXT",
    __builtin_constant_p 
#line 300 "../../gcc/config/arm/iwmmxt.md"
(TARGET_REALLY_IWMMXT)
    ? (int) 
#line 300 "../../gcc/config/arm/iwmmxt.md"
(TARGET_REALLY_IWMMXT)
    : -1 },
#line 287 "../../gcc/config/arm/vec-common.md"
  { "ARM_HAVE_V8QI_LDST && !BYTES_BIG_ENDIAN\n\
  && unaligned_access && !TARGET_REALLY_IWMMXT",
    __builtin_constant_p 
#line 287 "../../gcc/config/arm/vec-common.md"
(ARM_HAVE_V8QI_LDST && !BYTES_BIG_ENDIAN
  && unaligned_access && !TARGET_REALLY_IWMMXT)
    ? (int) 
#line 287 "../../gcc/config/arm/vec-common.md"
(ARM_HAVE_V8QI_LDST && !BYTES_BIG_ENDIAN
  && unaligned_access && !TARGET_REALLY_IWMMXT)
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_INT_SIMD && !0)",
    __builtin_constant_p (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 135 "../../gcc/config/arm/arm-fixed.md"
(TARGET_INT_SIMD && !0))
    ? (int) (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 135 "../../gcc/config/arm/arm-fixed.md"
(TARGET_INT_SIMD && !0))
    : -1 },
#line 328 "../../gcc/config/arm/thumb2.md"
  { "TARGET_THUMB2",
    __builtin_constant_p 
#line 328 "../../gcc/config/arm/thumb2.md"
(TARGET_THUMB2)
    ? (int) 
#line 328 "../../gcc/config/arm/thumb2.md"
(TARGET_THUMB2)
    : -1 },
#line 88 "../../gcc/config/arm/neon.md"
  { "TARGET_NEON\n\
   && (register_operand (operands[0], V2DImode)\n\
       || register_operand (operands[1], V2DImode))",
    __builtin_constant_p 
#line 88 "../../gcc/config/arm/neon.md"
(TARGET_NEON
   && (register_operand (operands[0], V2DImode)
       || register_operand (operands[1], V2DImode)))
    ? (int) 
#line 88 "../../gcc/config/arm/neon.md"
(TARGET_NEON
   && (register_operand (operands[0], V2DImode)
       || register_operand (operands[1], V2DImode)))
    : -1 },
#line 3756 "../../gcc/config/arm/neon.md"
  { "TARGET_NEON && TARGET_FP16",
    __builtin_constant_p 
#line 3756 "../../gcc/config/arm/neon.md"
(TARGET_NEON && TARGET_FP16)
    ? (int) 
#line 3756 "../../gcc/config/arm/neon.md"
(TARGET_NEON && TARGET_FP16)
    : -1 },
#line 1229 "../../gcc/config/arm/neon.md"
  { "ARM_HAVE_NEON_V2SF_ARITH",
    __builtin_constant_p 
#line 1229 "../../gcc/config/arm/neon.md"
(ARM_HAVE_NEON_V2SF_ARITH)
    ? (int) 
#line 1229 "../../gcc/config/arm/neon.md"
(ARM_HAVE_NEON_V2SF_ARITH)
    : -1 },
#line 979 "../../gcc/config/arm/mve.md"
  { "TARGET_HAVE_MVE && !BYTES_BIG_ENDIAN",
    __builtin_constant_p 
#line 979 "../../gcc/config/arm/mve.md"
(TARGET_HAVE_MVE && !BYTES_BIG_ENDIAN)
    ? (int) 
#line 979 "../../gcc/config/arm/mve.md"
(TARGET_HAVE_MVE && !BYTES_BIG_ENDIAN)
    : -1 },
#line 12276 "../../gcc/config/arm/arm.md"
  { "TARGET_THUMB",
    __builtin_constant_p 
#line 12276 "../../gcc/config/arm/arm.md"
(TARGET_THUMB)
    ? (int) 
#line 12276 "../../gcc/config/arm/arm.md"
(TARGET_THUMB)
    : -1 },
#line 1188 "../../gcc/config/arm/ldmstm.md"
  { "((((REGNO (operands[6]) == REGNO (operands[0]))\n\
         && (REGNO (operands[7]) == REGNO (operands[1])))\n\
      || ((REGNO (operands[7]) == REGNO (operands[0]))\n\
         && (REGNO (operands[6]) == REGNO (operands[1]))))\n\
    && (peep2_regno_dead_p (3, REGNO (operands[0]))\n\
      || (REGNO (operands[0]) == REGNO (operands[4])))\n\
    && (peep2_regno_dead_p (3, REGNO (operands[1]))\n\
      || (REGNO (operands[1]) == REGNO (operands[4]))))",
    __builtin_constant_p 
#line 1188 "../../gcc/config/arm/ldmstm.md"
(((((REGNO (operands[6]) == REGNO (operands[0]))
         && (REGNO (operands[7]) == REGNO (operands[1])))
      || ((REGNO (operands[7]) == REGNO (operands[0]))
         && (REGNO (operands[6]) == REGNO (operands[1]))))
    && (peep2_regno_dead_p (3, REGNO (operands[0]))
      || (REGNO (operands[0]) == REGNO (operands[4])))
    && (peep2_regno_dead_p (3, REGNO (operands[1]))
      || (REGNO (operands[1]) == REGNO (operands[4])))))
    ? (int) 
#line 1188 "../../gcc/config/arm/ldmstm.md"
(((((REGNO (operands[6]) == REGNO (operands[0]))
         && (REGNO (operands[7]) == REGNO (operands[1])))
      || ((REGNO (operands[7]) == REGNO (operands[0]))
         && (REGNO (operands[6]) == REGNO (operands[1]))))
    && (peep2_regno_dead_p (3, REGNO (operands[0]))
      || (REGNO (operands[0]) == REGNO (operands[4])))
    && (peep2_regno_dead_p (3, REGNO (operands[1]))
      || (REGNO (operands[1]) == REGNO (operands[4])))))
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_32BIT && XVECLEN (operands[0], 0) == 2)",
    __builtin_constant_p (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 1070 "../../gcc/config/arm/ldmstm.md"
(TARGET_32BIT && XVECLEN (operands[0], 0) == 2))
    ? (int) (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 1070 "../../gcc/config/arm/ldmstm.md"
(TARGET_32BIT && XVECLEN (operands[0], 0) == 2))
    : -1 },
#line 4374 "../../gcc/config/arm/arm.md"
  { "TARGET_32BIT && arm_arch6 && ARM_Q_BIT_READ\n\
   && arm_sat_operator_match (operands[1], operands[2], NULL, NULL)",
    __builtin_constant_p 
#line 4374 "../../gcc/config/arm/arm.md"
(TARGET_32BIT && arm_arch6 && ARM_Q_BIT_READ
   && arm_sat_operator_match (operands[1], operands[2], NULL, NULL))
    ? (int) 
#line 4374 "../../gcc/config/arm/arm.md"
(TARGET_32BIT && arm_arch6 && ARM_Q_BIT_READ
   && arm_sat_operator_match (operands[1], operands[2], NULL, NULL))
    : -1 },
#line 4484 "../../gcc/config/arm/arm.md"
  { "TARGET_CDE",
    __builtin_constant_p 
#line 4484 "../../gcc/config/arm/arm.md"
(TARGET_CDE)
    ? (int) 
#line 4484 "../../gcc/config/arm/arm.md"
(TARGET_CDE)
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_ARM && XVECLEN (operands[0], 0) == 4)",
    __builtin_constant_p (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 688 "../../gcc/config/arm/ldmstm.md"
(TARGET_ARM && XVECLEN (operands[0], 0) == 4))
    ? (int) (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 688 "../../gcc/config/arm/ldmstm.md"
(TARGET_ARM && XVECLEN (operands[0], 0) == 4))
    : -1 },
#line 464 "../../gcc/config/arm/neon.md"
  { "TARGET_NEON || TARGET_HAVE_MVE",
    __builtin_constant_p 
#line 464 "../../gcc/config/arm/neon.md"
(TARGET_NEON || TARGET_HAVE_MVE)
    ? (int) 
#line 464 "../../gcc/config/arm/neon.md"
(TARGET_NEON || TARGET_HAVE_MVE)
    : -1 },
#line 1201 "../../gcc/config/arm/arm.md"
  { "TARGET_32BIT && peep2_reg_dead_p (3, operands[2])",
    __builtin_constant_p 
#line 1201 "../../gcc/config/arm/arm.md"
(TARGET_32BIT && peep2_reg_dead_p (3, operands[2]))
    ? (int) 
#line 1201 "../../gcc/config/arm/arm.md"
(TARGET_32BIT && peep2_reg_dead_p (3, operands[2]))
    : -1 },
#line 4831 "../../gcc/config/arm/arm.md"
  { "arm_arch_thumb2",
    __builtin_constant_p 
#line 4831 "../../gcc/config/arm/arm.md"
(arm_arch_thumb2)
    ? (int) 
#line 4831 "../../gcc/config/arm/arm.md"
(arm_arch_thumb2)
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_THUMB2 && reload_completed\n\
   && ((GET_CODE(operands[3]) != ROTATE && GET_CODE(operands[3]) != ROTATERT)\n\
       || REG_P (operands[2])))",
    __builtin_constant_p (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 1271 "../../gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && reload_completed
   && ((GET_CODE(operands[3]) != ROTATE && GET_CODE(operands[3]) != ROTATERT)
       || REG_P (operands[2]))))
    ? (int) (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 1271 "../../gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && reload_completed
   && ((GET_CODE(operands[3]) != ROTATE && GET_CODE(operands[3]) != ROTATERT)
       || REG_P (operands[2]))))
    : -1 },
#line 12740 "../../gcc/config/arm/arm.md"
  { "arm_coproc_builtin_available (VUNSPEC_MRC2)",
    __builtin_constant_p 
#line 12740 "../../gcc/config/arm/arm.md"
(arm_coproc_builtin_available (VUNSPEC_MRC2))
    ? (int) 
#line 12740 "../../gcc/config/arm/arm.md"
(arm_coproc_builtin_available (VUNSPEC_MRC2))
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_32BIT && arm_arch6 && !ARM_Q_BIT_READ)",
    __builtin_constant_p (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 481 "../../gcc/config/arm/arm-fixed.md"
(TARGET_32BIT && arm_arch6 && !ARM_Q_BIT_READ))
    ? (int) (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 481 "../../gcc/config/arm/arm-fixed.md"
(TARGET_32BIT && arm_arch6 && !ARM_Q_BIT_READ))
    : -1 },
#line 79 "../../gcc/config/arm/crypto.md"
  { "TARGET_CRYPTO\n\
   && arm_fusion_enabled_p (tune_params::FUSE_AES_AESMC)",
    __builtin_constant_p 
#line 79 "../../gcc/config/arm/crypto.md"
(TARGET_CRYPTO
   && arm_fusion_enabled_p (tune_params::FUSE_AES_AESMC))
    ? (int) 
#line 79 "../../gcc/config/arm/crypto.md"
(TARGET_CRYPTO
   && arm_fusion_enabled_p (tune_params::FUSE_AES_AESMC))
    : -1 },
#line 1818 "../../gcc/config/arm/thumb1.md"
  { "TARGET_THUMB1 && use_cmse && !SIBLING_CALL_P (insn)",
    __builtin_constant_p 
#line 1818 "../../gcc/config/arm/thumb1.md"
(TARGET_THUMB1 && use_cmse && !SIBLING_CALL_P (insn))
    ? (int) 
#line 1818 "../../gcc/config/arm/thumb1.md"
(TARGET_THUMB1 && use_cmse && !SIBLING_CALL_P (insn))
    : -1 },
#line 549 "../../gcc/config/arm/sync.md"
  { "TARGET_HAVE_LDACQEXD && ARM_DOUBLEWORD_ALIGN",
    __builtin_constant_p 
#line 549 "../../gcc/config/arm/sync.md"
(TARGET_HAVE_LDACQEXD && ARM_DOUBLEWORD_ALIGN)
    ? (int) 
#line 549 "../../gcc/config/arm/sync.md"
(TARGET_HAVE_LDACQEXD && ARM_DOUBLEWORD_ALIGN)
    : -1 },
#line 1083 "../../gcc/config/arm/ldmstm.md"
  { "TARGET_32BIT && XVECLEN (operands[0], 0) == 3",
    __builtin_constant_p 
#line 1083 "../../gcc/config/arm/ldmstm.md"
(TARGET_32BIT && XVECLEN (operands[0], 0) == 3)
    ? (int) 
#line 1083 "../../gcc/config/arm/ldmstm.md"
(TARGET_32BIT && XVECLEN (operands[0], 0) == 3)
    : -1 },
#line 3704 "../../gcc/config/arm/neon.md"
  { "TARGET_NEON && !flag_rounding_math",
    __builtin_constant_p 
#line 3704 "../../gcc/config/arm/neon.md"
(TARGET_NEON && !flag_rounding_math)
    ? (int) 
#line 3704 "../../gcc/config/arm/neon.md"
(TARGET_NEON && !flag_rounding_math)
    : -1 },
#line 202 "../../gcc/config/arm/vec-common.md"
  { "ARM_HAVE_V4HI_ARITH",
    __builtin_constant_p 
#line 202 "../../gcc/config/arm/vec-common.md"
(ARM_HAVE_V4HI_ARITH)
    ? (int) 
#line 202 "../../gcc/config/arm/vec-common.md"
(ARM_HAVE_V4HI_ARITH)
    : -1 },
#line 202 "../../gcc/config/arm/vec-common.md"
  { "ARM_HAVE_V2SI_ARITH",
    __builtin_constant_p 
#line 202 "../../gcc/config/arm/vec-common.md"
(ARM_HAVE_V2SI_ARITH)
    ? (int) 
#line 202 "../../gcc/config/arm/vec-common.md"
(ARM_HAVE_V2SI_ARITH)
    : -1 },
#line 397 "../../gcc/config/arm/vfp.md"
  { "TARGET_32BIT\n\
   && (TARGET_VFP_FP16INST || TARGET_HAVE_MVE)\n\
   && (s_register_operand (operands[0], BFmode)\n\
       || s_register_operand (operands[1], BFmode))",
    __builtin_constant_p 
#line 397 "../../gcc/config/arm/vfp.md"
(TARGET_32BIT
   && (TARGET_VFP_FP16INST || TARGET_HAVE_MVE)
   && (s_register_operand (operands[0], BFmode)
       || s_register_operand (operands[1], BFmode)))
    ? (int) 
#line 397 "../../gcc/config/arm/vfp.md"
(TARGET_32BIT
   && (TARGET_VFP_FP16INST || TARGET_HAVE_MVE)
   && (s_register_operand (operands[0], BFmode)
       || s_register_operand (operands[1], BFmode)))
    : -1 },
#line 12705 "../../gcc/config/arm/arm.md"
  { "arm_coproc_builtin_available (VUNSPEC_LDC)",
    __builtin_constant_p 
#line 12705 "../../gcc/config/arm/arm.md"
(arm_coproc_builtin_available (VUNSPEC_LDC))
    ? (int) 
#line 12705 "../../gcc/config/arm/arm.md"
(arm_coproc_builtin_available (VUNSPEC_LDC))
    : -1 },
#line 10840 "../../gcc/config/arm/mve.md"
  { "((TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V4SImode))\n\
    || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V4SImode)))\n\
   && !BYTES_BIG_ENDIAN && unaligned_access",
    __builtin_constant_p 
#line 10840 "../../gcc/config/arm/mve.md"
(((TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V4SImode))
    || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V4SImode)))
   && !BYTES_BIG_ENDIAN && unaligned_access)
    ? (int) 
#line 10840 "../../gcc/config/arm/mve.md"
(((TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V4SImode))
    || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V4SImode)))
   && !BYTES_BIG_ENDIAN && unaligned_access)
    : -1 },
#line 8750 "../../gcc/config/arm/arm.md"
  { "TARGET_32BIT\n\
   && !SIBLING_CALL_P (insn)\n\
   && (GET_CODE (operands[0]) == SYMBOL_REF)\n\
   && !arm_is_long_call_p (SYMBOL_REF_DECL (operands[0]))",
    __builtin_constant_p 
#line 8750 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && !SIBLING_CALL_P (insn)
   && (GET_CODE (operands[0]) == SYMBOL_REF)
   && !arm_is_long_call_p (SYMBOL_REF_DECL (operands[0])))
    ? (int) 
#line 8750 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && !SIBLING_CALL_P (insn)
   && (GET_CODE (operands[0]) == SYMBOL_REF)
   && !arm_is_long_call_p (SYMBOL_REF_DECL (operands[0])))
    : -1 },
#line 610 "../../gcc/config/arm/neon.md"
  { "ARM_HAVE_NEON_V8HF_ARITH",
    __builtin_constant_p 
#line 610 "../../gcc/config/arm/neon.md"
(ARM_HAVE_NEON_V8HF_ARITH)
    ? (int) 
#line 610 "../../gcc/config/arm/neon.md"
(ARM_HAVE_NEON_V8HF_ARITH)
    : -1 },
#line 1493 "../../gcc/config/arm/vfp.md"
  { "TARGET_32BIT && TARGET_HARD_FLOAT && (TARGET_FP16 || TARGET_VFP_FP16INST)",
    __builtin_constant_p 
#line 1493 "../../gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && (TARGET_FP16 || TARGET_VFP_FP16INST))
    ? (int) 
#line 1493 "../../gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && (TARGET_FP16 || TARGET_VFP_FP16INST))
    : -1 },
#line 479 "../../gcc/config/arm/sync.md"
  { "TARGET_HAVE_LDREX",
    __builtin_constant_p 
#line 479 "../../gcc/config/arm/sync.md"
(TARGET_HAVE_LDREX)
    ? (int) 
#line 479 "../../gcc/config/arm/sync.md"
(TARGET_HAVE_LDREX)
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_THUMB2 && optimize_size && reload_completed)",
    __builtin_constant_p (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 1429 "../../gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && optimize_size && reload_completed))
    ? (int) (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 1429 "../../gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && optimize_size && reload_completed))
    : -1 },
#line 238 "../../gcc/config/arm/thumb2.md"
  { "TARGET_THUMB2 && !TARGET_IWMMXT && !TARGET_HARD_FLOAT\n\
   && (   register_operand (operands[0], SImode)\n\
       || register_operand (operands[1], SImode))",
    __builtin_constant_p 
#line 238 "../../gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && !TARGET_IWMMXT && !TARGET_HARD_FLOAT
   && (   register_operand (operands[0], SImode)
       || register_operand (operands[1], SImode)))
    ? (int) 
#line 238 "../../gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && !TARGET_IWMMXT && !TARGET_HARD_FLOAT
   && (   register_operand (operands[0], SImode)
       || register_operand (operands[1], SImode)))
    : -1 },
#line 184 "../../gcc/config/arm/ldrdstrd.md"
  { "TARGET_LDRD && TARGET_ARM && reload_completed\n\
  && valid_operands_ldrd_strd (operands, false)",
    __builtin_constant_p 
#line 184 "../../gcc/config/arm/ldrdstrd.md"
(TARGET_LDRD && TARGET_ARM && reload_completed
  && valid_operands_ldrd_strd (operands, false))
    ? (int) 
#line 184 "../../gcc/config/arm/ldrdstrd.md"
(TARGET_LDRD && TARGET_ARM && reload_completed
  && valid_operands_ldrd_strd (operands, false))
    : -1 },
#line 896 "../../gcc/config/arm/vfp.md"
  { "TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_VFP_DOUBLE && reload_completed\n\
   && arm_general_register_operand (operands[0], DFmode)",
    __builtin_constant_p 
#line 896 "../../gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_VFP_DOUBLE && reload_completed
   && arm_general_register_operand (operands[0], DFmode))
    ? (int) 
#line 896 "../../gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_VFP_DOUBLE && reload_completed
   && arm_general_register_operand (operands[0], DFmode))
    : -1 },
#line 9865 "../../gcc/config/arm/arm.md"
  { "arm_arch5t && TARGET_32BIT && peep2_regno_dead_p (3, CC_REGNUM)\n\
  && !(TARGET_THUMB2 && optimize_insn_for_size_p ())",
    __builtin_constant_p 
#line 9865 "../../gcc/config/arm/arm.md"
(arm_arch5t && TARGET_32BIT && peep2_regno_dead_p (3, CC_REGNUM)
  && !(TARGET_THUMB2 && optimize_insn_for_size_p ()))
    ? (int) 
#line 9865 "../../gcc/config/arm/arm.md"
(arm_arch5t && TARGET_32BIT && peep2_regno_dead_p (3, CC_REGNUM)
  && !(TARGET_THUMB2 && optimize_insn_for_size_p ()))
    : -1 },
#line 8940 "../../gcc/config/arm/arm.md"
  { "TARGET_ARM   && use_simple_return_p ()",
    __builtin_constant_p 
#line 8940 "../../gcc/config/arm/arm.md"
(TARGET_ARM   && use_simple_return_p ())
    ? (int) 
#line 8940 "../../gcc/config/arm/arm.md"
(TARGET_ARM   && use_simple_return_p ())
    : -1 },
#line 3600 "../../gcc/config/arm/neon.md"
  { "TARGET_NEON && (TARGET_FP16 || TARGET_BF16_SIMD)",
    __builtin_constant_p 
#line 3600 "../../gcc/config/arm/neon.md"
(TARGET_NEON && (TARGET_FP16 || TARGET_BF16_SIMD))
    ? (int) 
#line 3600 "../../gcc/config/arm/neon.md"
(TARGET_NEON && (TARGET_FP16 || TARGET_BF16_SIMD))
    : -1 },
#line 10460 "../../gcc/config/arm/arm.md"
  { "TARGET_32BIT\n\
   && (arm_select_dominance_cc_mode (operands[3], operands[6], DOM_CC_X_AND_Y)\n\
       == CCmode)",
    __builtin_constant_p 
#line 10460 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (arm_select_dominance_cc_mode (operands[3], operands[6], DOM_CC_X_AND_Y)
       == CCmode))
    ? (int) 
#line 10460 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (arm_select_dominance_cc_mode (operands[3], operands[6], DOM_CC_X_AND_Y)
       == CCmode))
    : -1 },
#line 1546 "../../gcc/config/arm/thumb1.md"
  { "TARGET_THUMB1\n\
   && (GET_CODE (operands[4]) == EQ\n\
       || GET_CODE (operands[4]) == NE\n\
       || GET_CODE (operands[4]) == GE\n\
       || GET_CODE (operands[4]) == LT)",
    __builtin_constant_p 
#line 1546 "../../gcc/config/arm/thumb1.md"
(TARGET_THUMB1
   && (GET_CODE (operands[4]) == EQ
       || GET_CODE (operands[4]) == NE
       || GET_CODE (operands[4]) == GE
       || GET_CODE (operands[4]) == LT))
    ? (int) 
#line 1546 "../../gcc/config/arm/thumb1.md"
(TARGET_THUMB1
   && (GET_CODE (operands[4]) == EQ
       || GET_CODE (operands[4]) == NE
       || GET_CODE (operands[4]) == GE
       || GET_CODE (operands[4]) == LT))
    : -1 },
#line 181 "../../gcc/config/arm/sync.md"
  { "TARGET_HAVE_LDREXD && ARM_DOUBLEWORD_ALIGN\n\
	&& TARGET_HAVE_MEMORY_BARRIER",
    __builtin_constant_p 
#line 181 "../../gcc/config/arm/sync.md"
(TARGET_HAVE_LDREXD && ARM_DOUBLEWORD_ALIGN
	&& TARGET_HAVE_MEMORY_BARRIER)
    ? (int) 
#line 181 "../../gcc/config/arm/sync.md"
(TARGET_HAVE_LDREXD && ARM_DOUBLEWORD_ALIGN
	&& TARGET_HAVE_MEMORY_BARRIER)
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_HARD_FLOAT && TARGET_VFP5 )",
    __builtin_constant_p (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 2030 "../../gcc/config/arm/vfp.md"
(TARGET_HARD_FLOAT && TARGET_VFP5 ))
    ? (int) (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 2030 "../../gcc/config/arm/vfp.md"
(TARGET_HARD_FLOAT && TARGET_VFP5 ))
    : -1 },
#line 12143 "../../gcc/config/arm/arm.md"
  { "TARGET_SOFT_TP && TARGET_FDPIC",
    __builtin_constant_p 
#line 12143 "../../gcc/config/arm/arm.md"
(TARGET_SOFT_TP && TARGET_FDPIC)
    ? (int) 
#line 12143 "../../gcc/config/arm/arm.md"
(TARGET_SOFT_TP && TARGET_FDPIC)
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_32BIT\n\
   && (TARGET_VFP_FP16INST || TARGET_HAVE_MVE)\n\
   && (s_register_operand (operands[0], HFmode)\n\
       || s_register_operand (operands[1], HFmode)))",
    __builtin_constant_p (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 397 "../../gcc/config/arm/vfp.md"
(TARGET_32BIT
   && (TARGET_VFP_FP16INST || TARGET_HAVE_MVE)
   && (s_register_operand (operands[0], HFmode)
       || s_register_operand (operands[1], HFmode))))
    ? (int) (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 397 "../../gcc/config/arm/vfp.md"
(TARGET_32BIT
   && (TARGET_VFP_FP16INST || TARGET_HAVE_MVE)
   && (s_register_operand (operands[0], HFmode)
       || s_register_operand (operands[1], HFmode))))
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_ARM\n\
   && arm_arch4 && !TARGET_HARD_FLOAT\n\
   && (register_operand (operands[0], HImode)\n\
       || register_operand (operands[1], HImode)))",
    __builtin_constant_p (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 7109 "../../gcc/config/arm/arm.md"
(TARGET_ARM
   && arm_arch4 && !TARGET_HARD_FLOAT
   && (register_operand (operands[0], HImode)
       || register_operand (operands[1], HImode))))
    ? (int) (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 7109 "../../gcc/config/arm/arm.md"
(TARGET_ARM
   && arm_arch4 && !TARGET_HARD_FLOAT
   && (register_operand (operands[0], HImode)
       || register_operand (operands[1], HImode))))
    : -1 },
#line 661 "../../gcc/config/arm/thumb1.md"
  { "TARGET_THUMB1\n\
   && (   register_operand (operands[0], SImode)\n\
       || register_operand (operands[1], SImode))",
    __builtin_constant_p 
#line 661 "../../gcc/config/arm/thumb1.md"
(TARGET_THUMB1
   && (   register_operand (operands[0], SImode)
       || register_operand (operands[1], SImode)))
    ? (int) 
#line 661 "../../gcc/config/arm/thumb1.md"
(TARGET_THUMB1
   && (   register_operand (operands[0], SImode)
       || register_operand (operands[1], SImode)))
    : -1 },
#line 750 "../../gcc/config/arm/ldmstm.md"
  { "TARGET_32BIT && XVECLEN (operands[0], 0) == 4",
    __builtin_constant_p 
#line 750 "../../gcc/config/arm/ldmstm.md"
(TARGET_32BIT && XVECLEN (operands[0], 0) == 4)
    ? (int) 
#line 750 "../../gcc/config/arm/ldmstm.md"
(TARGET_32BIT && XVECLEN (operands[0], 0) == 4)
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_ARM && adjacent_mem_locations (operands[2], operands[3]))",
    __builtin_constant_p (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 11308 "../../gcc/config/arm/arm.md"
(TARGET_ARM && adjacent_mem_locations (operands[2], operands[3])))
    ? (int) (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 11308 "../../gcc/config/arm/arm.md"
(TARGET_ARM && adjacent_mem_locations (operands[2], operands[3])))
    : -1 },
#line 12785 "../../gcc/config/arm/arm.md"
  { "TARGET_EITHER",
    __builtin_constant_p 
#line 12785 "../../gcc/config/arm/arm.md"
(TARGET_EITHER)
    ? (int) 
#line 12785 "../../gcc/config/arm/arm.md"
(TARGET_EITHER)
    : -1 },
#line 181 "../../gcc/config/arm/sync.md"
  { "TARGET_HAVE_LDREXBH && TARGET_HAVE_MEMORY_BARRIER",
    __builtin_constant_p 
#line 181 "../../gcc/config/arm/sync.md"
(TARGET_HAVE_LDREXBH && TARGET_HAVE_MEMORY_BARRIER)
    ? (int) 
#line 181 "../../gcc/config/arm/sync.md"
(TARGET_HAVE_LDREXBH && TARGET_HAVE_MEMORY_BARRIER)
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_THUMB2 && arm_arch6)",
    __builtin_constant_p (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 1120 "../../gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && arm_arch6))
    ? (int) (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 1120 "../../gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && arm_arch6))
    : -1 },
#line 10818 "../../gcc/config/arm/mve.md"
  { "TARGET_CDE && TARGET_HAVE_MVE",
    __builtin_constant_p 
#line 10818 "../../gcc/config/arm/mve.md"
(TARGET_CDE && TARGET_HAVE_MVE)
    ? (int) 
#line 10818 "../../gcc/config/arm/mve.md"
(TARGET_CDE && TARGET_HAVE_MVE)
    : -1 },
#line 287 "../../gcc/config/arm/vec-common.md"
  { "ARM_HAVE_V16QI_LDST && !BYTES_BIG_ENDIAN\n\
  && unaligned_access && !TARGET_REALLY_IWMMXT",
    __builtin_constant_p 
#line 287 "../../gcc/config/arm/vec-common.md"
(ARM_HAVE_V16QI_LDST && !BYTES_BIG_ENDIAN
  && unaligned_access && !TARGET_REALLY_IWMMXT)
    ? (int) 
#line 287 "../../gcc/config/arm/vec-common.md"
(ARM_HAVE_V16QI_LDST && !BYTES_BIG_ENDIAN
  && unaligned_access && !TARGET_REALLY_IWMMXT)
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && ((TARGET_HARD_FLOAT && TARGET_VFP5 && TARGET_VFP_DOUBLE) && (TARGET_VFP_DOUBLE))",
    __builtin_constant_p (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (
#line 2030 "../../gcc/config/arm/vfp.md"
(TARGET_HARD_FLOAT && TARGET_VFP5 && TARGET_VFP_DOUBLE) && 
#line 56 "../../gcc/config/arm/iterators.md"
(TARGET_VFP_DOUBLE)))
    ? (int) (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (
#line 2030 "../../gcc/config/arm/vfp.md"
(TARGET_HARD_FLOAT && TARGET_VFP5 && TARGET_VFP_DOUBLE) && 
#line 56 "../../gcc/config/arm/iterators.md"
(TARGET_VFP_DOUBLE)))
    : -1 },
#line 10840 "../../gcc/config/arm/mve.md"
  { "((TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V8HImode))\n\
    || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V8HImode)))\n\
   && !BYTES_BIG_ENDIAN && unaligned_access",
    __builtin_constant_p 
#line 10840 "../../gcc/config/arm/mve.md"
(((TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V8HImode))
    || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V8HImode)))
   && !BYTES_BIG_ENDIAN && unaligned_access)
    ? (int) 
#line 10840 "../../gcc/config/arm/mve.md"
(((TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V8HImode))
    || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V8HImode)))
   && !BYTES_BIG_ENDIAN && unaligned_access)
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_FMA )",
    __builtin_constant_p (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 1436 "../../gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_FMA ))
    ? (int) (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 1436 "../../gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_FMA ))
    : -1 },
#line 11243 "../../gcc/config/arm/arm.md"
  { "TARGET_32BIT && !TARGET_COND_ARITH",
    __builtin_constant_p 
#line 11243 "../../gcc/config/arm/arm.md"
(TARGET_32BIT && !TARGET_COND_ARITH)
    ? (int) 
#line 11243 "../../gcc/config/arm/arm.md"
(TARGET_32BIT && !TARGET_COND_ARITH)
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_ARM && !arm_arch6)",
    __builtin_constant_p (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 5654 "../../gcc/config/arm/arm.md"
(TARGET_ARM && !arm_arch6))
    ? (int) (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 5654 "../../gcc/config/arm/arm.md"
(TARGET_ARM && !arm_arch6))
    : -1 },
#line 287 "../../gcc/config/arm/vec-common.md"
  { "ARM_HAVE_DI_LDST && !BYTES_BIG_ENDIAN\n\
  && unaligned_access && !TARGET_REALLY_IWMMXT",
    __builtin_constant_p 
#line 287 "../../gcc/config/arm/vec-common.md"
(ARM_HAVE_DI_LDST && !BYTES_BIG_ENDIAN
  && unaligned_access && !TARGET_REALLY_IWMMXT)
    ? (int) 
#line 287 "../../gcc/config/arm/vec-common.md"
(ARM_HAVE_DI_LDST && !BYTES_BIG_ENDIAN
  && unaligned_access && !TARGET_REALLY_IWMMXT)
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_VFP_DOUBLE\n\
  && !flag_rounding_math)",
    __builtin_constant_p (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 1163 "../../gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_VFP_DOUBLE
  && !flag_rounding_math))
    ? (int) (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 1163 "../../gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_VFP_DOUBLE
  && !flag_rounding_math))
    : -1 },
#line 2240 "../../gcc/config/arm/vfp.md"
  { "TARGET_CDE && (TARGET_ARM_FP || TARGET_HAVE_MVE)",
    __builtin_constant_p 
#line 2240 "../../gcc/config/arm/vfp.md"
(TARGET_CDE && (TARGET_ARM_FP || TARGET_HAVE_MVE))
    ? (int) 
#line 2240 "../../gcc/config/arm/vfp.md"
(TARGET_CDE && (TARGET_ARM_FP || TARGET_HAVE_MVE))
    : -1 },
#line 3663 "../../gcc/config/arm/arm.md"
  { "TARGET_ARM\n\
   && !const_ok_for_arm (INTVAL (operands[2]))\n\
   && const_ok_for_arm (~INTVAL (operands[2]))",
    __builtin_constant_p 
#line 3663 "../../gcc/config/arm/arm.md"
(TARGET_ARM
   && !const_ok_for_arm (INTVAL (operands[2]))
   && const_ok_for_arm (~INTVAL (operands[2])))
    ? (int) 
#line 3663 "../../gcc/config/arm/arm.md"
(TARGET_ARM
   && !const_ok_for_arm (INTVAL (operands[2]))
   && const_ok_for_arm (~INTVAL (operands[2])))
    : -1 },
#line 731 "../../gcc/config/arm/thumb1.md"
  { "TARGET_THUMB1 && satisfies_constraint_J (operands[1])",
    __builtin_constant_p 
#line 731 "../../gcc/config/arm/thumb1.md"
(TARGET_THUMB1 && satisfies_constraint_J (operands[1]))
    ? (int) 
#line 731 "../../gcc/config/arm/thumb1.md"
(TARGET_THUMB1 && satisfies_constraint_J (operands[1]))
    : -1 },
#line 12051 "../../gcc/config/arm/arm.md"
  { "TARGET_32BIT && arm_arch_thumb2",
    __builtin_constant_p 
#line 12051 "../../gcc/config/arm/arm.md"
(TARGET_32BIT && arm_arch_thumb2)
    ? (int) 
#line 12051 "../../gcc/config/arm/arm.md"
(TARGET_32BIT && arm_arch_thumb2)
    : -1 },
#line 2372 "../../gcc/config/arm/neon.md"
  { "TARGET_NEON && !(GET_MODE_CLASS (V8QImode) == MODE_VECTOR_FLOAT\n\
                    && !flag_unsafe_math_optimizations)",
    __builtin_constant_p 
#line 2372 "../../gcc/config/arm/neon.md"
(TARGET_NEON && !(GET_MODE_CLASS (V8QImode) == MODE_VECTOR_FLOAT
                    && !flag_unsafe_math_optimizations))
    ? (int) 
#line 2372 "../../gcc/config/arm/neon.md"
(TARGET_NEON && !(GET_MODE_CLASS (V8QImode) == MODE_VECTOR_FLOAT
                    && !flag_unsafe_math_optimizations))
    : -1 },
#line 391 "../../gcc/config/arm/arm-fixed.md"
  { "TARGET_DSP_MULTIPLY && arm_arch_thumb2",
    __builtin_constant_p 
#line 391 "../../gcc/config/arm/arm-fixed.md"
(TARGET_DSP_MULTIPLY && arm_arch_thumb2)
    ? (int) 
#line 391 "../../gcc/config/arm/arm-fixed.md"
(TARGET_DSP_MULTIPLY && arm_arch_thumb2)
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_32BIT && arm_arch6 && ARM_Q_BIT_READ\n\
   && arm_sat_operator_match (operands[2], operands[1], NULL, NULL))",
    __builtin_constant_p (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 4374 "../../gcc/config/arm/arm.md"
(TARGET_32BIT && arm_arch6 && ARM_Q_BIT_READ
   && arm_sat_operator_match (operands[2], operands[1], NULL, NULL)))
    ? (int) (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 4374 "../../gcc/config/arm/arm.md"
(TARGET_32BIT && arm_arch6 && ARM_Q_BIT_READ
   && arm_sat_operator_match (operands[2], operands[1], NULL, NULL)))
    : -1 },
#line 1678 "../../gcc/config/arm/vfp.md"
  { "TARGET_HAVE_FPCXT_CMSE && use_cmse && reload_completed",
    __builtin_constant_p 
#line 1678 "../../gcc/config/arm/vfp.md"
(TARGET_HAVE_FPCXT_CMSE && use_cmse && reload_completed)
    ? (int) 
#line 1678 "../../gcc/config/arm/vfp.md"
(TARGET_HAVE_FPCXT_CMSE && use_cmse && reload_completed)
    : -1 },
#line 1210 "../../gcc/config/arm/thumb2.md"
  { "TARGET_THUMB2 && !IS_CMSE_ENTRY (arm_current_func_type ())",
    __builtin_constant_p 
#line 1210 "../../gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && !IS_CMSE_ENTRY (arm_current_func_type ()))
    ? (int) 
#line 1210 "../../gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && !IS_CMSE_ENTRY (arm_current_func_type ()))
    : -1 },
#line 1473 "../../gcc/config/arm/neon.md"
  { "TARGET_NEON && (!false || flag_unsafe_math_optimizations)",
    __builtin_constant_p 
#line 1473 "../../gcc/config/arm/neon.md"
(TARGET_NEON && (!false || flag_unsafe_math_optimizations))
    ? (int) 
#line 1473 "../../gcc/config/arm/neon.md"
(TARGET_NEON && (!false || flag_unsafe_math_optimizations))
    : -1 },
  { "(ARM_HAVE_NEON_V4HF_ARITH) && (TARGET_NEON_FP16INST)",
    __builtin_constant_p (
#line 6408 "../../gcc/config/arm/neon.md"
(ARM_HAVE_NEON_V4HF_ARITH) && 
#line 153 "../../gcc/config/arm/iterators.md"
(TARGET_NEON_FP16INST))
    ? (int) (
#line 6408 "../../gcc/config/arm/neon.md"
(ARM_HAVE_NEON_V4HF_ARITH) && 
#line 153 "../../gcc/config/arm/iterators.md"
(TARGET_NEON_FP16INST))
    : -1 },
#line 12448 "../../gcc/config/arm/arm.md"
  { "arm_arch6",
    __builtin_constant_p 
#line 12448 "../../gcc/config/arm/arm.md"
(arm_arch6)
    ? (int) 
#line 12448 "../../gcc/config/arm/arm.md"
(arm_arch6)
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_THUMB2)",
    __builtin_constant_p (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 1546 "../../gcc/config/arm/thumb2.md"
(TARGET_THUMB2))
    ? (int) (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 1546 "../../gcc/config/arm/thumb2.md"
(TARGET_THUMB2))
    : -1 },
#line 1256 "../../gcc/config/arm/thumb2.md"
  { "TARGET_THUMB2 && reload_completed\n\
   && GET_CODE(operands[3]) != PLUS\n\
   && GET_CODE(operands[3]) != MINUS",
    __builtin_constant_p 
#line 1256 "../../gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && reload_completed
   && GET_CODE(operands[3]) != PLUS
   && GET_CODE(operands[3]) != MINUS)
    ? (int) 
#line 1256 "../../gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && reload_completed
   && GET_CODE(operands[3]) != PLUS
   && GET_CODE(operands[3]) != MINUS)
    : -1 },
#line 41 "../../gcc/config/arm/neon.md"
  { "TARGET_NEON\n\
   && (register_operand (operands[0], V8QImode)\n\
       || register_operand (operands[1], V8QImode))",
    __builtin_constant_p 
#line 41 "../../gcc/config/arm/neon.md"
(TARGET_NEON
   && (register_operand (operands[0], V8QImode)
       || register_operand (operands[1], V8QImode)))
    ? (int) 
#line 41 "../../gcc/config/arm/neon.md"
(TARGET_NEON
   && (register_operand (operands[0], V8QImode)
       || register_operand (operands[1], V8QImode)))
    : -1 },
  { "(TARGET_HAVE_LDREXBH && TARGET_HAVE_MEMORY_BARRIER) && (TARGET_32BIT)",
    __builtin_constant_p (
#line 204 "../../gcc/config/arm/sync.md"
(TARGET_HAVE_LDREXBH && TARGET_HAVE_MEMORY_BARRIER) && 
#line 53 "../../gcc/config/arm/iterators.md"
(TARGET_32BIT))
    ? (int) (
#line 204 "../../gcc/config/arm/sync.md"
(TARGET_HAVE_LDREXBH && TARGET_HAVE_MEMORY_BARRIER) && 
#line 53 "../../gcc/config/arm/iterators.md"
(TARGET_32BIT))
    : -1 },
#line 4374 "../../gcc/config/arm/arm.md"
  { "TARGET_32BIT && arm_arch6 && ARM_Q_BIT_READ\n\
   && arm_sat_operator_match (operands[2], operands[1], NULL, NULL)",
    __builtin_constant_p 
#line 4374 "../../gcc/config/arm/arm.md"
(TARGET_32BIT && arm_arch6 && ARM_Q_BIT_READ
   && arm_sat_operator_match (operands[2], operands[1], NULL, NULL))
    ? (int) 
#line 4374 "../../gcc/config/arm/arm.md"
(TARGET_32BIT && arm_arch6 && ARM_Q_BIT_READ
   && arm_sat_operator_match (operands[2], operands[1], NULL, NULL))
    : -1 },
#line 1484 "../../gcc/config/arm/vfp.md"
  { "TARGET_32BIT && TARGET_FP16_TO_DOUBLE",
    __builtin_constant_p 
#line 1484 "../../gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_FP16_TO_DOUBLE)
    ? (int) 
#line 1484 "../../gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_FP16_TO_DOUBLE)
    : -1 },
#line 7300 "../../gcc/config/arm/arm.md"
  { "TARGET_32BIT\n\
   && !TARGET_HARD_FLOAT\n\
   && !TARGET_HAVE_MVE\n\
   && (	  s_register_operand (operands[0], BFmode)\n\
       || s_register_operand (operands[1], BFmode))",
    __builtin_constant_p 
#line 7300 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && !TARGET_HARD_FLOAT
   && !TARGET_HAVE_MVE
   && (	  s_register_operand (operands[0], BFmode)
       || s_register_operand (operands[1], BFmode)))
    ? (int) 
#line 7300 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && !TARGET_HARD_FLOAT
   && !TARGET_HAVE_MVE
   && (	  s_register_operand (operands[0], BFmode)
       || s_register_operand (operands[1], BFmode)))
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_32BIT\n\
   && !TARGET_HARD_FLOAT\n\
   && !TARGET_HAVE_MVE\n\
   && (	  s_register_operand (operands[0], HFmode)\n\
       || s_register_operand (operands[1], HFmode)))",
    __builtin_constant_p (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 7300 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && !TARGET_HARD_FLOAT
   && !TARGET_HAVE_MVE
   && (	  s_register_operand (operands[0], HFmode)
       || s_register_operand (operands[1], HFmode))))
    ? (int) (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 7300 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && !TARGET_HARD_FLOAT
   && !TARGET_HAVE_MVE
   && (	  s_register_operand (operands[0], HFmode)
       || s_register_operand (operands[1], HFmode))))
    : -1 },
#line 41 "../../gcc/config/arm/neon.md"
  { "TARGET_NEON\n\
   && (register_operand (operands[0], V4HImode)\n\
       || register_operand (operands[1], V4HImode))",
    __builtin_constant_p 
#line 41 "../../gcc/config/arm/neon.md"
(TARGET_NEON
   && (register_operand (operands[0], V4HImode)
       || register_operand (operands[1], V4HImode)))
    ? (int) 
#line 41 "../../gcc/config/arm/neon.md"
(TARGET_NEON
   && (register_operand (operands[0], V4HImode)
       || register_operand (operands[1], V4HImode)))
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_HAVE_LDREXBH)",
    __builtin_constant_p (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 454 "../../gcc/config/arm/sync.md"
(TARGET_HAVE_LDREXBH))
    ? (int) (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 454 "../../gcc/config/arm/sync.md"
(TARGET_HAVE_LDREXBH))
    : -1 },
#line 316 "../../gcc/config/arm/thumb2.md"
  { "TARGET_THUMB2\n\
   && INTVAL (operands[5]) == INTVAL (operands[2]) + 4",
    __builtin_constant_p 
#line 316 "../../gcc/config/arm/thumb2.md"
(TARGET_THUMB2
   && INTVAL (operands[5]) == INTVAL (operands[2]) + 4)
    ? (int) 
#line 316 "../../gcc/config/arm/thumb2.md"
(TARGET_THUMB2
   && INTVAL (operands[5]) == INTVAL (operands[2]) + 4)
    : -1 },
#line 287 "../../gcc/config/arm/vec-common.md"
  { "ARM_HAVE_V4BF_LDST && !BYTES_BIG_ENDIAN\n\
  && unaligned_access && !TARGET_REALLY_IWMMXT",
    __builtin_constant_p 
#line 287 "../../gcc/config/arm/vec-common.md"
(ARM_HAVE_V4BF_LDST && !BYTES_BIG_ENDIAN
  && unaligned_access && !TARGET_REALLY_IWMMXT)
    ? (int) 
#line 287 "../../gcc/config/arm/vec-common.md"
(ARM_HAVE_V4BF_LDST && !BYTES_BIG_ENDIAN
  && unaligned_access && !TARGET_REALLY_IWMMXT)
    : -1 },
#line 571 "../../gcc/config/arm/neon.md"
  { "ARM_HAVE_NEON_V4SI_ARITH",
    __builtin_constant_p 
#line 571 "../../gcc/config/arm/neon.md"
(ARM_HAVE_NEON_V4SI_ARITH)
    ? (int) 
#line 571 "../../gcc/config/arm/neon.md"
(ARM_HAVE_NEON_V4SI_ARITH)
    : -1 },
#line 793 "../../gcc/config/arm/vfp.md"
  { "TARGET_THUMB2 && TARGET_VFP_BASE && !arm_restrict_it",
    __builtin_constant_p 
#line 793 "../../gcc/config/arm/vfp.md"
(TARGET_THUMB2 && TARGET_VFP_BASE && !arm_restrict_it)
    ? (int) 
#line 793 "../../gcc/config/arm/vfp.md"
(TARGET_THUMB2 && TARGET_VFP_BASE && !arm_restrict_it)
    : -1 },
#line 4958 "../../gcc/config/arm/arm.md"
  { "TARGET_32BIT && TARGET_LDRD",
    __builtin_constant_p 
#line 4958 "../../gcc/config/arm/arm.md"
(TARGET_32BIT && TARGET_LDRD)
    ? (int) 
#line 4958 "../../gcc/config/arm/arm.md"
(TARGET_32BIT && TARGET_LDRD)
    : -1 },
  { "((TARGET_HAVE_LDREX && TARGET_HAVE_MEMORY_BARRIER) && (TARGET_THUMB1)) && ( reload_completed)",
    __builtin_constant_p ((
#line 235 "../../gcc/config/arm/sync.md"
(TARGET_HAVE_LDREX && TARGET_HAVE_MEMORY_BARRIER) && 
#line 53 "../../gcc/config/arm/iterators.md"
(TARGET_THUMB1)) && 
#line 237 "../../gcc/config/arm/sync.md"
( reload_completed))
    ? (int) ((
#line 235 "../../gcc/config/arm/sync.md"
(TARGET_HAVE_LDREX && TARGET_HAVE_MEMORY_BARRIER) && 
#line 53 "../../gcc/config/arm/iterators.md"
(TARGET_THUMB1)) && 
#line 237 "../../gcc/config/arm/sync.md"
( reload_completed))
    : -1 },
#line 5575 "../../gcc/config/arm/arm.md"
  { "!TARGET_THUMB2 && !arm_arch6",
    __builtin_constant_p 
#line 5575 "../../gcc/config/arm/arm.md"
(!TARGET_THUMB2 && !arm_arch6)
    ? (int) 
#line 5575 "../../gcc/config/arm/arm.md"
(!TARGET_THUMB2 && !arm_arch6)
    : -1 },
#line 214 "../../gcc/config/arm/vec-common.md"
  { "ARM_HAVE_V2SF_ARITH && !TARGET_REALLY_IWMMXT",
    __builtin_constant_p 
#line 214 "../../gcc/config/arm/vec-common.md"
(ARM_HAVE_V2SF_ARITH && !TARGET_REALLY_IWMMXT)
    ? (int) 
#line 214 "../../gcc/config/arm/vec-common.md"
(ARM_HAVE_V2SF_ARITH && !TARGET_REALLY_IWMMXT)
    : -1 },
#line 261 "../../gcc/config/arm/neon.md"
  { "(TARGET_NEON || TARGET_HAVE_MVE) && reload_completed",
    __builtin_constant_p 
#line 261 "../../gcc/config/arm/neon.md"
((TARGET_NEON || TARGET_HAVE_MVE) && reload_completed)
    ? (int) 
#line 261 "../../gcc/config/arm/neon.md"
((TARGET_NEON || TARGET_HAVE_MVE) && reload_completed)
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_LDRD && TARGET_ARM && reload_completed\n\
  && valid_operands_ldrd_strd (operands, true))",
    __builtin_constant_p (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 164 "../../gcc/config/arm/ldrdstrd.md"
(TARGET_LDRD && TARGET_ARM && reload_completed
  && valid_operands_ldrd_strd (operands, true)))
    ? (int) (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 164 "../../gcc/config/arm/ldrdstrd.md"
(TARGET_LDRD && TARGET_ARM && reload_completed
  && valid_operands_ldrd_strd (operands, true)))
    : -1 },
#line 124 "../../gcc/config/arm/sync.md"
  { "ARM_DOUBLEWORD_ALIGN && TARGET_HAVE_LPAE",
    __builtin_constant_p 
#line 124 "../../gcc/config/arm/sync.md"
(ARM_DOUBLEWORD_ALIGN && TARGET_HAVE_LPAE)
    ? (int) 
#line 124 "../../gcc/config/arm/sync.md"
(ARM_DOUBLEWORD_ALIGN && TARGET_HAVE_LPAE)
    : -1 },
#line 202 "../../gcc/config/arm/vec-common.md"
  { "ARM_HAVE_V4SI_ARITH",
    __builtin_constant_p 
#line 202 "../../gcc/config/arm/vec-common.md"
(ARM_HAVE_V4SI_ARITH)
    ? (int) 
#line 202 "../../gcc/config/arm/vec-common.md"
(ARM_HAVE_V4SI_ARITH)
    : -1 },
#line 1143 "../../gcc/config/arm/vfp.md"
  { "TARGET_32BIT && TARGET_HARD_FLOAT && !flag_rounding_math",
    __builtin_constant_p 
#line 1143 "../../gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && !flag_rounding_math)
    ? (int) 
#line 1143 "../../gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && !flag_rounding_math)
    : -1 },
#line 202 "../../gcc/config/arm/vec-common.md"
  { "ARM_HAVE_V8QI_ARITH",
    __builtin_constant_p 
#line 202 "../../gcc/config/arm/vec-common.md"
(ARM_HAVE_V8QI_ARITH)
    ? (int) 
#line 202 "../../gcc/config/arm/vec-common.md"
(ARM_HAVE_V8QI_ARITH)
    : -1 },
#line 11854 "../../gcc/config/arm/arm.md"
  { "TARGET_32BIT && (reload_in_progress || reload_completed)",
    __builtin_constant_p 
#line 11854 "../../gcc/config/arm/arm.md"
(TARGET_32BIT && (reload_in_progress || reload_completed))
    ? (int) 
#line 11854 "../../gcc/config/arm/arm.md"
(TARGET_32BIT && (reload_in_progress || reload_completed))
    : -1 },
#line 12518 "../../gcc/config/arm/arm.md"
  { "TARGET_LDRD && TARGET_THUMB2 && reload_completed\n\
     && (operands_ok_ldrd_strd (operands[1], operands[2],\n\
                                  operands[0], 0, false, false))",
    __builtin_constant_p 
#line 12518 "../../gcc/config/arm/arm.md"
(TARGET_LDRD && TARGET_THUMB2 && reload_completed
     && (operands_ok_ldrd_strd (operands[1], operands[2],
                                  operands[0], 0, false, false)))
    ? (int) 
#line 12518 "../../gcc/config/arm/arm.md"
(TARGET_LDRD && TARGET_THUMB2 && reload_completed
     && (operands_ok_ldrd_strd (operands[1], operands[2],
                                  operands[0], 0, false, false)))
    : -1 },
#line 12773 "../../gcc/config/arm/arm.md"
  { "arm_coproc_builtin_available (VUNSPEC_MRRC)",
    __builtin_constant_p 
#line 12773 "../../gcc/config/arm/arm.md"
(arm_coproc_builtin_available (VUNSPEC_MRRC))
    ? (int) 
#line 12773 "../../gcc/config/arm/arm.md"
(arm_coproc_builtin_available (VUNSPEC_MRRC))
    : -1 },
#line 4153 "../../gcc/config/arm/arm.md"
  { "TARGET_32BIT && !arm_eliminable_register (operands[1]) && !arm_restrict_it",
    __builtin_constant_p 
#line 4153 "../../gcc/config/arm/arm.md"
(TARGET_32BIT && !arm_eliminable_register (operands[1]) && !arm_restrict_it)
    ? (int) 
#line 4153 "../../gcc/config/arm/arm.md"
(TARGET_32BIT && !arm_eliminable_register (operands[1]) && !arm_restrict_it)
    : -1 },
#line 4400 "../../gcc/config/arm/arm.md"
  { "TARGET_32BIT && arm_arch6 && !ARM_Q_BIT_READ\n\
   && arm_sat_operator_match (operands[2], operands[1], NULL, NULL)",
    __builtin_constant_p 
#line 4400 "../../gcc/config/arm/arm.md"
(TARGET_32BIT && arm_arch6 && !ARM_Q_BIT_READ
   && arm_sat_operator_match (operands[2], operands[1], NULL, NULL))
    ? (int) 
#line 4400 "../../gcc/config/arm/arm.md"
(TARGET_32BIT && arm_arch6 && !ARM_Q_BIT_READ
   && arm_sat_operator_match (operands[2], operands[1], NULL, NULL))
    : -1 },
#line 1868 "../../gcc/config/arm/vfp.md"
  { "TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_VFP3 && !flag_rounding_math\n\
  && !TARGET_VFP_SINGLE",
    __builtin_constant_p 
#line 1868 "../../gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_VFP3 && !flag_rounding_math
  && !TARGET_VFP_SINGLE)
    ? (int) 
#line 1868 "../../gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_VFP3 && !flag_rounding_math
  && !TARGET_VFP_SINGLE)
    : -1 },
#line 5881 "../../gcc/config/arm/arm.md"
  { "TARGET_ARM && arm_arch4",
    __builtin_constant_p 
#line 5881 "../../gcc/config/arm/arm.md"
(TARGET_ARM && arm_arch4)
    ? (int) 
#line 5881 "../../gcc/config/arm/arm.md"
(TARGET_ARM && arm_arch4)
    : -1 },
#line 1242 "../../gcc/config/arm/neon.md"
  { "ARM_HAVE_NEON_V8HI_ARITH && !BYTES_BIG_ENDIAN",
    __builtin_constant_p 
#line 1242 "../../gcc/config/arm/neon.md"
(ARM_HAVE_NEON_V8HI_ARITH && !BYTES_BIG_ENDIAN)
    ? (int) 
#line 1242 "../../gcc/config/arm/neon.md"
(ARM_HAVE_NEON_V8HI_ARITH && !BYTES_BIG_ENDIAN)
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_THUMB2 && TARGET_HAVE_FPCXT_CMSE && use_cmse)",
    __builtin_constant_p (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 1665 "../../gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && TARGET_HAVE_FPCXT_CMSE && use_cmse))
    ? (int) (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 1665 "../../gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && TARGET_HAVE_FPCXT_CMSE && use_cmse))
    : -1 },
  { "(TARGET_ARM && !arm_borrow_operation (operands[1], SImode)) && ( true)",
    __builtin_constant_p (
#line 8016 "../../gcc/config/arm/arm.md"
(TARGET_ARM && !arm_borrow_operation (operands[1], SImode)) && 
#line 8018 "../../gcc/config/arm/arm.md"
( true))
    ? (int) (
#line 8016 "../../gcc/config/arm/arm.md"
(TARGET_ARM && !arm_borrow_operation (operands[1], SImode)) && 
#line 8018 "../../gcc/config/arm/arm.md"
( true))
    : -1 },
#line 10330 "../../gcc/config/arm/arm.md"
  { "TARGET_32BIT\n\
   && (arm_select_dominance_cc_mode (operands[3], operands[6], DOM_CC_X_OR_Y)\n\
       != CCmode)",
    __builtin_constant_p 
#line 10330 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (arm_select_dominance_cc_mode (operands[3], operands[6], DOM_CC_X_OR_Y)
       != CCmode))
    ? (int) 
#line 10330 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (arm_select_dominance_cc_mode (operands[3], operands[6], DOM_CC_X_OR_Y)
       != CCmode))
    : -1 },
  { "(ARM_HAVE_NEON_V8HF_ARITH) && (TARGET_NEON_FP16INST)",
    __builtin_constant_p (
#line 6408 "../../gcc/config/arm/neon.md"
(ARM_HAVE_NEON_V8HF_ARITH) && 
#line 154 "../../gcc/config/arm/iterators.md"
(TARGET_NEON_FP16INST))
    ? (int) (
#line 6408 "../../gcc/config/arm/neon.md"
(ARM_HAVE_NEON_V8HF_ARITH) && 
#line 154 "../../gcc/config/arm/iterators.md"
(TARGET_NEON_FP16INST))
    : -1 },
#line 582 "../../gcc/config/arm/thumb2.md"
  { "TARGET_THUMB2 && use_cmse && TARGET_HAVE_FPCXT_CMSE",
    __builtin_constant_p 
#line 582 "../../gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && use_cmse && TARGET_HAVE_FPCXT_CMSE)
    ? (int) 
#line 582 "../../gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && use_cmse && TARGET_HAVE_FPCXT_CMSE)
    : -1 },
#line 334 "../../gcc/config/arm/vfp.md"
  { "TARGET_32BIT && TARGET_VFP_BASE\n\
   && (   register_operand (operands[0], DImode)\n\
       || register_operand (operands[1], DImode))\n\
   && !((TARGET_NEON || TARGET_HAVE_MVE) && CONST_INT_P (operands[1])\n\
       && simd_immediate_valid_for_move (operands[1], DImode, NULL, NULL))",
    __builtin_constant_p 
#line 334 "../../gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_VFP_BASE
   && (   register_operand (operands[0], DImode)
       || register_operand (operands[1], DImode))
   && !((TARGET_NEON || TARGET_HAVE_MVE) && CONST_INT_P (operands[1])
       && simd_immediate_valid_for_move (operands[1], DImode, NULL, NULL)))
    ? (int) 
#line 334 "../../gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_VFP_BASE
   && (   register_operand (operands[0], DImode)
       || register_operand (operands[1], DImode))
   && !((TARGET_NEON || TARGET_HAVE_MVE) && CONST_INT_P (operands[1])
       && simd_immediate_valid_for_move (operands[1], DImode, NULL, NULL)))
    : -1 },
#line 595 "../../gcc/config/arm/thumb2.md"
  { "TARGET_THUMB2 && use_cmse && !TARGET_HAVE_FPCXT_CMSE",
    __builtin_constant_p 
#line 595 "../../gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && use_cmse && !TARGET_HAVE_FPCXT_CMSE)
    ? (int) 
#line 595 "../../gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && use_cmse && !TARGET_HAVE_FPCXT_CMSE)
    : -1 },
#line 1355 "../../gcc/config/arm/thumb2.md"
  { "TARGET_THUMB2\n\
   && satisfies_constraint_Px (operands[2])",
    __builtin_constant_p 
#line 1355 "../../gcc/config/arm/thumb2.md"
(TARGET_THUMB2
   && satisfies_constraint_Px (operands[2]))
    ? (int) 
#line 1355 "../../gcc/config/arm/thumb2.md"
(TARGET_THUMB2
   && satisfies_constraint_Px (operands[2]))
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (ARM_DOUBLEWORD_ALIGN && TARGET_HAVE_LPAE)",
    __builtin_constant_p (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 124 "../../gcc/config/arm/sync.md"
(ARM_DOUBLEWORD_ALIGN && TARGET_HAVE_LPAE))
    ? (int) (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 124 "../../gcc/config/arm/sync.md"
(ARM_DOUBLEWORD_ALIGN && TARGET_HAVE_LPAE))
    : -1 },
#line 3015 "../../gcc/config/arm/arm.md"
  { "TARGET_32BIT\n\
   && CONST_INT_P (operands[2])\n\
   && !(const_ok_for_arm (INTVAL (operands[2]))\n\
	|| const_ok_for_arm (~INTVAL (operands[2])))",
    __builtin_constant_p 
#line 3015 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && CONST_INT_P (operands[2])
   && !(const_ok_for_arm (INTVAL (operands[2]))
	|| const_ok_for_arm (~INTVAL (operands[2]))))
    ? (int) 
#line 3015 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && CONST_INT_P (operands[2])
   && !(const_ok_for_arm (INTVAL (operands[2]))
	|| const_ok_for_arm (~INTVAL (operands[2]))))
    : -1 },
#line 12436 "../../gcc/config/arm/arm.md"
  { "arm_arch6\n\
   && aarch_rev16_shleft_mask_imm_p (operands[3], SImode)\n\
   && aarch_rev16_shright_mask_imm_p (operands[2], SImode)",
    __builtin_constant_p 
#line 12436 "../../gcc/config/arm/arm.md"
(arm_arch6
   && aarch_rev16_shleft_mask_imm_p (operands[3], SImode)
   && aarch_rev16_shright_mask_imm_p (operands[2], SImode))
    ? (int) 
#line 12436 "../../gcc/config/arm/arm.md"
(arm_arch6
   && aarch_rev16_shleft_mask_imm_p (operands[3], SImode)
   && aarch_rev16_shright_mask_imm_p (operands[2], SImode))
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_ARM && USE_RETURN_INSN (FALSE))",
    __builtin_constant_p (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 8919 "../../gcc/config/arm/arm.md"
(TARGET_ARM && USE_RETURN_INSN (FALSE)))
    ? (int) (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 8919 "../../gcc/config/arm/arm.md"
(TARGET_ARM && USE_RETURN_INSN (FALSE)))
    : -1 },
#line 867 "../../gcc/config/arm/ldmstm.md"
  { "TARGET_THUMB1 && XVECLEN (operands[0], 0) == 2",
    __builtin_constant_p 
#line 867 "../../gcc/config/arm/ldmstm.md"
(TARGET_THUMB1 && XVECLEN (operands[0], 0) == 2)
    ? (int) 
#line 867 "../../gcc/config/arm/ldmstm.md"
(TARGET_THUMB1 && XVECLEN (operands[0], 0) == 2)
    : -1 },
#line 8467 "../../gcc/config/arm/arm.md"
  { "TARGET_ARM && TARGET_SOFT_FLOAT",
    __builtin_constant_p 
#line 8467 "../../gcc/config/arm/arm.md"
(TARGET_ARM && TARGET_SOFT_FLOAT)
    ? (int) 
#line 8467 "../../gcc/config/arm/arm.md"
(TARGET_ARM && TARGET_SOFT_FLOAT)
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_INT_SIMD && ARM_Q_BIT_READ)",
    __builtin_constant_p (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 6063 "../../gcc/config/arm/arm.md"
(TARGET_INT_SIMD && ARM_Q_BIT_READ))
    ? (int) (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 6063 "../../gcc/config/arm/arm.md"
(TARGET_INT_SIMD && ARM_Q_BIT_READ))
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_32BIT && XVECLEN (operands[0], 0) == 3)",
    __builtin_constant_p (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 1083 "../../gcc/config/arm/ldmstm.md"
(TARGET_32BIT && XVECLEN (operands[0], 0) == 3))
    ? (int) (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 1083 "../../gcc/config/arm/ldmstm.md"
(TARGET_32BIT && XVECLEN (operands[0], 0) == 3))
    : -1 },
#line 135 "../../gcc/config/arm/arm-fixed.md"
  { "TARGET_INT_SIMD && !0",
    __builtin_constant_p 
#line 135 "../../gcc/config/arm/arm-fixed.md"
(TARGET_INT_SIMD && !0)
    ? (int) 
#line 135 "../../gcc/config/arm/arm-fixed.md"
(TARGET_INT_SIMD && !0)
    : -1 },
#line 239 "../../gcc/config/arm/neon.md"
  { "TARGET_NEON && reload_completed",
    __builtin_constant_p 
#line 239 "../../gcc/config/arm/neon.md"
(TARGET_NEON && reload_completed)
    ? (int) 
#line 239 "../../gcc/config/arm/neon.md"
(TARGET_NEON && reload_completed)
    : -1 },
#line 2096 "../../gcc/config/arm/vfp.md"
  { "TARGET_HARD_FLOAT && TARGET_VFP5 ",
    __builtin_constant_p 
#line 2096 "../../gcc/config/arm/vfp.md"
(TARGET_HARD_FLOAT && TARGET_VFP5 )
    ? (int) 
#line 2096 "../../gcc/config/arm/vfp.md"
(TARGET_HARD_FLOAT && TARGET_VFP5 )
    : -1 },
#line 590 "../../gcc/config/arm/vfp.md"
  { "TARGET_ARM && TARGET_HARD_FLOAT\n\
   && (   s_register_operand (operands[0], SFmode)\n\
       || s_register_operand (operands[1], SFmode))",
    __builtin_constant_p 
#line 590 "../../gcc/config/arm/vfp.md"
(TARGET_ARM && TARGET_HARD_FLOAT
   && (   s_register_operand (operands[0], SFmode)
       || s_register_operand (operands[1], SFmode)))
    ? (int) 
#line 590 "../../gcc/config/arm/vfp.md"
(TARGET_ARM && TARGET_HARD_FLOAT
   && (   s_register_operand (operands[0], SFmode)
       || s_register_operand (operands[1], SFmode)))
    : -1 },
#line 620 "../../gcc/config/arm/neon.md"
  { "ARM_HAVE_NEON_V4SF_ARITH && TARGET_FMA",
    __builtin_constant_p 
#line 620 "../../gcc/config/arm/neon.md"
(ARM_HAVE_NEON_V4SF_ARITH && TARGET_FMA)
    ? (int) 
#line 620 "../../gcc/config/arm/neon.md"
(ARM_HAVE_NEON_V4SF_ARITH && TARGET_FMA)
    : -1 },
#line 12597 "../../gcc/config/arm/arm.md"
  { "TARGET_SOFT_FLOAT && arm_arch_thumb2",
    __builtin_constant_p 
#line 12597 "../../gcc/config/arm/arm.md"
(TARGET_SOFT_FLOAT && arm_arch_thumb2)
    ? (int) 
#line 12597 "../../gcc/config/arm/arm.md"
(TARGET_SOFT_FLOAT && arm_arch_thumb2)
    : -1 },
#line 3101 "../../gcc/config/arm/arm.md"
  { "TARGET_32BIT\n\
   && (INTVAL (operands[3]) >= 0 && INTVAL (operands[3]) < 32\n\
       && INTVAL (operands[2]) > 0 \n\
       && INTVAL (operands[2]) + (INTVAL (operands[3]) & 1) <= 8\n\
       && INTVAL (operands[2]) + INTVAL (operands[3]) <= 32)",
    __builtin_constant_p 
#line 3101 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (INTVAL (operands[3]) >= 0 && INTVAL (operands[3]) < 32
       && INTVAL (operands[2]) > 0 
       && INTVAL (operands[2]) + (INTVAL (operands[3]) & 1) <= 8
       && INTVAL (operands[2]) + INTVAL (operands[3]) <= 32))
    ? (int) 
#line 3101 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (INTVAL (operands[3]) >= 0 && INTVAL (operands[3]) < 32
       && INTVAL (operands[2]) > 0 
       && INTVAL (operands[2]) + (INTVAL (operands[3]) & 1) <= 8
       && INTVAL (operands[2]) + INTVAL (operands[3]) <= 32))
    : -1 },
#line 313 "../../gcc/config/arm/neon.md"
  { "TARGET_NEON && !BYTES_BIG_ENDIAN && unaligned_access",
    __builtin_constant_p 
#line 313 "../../gcc/config/arm/neon.md"
(TARGET_NEON && !BYTES_BIG_ENDIAN && unaligned_access)
    ? (int) 
#line 313 "../../gcc/config/arm/neon.md"
(TARGET_NEON && !BYTES_BIG_ENDIAN && unaligned_access)
    : -1 },
#line 1566 "../../gcc/config/arm/thumb2.md"
  { "TARGET_THUMB2\n\
   && (INTVAL (operands[2]) >= 0 && INTVAL (operands[2]) < 32)\n\
   && peep2_reg_dead_p (2, operands[0])",
    __builtin_constant_p 
#line 1566 "../../gcc/config/arm/thumb2.md"
(TARGET_THUMB2
   && (INTVAL (operands[2]) >= 0 && INTVAL (operands[2]) < 32)
   && peep2_reg_dead_p (2, operands[0]))
    ? (int) 
#line 1566 "../../gcc/config/arm/thumb2.md"
(TARGET_THUMB2
   && (INTVAL (operands[2]) >= 0 && INTVAL (operands[2]) < 32)
   && peep2_reg_dead_p (2, operands[0]))
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_THUMB2 && !TARGET_IWMMXT && !TARGET_HARD_FLOAT\n\
   && (   register_operand (operands[0], SImode)\n\
       || register_operand (operands[1], SImode)))",
    __builtin_constant_p (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 238 "../../gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && !TARGET_IWMMXT && !TARGET_HARD_FLOAT
   && (   register_operand (operands[0], SImode)
       || register_operand (operands[1], SImode))))
    ? (int) (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 238 "../../gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && !TARGET_IWMMXT && !TARGET_HARD_FLOAT
   && (   register_operand (operands[0], SImode)
       || register_operand (operands[1], SImode))))
    : -1 },
#line 454 "../../gcc/config/arm/sync.md"
  { "TARGET_HAVE_LDREXBH",
    __builtin_constant_p 
#line 454 "../../gcc/config/arm/sync.md"
(TARGET_HAVE_LDREXBH)
    ? (int) 
#line 454 "../../gcc/config/arm/sync.md"
(TARGET_HAVE_LDREXBH)
    : -1 },
#line 1163 "../../gcc/config/arm/vfp.md"
  { "TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_VFP_DOUBLE\n\
  && !flag_rounding_math",
    __builtin_constant_p 
#line 1163 "../../gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_VFP_DOUBLE
  && !flag_rounding_math)
    ? (int) 
#line 1163 "../../gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_VFP_DOUBLE
  && !flag_rounding_math)
    : -1 },
#line 109 "../../gcc/config/arm/ldrdstrd.md"
  { "TARGET_LDRD && TARGET_ARM\n\
   && (  ((rtx_equal_p(operands[0], operands[6])) && (rtx_equal_p(operands[1], operands[7])))\n\
	||((rtx_equal_p(operands[0], operands[7])) && (rtx_equal_p(operands[1], operands[6]))))\n\
   && (peep2_reg_dead_p (3, operands[0]) || rtx_equal_p (operands[0], operands[4]))\n\
   && (peep2_reg_dead_p (3, operands[1]) || rtx_equal_p (operands[1], operands[4]))",
    __builtin_constant_p 
#line 109 "../../gcc/config/arm/ldrdstrd.md"
(TARGET_LDRD && TARGET_ARM
   && (  ((rtx_equal_p(operands[0], operands[6])) && (rtx_equal_p(operands[1], operands[7])))
	||((rtx_equal_p(operands[0], operands[7])) && (rtx_equal_p(operands[1], operands[6]))))
   && (peep2_reg_dead_p (3, operands[0]) || rtx_equal_p (operands[0], operands[4]))
   && (peep2_reg_dead_p (3, operands[1]) || rtx_equal_p (operands[1], operands[4])))
    ? (int) 
#line 109 "../../gcc/config/arm/ldrdstrd.md"
(TARGET_LDRD && TARGET_ARM
   && (  ((rtx_equal_p(operands[0], operands[6])) && (rtx_equal_p(operands[1], operands[7])))
	||((rtx_equal_p(operands[0], operands[7])) && (rtx_equal_p(operands[1], operands[6]))))
   && (peep2_reg_dead_p (3, operands[0]) || rtx_equal_p (operands[0], operands[4]))
   && (peep2_reg_dead_p (3, operands[1]) || rtx_equal_p (operands[1], operands[4])))
    : -1 },
#line 8220 "../../gcc/config/arm/arm.md"
  { "TARGET_32BIT && TARGET_HARD_FLOAT && !TARGET_VFP_SINGLE",
    __builtin_constant_p 
#line 8220 "../../gcc/config/arm/arm.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && !TARGET_VFP_SINGLE)
    ? (int) 
#line 8220 "../../gcc/config/arm/arm.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && !TARGET_VFP_SINGLE)
    : -1 },
#line 3202 "../../gcc/config/arm/arm.md"
  { "TARGET_ARM && !reg_overlap_mentioned_p (operands[0], operands[3])",
    __builtin_constant_p 
#line 3202 "../../gcc/config/arm/arm.md"
(TARGET_ARM && !reg_overlap_mentioned_p (operands[0], operands[3]))
    ? (int) 
#line 3202 "../../gcc/config/arm/arm.md"
(TARGET_ARM && !reg_overlap_mentioned_p (operands[0], operands[3]))
    : -1 },
#line 8962 "../../gcc/config/arm/arm.md"
  { "TARGET_ARM  && USE_RETURN_INSN (TRUE)",
    __builtin_constant_p 
#line 8962 "../../gcc/config/arm/arm.md"
(TARGET_ARM  && USE_RETURN_INSN (TRUE))
    ? (int) 
#line 8962 "../../gcc/config/arm/arm.md"
(TARGET_ARM  && USE_RETURN_INSN (TRUE))
    : -1 },
#line 10485 "../../gcc/config/arm/mve.md"
  { "(TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V4SFmode))\n\
   || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V4SFmode))",
    __builtin_constant_p 
#line 10485 "../../gcc/config/arm/mve.md"
((TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V4SFmode))
   || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V4SFmode)))
    ? (int) 
#line 10485 "../../gcc/config/arm/mve.md"
((TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V4SFmode))
   || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V4SFmode)))
    : -1 },
#line 5698 "../../gcc/config/arm/arm.md"
  { "TARGET_32BIT && (!MEM_P (operands[1])) && BYTES_BIG_ENDIAN",
    __builtin_constant_p 
#line 5698 "../../gcc/config/arm/arm.md"
(TARGET_32BIT && (!MEM_P (operands[1])) && BYTES_BIG_ENDIAN)
    ? (int) 
#line 5698 "../../gcc/config/arm/arm.md"
(TARGET_32BIT && (!MEM_P (operands[1])) && BYTES_BIG_ENDIAN)
    : -1 },
#line 10392 "../../gcc/config/arm/arm.md"
  { "TARGET_32BIT\n\
   && (arm_select_dominance_cc_mode (operands[3], operands[6], DOM_CC_X_AND_Y)\n\
       != CCmode)",
    __builtin_constant_p 
#line 10392 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (arm_select_dominance_cc_mode (operands[3], operands[6], DOM_CC_X_AND_Y)
       != CCmode))
    ? (int) 
#line 10392 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (arm_select_dominance_cc_mode (operands[3], operands[6], DOM_CC_X_AND_Y)
       != CCmode))
    : -1 },
#line 2947 "../../gcc/config/arm/neon.md"
  { "TARGET_COMPLEX",
    __builtin_constant_p 
#line 2947 "../../gcc/config/arm/neon.md"
(TARGET_COMPLEX)
    ? (int) 
#line 2947 "../../gcc/config/arm/neon.md"
(TARGET_COMPLEX)
    : -1 },
#line 744 "../../gcc/config/arm/thumb1.md"
  { "TARGET_THUMB1 && satisfies_constraint_K (operands[1])\n\
   && !(TARGET_HAVE_MOVT && satisfies_constraint_j (operands[1]))",
    __builtin_constant_p 
#line 744 "../../gcc/config/arm/thumb1.md"
(TARGET_THUMB1 && satisfies_constraint_K (operands[1])
   && !(TARGET_HAVE_MOVT && satisfies_constraint_j (operands[1])))
    ? (int) 
#line 744 "../../gcc/config/arm/thumb1.md"
(TARGET_THUMB1 && satisfies_constraint_K (operands[1])
   && !(TARGET_HAVE_MOVT && satisfies_constraint_j (operands[1])))
    : -1 },
  { "(TARGET_THUMB2\n\
   && arm_restrict_it\n\
   && !arm_borrow_operation (operands[1], SImode)) && ( reload_completed)",
    __builtin_constant_p (
#line 365 "../../gcc/config/arm/thumb2.md"
(TARGET_THUMB2
   && arm_restrict_it
   && !arm_borrow_operation (operands[1], SImode)) && 
#line 369 "../../gcc/config/arm/thumb2.md"
( reload_completed))
    ? (int) (
#line 365 "../../gcc/config/arm/thumb2.md"
(TARGET_THUMB2
   && arm_restrict_it
   && !arm_borrow_operation (operands[1], SImode)) && 
#line 369 "../../gcc/config/arm/thumb2.md"
( reload_completed))
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_ARM && TARGET_HARD_FLOAT\n\
  && !TARGET_VFP_FP16INST\n\
  && (register_operand (operands[0], HImode)\n\
       || register_operand (operands[1], HImode)))",
    __builtin_constant_p (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 29 "../../gcc/config/arm/vfp.md"
(TARGET_ARM && TARGET_HARD_FLOAT
  && !TARGET_VFP_FP16INST
  && (register_operand (operands[0], HImode)
       || register_operand (operands[1], HImode))))
    ? (int) (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 29 "../../gcc/config/arm/vfp.md"
(TARGET_ARM && TARGET_HARD_FLOAT
  && !TARGET_VFP_FP16INST
  && (register_operand (operands[0], HImode)
       || register_operand (operands[1], HImode))))
    : -1 },
#line 478 "../../gcc/config/arm/vfp.md"
  { "TARGET_32BIT\n\
   && TARGET_HARD_FLOAT && TARGET_NEON_FP16\n\
   && !TARGET_VFP_FP16INST\n\
   && (   s_register_operand (operands[0], HFmode)\n\
       || s_register_operand (operands[1], HFmode))",
    __builtin_constant_p 
#line 478 "../../gcc/config/arm/vfp.md"
(TARGET_32BIT
   && TARGET_HARD_FLOAT && TARGET_NEON_FP16
   && !TARGET_VFP_FP16INST
   && (   s_register_operand (operands[0], HFmode)
       || s_register_operand (operands[1], HFmode)))
    ? (int) 
#line 478 "../../gcc/config/arm/vfp.md"
(TARGET_32BIT
   && TARGET_HARD_FLOAT && TARGET_NEON_FP16
   && !TARGET_VFP_FP16INST
   && (   s_register_operand (operands[0], HFmode)
       || s_register_operand (operands[1], HFmode)))
    : -1 },
#line 181 "../../gcc/config/arm/sync.md"
  { "TARGET_HAVE_LDREX && TARGET_HAVE_MEMORY_BARRIER",
    __builtin_constant_p 
#line 181 "../../gcc/config/arm/sync.md"
(TARGET_HAVE_LDREX && TARGET_HAVE_MEMORY_BARRIER)
    ? (int) 
#line 181 "../../gcc/config/arm/sync.md"
(TARGET_HAVE_LDREX && TARGET_HAVE_MEMORY_BARRIER)
    : -1 },
#line 534 "../../gcc/config/arm/vfp.md"
  { "TARGET_32BIT\n\
   && TARGET_HARD_FLOAT\n\
   && !TARGET_NEON_FP16\n\
   && !TARGET_VFP_FP16INST\n\
   && (   s_register_operand (operands[0], HFmode)\n\
       || s_register_operand (operands[1], HFmode))",
    __builtin_constant_p 
#line 534 "../../gcc/config/arm/vfp.md"
(TARGET_32BIT
   && TARGET_HARD_FLOAT
   && !TARGET_NEON_FP16
   && !TARGET_VFP_FP16INST
   && (   s_register_operand (operands[0], HFmode)
       || s_register_operand (operands[1], HFmode)))
    ? (int) 
#line 534 "../../gcc/config/arm/vfp.md"
(TARGET_32BIT
   && TARGET_HARD_FLOAT
   && !TARGET_NEON_FP16
   && !TARGET_VFP_FP16INST
   && (   s_register_operand (operands[0], HFmode)
       || s_register_operand (operands[1], HFmode)))
    : -1 },
#line 11445 "../../gcc/config/arm/arm.md"
  { "TARGET_ARM\n\
   && ((UINTVAL (operands[1]))\n\
       == ((UINTVAL (operands[1])) >> 24) << 24)",
    __builtin_constant_p 
#line 11445 "../../gcc/config/arm/arm.md"
(TARGET_ARM
   && ((UINTVAL (operands[1]))
       == ((UINTVAL (operands[1])) >> 24) << 24))
    ? (int) 
#line 11445 "../../gcc/config/arm/arm.md"
(TARGET_ARM
   && ((UINTVAL (operands[1]))
       == ((UINTVAL (operands[1])) >> 24) << 24))
    : -1 },
#line 1271 "../../gcc/config/arm/thumb2.md"
  { "TARGET_THUMB2 && reload_completed\n\
   && ((GET_CODE(operands[3]) != ROTATE && GET_CODE(operands[3]) != ROTATERT)\n\
       || REG_P (operands[2]))",
    __builtin_constant_p 
#line 1271 "../../gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && reload_completed
   && ((GET_CODE(operands[3]) != ROTATE && GET_CODE(operands[3]) != ROTATERT)
       || REG_P (operands[2])))
    ? (int) 
#line 1271 "../../gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && reload_completed
   && ((GET_CODE(operands[3]) != ROTATE && GET_CODE(operands[3]) != ROTATERT)
       || REG_P (operands[2])))
    : -1 },
#line 106 "../../gcc/config/arm/vec-common.md"
  { "ARM_HAVE_V2SI_ARITH\n\
   && (!TARGET_REALLY_IWMMXT\n\
       || V2SImode == V4HImode\n\
       || V2SImode == V2SImode)",
    __builtin_constant_p 
#line 106 "../../gcc/config/arm/vec-common.md"
(ARM_HAVE_V2SI_ARITH
   && (!TARGET_REALLY_IWMMXT
       || V2SImode == V4HImode
       || V2SImode == V2SImode))
    ? (int) 
#line 106 "../../gcc/config/arm/vec-common.md"
(ARM_HAVE_V2SI_ARITH
   && (!TARGET_REALLY_IWMMXT
       || V2SImode == V4HImode
       || V2SImode == V2SImode))
    : -1 },
#line 12705 "../../gcc/config/arm/arm.md"
  { "arm_coproc_builtin_available (VUNSPEC_LDC2)",
    __builtin_constant_p 
#line 12705 "../../gcc/config/arm/arm.md"
(arm_coproc_builtin_available (VUNSPEC_LDC2))
    ? (int) 
#line 12705 "../../gcc/config/arm/arm.md"
(arm_coproc_builtin_available (VUNSPEC_LDC2))
    : -1 },
#line 6535 "../../gcc/config/arm/arm.md"
  { "TARGET_USE_MOVT && GET_CODE (operands[1]) == SYMBOL_REF\n\
   && !target_word_relocations\n\
   && !arm_tls_referenced_p (operands[1])",
    __builtin_constant_p 
#line 6535 "../../gcc/config/arm/arm.md"
(TARGET_USE_MOVT && GET_CODE (operands[1]) == SYMBOL_REF
   && !target_word_relocations
   && !arm_tls_referenced_p (operands[1]))
    ? (int) 
#line 6535 "../../gcc/config/arm/arm.md"
(TARGET_USE_MOVT && GET_CODE (operands[1]) == SYMBOL_REF
   && !target_word_relocations
   && !arm_tls_referenced_p (operands[1]))
    : -1 },
#line 9097 "../../gcc/config/arm/arm.md"
  { "TARGET_EITHER && !TARGET_FDPIC",
    __builtin_constant_p 
#line 9097 "../../gcc/config/arm/arm.md"
(TARGET_EITHER && !TARGET_FDPIC)
    ? (int) 
#line 9097 "../../gcc/config/arm/arm.md"
(TARGET_EITHER && !TARGET_FDPIC)
    : -1 },
#line 8901 "../../gcc/config/arm/arm.md"
  { "(TARGET_ARM || (TARGET_THUMB2\n\
                   && ARM_FUNC_TYPE (arm_current_func_type ()) == ARM_FT_NORMAL\n\
                   && !IS_STACKALIGN (arm_current_func_type ())))\n\
     && use_simple_return_p ()",
    __builtin_constant_p 
#line 8901 "../../gcc/config/arm/arm.md"
((TARGET_ARM || (TARGET_THUMB2
                   && ARM_FUNC_TYPE (arm_current_func_type ()) == ARM_FT_NORMAL
                   && !IS_STACKALIGN (arm_current_func_type ())))
     && use_simple_return_p ())
    ? (int) 
#line 8901 "../../gcc/config/arm/arm.md"
((TARGET_ARM || (TARGET_THUMB2
                   && ARM_FUNC_TYPE (arm_current_func_type ()) == ARM_FT_NORMAL
                   && !IS_STACKALIGN (arm_current_func_type ())))
     && use_simple_return_p ())
    : -1 },
#line 142 "../../gcc/config/arm/ldmstm.md"
  { "TARGET_THUMB1 && XVECLEN (operands[0], 0) == 5",
    __builtin_constant_p 
#line 142 "../../gcc/config/arm/ldmstm.md"
(TARGET_THUMB1 && XVECLEN (operands[0], 0) == 5)
    ? (int) 
#line 142 "../../gcc/config/arm/ldmstm.md"
(TARGET_THUMB1 && XVECLEN (operands[0], 0) == 5)
    : -1 },
#line 6344 "../../gcc/config/arm/neon.md"
  { "TARGET_NEON",
    __builtin_constant_p 
#line 6344 "../../gcc/config/arm/neon.md"
(TARGET_NEON)
    ? (int) 
#line 6344 "../../gcc/config/arm/neon.md"
(TARGET_NEON)
    : -1 },
  { "(TARGET_HAVE_LDREX && TARGET_HAVE_MEMORY_BARRIER) && ( reload_completed)",
    __builtin_constant_p (
#line 437 "../../gcc/config/arm/sync.md"
(TARGET_HAVE_LDREX && TARGET_HAVE_MEMORY_BARRIER) && 
#line 439 "../../gcc/config/arm/sync.md"
( reload_completed))
    ? (int) (
#line 437 "../../gcc/config/arm/sync.md"
(TARGET_HAVE_LDREX && TARGET_HAVE_MEMORY_BARRIER) && 
#line 439 "../../gcc/config/arm/sync.md"
( reload_completed))
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_THUMB2 && reload_completed)",
    __builtin_constant_p (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 1523 "../../gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && reload_completed))
    ? (int) (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 1523 "../../gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && reload_completed))
    : -1 },
#line 344 "../../gcc/config/arm/thumb2.md"
  { "TARGET_THUMB2\n\
   && !arm_restrict_it\n\
   && !arm_borrow_operation (operands[1], SImode)",
    __builtin_constant_p 
#line 344 "../../gcc/config/arm/thumb2.md"
(TARGET_THUMB2
   && !arm_restrict_it
   && !arm_borrow_operation (operands[1], SImode))
    ? (int) 
#line 344 "../../gcc/config/arm/thumb2.md"
(TARGET_THUMB2
   && !arm_restrict_it
   && !arm_borrow_operation (operands[1], SImode))
    : -1 },
#line 1656 "../../gcc/config/arm/vfp.md"
  { "TARGET_HAVE_FPCXT_CMSE && use_cmse",
    __builtin_constant_p 
#line 1656 "../../gcc/config/arm/vfp.md"
(TARGET_HAVE_FPCXT_CMSE && use_cmse)
    ? (int) 
#line 1656 "../../gcc/config/arm/vfp.md"
(TARGET_HAVE_FPCXT_CMSE && use_cmse)
    : -1 },
#line 8056 "../../gcc/config/arm/arm.md"
  { "TARGET_32BIT || TARGET_THUMB1",
    __builtin_constant_p 
#line 8056 "../../gcc/config/arm/arm.md"
(TARGET_32BIT || TARGET_THUMB1)
    ? (int) 
#line 8056 "../../gcc/config/arm/arm.md"
(TARGET_32BIT || TARGET_THUMB1)
    : -1 },
#line 287 "../../gcc/config/arm/vec-common.md"
  { "ARM_HAVE_V8BF_LDST && !BYTES_BIG_ENDIAN\n\
  && unaligned_access && !TARGET_REALLY_IWMMXT",
    __builtin_constant_p 
#line 287 "../../gcc/config/arm/vec-common.md"
(ARM_HAVE_V8BF_LDST && !BYTES_BIG_ENDIAN
  && unaligned_access && !TARGET_REALLY_IWMMXT)
    ? (int) 
#line 287 "../../gcc/config/arm/vec-common.md"
(ARM_HAVE_V8BF_LDST && !BYTES_BIG_ENDIAN
  && unaligned_access && !TARGET_REALLY_IWMMXT)
    : -1 },
#line 272 "../../gcc/config/arm/vec-common.md"
  { "(TARGET_COMPLEX || (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT\n\
		      && ARM_HAVE_V4SF_ARITH)) && !BYTES_BIG_ENDIAN",
    __builtin_constant_p 
#line 272 "../../gcc/config/arm/vec-common.md"
((TARGET_COMPLEX || (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT
		      && ARM_HAVE_V4SF_ARITH)) && !BYTES_BIG_ENDIAN)
    ? (int) 
#line 272 "../../gcc/config/arm/vec-common.md"
((TARGET_COMPLEX || (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT
		      && ARM_HAVE_V4SF_ARITH)) && !BYTES_BIG_ENDIAN)
    : -1 },
#line 6351 "../../gcc/config/arm/arm.md"
  { "TARGET_LDRD\n\
  && reg_overlap_mentioned_p (operands[0], operands[1])\n\
  && reg_overlap_mentioned_p (operands[0], operands[2])",
    __builtin_constant_p 
#line 6351 "../../gcc/config/arm/arm.md"
(TARGET_LDRD
  && reg_overlap_mentioned_p (operands[0], operands[1])
  && reg_overlap_mentioned_p (operands[0], operands[2]))
    ? (int) 
#line 6351 "../../gcc/config/arm/arm.md"
(TARGET_LDRD
  && reg_overlap_mentioned_p (operands[0], operands[1])
  && reg_overlap_mentioned_p (operands[0], operands[2]))
    : -1 },
#line 11427 "../../gcc/config/arm/arm.md"
  { "TARGET_ARM",
    __builtin_constant_p 
#line 11427 "../../gcc/config/arm/arm.md"
(TARGET_ARM)
    ? (int) 
#line 11427 "../../gcc/config/arm/arm.md"
(TARGET_ARM)
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_32BIT && XVECLEN (operands[0], 0) == 4)",
    __builtin_constant_p (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 750 "../../gcc/config/arm/ldmstm.md"
(TARGET_32BIT && XVECLEN (operands[0], 0) == 4))
    ? (int) (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 750 "../../gcc/config/arm/ldmstm.md"
(TARGET_32BIT && XVECLEN (operands[0], 0) == 4))
    : -1 },
#line 756 "../../gcc/config/arm/thumb2.md"
  { "TARGET_THUMB2 && !arm_restrict_it",
    __builtin_constant_p 
#line 756 "../../gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && !arm_restrict_it)
    ? (int) 
#line 756 "../../gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && !arm_restrict_it)
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_LDRD && TARGET_THUMB2 && reload_completed\n\
     && ((INTVAL (operands[1]) + 4) == INTVAL (operands[3]))\n\
     && (operands_ok_ldrd_strd (operands[2], operands[4],\n\
                                  operands[0], INTVAL (operands[1]),\n\
                                  false, false)))",
    __builtin_constant_p (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 12503 "../../gcc/config/arm/arm.md"
(TARGET_LDRD && TARGET_THUMB2 && reload_completed
     && ((INTVAL (operands[1]) + 4) == INTVAL (operands[3]))
     && (operands_ok_ldrd_strd (operands[2], operands[4],
                                  operands[0], INTVAL (operands[1]),
                                  false, false))))
    ? (int) (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 12503 "../../gcc/config/arm/arm.md"
(TARGET_LDRD && TARGET_THUMB2 && reload_completed
     && ((INTVAL (operands[1]) + 4) == INTVAL (operands[3]))
     && (operands_ok_ldrd_strd (operands[2], operands[4],
                                  operands[0], INTVAL (operands[1]),
                                  false, false))))
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_HAVE_MOVT && arm_valid_symbolic_address_p (operands[2]))",
    __builtin_constant_p (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 6441 "../../gcc/config/arm/arm.md"
(TARGET_HAVE_MOVT && arm_valid_symbolic_address_p (operands[2])))
    ? (int) (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 6441 "../../gcc/config/arm/arm.md"
(TARGET_HAVE_MOVT && arm_valid_symbolic_address_p (operands[2])))
    : -1 },
#line 4188 "../../gcc/config/arm/neon.md"
  { "TARGET_NEON_FP16INST",
    __builtin_constant_p 
#line 4188 "../../gcc/config/arm/neon.md"
(TARGET_NEON_FP16INST)
    ? (int) 
#line 4188 "../../gcc/config/arm/neon.md"
(TARGET_NEON_FP16INST)
    : -1 },
#line 2036 "../../gcc/config/arm/arm.md"
  { "TARGET_32BIT\n\
   && !const_ok_for_arm (INTVAL (operands[1]))\n\
   && const_ok_for_arm (~INTVAL (operands[1]))",
    __builtin_constant_p 
#line 2036 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && !const_ok_for_arm (INTVAL (operands[1]))
   && const_ok_for_arm (~INTVAL (operands[1])))
    ? (int) 
#line 2036 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && !const_ok_for_arm (INTVAL (operands[1]))
   && const_ok_for_arm (~INTVAL (operands[1])))
    : -1 },
#line 571 "../../gcc/config/arm/neon.md"
  { "ARM_HAVE_NEON_V8HI_ARITH",
    __builtin_constant_p 
#line 571 "../../gcc/config/arm/neon.md"
(ARM_HAVE_NEON_V8HI_ARITH)
    ? (int) 
#line 571 "../../gcc/config/arm/neon.md"
(ARM_HAVE_NEON_V8HI_ARITH)
    : -1 },
#line 287 "../../gcc/config/arm/vec-common.md"
  { "ARM_HAVE_V2SF_LDST && !BYTES_BIG_ENDIAN\n\
  && unaligned_access && !TARGET_REALLY_IWMMXT",
    __builtin_constant_p 
#line 287 "../../gcc/config/arm/vec-common.md"
(ARM_HAVE_V2SF_LDST && !BYTES_BIG_ENDIAN
  && unaligned_access && !TARGET_REALLY_IWMMXT)
    ? (int) 
#line 287 "../../gcc/config/arm/vec-common.md"
(ARM_HAVE_V2SF_LDST && !BYTES_BIG_ENDIAN
  && unaligned_access && !TARGET_REALLY_IWMMXT)
    : -1 },
#line 567 "../../gcc/config/arm/ldmstm.md"
  { "TARGET_THUMB1 && XVECLEN (operands[0], 0) == 4",
    __builtin_constant_p 
#line 567 "../../gcc/config/arm/ldmstm.md"
(TARGET_THUMB1 && XVECLEN (operands[0], 0) == 4)
    ? (int) 
#line 567 "../../gcc/config/arm/ldmstm.md"
(TARGET_THUMB1 && XVECLEN (operands[0], 0) == 4)
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_VFP_DOUBLE)",
    __builtin_constant_p (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 1841 "../../gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_VFP_DOUBLE))
    ? (int) (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 1841 "../../gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_VFP_DOUBLE))
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_HAVE_LDREXD)",
    __builtin_constant_p (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 503 "../../gcc/config/arm/sync.md"
(TARGET_HAVE_LDREXD))
    ? (int) (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 503 "../../gcc/config/arm/sync.md"
(TARGET_HAVE_LDREXD))
    : -1 },
#line 877 "../../gcc/config/arm/thumb1.md"
  { "TARGET_THUMB1\n\
   && (	  s_register_operand (operands[0], HFmode)\n\
       || s_register_operand (operands[1], HFmode))",
    __builtin_constant_p 
#line 877 "../../gcc/config/arm/thumb1.md"
(TARGET_THUMB1
   && (	  s_register_operand (operands[0], HFmode)
       || s_register_operand (operands[1], HFmode)))
    ? (int) 
#line 877 "../../gcc/config/arm/thumb1.md"
(TARGET_THUMB1
   && (	  s_register_operand (operands[0], HFmode)
       || s_register_operand (operands[1], HFmode)))
    : -1 },
#line 289 "../../gcc/config/arm/thumb2.md"
  { "TARGET_THUMB2\n\
  && (register_operand (operands[0], HImode)\n\
     || register_operand (operands[1], HImode))",
    __builtin_constant_p 
#line 289 "../../gcc/config/arm/thumb2.md"
(TARGET_THUMB2
  && (register_operand (operands[0], HImode)
     || register_operand (operands[1], HImode)))
    ? (int) 
#line 289 "../../gcc/config/arm/thumb2.md"
(TARGET_THUMB2
  && (register_operand (operands[0], HImode)
     || register_operand (operands[1], HImode)))
    : -1 },
#line 225 "../../gcc/config/arm/arm-fixed.md"
  { "TARGET_32BIT",
    __builtin_constant_p 
#line 225 "../../gcc/config/arm/arm-fixed.md"
(TARGET_32BIT)
    ? (int) 
#line 225 "../../gcc/config/arm/arm-fixed.md"
(TARGET_32BIT)
    : -1 },
  { "(TARGET_THUMB2\n\
   && !arm_restrict_it\n\
   && !arm_borrow_operation (operands[1], SImode)) && ( true)",
    __builtin_constant_p (
#line 344 "../../gcc/config/arm/thumb2.md"
(TARGET_THUMB2
   && !arm_restrict_it
   && !arm_borrow_operation (operands[1], SImode)) && 
#line 348 "../../gcc/config/arm/thumb2.md"
( true))
    ? (int) (
#line 344 "../../gcc/config/arm/thumb2.md"
(TARGET_THUMB2
   && !arm_restrict_it
   && !arm_borrow_operation (operands[1], SImode)) && 
#line 348 "../../gcc/config/arm/thumb2.md"
( true))
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_HAVE_LDREX)",
    __builtin_constant_p (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 479 "../../gcc/config/arm/sync.md"
(TARGET_HAVE_LDREX))
    ? (int) (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 479 "../../gcc/config/arm/sync.md"
(TARGET_HAVE_LDREX))
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (unaligned_access && TARGET_32BIT)",
    __builtin_constant_p (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 4933 "../../gcc/config/arm/arm.md"
(unaligned_access && TARGET_32BIT))
    ? (int) (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 4933 "../../gcc/config/arm/arm.md"
(unaligned_access && TARGET_32BIT))
    : -1 },
#line 626 "../../gcc/config/arm/vfp.md"
  { "TARGET_THUMB2 && TARGET_VFP_BASE\n\
   && (   s_register_operand (operands[0], SFmode)\n\
       || s_register_operand (operands[1], SFmode))",
    __builtin_constant_p 
#line 626 "../../gcc/config/arm/vfp.md"
(TARGET_THUMB2 && TARGET_VFP_BASE
   && (   s_register_operand (operands[0], SFmode)
       || s_register_operand (operands[1], SFmode)))
    ? (int) 
#line 626 "../../gcc/config/arm/vfp.md"
(TARGET_THUMB2 && TARGET_VFP_BASE
   && (   s_register_operand (operands[0], SFmode)
       || s_register_operand (operands[1], SFmode)))
    : -1 },
#line 49 "../../gcc/config/arm/vec-common.md"
  { "TARGET_NEON\n\
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V4HImode))",
    __builtin_constant_p 
#line 49 "../../gcc/config/arm/vec-common.md"
(TARGET_NEON
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V4HImode)))
    ? (int) 
#line 49 "../../gcc/config/arm/vec-common.md"
(TARGET_NEON
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V4HImode)))
    : -1 },
#line 5688 "../../gcc/config/arm/arm.md"
  { "TARGET_32BIT && (!MEM_P (operands[1])) && ! BYTES_BIG_ENDIAN",
    __builtin_constant_p 
#line 5688 "../../gcc/config/arm/arm.md"
(TARGET_32BIT && (!MEM_P (operands[1])) && ! BYTES_BIG_ENDIAN)
    ? (int) 
#line 5688 "../../gcc/config/arm/arm.md"
(TARGET_32BIT && (!MEM_P (operands[1])) && ! BYTES_BIG_ENDIAN)
    : -1 },
  { "(TARGET_32BIT) && ( reload_completed)",
    __builtin_constant_p (
#line 3807 "../../gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 3809 "../../gcc/config/arm/arm.md"
( reload_completed))
    ? (int) (
#line 3807 "../../gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 3809 "../../gcc/config/arm/arm.md"
( reload_completed))
    : -1 },
#line 26 "../../gcc/config/arm/vec-common.md"
  { "TARGET_NEON\n\
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V2DImode))\n\
   || (TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V2DImode))\n\
   || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V2DImode))",
    __builtin_constant_p 
#line 26 "../../gcc/config/arm/vec-common.md"
(TARGET_NEON
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V2DImode))
   || (TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V2DImode))
   || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V2DImode)))
    ? (int) 
#line 26 "../../gcc/config/arm/vec-common.md"
(TARGET_NEON
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V2DImode))
   || (TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V2DImode))
   || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V2DImode)))
    : -1 },
#line 11627 "../../gcc/config/arm/arm.md"
  { "TARGET_ARM && reload_completed",
    __builtin_constant_p 
#line 11627 "../../gcc/config/arm/arm.md"
(TARGET_ARM && reload_completed)
    ? (int) 
#line 11627 "../../gcc/config/arm/arm.md"
(TARGET_ARM && reload_completed)
    : -1 },
#line 2438 "../../gcc/config/arm/neon.md"
  { "TARGET_NEON_FP16INST\n\
  && !(GET_MODE_CLASS (V8HFmode) == MODE_VECTOR_FLOAT\n\
  && !flag_unsafe_math_optimizations)",
    __builtin_constant_p 
#line 2438 "../../gcc/config/arm/neon.md"
(TARGET_NEON_FP16INST
  && !(GET_MODE_CLASS (V8HFmode) == MODE_VECTOR_FLOAT
  && !flag_unsafe_math_optimizations))
    ? (int) 
#line 2438 "../../gcc/config/arm/neon.md"
(TARGET_NEON_FP16INST
  && !(GET_MODE_CLASS (V8HFmode) == MODE_VECTOR_FLOAT
  && !flag_unsafe_math_optimizations))
    : -1 },
#line 5043 "../../gcc/config/arm/arm.md"
  { "TARGET_IDIV",
    __builtin_constant_p 
#line 5043 "../../gcc/config/arm/arm.md"
(TARGET_IDIV)
    ? (int) 
#line 5043 "../../gcc/config/arm/arm.md"
(TARGET_IDIV)
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_32BIT && arm_arch_thumb2)",
    __builtin_constant_p (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 12039 "../../gcc/config/arm/arm.md"
(TARGET_32BIT && arm_arch_thumb2))
    ? (int) (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 12039 "../../gcc/config/arm/arm.md"
(TARGET_32BIT && arm_arch_thumb2))
    : -1 },
#line 88 "../../gcc/config/arm/neon.md"
  { "TARGET_NEON\n\
   && (register_operand (operands[0], V8HFmode)\n\
       || register_operand (operands[1], V8HFmode))",
    __builtin_constant_p 
#line 88 "../../gcc/config/arm/neon.md"
(TARGET_NEON
   && (register_operand (operands[0], V8HFmode)
       || register_operand (operands[1], V8HFmode)))
    ? (int) 
#line 88 "../../gcc/config/arm/neon.md"
(TARGET_NEON
   && (register_operand (operands[0], V8HFmode)
       || register_operand (operands[1], V8HFmode)))
    : -1 },
#line 4201 "../../gcc/config/arm/arm.md"
  { "TARGET_32BIT && !arm_eliminable_register (operands[1]) && reload_completed",
    __builtin_constant_p 
#line 4201 "../../gcc/config/arm/arm.md"
(TARGET_32BIT && !arm_eliminable_register (operands[1]) && reload_completed)
    ? (int) 
#line 4201 "../../gcc/config/arm/arm.md"
(TARGET_32BIT && !arm_eliminable_register (operands[1]) && reload_completed)
    : -1 },
#line 8884 "../../gcc/config/arm/arm.md"
  { "TARGET_32BIT && SIBLING_CALL_P (insn)",
    __builtin_constant_p 
#line 8884 "../../gcc/config/arm/arm.md"
(TARGET_32BIT && SIBLING_CALL_P (insn))
    ? (int) 
#line 8884 "../../gcc/config/arm/arm.md"
(TARGET_32BIT && SIBLING_CALL_P (insn))
    : -1 },
#line 12705 "../../gcc/config/arm/arm.md"
  { "arm_coproc_builtin_available (VUNSPEC_LDCL)",
    __builtin_constant_p 
#line 12705 "../../gcc/config/arm/arm.md"
(arm_coproc_builtin_available (VUNSPEC_LDCL))
    ? (int) 
#line 12705 "../../gcc/config/arm/arm.md"
(arm_coproc_builtin_available (VUNSPEC_LDCL))
    : -1 },
#line 620 "../../gcc/config/arm/neon.md"
  { "ARM_HAVE_NEON_V2SF_ARITH && TARGET_FMA",
    __builtin_constant_p 
#line 620 "../../gcc/config/arm/neon.md"
(ARM_HAVE_NEON_V2SF_ARITH && TARGET_FMA)
    ? (int) 
#line 620 "../../gcc/config/arm/neon.md"
(ARM_HAVE_NEON_V2SF_ARITH && TARGET_FMA)
    : -1 },
#line 10683 "../../gcc/config/arm/mve.md"
  { "TARGET_HAVE_MVE",
    __builtin_constant_p 
#line 10683 "../../gcc/config/arm/mve.md"
(TARGET_HAVE_MVE)
    ? (int) 
#line 10683 "../../gcc/config/arm/mve.md"
(TARGET_HAVE_MVE)
    : -1 },
#line 88 "../../gcc/config/arm/neon.md"
  { "TARGET_NEON\n\
   && (register_operand (operands[0], TImode)\n\
       || register_operand (operands[1], TImode))",
    __builtin_constant_p 
#line 88 "../../gcc/config/arm/neon.md"
(TARGET_NEON
   && (register_operand (operands[0], TImode)
       || register_operand (operands[1], TImode)))
    ? (int) 
#line 88 "../../gcc/config/arm/neon.md"
(TARGET_NEON
   && (register_operand (operands[0], TImode)
       || register_operand (operands[1], TImode)))
    : -1 },
#line 1473 "../../gcc/config/arm/neon.md"
  { "TARGET_NEON && (!true || flag_unsafe_math_optimizations)",
    __builtin_constant_p 
#line 1473 "../../gcc/config/arm/neon.md"
(TARGET_NEON && (!true || flag_unsafe_math_optimizations))
    ? (int) 
#line 1473 "../../gcc/config/arm/neon.md"
(TARGET_NEON && (!true || flag_unsafe_math_optimizations))
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_32BIT && TARGET_HARD_FLOAT && !flag_rounding_math)",
    __builtin_constant_p (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 1143 "../../gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && !flag_rounding_math))
    ? (int) (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 1143 "../../gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && !flag_rounding_math))
    : -1 },
#line 407 "../../gcc/config/arm/vec-common.md"
  { "ARM_HAVE_V16QI_ARITH && !TARGET_REALLY_IWMMXT",
    __builtin_constant_p 
#line 407 "../../gcc/config/arm/vec-common.md"
(ARM_HAVE_V16QI_ARITH && !TARGET_REALLY_IWMMXT)
    ? (int) 
#line 407 "../../gcc/config/arm/vec-common.md"
(ARM_HAVE_V16QI_ARITH && !TARGET_REALLY_IWMMXT)
    : -1 },
#line 272 "../../gcc/config/arm/vec-common.md"
  { "(TARGET_COMPLEX || (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT\n\
		      && ARM_HAVE_V2SF_ARITH)) && !BYTES_BIG_ENDIAN",
    __builtin_constant_p 
#line 272 "../../gcc/config/arm/vec-common.md"
((TARGET_COMPLEX || (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT
		      && ARM_HAVE_V2SF_ARITH)) && !BYTES_BIG_ENDIAN)
    ? (int) 
#line 272 "../../gcc/config/arm/vec-common.md"
((TARGET_COMPLEX || (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT
		      && ARM_HAVE_V2SF_ARITH)) && !BYTES_BIG_ENDIAN)
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_THUMB2 && TARGET_VFP_BASE\n\
  && !TARGET_VFP_FP16INST\n\
  && (register_operand (operands[0], HImode)\n\
       || register_operand (operands[1], HImode)))",
    __builtin_constant_p (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 80 "../../gcc/config/arm/vfp.md"
(TARGET_THUMB2 && TARGET_VFP_BASE
  && !TARGET_VFP_FP16INST
  && (register_operand (operands[0], HImode)
       || register_operand (operands[1], HImode))))
    ? (int) (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 80 "../../gcc/config/arm/vfp.md"
(TARGET_THUMB2 && TARGET_VFP_BASE
  && !TARGET_VFP_FP16INST
  && (register_operand (operands[0], HImode)
       || register_operand (operands[1], HImode))))
    : -1 },
#line 41 "../../gcc/config/arm/neon.md"
  { "TARGET_NEON\n\
   && (register_operand (operands[0], V2SImode)\n\
       || register_operand (operands[1], V2SImode))",
    __builtin_constant_p 
#line 41 "../../gcc/config/arm/neon.md"
(TARGET_NEON
   && (register_operand (operands[0], V2SImode)
       || register_operand (operands[1], V2SImode)))
    ? (int) 
#line 41 "../../gcc/config/arm/neon.md"
(TARGET_NEON
   && (register_operand (operands[0], V2SImode)
       || register_operand (operands[1], V2SImode)))
    : -1 },
#line 2372 "../../gcc/config/arm/neon.md"
  { "TARGET_NEON && !(GET_MODE_CLASS (V4SFmode) == MODE_VECTOR_FLOAT\n\
                    && !flag_unsafe_math_optimizations)",
    __builtin_constant_p 
#line 2372 "../../gcc/config/arm/neon.md"
(TARGET_NEON && !(GET_MODE_CLASS (V4SFmode) == MODE_VECTOR_FLOAT
                    && !flag_unsafe_math_optimizations))
    ? (int) 
#line 2372 "../../gcc/config/arm/neon.md"
(TARGET_NEON && !(GET_MODE_CLASS (V4SFmode) == MODE_VECTOR_FLOAT
                    && !flag_unsafe_math_optimizations))
    : -1 },
#line 933 "../../gcc/config/arm/thumb1.md"
  { "TARGET_THUMB1\n\
   && (   register_operand (operands[0], SFmode)\n\
       || register_operand (operands[1], SFmode))",
    __builtin_constant_p 
#line 933 "../../gcc/config/arm/thumb1.md"
(TARGET_THUMB1
   && (   register_operand (operands[0], SFmode)
       || register_operand (operands[1], SFmode)))
    ? (int) 
#line 933 "../../gcc/config/arm/thumb1.md"
(TARGET_THUMB1
   && (   register_operand (operands[0], SFmode)
       || register_operand (operands[1], SFmode)))
    : -1 },
#line 3168 "../../gcc/config/arm/arm.md"
  { "TARGET_ARM\n\
   && (INTVAL (operands[3]) >= 0 && INTVAL (operands[3]) < 32\n\
       && INTVAL (operands[2]) > 0 \n\
       && INTVAL (operands[2]) + (INTVAL (operands[3]) & 1) <= 8\n\
       && INTVAL (operands[2]) + INTVAL (operands[3]) <= 32)\n\
   && !reg_overlap_mentioned_p (operands[0], operands[4])",
    __builtin_constant_p 
#line 3168 "../../gcc/config/arm/arm.md"
(TARGET_ARM
   && (INTVAL (operands[3]) >= 0 && INTVAL (operands[3]) < 32
       && INTVAL (operands[2]) > 0 
       && INTVAL (operands[2]) + (INTVAL (operands[3]) & 1) <= 8
       && INTVAL (operands[2]) + INTVAL (operands[3]) <= 32)
   && !reg_overlap_mentioned_p (operands[0], operands[4]))
    ? (int) 
#line 3168 "../../gcc/config/arm/arm.md"
(TARGET_ARM
   && (INTVAL (operands[3]) >= 0 && INTVAL (operands[3]) < 32
       && INTVAL (operands[2]) > 0 
       && INTVAL (operands[2]) + (INTVAL (operands[3]) & 1) <= 8
       && INTVAL (operands[2]) + INTVAL (operands[3]) <= 32)
   && !reg_overlap_mentioned_p (operands[0], operands[4]))
    : -1 },
#line 1677 "../../gcc/config/arm/thumb2.md"
  { "TARGET_THUMB2 && TARGET_HAVE_FPCXT_CMSE && use_cmse && reload_completed",
    __builtin_constant_p 
#line 1677 "../../gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && TARGET_HAVE_FPCXT_CMSE && use_cmse && reload_completed)
    ? (int) 
#line 1677 "../../gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && TARGET_HAVE_FPCXT_CMSE && use_cmse && reload_completed)
    : -1 },
  { "(TARGET_ARM) && ( reload_completed)",
    __builtin_constant_p (
#line 5216 "../../gcc/config/arm/arm.md"
(TARGET_ARM) && 
#line 5218 "../../gcc/config/arm/arm.md"
( reload_completed))
    ? (int) (
#line 5216 "../../gcc/config/arm/arm.md"
(TARGET_ARM) && 
#line 5218 "../../gcc/config/arm/arm.md"
( reload_completed))
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_REALLY_IWMMXT)",
    __builtin_constant_p (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 899 "../../gcc/config/arm/iwmmxt2.md"
(TARGET_REALLY_IWMMXT))
    ? (int) (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 899 "../../gcc/config/arm/iwmmxt2.md"
(TARGET_REALLY_IWMMXT))
    : -1 },
  { "(TARGET_THUMB1) && ( reload_completed && CONST_INT_P (operands[2])\n\
   && ((operands[1] != stack_pointer_rtx\n\
        && (INTVAL (operands[2]) > 255 || INTVAL (operands[2]) < -255))\n\
       || (operands[1] == stack_pointer_rtx\n\
 	   && INTVAL (operands[2]) > 1020)))",
    __builtin_constant_p (
#line 66 "../../gcc/config/arm/thumb1.md"
(TARGET_THUMB1) && 
#line 87 "../../gcc/config/arm/thumb1.md"
( reload_completed && CONST_INT_P (operands[2])
   && ((operands[1] != stack_pointer_rtx
        && (INTVAL (operands[2]) > 255 || INTVAL (operands[2]) < -255))
       || (operands[1] == stack_pointer_rtx
 	   && INTVAL (operands[2]) > 1020))))
    ? (int) (
#line 66 "../../gcc/config/arm/thumb1.md"
(TARGET_THUMB1) && 
#line 87 "../../gcc/config/arm/thumb1.md"
( reload_completed && CONST_INT_P (operands[2])
   && ((operands[1] != stack_pointer_rtx
        && (INTVAL (operands[2]) > 255 || INTVAL (operands[2]) < -255))
       || (operands[1] == stack_pointer_rtx
 	   && INTVAL (operands[2]) > 1020))))
    : -1 },
#line 1885 "../../gcc/config/arm/vfp.md"
  { "TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_VFP3 && !flag_rounding_math",
    __builtin_constant_p 
#line 1885 "../../gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_VFP3 && !flag_rounding_math)
    ? (int) 
#line 1885 "../../gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_VFP3 && !flag_rounding_math)
    : -1 },
#line 688 "../../gcc/config/arm/ldmstm.md"
  { "TARGET_ARM && XVECLEN (operands[0], 0) == 4",
    __builtin_constant_p 
#line 688 "../../gcc/config/arm/ldmstm.md"
(TARGET_ARM && XVECLEN (operands[0], 0) == 4)
    ? (int) 
#line 688 "../../gcc/config/arm/ldmstm.md"
(TARGET_ARM && XVECLEN (operands[0], 0) == 4)
    : -1 },
#line 12531 "../../gcc/config/arm/arm.md"
  { "TARGET_LDRD && TARGET_THUMB2 && reload_completed\n\
     && (operands_ok_ldrd_strd (operands[1], operands[2],\n\
                                  operands[0], -4, false, false))",
    __builtin_constant_p 
#line 12531 "../../gcc/config/arm/arm.md"
(TARGET_LDRD && TARGET_THUMB2 && reload_completed
     && (operands_ok_ldrd_strd (operands[1], operands[2],
                                  operands[0], -4, false, false)))
    ? (int) 
#line 12531 "../../gcc/config/arm/arm.md"
(TARGET_LDRD && TARGET_THUMB2 && reload_completed
     && (operands_ok_ldrd_strd (operands[1], operands[2],
                                  operands[0], -4, false, false)))
    : -1 },
#line 1018 "../../gcc/config/arm/ldmstm.md"
  { "TARGET_ARM && XVECLEN (operands[0], 0) == 2",
    __builtin_constant_p 
#line 1018 "../../gcc/config/arm/ldmstm.md"
(TARGET_ARM && XVECLEN (operands[0], 0) == 2)
    ? (int) 
#line 1018 "../../gcc/config/arm/ldmstm.md"
(TARGET_ARM && XVECLEN (operands[0], 0) == 2)
    : -1 },
#line 5714 "../../gcc/config/arm/arm.md"
  { "TARGET_32BIT\n\
   && (UINTVAL (operands[3])\n\
       == (GET_MODE_MASK (GET_MODE (operands[5]))\n\
           & (GET_MODE_MASK (GET_MODE (operands[5]))\n\
	      << (INTVAL (operands[2])))))",
    __builtin_constant_p 
#line 5714 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (UINTVAL (operands[3])
       == (GET_MODE_MASK (GET_MODE (operands[5]))
           & (GET_MODE_MASK (GET_MODE (operands[5]))
	      << (INTVAL (operands[2]))))))
    ? (int) 
#line 5714 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (UINTVAL (operands[3])
       == (GET_MODE_MASK (GET_MODE (operands[5]))
           & (GET_MODE_MASK (GET_MODE (operands[5]))
	      << (INTVAL (operands[2]))))))
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_LDRD && TARGET_THUMB2 && reload_completed\n\
     && ((INTVAL (operands[2]) + 4) == INTVAL (operands[4]))\n\
     && (operands_ok_ldrd_strd (operands[0], operands[3],\n\
                                  operands[1], INTVAL (operands[2]),\n\
                                  false, true)))",
    __builtin_constant_p (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 12461 "../../gcc/config/arm/arm.md"
(TARGET_LDRD && TARGET_THUMB2 && reload_completed
     && ((INTVAL (operands[2]) + 4) == INTVAL (operands[4]))
     && (operands_ok_ldrd_strd (operands[0], operands[3],
                                  operands[1], INTVAL (operands[2]),
                                  false, true))))
    ? (int) (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 12461 "../../gcc/config/arm/arm.md"
(TARGET_LDRD && TARGET_THUMB2 && reload_completed
     && ((INTVAL (operands[2]) + 4) == INTVAL (operands[4]))
     && (operands_ok_ldrd_strd (operands[0], operands[3],
                                  operands[1], INTVAL (operands[2]),
                                  false, true))))
    : -1 },
#line 913 "../../gcc/config/arm/arm.md"
  { "TARGET_32BIT &&\n\
   !(const_ok_for_arm (INTVAL (operands[2]))\n\
     || const_ok_for_arm (-INTVAL (operands[2])))\n\
    && const_ok_for_arm (~INTVAL (operands[2]))",
    __builtin_constant_p 
#line 913 "../../gcc/config/arm/arm.md"
(TARGET_32BIT &&
   !(const_ok_for_arm (INTVAL (operands[2]))
     || const_ok_for_arm (-INTVAL (operands[2])))
    && const_ok_for_arm (~INTVAL (operands[2])))
    ? (int) 
#line 913 "../../gcc/config/arm/arm.md"
(TARGET_32BIT &&
   !(const_ok_for_arm (INTVAL (operands[2]))
     || const_ok_for_arm (-INTVAL (operands[2])))
    && const_ok_for_arm (~INTVAL (operands[2])))
    : -1 },
#line 1120 "../../gcc/config/arm/thumb2.md"
  { "TARGET_THUMB2 && arm_arch6",
    __builtin_constant_p 
#line 1120 "../../gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && arm_arch6)
    ? (int) 
#line 1120 "../../gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && arm_arch6)
    : -1 },
#line 184 "../../gcc/config/arm/neon.md"
  { "(TARGET_NEON || TARGET_HAVE_MVE)\n\
   && (register_operand (operands[0], OImode)\n\
       || register_operand (operands[1], OImode))",
    __builtin_constant_p 
#line 184 "../../gcc/config/arm/neon.md"
((TARGET_NEON || TARGET_HAVE_MVE)
   && (register_operand (operands[0], OImode)
       || register_operand (operands[1], OImode)))
    ? (int) 
#line 184 "../../gcc/config/arm/neon.md"
((TARGET_NEON || TARGET_HAVE_MVE)
   && (register_operand (operands[0], OImode)
       || register_operand (operands[1], OImode)))
    : -1 },
#line 12711 "../../gcc/config/arm/arm.md"
  { "arm_coproc_builtin_available (VUNSPEC_STC2)",
    __builtin_constant_p 
#line 12711 "../../gcc/config/arm/arm.md"
(arm_coproc_builtin_available (VUNSPEC_STC2))
    ? (int) 
#line 12711 "../../gcc/config/arm/arm.md"
(arm_coproc_builtin_available (VUNSPEC_STC2))
    : -1 },
#line 10840 "../../gcc/config/arm/mve.md"
  { "((TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V8HFmode))\n\
    || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V8HFmode)))\n\
   && !BYTES_BIG_ENDIAN && unaligned_access",
    __builtin_constant_p 
#line 10840 "../../gcc/config/arm/mve.md"
(((TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V8HFmode))
    || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V8HFmode)))
   && !BYTES_BIG_ENDIAN && unaligned_access)
    ? (int) 
#line 10840 "../../gcc/config/arm/mve.md"
(((TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V8HFmode))
    || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V8HFmode)))
   && !BYTES_BIG_ENDIAN && unaligned_access)
    : -1 },
#line 816 "../../gcc/config/arm/vfp.md"
  { "TARGET_ARM && TARGET_HARD_FLOAT && TARGET_VFP_DOUBLE",
    __builtin_constant_p 
#line 816 "../../gcc/config/arm/vfp.md"
(TARGET_ARM && TARGET_HARD_FLOAT && TARGET_VFP_DOUBLE)
    ? (int) 
#line 816 "../../gcc/config/arm/vfp.md"
(TARGET_ARM && TARGET_HARD_FLOAT && TARGET_VFP_DOUBLE)
    : -1 },
#line 10396 "../../gcc/config/arm/arm.md"
  { "TARGET_32BIT && reload_completed\n\
   && (arm_select_dominance_cc_mode (operands[3], operands[6], DOM_CC_X_AND_Y)\n\
       != CCmode)",
    __builtin_constant_p 
#line 10396 "../../gcc/config/arm/arm.md"
(TARGET_32BIT && reload_completed
   && (arm_select_dominance_cc_mode (operands[3], operands[6], DOM_CC_X_AND_Y)
       != CCmode))
    ? (int) 
#line 10396 "../../gcc/config/arm/arm.md"
(TARGET_32BIT && reload_completed
   && (arm_select_dominance_cc_mode (operands[3], operands[6], DOM_CC_X_AND_Y)
       != CCmode))
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_HAVE_LDREXBH && TARGET_HAVE_MEMORY_BARRIER)",
    __builtin_constant_p (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 523 "../../gcc/config/arm/sync.md"
(TARGET_HAVE_LDREXBH && TARGET_HAVE_MEMORY_BARRIER))
    ? (int) (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 523 "../../gcc/config/arm/sync.md"
(TARGET_HAVE_LDREXBH && TARGET_HAVE_MEMORY_BARRIER))
    : -1 },
  { "(TARGET_THUMB2 && arm_restrict_it) && ( reload_completed)",
    __builtin_constant_p (
#line 798 "../../gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && arm_restrict_it) && 
#line 800 "../../gcc/config/arm/thumb2.md"
( reload_completed))
    ? (int) (
#line 798 "../../gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && arm_restrict_it) && 
#line 800 "../../gcc/config/arm/thumb2.md"
( reload_completed))
    : -1 },
#line 12758 "../../gcc/config/arm/arm.md"
  { "arm_coproc_builtin_available (VUNSPEC_MCRR)",
    __builtin_constant_p 
#line 12758 "../../gcc/config/arm/arm.md"
(arm_coproc_builtin_available (VUNSPEC_MCRR))
    ? (int) 
#line 12758 "../../gcc/config/arm/arm.md"
(arm_coproc_builtin_available (VUNSPEC_MCRR))
    : -1 },
  { "(TARGET_THUMB2) && ( reload_completed)",
    __builtin_constant_p (
#line 170 "../../gcc/config/arm/thumb2.md"
(TARGET_THUMB2) && 
#line 175 "../../gcc/config/arm/thumb2.md"
( reload_completed))
    ? (int) (
#line 170 "../../gcc/config/arm/thumb2.md"
(TARGET_THUMB2) && 
#line 175 "../../gcc/config/arm/thumb2.md"
( reload_completed))
    : -1 },
#line 8690 "../../gcc/config/arm/mve.md"
  { "TARGET_HAVE_MVE || TARGET_HAVE_MVE_FLOAT",
    __builtin_constant_p 
#line 8690 "../../gcc/config/arm/mve.md"
(TARGET_HAVE_MVE || TARGET_HAVE_MVE_FLOAT)
    ? (int) 
#line 8690 "../../gcc/config/arm/mve.md"
(TARGET_HAVE_MVE || TARGET_HAVE_MVE_FLOAT)
    : -1 },
  { "((TARGET_COMPLEX || (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT\n\
		      && ARM_HAVE_V4HF_ARITH)) && !BYTES_BIG_ENDIAN) && (TARGET_NEON_FP16INST)",
    __builtin_constant_p (
#line 272 "../../gcc/config/arm/vec-common.md"
((TARGET_COMPLEX || (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT
		      && ARM_HAVE_V4HF_ARITH)) && !BYTES_BIG_ENDIAN) && 
#line 153 "../../gcc/config/arm/iterators.md"
(TARGET_NEON_FP16INST))
    ? (int) (
#line 272 "../../gcc/config/arm/vec-common.md"
((TARGET_COMPLEX || (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT
		      && ARM_HAVE_V4HF_ARITH)) && !BYTES_BIG_ENDIAN) && 
#line 153 "../../gcc/config/arm/iterators.md"
(TARGET_NEON_FP16INST))
    : -1 },
#line 106 "../../gcc/config/arm/vec-common.md"
  { "ARM_HAVE_V4SF_ARITH\n\
   && (!TARGET_REALLY_IWMMXT\n\
       || V4SFmode == V4HImode\n\
       || V4SFmode == V2SImode)",
    __builtin_constant_p 
#line 106 "../../gcc/config/arm/vec-common.md"
(ARM_HAVE_V4SF_ARITH
   && (!TARGET_REALLY_IWMMXT
       || V4SFmode == V4HImode
       || V4SFmode == V2SImode))
    ? (int) 
#line 106 "../../gcc/config/arm/vec-common.md"
(ARM_HAVE_V4SF_ARITH
   && (!TARGET_REALLY_IWMMXT
       || V4SFmode == V4HImode
       || V4SFmode == V2SImode))
    : -1 },
#line 2372 "../../gcc/config/arm/neon.md"
  { "TARGET_NEON && !(GET_MODE_CLASS (V2SFmode) == MODE_VECTOR_FLOAT\n\
                    && !flag_unsafe_math_optimizations)",
    __builtin_constant_p 
#line 2372 "../../gcc/config/arm/neon.md"
(TARGET_NEON && !(GET_MODE_CLASS (V2SFmode) == MODE_VECTOR_FLOAT
                    && !flag_unsafe_math_optimizations))
    ? (int) 
#line 2372 "../../gcc/config/arm/neon.md"
(TARGET_NEON && !(GET_MODE_CLASS (V2SFmode) == MODE_VECTOR_FLOAT
                    && !flag_unsafe_math_optimizations))
    : -1 },
#line 223 "../../gcc/config/arm/thumb2.md"
  { "TARGET_THUMB2 && (reload_in_progress || reload_completed)",
    __builtin_constant_p 
#line 223 "../../gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && (reload_in_progress || reload_completed))
    ? (int) 
#line 223 "../../gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && (reload_in_progress || reload_completed))
    : -1 },
#line 407 "../../gcc/config/arm/vec-common.md"
  { "ARM_HAVE_V8QI_ARITH && !TARGET_REALLY_IWMMXT",
    __builtin_constant_p 
#line 407 "../../gcc/config/arm/vec-common.md"
(ARM_HAVE_V8QI_ARITH && !TARGET_REALLY_IWMMXT)
    ? (int) 
#line 407 "../../gcc/config/arm/vec-common.md"
(ARM_HAVE_V8QI_ARITH && !TARGET_REALLY_IWMMXT)
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_ARM && XVECLEN (operands[0], 0) == 3)",
    __builtin_constant_p (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 1031 "../../gcc/config/arm/ldmstm.md"
(TARGET_ARM && XVECLEN (operands[0], 0) == 3))
    ? (int) (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 1031 "../../gcc/config/arm/ldmstm.md"
(TARGET_ARM && XVECLEN (operands[0], 0) == 3))
    : -1 },
#line 5918 "../../gcc/config/arm/arm.md"
  { "TARGET_ARM && arm_arch4 && !arm_arch6",
    __builtin_constant_p 
#line 5918 "../../gcc/config/arm/arm.md"
(TARGET_ARM && arm_arch4 && !arm_arch6)
    ? (int) 
#line 5918 "../../gcc/config/arm/arm.md"
(TARGET_ARM && arm_arch4 && !arm_arch6)
    : -1 },
#line 520 "../../gcc/config/arm/thumb2.md"
  { "TARGET_THUMB2 && TARGET_SOFT_FLOAT && !TARGET_HAVE_MVE",
    __builtin_constant_p 
#line 520 "../../gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && TARGET_SOFT_FLOAT && !TARGET_HAVE_MVE)
    ? (int) 
#line 520 "../../gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && TARGET_SOFT_FLOAT && !TARGET_HAVE_MVE)
    : -1 },
#line 9370 "../../gcc/config/arm/arm.md"
  { "(TARGET_32BIT || optimize_size || flag_pic) && !target_pure_code",
    __builtin_constant_p 
#line 9370 "../../gcc/config/arm/arm.md"
((TARGET_32BIT || optimize_size || flag_pic) && !target_pure_code)
    ? (int) 
#line 9370 "../../gcc/config/arm/arm.md"
((TARGET_32BIT || optimize_size || flag_pic) && !target_pure_code)
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_32BIT\n\
   && !TARGET_HARD_FLOAT\n\
   && !TARGET_HAVE_MVE\n\
   && (	  s_register_operand (operands[0], BFmode)\n\
       || s_register_operand (operands[1], BFmode)))",
    __builtin_constant_p (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 7300 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && !TARGET_HARD_FLOAT
   && !TARGET_HAVE_MVE
   && (	  s_register_operand (operands[0], BFmode)
       || s_register_operand (operands[1], BFmode))))
    ? (int) (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 7300 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && !TARGET_HARD_FLOAT
   && !TARGET_HAVE_MVE
   && (	  s_register_operand (operands[0], BFmode)
       || s_register_operand (operands[1], BFmode))))
    : -1 },
#line 12804 "../../gcc/config/arm/arm.md"
  { "arm_arch7 || arm_arch8",
    __builtin_constant_p 
#line 12804 "../../gcc/config/arm/arm.md"
(arm_arch7 || arm_arch8)
    ? (int) 
#line 12804 "../../gcc/config/arm/arm.md"
(arm_arch7 || arm_arch8)
    : -1 },
  { "((TARGET_COMPLEX || (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT\n\
		      && ARM_HAVE_V8HF_ARITH)) && !BYTES_BIG_ENDIAN) && (TARGET_NEON_FP16INST)",
    __builtin_constant_p (
#line 272 "../../gcc/config/arm/vec-common.md"
((TARGET_COMPLEX || (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT
		      && ARM_HAVE_V8HF_ARITH)) && !BYTES_BIG_ENDIAN) && 
#line 154 "../../gcc/config/arm/iterators.md"
(TARGET_NEON_FP16INST))
    ? (int) (
#line 272 "../../gcc/config/arm/vec-common.md"
((TARGET_COMPLEX || (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT
		      && ARM_HAVE_V8HF_ARITH)) && !BYTES_BIG_ENDIAN) && 
#line 154 "../../gcc/config/arm/iterators.md"
(TARGET_NEON_FP16INST))
    : -1 },
#line 850 "../../gcc/config/arm/arm.md"
  { "TARGET_32BIT\n\
   && (UINTVAL (operands[2]) & 0xffffffff) == UINTVAL (operands[5])",
    __builtin_constant_p 
#line 850 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (UINTVAL (operands[2]) & 0xffffffff) == UINTVAL (operands[5]))
    ? (int) 
#line 850 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (UINTVAL (operands[2]) & 0xffffffff) == UINTVAL (operands[5]))
    : -1 },
#line 1341 "../../gcc/config/arm/thumb2.md"
  { "TARGET_THUMB2\n\
   && peep2_reg_dead_p (1, operands[1])\n\
   && satisfies_constraint_Pw (operands[2])",
    __builtin_constant_p 
#line 1341 "../../gcc/config/arm/thumb2.md"
(TARGET_THUMB2
   && peep2_reg_dead_p (1, operands[1])
   && satisfies_constraint_Pw (operands[2]))
    ? (int) 
#line 1341 "../../gcc/config/arm/thumb2.md"
(TARGET_THUMB2
   && peep2_reg_dead_p (1, operands[1])
   && satisfies_constraint_Pw (operands[2]))
    : -1 },
#line 2086 "../../gcc/config/arm/arm.md"
  { "TARGET_32BIT && ~UINTVAL (operands[1]) == UINTVAL (operands[3])",
    __builtin_constant_p 
#line 2086 "../../gcc/config/arm/arm.md"
(TARGET_32BIT && ~UINTVAL (operands[1]) == UINTVAL (operands[3]))
    ? (int) 
#line 2086 "../../gcc/config/arm/arm.md"
(TARGET_32BIT && ~UINTVAL (operands[1]) == UINTVAL (operands[3]))
    : -1 },
#line 9536 "../../gcc/config/arm/arm.md"
  { "TARGET_32BIT && GET_CODE (operands[2]) != MULT",
    __builtin_constant_p 
#line 9536 "../../gcc/config/arm/arm.md"
(TARGET_32BIT && GET_CODE (operands[2]) != MULT)
    ? (int) 
#line 9536 "../../gcc/config/arm/arm.md"
(TARGET_32BIT && GET_CODE (operands[2]) != MULT)
    : -1 },
#line 2372 "../../gcc/config/arm/neon.md"
  { "TARGET_NEON && !(GET_MODE_CLASS (V2SImode) == MODE_VECTOR_FLOAT\n\
                    && !flag_unsafe_math_optimizations)",
    __builtin_constant_p 
#line 2372 "../../gcc/config/arm/neon.md"
(TARGET_NEON && !(GET_MODE_CLASS (V2SImode) == MODE_VECTOR_FLOAT
                    && !flag_unsafe_math_optimizations))
    ? (int) 
#line 2372 "../../gcc/config/arm/neon.md"
(TARGET_NEON && !(GET_MODE_CLASS (V2SImode) == MODE_VECTOR_FLOAT
                    && !flag_unsafe_math_optimizations))
    : -1 },
#line 12773 "../../gcc/config/arm/arm.md"
  { "arm_coproc_builtin_available (VUNSPEC_MRRC2)",
    __builtin_constant_p 
#line 12773 "../../gcc/config/arm/arm.md"
(arm_coproc_builtin_available (VUNSPEC_MRRC2))
    ? (int) 
#line 12773 "../../gcc/config/arm/arm.md"
(arm_coproc_builtin_available (VUNSPEC_MRRC2))
    : -1 },
#line 12711 "../../gcc/config/arm/arm.md"
  { "arm_coproc_builtin_available (VUNSPEC_STC)",
    __builtin_constant_p 
#line 12711 "../../gcc/config/arm/arm.md"
(arm_coproc_builtin_available (VUNSPEC_STC))
    ? (int) 
#line 12711 "../../gcc/config/arm/arm.md"
(arm_coproc_builtin_available (VUNSPEC_STC))
    : -1 },
#line 88 "../../gcc/config/arm/neon.md"
  { "TARGET_NEON\n\
   && (register_operand (operands[0], V8HImode)\n\
       || register_operand (operands[1], V8HImode))",
    __builtin_constant_p 
#line 88 "../../gcc/config/arm/neon.md"
(TARGET_NEON
   && (register_operand (operands[0], V8HImode)
       || register_operand (operands[1], V8HImode)))
    ? (int) 
#line 88 "../../gcc/config/arm/neon.md"
(TARGET_NEON
   && (register_operand (operands[0], V8HImode)
       || register_operand (operands[1], V8HImode)))
    : -1 },
#line 6321 "../../gcc/config/arm/arm.md"
  { "TARGET_EITHER && reload_completed",
    __builtin_constant_p 
#line 6321 "../../gcc/config/arm/arm.md"
(TARGET_EITHER && reload_completed)
    ? (int) 
#line 6321 "../../gcc/config/arm/arm.md"
(TARGET_EITHER && reload_completed)
    : -1 },
#line 1994 "../../gcc/config/arm/thumb1.md"
  { "TARGET_THUMB1",
    __builtin_constant_p 
#line 1994 "../../gcc/config/arm/thumb1.md"
(TARGET_THUMB1)
    ? (int) 
#line 1994 "../../gcc/config/arm/thumb1.md"
(TARGET_THUMB1)
    : -1 },
#line 208 "../../gcc/config/arm/iwmmxt.md"
  { "TARGET_REALLY_IWMMXT\n\
   && (   register_operand (operands[0], SImode)\n\
       || register_operand (operands[1], SImode))",
    __builtin_constant_p 
#line 208 "../../gcc/config/arm/iwmmxt.md"
(TARGET_REALLY_IWMMXT
   && (   register_operand (operands[0], SImode)
       || register_operand (operands[1], SImode)))
    ? (int) 
#line 208 "../../gcc/config/arm/iwmmxt.md"
(TARGET_REALLY_IWMMXT
   && (   register_operand (operands[0], SImode)
       || register_operand (operands[1], SImode)))
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_DSP_MULTIPLY)",
    __builtin_constant_p (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 2765 "../../gcc/config/arm/arm.md"
(TARGET_DSP_MULTIPLY))
    ? (int) (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 2765 "../../gcc/config/arm/arm.md"
(TARGET_DSP_MULTIPLY))
    : -1 },
#line 10464 "../../gcc/config/arm/arm.md"
  { "TARGET_32BIT && reload_completed",
    __builtin_constant_p 
#line 10464 "../../gcc/config/arm/arm.md"
(TARGET_32BIT && reload_completed)
    ? (int) 
#line 10464 "../../gcc/config/arm/arm.md"
(TARGET_32BIT && reload_completed)
    : -1 },
#line 106 "../../gcc/config/arm/vec-common.md"
  { "ARM_HAVE_V16QI_ARITH\n\
   && (!TARGET_REALLY_IWMMXT\n\
       || V16QImode == V4HImode\n\
       || V16QImode == V2SImode)",
    __builtin_constant_p 
#line 106 "../../gcc/config/arm/vec-common.md"
(ARM_HAVE_V16QI_ARITH
   && (!TARGET_REALLY_IWMMXT
       || V16QImode == V4HImode
       || V16QImode == V2SImode))
    ? (int) 
#line 106 "../../gcc/config/arm/vec-common.md"
(ARM_HAVE_V16QI_ARITH
   && (!TARGET_REALLY_IWMMXT
       || V16QImode == V4HImode
       || V16QImode == V2SImode))
    : -1 },
#line 1988 "../../gcc/config/arm/vfp.md"
  { "TARGET_VFP_FP16INST",
    __builtin_constant_p 
#line 1988 "../../gcc/config/arm/vfp.md"
(TARGET_VFP_FP16INST)
    ? (int) 
#line 1988 "../../gcc/config/arm/vfp.md"
(TARGET_VFP_FP16INST)
    : -1 },
#line 1123 "../../gcc/config/arm/vfp.md"
  { "TARGET_VFP_FP16INST && !flag_rounding_math",
    __builtin_constant_p 
#line 1123 "../../gcc/config/arm/vfp.md"
(TARGET_VFP_FP16INST && !flag_rounding_math)
    ? (int) 
#line 1123 "../../gcc/config/arm/vfp.md"
(TARGET_VFP_FP16INST && !flag_rounding_math)
    : -1 },
#line 5654 "../../gcc/config/arm/arm.md"
  { "TARGET_ARM && !arm_arch6",
    __builtin_constant_p 
#line 5654 "../../gcc/config/arm/arm.md"
(TARGET_ARM && !arm_arch6)
    ? (int) 
#line 5654 "../../gcc/config/arm/arm.md"
(TARGET_ARM && !arm_arch6)
    : -1 },
  { "(TARGET_HAVE_LDREX && TARGET_HAVE_MEMORY_BARRIER) && (TARGET_32BIT)",
    __builtin_constant_p (
#line 235 "../../gcc/config/arm/sync.md"
(TARGET_HAVE_LDREX && TARGET_HAVE_MEMORY_BARRIER) && 
#line 53 "../../gcc/config/arm/iterators.md"
(TARGET_32BIT))
    ? (int) (
#line 235 "../../gcc/config/arm/sync.md"
(TARGET_HAVE_LDREX && TARGET_HAVE_MEMORY_BARRIER) && 
#line 53 "../../gcc/config/arm/iterators.md"
(TARGET_32BIT))
    : -1 },
#line 2372 "../../gcc/config/arm/neon.md"
  { "TARGET_NEON && !(GET_MODE_CLASS (V8HImode) == MODE_VECTOR_FLOAT\n\
                    && !flag_unsafe_math_optimizations)",
    __builtin_constant_p 
#line 2372 "../../gcc/config/arm/neon.md"
(TARGET_NEON && !(GET_MODE_CLASS (V8HImode) == MODE_VECTOR_FLOAT
                    && !flag_unsafe_math_optimizations))
    ? (int) 
#line 2372 "../../gcc/config/arm/neon.md"
(TARGET_NEON && !(GET_MODE_CLASS (V8HImode) == MODE_VECTOR_FLOAT
                    && !flag_unsafe_math_optimizations))
    : -1 },
#line 12031 "../../gcc/config/arm/arm.md"
  { "TARGET_32BIT && arm_arch5t",
    __builtin_constant_p 
#line 12031 "../../gcc/config/arm/arm.md"
(TARGET_32BIT && arm_arch5t)
    ? (int) 
#line 12031 "../../gcc/config/arm/arm.md"
(TARGET_32BIT && arm_arch5t)
    : -1 },
#line 202 "../../gcc/config/arm/vec-common.md"
  { "ARM_HAVE_V16QI_ARITH",
    __builtin_constant_p 
#line 202 "../../gcc/config/arm/vec-common.md"
(ARM_HAVE_V16QI_ARITH)
    ? (int) 
#line 202 "../../gcc/config/arm/vec-common.md"
(ARM_HAVE_V16QI_ARITH)
    : -1 },
#line 11308 "../../gcc/config/arm/arm.md"
  { "TARGET_ARM && adjacent_mem_locations (operands[2], operands[3])",
    __builtin_constant_p 
#line 11308 "../../gcc/config/arm/arm.md"
(TARGET_ARM && adjacent_mem_locations (operands[2], operands[3]))
    ? (int) 
#line 11308 "../../gcc/config/arm/arm.md"
(TARGET_ARM && adjacent_mem_locations (operands[2], operands[3]))
    : -1 },
#line 4124 "../../gcc/config/arm/arm.md"
  { "TARGET_32BIT && optimize_function_for_size_p (cfun) && !arm_restrict_it",
    __builtin_constant_p 
#line 4124 "../../gcc/config/arm/arm.md"
(TARGET_32BIT && optimize_function_for_size_p (cfun) && !arm_restrict_it)
    ? (int) 
#line 4124 "../../gcc/config/arm/arm.md"
(TARGET_32BIT && optimize_function_for_size_p (cfun) && !arm_restrict_it)
    : -1 },
#line 10485 "../../gcc/config/arm/mve.md"
  { "(TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V4SImode))\n\
   || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V4SImode))",
    __builtin_constant_p 
#line 10485 "../../gcc/config/arm/mve.md"
((TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V4SImode))
   || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V4SImode)))
    ? (int) 
#line 10485 "../../gcc/config/arm/mve.md"
((TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V4SImode))
   || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V4SImode)))
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_HAVE_LDACQ)",
    __builtin_constant_p (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 564 "../../gcc/config/arm/sync.md"
(TARGET_HAVE_LDACQ))
    ? (int) (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 564 "../../gcc/config/arm/sync.md"
(TARGET_HAVE_LDACQ))
    : -1 },
#line 129 "../../gcc/config/arm/crypto.md"
  { "TARGET_CRYPTO && INTVAL (operands[2]) == NEON_ENDIAN_LANE_N (V2SImode, 0)",
    __builtin_constant_p 
#line 129 "../../gcc/config/arm/crypto.md"
(TARGET_CRYPTO && INTVAL (operands[2]) == NEON_ENDIAN_LANE_N (V2SImode, 0))
    ? (int) 
#line 129 "../../gcc/config/arm/crypto.md"
(TARGET_CRYPTO && INTVAL (operands[2]) == NEON_ENDIAN_LANE_N (V2SImode, 0))
    : -1 },
#line 8940 "../../gcc/config/arm/arm.md"
  { "TARGET_ARM   && USE_RETURN_INSN (TRUE)",
    __builtin_constant_p 
#line 8940 "../../gcc/config/arm/arm.md"
(TARGET_ARM   && USE_RETURN_INSN (TRUE))
    ? (int) 
#line 8940 "../../gcc/config/arm/arm.md"
(TARGET_ARM   && USE_RETURN_INSN (TRUE))
    : -1 },
#line 6608 "../../gcc/config/arm/arm.md"
  { "TARGET_32BIT && flag_pic",
    __builtin_constant_p 
#line 6608 "../../gcc/config/arm/arm.md"
(TARGET_32BIT && flag_pic)
    ? (int) 
#line 6608 "../../gcc/config/arm/arm.md"
(TARGET_32BIT && flag_pic)
    : -1 },
#line 1595 "../../gcc/config/arm/thumb2.md"
  { "TARGET_THUMB2\n\
   && (INTVAL (operands[2]) > 0 && INTVAL (operands[2]) < 32)\n\
   && peep2_reg_dead_p (2, operands[0])",
    __builtin_constant_p 
#line 1595 "../../gcc/config/arm/thumb2.md"
(TARGET_THUMB2
   && (INTVAL (operands[2]) > 0 && INTVAL (operands[2]) < 32)
   && peep2_reg_dead_p (2, operands[0]))
    ? (int) 
#line 1595 "../../gcc/config/arm/thumb2.md"
(TARGET_THUMB2
   && (INTVAL (operands[2]) > 0 && INTVAL (operands[2]) < 32)
   && peep2_reg_dead_p (2, operands[0]))
    : -1 },
#line 49 "../../gcc/config/arm/vec-common.md"
  { "TARGET_NEON\n\
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V8QImode))",
    __builtin_constant_p 
#line 49 "../../gcc/config/arm/vec-common.md"
(TARGET_NEON
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V8QImode)))
    ? (int) 
#line 49 "../../gcc/config/arm/vec-common.md"
(TARGET_NEON
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V8QImode)))
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_32BIT\n\
   && (   register_operand (operands[0], QImode)\n\
       || register_operand (operands[1], QImode)))",
    __builtin_constant_p (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 7253 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (   register_operand (operands[0], QImode)
       || register_operand (operands[1], QImode))))
    ? (int) (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 7253 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (   register_operand (operands[0], QImode)
       || register_operand (operands[1], QImode))))
    : -1 },
  { "((TARGET_HAVE_LDREXBH && TARGET_HAVE_MEMORY_BARRIER) && (TARGET_32BIT)) && ( reload_completed)",
    __builtin_constant_p ((
#line 204 "../../gcc/config/arm/sync.md"
(TARGET_HAVE_LDREXBH && TARGET_HAVE_MEMORY_BARRIER) && 
#line 53 "../../gcc/config/arm/iterators.md"
(TARGET_32BIT)) && 
#line 206 "../../gcc/config/arm/sync.md"
( reload_completed))
    ? (int) ((
#line 204 "../../gcc/config/arm/sync.md"
(TARGET_HAVE_LDREXBH && TARGET_HAVE_MEMORY_BARRIER) && 
#line 53 "../../gcc/config/arm/iterators.md"
(TARGET_32BIT)) && 
#line 206 "../../gcc/config/arm/sync.md"
( reload_completed))
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_32BIT\n\
   && TARGET_SOFT_FLOAT && !TARGET_HAVE_MVE\n\
   && (!MEM_P (operands[0])\n\
       || register_operand (operands[1], SFmode)))",
    __builtin_constant_p (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 7399 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && TARGET_SOFT_FLOAT && !TARGET_HAVE_MVE
   && (!MEM_P (operands[0])
       || register_operand (operands[1], SFmode))))
    ? (int) (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 7399 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && TARGET_SOFT_FLOAT && !TARGET_HAVE_MVE
   && (!MEM_P (operands[0])
       || register_operand (operands[1], SFmode))))
    : -1 },
#line 287 "../../gcc/config/arm/vec-common.md"
  { "ARM_HAVE_V2SI_LDST && !BYTES_BIG_ENDIAN\n\
  && unaligned_access && !TARGET_REALLY_IWMMXT",
    __builtin_constant_p 
#line 287 "../../gcc/config/arm/vec-common.md"
(ARM_HAVE_V2SI_LDST && !BYTES_BIG_ENDIAN
  && unaligned_access && !TARGET_REALLY_IWMMXT)
    ? (int) 
#line 287 "../../gcc/config/arm/vec-common.md"
(ARM_HAVE_V2SI_LDST && !BYTES_BIG_ENDIAN
  && unaligned_access && !TARGET_REALLY_IWMMXT)
    : -1 },
#line 1073 "../../gcc/config/arm/arm.md"
  { "TARGET_THUMB2\n\
   && satisfies_constraint_Pd (operands[1])",
    __builtin_constant_p 
#line 1073 "../../gcc/config/arm/arm.md"
(TARGET_THUMB2
   && satisfies_constraint_Pd (operands[1]))
    ? (int) 
#line 1073 "../../gcc/config/arm/arm.md"
(TARGET_THUMB2
   && satisfies_constraint_Pd (operands[1]))
    : -1 },
#line 12461 "../../gcc/config/arm/arm.md"
  { "TARGET_LDRD && TARGET_THUMB2 && reload_completed\n\
     && ((INTVAL (operands[2]) + 4) == INTVAL (operands[4]))\n\
     && (operands_ok_ldrd_strd (operands[0], operands[3],\n\
                                  operands[1], INTVAL (operands[2]),\n\
                                  false, true))",
    __builtin_constant_p 
#line 12461 "../../gcc/config/arm/arm.md"
(TARGET_LDRD && TARGET_THUMB2 && reload_completed
     && ((INTVAL (operands[2]) + 4) == INTVAL (operands[4]))
     && (operands_ok_ldrd_strd (operands[0], operands[3],
                                  operands[1], INTVAL (operands[2]),
                                  false, true)))
    ? (int) 
#line 12461 "../../gcc/config/arm/arm.md"
(TARGET_LDRD && TARGET_THUMB2 && reload_completed
     && ((INTVAL (operands[2]) + 4) == INTVAL (operands[4]))
     && (operands_ok_ldrd_strd (operands[0], operands[3],
                                  operands[1], INTVAL (operands[2]),
                                  false, true)))
    : -1 },
#line 481 "../../gcc/config/arm/arm-fixed.md"
  { "TARGET_32BIT && arm_arch6 && !ARM_Q_BIT_READ",
    __builtin_constant_p 
#line 481 "../../gcc/config/arm/arm-fixed.md"
(TARGET_32BIT && arm_arch6 && !ARM_Q_BIT_READ)
    ? (int) 
#line 481 "../../gcc/config/arm/arm-fixed.md"
(TARGET_32BIT && arm_arch6 && !ARM_Q_BIT_READ)
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_LDRD && TARGET_ARM && reload_completed\n\
  && valid_operands_ldrd_strd (operands, false))",
    __builtin_constant_p (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 184 "../../gcc/config/arm/ldrdstrd.md"
(TARGET_LDRD && TARGET_ARM && reload_completed
  && valid_operands_ldrd_strd (operands, false)))
    ? (int) (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 184 "../../gcc/config/arm/ldrdstrd.md"
(TARGET_LDRD && TARGET_ARM && reload_completed
  && valid_operands_ldrd_strd (operands, false)))
    : -1 },
#line 88 "../../gcc/config/arm/neon.md"
  { "TARGET_NEON\n\
   && (register_operand (operands[0], V16QImode)\n\
       || register_operand (operands[1], V16QImode))",
    __builtin_constant_p 
#line 88 "../../gcc/config/arm/neon.md"
(TARGET_NEON
   && (register_operand (operands[0], V16QImode)
       || register_operand (operands[1], V16QImode)))
    ? (int) 
#line 88 "../../gcc/config/arm/neon.md"
(TARGET_NEON
   && (register_operand (operands[0], V16QImode)
       || register_operand (operands[1], V16QImode)))
    : -1 },
#line 1910 "../../gcc/config/arm/thumb1.md"
  { "TARGET_THUMB1\n\
   && GET_CODE (operands[1]) == SYMBOL_REF\n\
   && !arm_is_long_call_p (SYMBOL_REF_DECL (operands[1]))",
    __builtin_constant_p 
#line 1910 "../../gcc/config/arm/thumb1.md"
(TARGET_THUMB1
   && GET_CODE (operands[1]) == SYMBOL_REF
   && !arm_is_long_call_p (SYMBOL_REF_DECL (operands[1])))
    ? (int) 
#line 1910 "../../gcc/config/arm/thumb1.md"
(TARGET_THUMB1
   && GET_CODE (operands[1]) == SYMBOL_REF
   && !arm_is_long_call_p (SYMBOL_REF_DECL (operands[1])))
    : -1 },
#line 106 "../../gcc/config/arm/vec-common.md"
  { "ARM_HAVE_V8QI_ARITH\n\
   && (!TARGET_REALLY_IWMMXT\n\
       || V8QImode == V4HImode\n\
       || V8QImode == V2SImode)",
    __builtin_constant_p 
#line 106 "../../gcc/config/arm/vec-common.md"
(ARM_HAVE_V8QI_ARITH
   && (!TARGET_REALLY_IWMMXT
       || V8QImode == V4HImode
       || V8QImode == V2SImode))
    ? (int) 
#line 106 "../../gcc/config/arm/vec-common.md"
(ARM_HAVE_V8QI_ARITH
   && (!TARGET_REALLY_IWMMXT
       || V8QImode == V4HImode
       || V8QImode == V2SImode))
    : -1 },
#line 49 "../../gcc/config/arm/vec-common.md"
  { "TARGET_NEON\n\
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V2SImode))",
    __builtin_constant_p 
#line 49 "../../gcc/config/arm/vec-common.md"
(TARGET_NEON
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V2SImode)))
    ? (int) 
#line 49 "../../gcc/config/arm/vec-common.md"
(TARGET_NEON
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V2SImode)))
    : -1 },
#line 571 "../../gcc/config/arm/neon.md"
  { "ARM_HAVE_NEON_V16QI_ARITH",
    __builtin_constant_p 
#line 571 "../../gcc/config/arm/neon.md"
(ARM_HAVE_NEON_V16QI_ARITH)
    ? (int) 
#line 571 "../../gcc/config/arm/neon.md"
(ARM_HAVE_NEON_V16QI_ARITH)
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_THUMB2 && (reload_in_progress || reload_completed))",
    __builtin_constant_p (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 223 "../../gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && (reload_in_progress || reload_completed)))
    ? (int) (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 223 "../../gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && (reload_in_progress || reload_completed)))
    : -1 },
#line 6525 "../../gcc/config/arm/neon.md"
  { "TARGET_BF16_FP",
    __builtin_constant_p 
#line 6525 "../../gcc/config/arm/neon.md"
(TARGET_BF16_FP)
    ? (int) 
#line 6525 "../../gcc/config/arm/neon.md"
(TARGET_BF16_FP)
    : -1 },
#line 787 "../../gcc/config/arm/thumb1.md"
  { "TARGET_THUMB1\n\
   && arm_disable_literal_pool\n\
   && GET_CODE (operands[1]) == CONST_INT\n\
   && !TARGET_HAVE_MOVT\n\
   && !satisfies_constraint_K (operands[1])",
    __builtin_constant_p 
#line 787 "../../gcc/config/arm/thumb1.md"
(TARGET_THUMB1
   && arm_disable_literal_pool
   && GET_CODE (operands[1]) == CONST_INT
   && !TARGET_HAVE_MOVT
   && !satisfies_constraint_K (operands[1]))
    ? (int) 
#line 787 "../../gcc/config/arm/thumb1.md"
(TARGET_THUMB1
   && arm_disable_literal_pool
   && GET_CODE (operands[1]) == CONST_INT
   && !TARGET_HAVE_MOVT
   && !satisfies_constraint_K (operands[1]))
    : -1 },
#line 3277 "../../gcc/config/arm/arm.md"
  { "TARGET_ARM || arm_arch_thumb2",
    __builtin_constant_p 
#line 3277 "../../gcc/config/arm/arm.md"
(TARGET_ARM || arm_arch_thumb2)
    ? (int) 
#line 3277 "../../gcc/config/arm/arm.md"
(TARGET_ARM || arm_arch_thumb2)
    : -1 },
#line 5908 "../../gcc/config/arm/arm.md"
  { "!arm_arch6",
    __builtin_constant_p 
#line 5908 "../../gcc/config/arm/arm.md"
(!arm_arch6)
    ? (int) 
#line 5908 "../../gcc/config/arm/arm.md"
(!arm_arch6)
    : -1 },
#line 6454 "../../gcc/config/arm/arm.md"
  { "TARGET_ARM && !TARGET_IWMMXT && !TARGET_HARD_FLOAT\n\
   && (   register_operand (operands[0], SImode)\n\
       || register_operand (operands[1], SImode))",
    __builtin_constant_p 
#line 6454 "../../gcc/config/arm/arm.md"
(TARGET_ARM && !TARGET_IWMMXT && !TARGET_HARD_FLOAT
   && (   register_operand (operands[0], SImode)
       || register_operand (operands[1], SImode)))
    ? (int) 
#line 6454 "../../gcc/config/arm/arm.md"
(TARGET_ARM && !TARGET_IWMMXT && !TARGET_HARD_FLOAT
   && (   register_operand (operands[0], SImode)
       || register_operand (operands[1], SImode)))
    : -1 },
#line 798 "../../gcc/config/arm/thumb2.md"
  { "TARGET_THUMB2 && arm_restrict_it",
    __builtin_constant_p 
#line 798 "../../gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && arm_restrict_it)
    ? (int) 
#line 798 "../../gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && arm_restrict_it)
    : -1 },
  { "(TARGET_32BIT && arm_arch_thumb2) && ( reload_completed)",
    __builtin_constant_p (
#line 12051 "../../gcc/config/arm/arm.md"
(TARGET_32BIT && arm_arch_thumb2) && 
#line 12053 "../../gcc/config/arm/arm.md"
( reload_completed))
    ? (int) (
#line 12051 "../../gcc/config/arm/arm.md"
(TARGET_32BIT && arm_arch_thumb2) && 
#line 12053 "../../gcc/config/arm/arm.md"
( reload_completed))
    : -1 },
#line 1229 "../../gcc/config/arm/neon.md"
  { "ARM_HAVE_NEON_V4HI_ARITH",
    __builtin_constant_p 
#line 1229 "../../gcc/config/arm/neon.md"
(ARM_HAVE_NEON_V4HI_ARITH)
    ? (int) 
#line 1229 "../../gcc/config/arm/neon.md"
(ARM_HAVE_NEON_V4HI_ARITH)
    : -1 },
#line 220 "../../gcc/config/arm/neon.md"
  { "(TARGET_NEON || TARGET_HAVE_MVE)&& reload_completed",
    __builtin_constant_p 
#line 220 "../../gcc/config/arm/neon.md"
((TARGET_NEON || TARGET_HAVE_MVE)&& reload_completed)
    ? (int) 
#line 220 "../../gcc/config/arm/neon.md"
((TARGET_NEON || TARGET_HAVE_MVE)&& reload_completed)
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_32BIT && arm_arch6 && ARM_Q_BIT_READ\n\
   && arm_sat_operator_match (operands[1], operands[2], NULL, NULL))",
    __builtin_constant_p (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 4374 "../../gcc/config/arm/arm.md"
(TARGET_32BIT && arm_arch6 && ARM_Q_BIT_READ
   && arm_sat_operator_match (operands[1], operands[2], NULL, NULL)))
    ? (int) (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 4374 "../../gcc/config/arm/arm.md"
(TARGET_32BIT && arm_arch6 && ARM_Q_BIT_READ
   && arm_sat_operator_match (operands[1], operands[2], NULL, NULL)))
    : -1 },
#line 5015 "../../gcc/config/arm/arm.md"
  { "arm_arch_thumb2\n\
   && IN_RANGE (INTVAL (operands[3]), 0, 31)\n\
   && IN_RANGE (INTVAL (operands[2]), 1, 32 - INTVAL (operands[3]))",
    __builtin_constant_p 
#line 5015 "../../gcc/config/arm/arm.md"
(arm_arch_thumb2
   && IN_RANGE (INTVAL (operands[3]), 0, 31)
   && IN_RANGE (INTVAL (operands[2]), 1, 32 - INTVAL (operands[3])))
    ? (int) 
#line 5015 "../../gcc/config/arm/arm.md"
(arm_arch_thumb2
   && IN_RANGE (INTVAL (operands[3]), 0, 31)
   && IN_RANGE (INTVAL (operands[2]), 1, 32 - INTVAL (operands[3])))
    : -1 },
#line 10840 "../../gcc/config/arm/mve.md"
  { "((TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V4SFmode))\n\
    || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V4SFmode)))\n\
   && !BYTES_BIG_ENDIAN && unaligned_access",
    __builtin_constant_p 
#line 10840 "../../gcc/config/arm/mve.md"
(((TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V4SFmode))
    || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V4SFmode)))
   && !BYTES_BIG_ENDIAN && unaligned_access)
    ? (int) 
#line 10840 "../../gcc/config/arm/mve.md"
(((TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V4SFmode))
    || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V4SFmode)))
   && !BYTES_BIG_ENDIAN && unaligned_access)
    : -1 },
#line 1229 "../../gcc/config/arm/neon.md"
  { "ARM_HAVE_NEON_V8QI_ARITH",
    __builtin_constant_p 
#line 1229 "../../gcc/config/arm/neon.md"
(ARM_HAVE_NEON_V8QI_ARITH)
    ? (int) 
#line 1229 "../../gcc/config/arm/neon.md"
(ARM_HAVE_NEON_V8QI_ARITH)
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_ARM && !TARGET_HARD_FLOAT)",
    __builtin_constant_p (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 7136 "../../gcc/config/arm/arm.md"
(TARGET_ARM && !TARGET_HARD_FLOAT))
    ? (int) (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 7136 "../../gcc/config/arm/arm.md"
(TARGET_ARM && !TARGET_HARD_FLOAT))
    : -1 },
  { "(TARGET_HAVE_LDREXBH && TARGET_HAVE_MEMORY_BARRIER) && ( reload_completed)",
    __builtin_constant_p (
#line 437 "../../gcc/config/arm/sync.md"
(TARGET_HAVE_LDREXBH && TARGET_HAVE_MEMORY_BARRIER) && 
#line 439 "../../gcc/config/arm/sync.md"
( reload_completed))
    ? (int) (
#line 437 "../../gcc/config/arm/sync.md"
(TARGET_HAVE_LDREXBH && TARGET_HAVE_MEMORY_BARRIER) && 
#line 439 "../../gcc/config/arm/sync.md"
( reload_completed))
    : -1 },
#line 1031 "../../gcc/config/arm/ldmstm.md"
  { "TARGET_ARM && XVECLEN (operands[0], 0) == 3",
    __builtin_constant_p 
#line 1031 "../../gcc/config/arm/ldmstm.md"
(TARGET_ARM && XVECLEN (operands[0], 0) == 3)
    ? (int) 
#line 1031 "../../gcc/config/arm/ldmstm.md"
(TARGET_ARM && XVECLEN (operands[0], 0) == 3)
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_VFP3 && !flag_rounding_math)",
    __builtin_constant_p (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 1885 "../../gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_VFP3 && !flag_rounding_math))
    ? (int) (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 1885 "../../gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_VFP3 && !flag_rounding_math))
    : -1 },
  { "(TARGET_ARM) && ( reload_completed\n\
   && REGNO (operands [0]) != REGNO (operands[3]))",
    __builtin_constant_p (
#line 9680 "../../gcc/config/arm/arm.md"
(TARGET_ARM) && 
#line 9684 "../../gcc/config/arm/arm.md"
( reload_completed
   && REGNO (operands [0]) != REGNO (operands[3])))
    ? (int) (
#line 9680 "../../gcc/config/arm/arm.md"
(TARGET_ARM) && 
#line 9684 "../../gcc/config/arm/arm.md"
( reload_completed
   && REGNO (operands [0]) != REGNO (operands[3])))
    : -1 },
#line 6384 "../../gcc/config/arm/neon.md"
  { "TARGET_NEON && !BYTES_BIG_ENDIAN",
    __builtin_constant_p 
#line 6384 "../../gcc/config/arm/neon.md"
(TARGET_NEON && !BYTES_BIG_ENDIAN)
    ? (int) 
#line 6384 "../../gcc/config/arm/neon.md"
(TARGET_NEON && !BYTES_BIG_ENDIAN)
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_ARM && arm_arch6)",
    __builtin_constant_p (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 5931 "../../gcc/config/arm/arm.md"
(TARGET_ARM && arm_arch6))
    ? (int) (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 5931 "../../gcc/config/arm/arm.md"
(TARGET_ARM && arm_arch6))
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (use_cmse && reload_completed)",
    __builtin_constant_p (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 1715 "../../gcc/config/arm/vfp.md"
(use_cmse && reload_completed))
    ? (int) (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 1715 "../../gcc/config/arm/vfp.md"
(use_cmse && reload_completed))
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_32BIT && TARGET_HARD_FLOAT)",
    __builtin_constant_p (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 1817 "../../gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_HARD_FLOAT))
    ? (int) (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 1817 "../../gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_HARD_FLOAT))
    : -1 },
#line 1864 "../../gcc/config/arm/thumb1.md"
  { "TARGET_THUMB1 && use_cmse",
    __builtin_constant_p 
#line 1864 "../../gcc/config/arm/thumb1.md"
(TARGET_THUMB1 && use_cmse)
    ? (int) 
#line 1864 "../../gcc/config/arm/thumb1.md"
(TARGET_THUMB1 && use_cmse)
    : -1 },
#line 802 "../../gcc/config/arm/thumb1.md"
  { "TARGET_THUMB1\n\
   && (   register_operand (operands[0], HImode)\n\
       || register_operand (operands[1], HImode))",
    __builtin_constant_p 
#line 802 "../../gcc/config/arm/thumb1.md"
(TARGET_THUMB1
   && (   register_operand (operands[0], HImode)
       || register_operand (operands[1], HImode)))
    ? (int) 
#line 802 "../../gcc/config/arm/thumb1.md"
(TARGET_THUMB1
   && (   register_operand (operands[0], HImode)
       || register_operand (operands[1], HImode)))
    : -1 },
#line 2963 "../../gcc/config/arm/neon.md"
  { "TARGET_COMPLEX && !BYTES_BIG_ENDIAN",
    __builtin_constant_p 
#line 2963 "../../gcc/config/arm/neon.md"
(TARGET_COMPLEX && !BYTES_BIG_ENDIAN)
    ? (int) 
#line 2963 "../../gcc/config/arm/neon.md"
(TARGET_COMPLEX && !BYTES_BIG_ENDIAN)
    : -1 },
#line 565 "../../gcc/config/arm/thumb1.md"
  { "TARGET_THUMB1\n\
   && GET_CODE (XEXP (operands[4], 0)) == PLUS\n\
   && rtx_equal_p (operands[0], XEXP (XEXP (operands[4], 0), 0))\n\
   && rtx_equal_p (operands[2], XEXP (XEXP (operands[4], 0), 1))\n\
   && (peep2_reg_dead_p (3, operands[0])\n\
       || rtx_equal_p (operands[0], operands[3]))\n\
   && (peep2_reg_dead_p (3, operands[2])\n\
       || rtx_equal_p (operands[2], operands[3]))",
    __builtin_constant_p 
#line 565 "../../gcc/config/arm/thumb1.md"
(TARGET_THUMB1
   && GET_CODE (XEXP (operands[4], 0)) == PLUS
   && rtx_equal_p (operands[0], XEXP (XEXP (operands[4], 0), 0))
   && rtx_equal_p (operands[2], XEXP (XEXP (operands[4], 0), 1))
   && (peep2_reg_dead_p (3, operands[0])
       || rtx_equal_p (operands[0], operands[3]))
   && (peep2_reg_dead_p (3, operands[2])
       || rtx_equal_p (operands[2], operands[3])))
    ? (int) 
#line 565 "../../gcc/config/arm/thumb1.md"
(TARGET_THUMB1
   && GET_CODE (XEXP (operands[4], 0)) == PLUS
   && rtx_equal_p (operands[0], XEXP (XEXP (operands[4], 0), 0))
   && rtx_equal_p (operands[2], XEXP (XEXP (operands[4], 0), 1))
   && (peep2_reg_dead_p (3, operands[0])
       || rtx_equal_p (operands[0], operands[3]))
   && (peep2_reg_dead_p (3, operands[2])
       || rtx_equal_p (operands[2], operands[3])))
    : -1 },
#line 7384 "../../gcc/config/arm/arm.md"
  { "TARGET_EITHER\n\
   && reload_completed\n\
   && CONST_DOUBLE_P (operands[1])",
    __builtin_constant_p 
#line 7384 "../../gcc/config/arm/arm.md"
(TARGET_EITHER
   && reload_completed
   && CONST_DOUBLE_P (operands[1]))
    ? (int) 
#line 7384 "../../gcc/config/arm/arm.md"
(TARGET_EITHER
   && reload_completed
   && CONST_DOUBLE_P (operands[1]))
    : -1 },
#line 716 "../../gcc/config/arm/thumb1.md"
  { "TARGET_THUMB1 && reload_completed && !satisfies_constraint_J (operands[1])",
    __builtin_constant_p 
#line 716 "../../gcc/config/arm/thumb1.md"
(TARGET_THUMB1 && reload_completed && !satisfies_constraint_J (operands[1]))
    ? (int) 
#line 716 "../../gcc/config/arm/thumb1.md"
(TARGET_THUMB1 && reload_completed && !satisfies_constraint_J (operands[1]))
    : -1 },
#line 120 "../../gcc/config/arm/thumb1.md"
  { "TARGET_THUMB1\n\
   && UINTVAL (operands[1]) < 1024\n\
   && (UINTVAL (operands[1]) & 3) == 0",
    __builtin_constant_p 
#line 120 "../../gcc/config/arm/thumb1.md"
(TARGET_THUMB1
   && UINTVAL (operands[1]) < 1024
   && (UINTVAL (operands[1]) & 3) == 0)
    ? (int) 
#line 120 "../../gcc/config/arm/thumb1.md"
(TARGET_THUMB1
   && UINTVAL (operands[1]) < 1024
   && (UINTVAL (operands[1]) & 3) == 0)
    : -1 },
#line 106 "../../gcc/config/arm/vec-common.md"
  { "ARM_HAVE_V4HF_ARITH\n\
   && (!TARGET_REALLY_IWMMXT\n\
       || V4HFmode == V4HImode\n\
       || V4HFmode == V2SImode)",
    __builtin_constant_p 
#line 106 "../../gcc/config/arm/vec-common.md"
(ARM_HAVE_V4HF_ARITH
   && (!TARGET_REALLY_IWMMXT
       || V4HFmode == V4HImode
       || V4HFmode == V2SImode))
    ? (int) 
#line 106 "../../gcc/config/arm/vec-common.md"
(ARM_HAVE_V4HF_ARITH
   && (!TARGET_REALLY_IWMMXT
       || V4HFmode == V4HImode
       || V4HFmode == V2SImode))
    : -1 },
#line 228 "../../gcc/config/arm/vfp.md"
  { "TARGET_ARM && TARGET_HARD_FLOAT\n\
   && (   s_register_operand (operands[0], SImode)\n\
       || s_register_operand (operands[1], SImode))",
    __builtin_constant_p 
#line 228 "../../gcc/config/arm/vfp.md"
(TARGET_ARM && TARGET_HARD_FLOAT
   && (   s_register_operand (operands[0], SImode)
       || s_register_operand (operands[1], SImode)))
    ? (int) 
#line 228 "../../gcc/config/arm/vfp.md"
(TARGET_ARM && TARGET_HARD_FLOAT
   && (   s_register_operand (operands[0], SImode)
       || s_register_operand (operands[1], SImode)))
    : -1 },
#line 4257 "../../gcc/config/arm/arm.md"
  { "TARGET_DSP_MULTIPLY && !ARM_Q_BIT_READ",
    __builtin_constant_p 
#line 4257 "../../gcc/config/arm/arm.md"
(TARGET_DSP_MULTIPLY && !ARM_Q_BIT_READ)
    ? (int) 
#line 4257 "../../gcc/config/arm/arm.md"
(TARGET_DSP_MULTIPLY && !ARM_Q_BIT_READ)
    : -1 },
#line 8016 "../../gcc/config/arm/arm.md"
  { "TARGET_ARM && !arm_borrow_operation (operands[1], SImode)",
    __builtin_constant_p 
#line 8016 "../../gcc/config/arm/arm.md"
(TARGET_ARM && !arm_borrow_operation (operands[1], SImode))
    ? (int) 
#line 8016 "../../gcc/config/arm/arm.md"
(TARGET_ARM && !arm_borrow_operation (operands[1], SImode))
    : -1 },
#line 1072 "../../gcc/config/arm/thumb1.md"
  { "TARGET_THUMB1 && TARGET_HAVE_CBZ",
    __builtin_constant_p 
#line 1072 "../../gcc/config/arm/thumb1.md"
(TARGET_THUMB1 && TARGET_HAVE_CBZ)
    ? (int) 
#line 1072 "../../gcc/config/arm/thumb1.md"
(TARGET_THUMB1 && TARGET_HAVE_CBZ)
    : -1 },
#line 202 "../../gcc/config/arm/vec-common.md"
  { "ARM_HAVE_V8HF_ARITH",
    __builtin_constant_p 
#line 202 "../../gcc/config/arm/vec-common.md"
(ARM_HAVE_V8HF_ARITH)
    ? (int) 
#line 202 "../../gcc/config/arm/vec-common.md"
(ARM_HAVE_V8HF_ARITH)
    : -1 },
#line 2114 "../../gcc/config/arm/vfp.md"
  { "TARGET_VFP_BASE",
    __builtin_constant_p 
#line 2114 "../../gcc/config/arm/vfp.md"
(TARGET_VFP_BASE)
    ? (int) 
#line 2114 "../../gcc/config/arm/vfp.md"
(TARGET_VFP_BASE)
    : -1 },
#line 995 "../../gcc/config/arm/thumb2.md"
  { "TARGET_COND_ARITH",
    __builtin_constant_p 
#line 995 "../../gcc/config/arm/thumb2.md"
(TARGET_COND_ARITH)
    ? (int) 
#line 995 "../../gcc/config/arm/thumb2.md"
(TARGET_COND_ARITH)
    : -1 },
#line 3746 "../../gcc/config/arm/arm.md"
  { "TARGET_32BIT\n\
   && CONST_INT_P (operands[2])\n\
   && !const_ok_for_arm (INTVAL (operands[2]))",
    __builtin_constant_p 
#line 3746 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && CONST_INT_P (operands[2])
   && !const_ok_for_arm (INTVAL (operands[2])))
    ? (int) 
#line 3746 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && CONST_INT_P (operands[2])
   && !const_ok_for_arm (INTVAL (operands[2])))
    : -1 },
#line 41 "../../gcc/config/arm/neon.md"
  { "TARGET_NEON\n\
   && (register_operand (operands[0], V2SFmode)\n\
       || register_operand (operands[1], V2SFmode))",
    __builtin_constant_p 
#line 41 "../../gcc/config/arm/neon.md"
(TARGET_NEON
   && (register_operand (operands[0], V2SFmode)
       || register_operand (operands[1], V2SFmode)))
    ? (int) 
#line 41 "../../gcc/config/arm/neon.md"
(TARGET_NEON
   && (register_operand (operands[0], V2SFmode)
       || register_operand (operands[1], V2SFmode)))
    : -1 },
  { "(TARGET_THUMB2 && !TARGET_COND_ARITH) && ( reload_completed)",
    __builtin_constant_p (
#line 899 "../../gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && !TARGET_COND_ARITH) && 
#line 901 "../../gcc/config/arm/thumb2.md"
( reload_completed))
    ? (int) (
#line 899 "../../gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && !TARGET_COND_ARITH) && 
#line 901 "../../gcc/config/arm/thumb2.md"
( reload_completed))
    : -1 },
  { "(flag_pic) && ( reload_completed)",
    __builtin_constant_p (
#line 6587 "../../gcc/config/arm/arm.md"
(flag_pic) && 
#line 6589 "../../gcc/config/arm/arm.md"
( reload_completed))
    ? (int) (
#line 6587 "../../gcc/config/arm/arm.md"
(flag_pic) && 
#line 6589 "../../gcc/config/arm/arm.md"
( reload_completed))
    : -1 },
#line 427 "../../gcc/config/arm/arm-fixed.md"
  { "TARGET_32BIT && TARGET_DSP_MULTIPLY && arm_arch6",
    __builtin_constant_p 
#line 427 "../../gcc/config/arm/arm-fixed.md"
(TARGET_32BIT && TARGET_DSP_MULTIPLY && arm_arch6)
    ? (int) 
#line 427 "../../gcc/config/arm/arm-fixed.md"
(TARGET_32BIT && TARGET_DSP_MULTIPLY && arm_arch6)
    : -1 },
#line 184 "../../gcc/config/arm/neon.md"
  { "(TARGET_NEON || TARGET_HAVE_MVE)\n\
   && (register_operand (operands[0], XImode)\n\
       || register_operand (operands[1], XImode))",
    __builtin_constant_p 
#line 184 "../../gcc/config/arm/neon.md"
((TARGET_NEON || TARGET_HAVE_MVE)
   && (register_operand (operands[0], XImode)
       || register_operand (operands[1], XImode)))
    ? (int) 
#line 184 "../../gcc/config/arm/neon.md"
((TARGET_NEON || TARGET_HAVE_MVE)
   && (register_operand (operands[0], XImode)
       || register_operand (operands[1], XImode)))
    : -1 },
#line 12705 "../../gcc/config/arm/arm.md"
  { "arm_coproc_builtin_available (VUNSPEC_LDC2L)",
    __builtin_constant_p 
#line 12705 "../../gcc/config/arm/arm.md"
(arm_coproc_builtin_available (VUNSPEC_LDC2L))
    ? (int) 
#line 12705 "../../gcc/config/arm/arm.md"
(arm_coproc_builtin_available (VUNSPEC_LDC2L))
    : -1 },
#line 407 "../../gcc/config/arm/vec-common.md"
  { "ARM_HAVE_V2SI_ARITH && !TARGET_REALLY_IWMMXT",
    __builtin_constant_p 
#line 407 "../../gcc/config/arm/vec-common.md"
(ARM_HAVE_V2SI_ARITH && !TARGET_REALLY_IWMMXT)
    ? (int) 
#line 407 "../../gcc/config/arm/vec-common.md"
(ARM_HAVE_V2SI_ARITH && !TARGET_REALLY_IWMMXT)
    : -1 },
  { "(TARGET_32BIT && !TARGET_COND_ARITH) && ( reload_completed)",
    __builtin_constant_p (
#line 11243 "../../gcc/config/arm/arm.md"
(TARGET_32BIT && !TARGET_COND_ARITH) && 
#line 11245 "../../gcc/config/arm/arm.md"
( reload_completed))
    ? (int) (
#line 11243 "../../gcc/config/arm/arm.md"
(TARGET_32BIT && !TARGET_COND_ARITH) && 
#line 11245 "../../gcc/config/arm/arm.md"
( reload_completed))
    : -1 },
#line 134 "../../gcc/config/arm/ldrdstrd.md"
  { "TARGET_LDRD && TARGET_ARM\n\
   && (  ((rtx_equal_p(operands[0], operands[6])) && (rtx_equal_p(operands[1], operands[7])))\n\
       ||((rtx_equal_p(operands[0], operands[7])) && (rtx_equal_p(operands[1], operands[6]))))\n\
   && (peep2_reg_dead_p (3, operands[0]) || rtx_equal_p (operands[0], operands[4]))\n\
   && (peep2_reg_dead_p (3, operands[1]) || rtx_equal_p (operands[1], operands[4]))",
    __builtin_constant_p 
#line 134 "../../gcc/config/arm/ldrdstrd.md"
(TARGET_LDRD && TARGET_ARM
   && (  ((rtx_equal_p(operands[0], operands[6])) && (rtx_equal_p(operands[1], operands[7])))
       ||((rtx_equal_p(operands[0], operands[7])) && (rtx_equal_p(operands[1], operands[6]))))
   && (peep2_reg_dead_p (3, operands[0]) || rtx_equal_p (operands[0], operands[4]))
   && (peep2_reg_dead_p (3, operands[1]) || rtx_equal_p (operands[1], operands[4])))
    ? (int) 
#line 134 "../../gcc/config/arm/ldrdstrd.md"
(TARGET_LDRD && TARGET_ARM
   && (  ((rtx_equal_p(operands[0], operands[6])) && (rtx_equal_p(operands[1], operands[7])))
       ||((rtx_equal_p(operands[0], operands[7])) && (rtx_equal_p(operands[1], operands[6]))))
   && (peep2_reg_dead_p (3, operands[0]) || rtx_equal_p (operands[0], operands[4]))
   && (peep2_reg_dead_p (3, operands[1]) || rtx_equal_p (operands[1], operands[4])))
    : -1 },
  { "((TARGET_HAVE_LDREXBH && TARGET_HAVE_MEMORY_BARRIER) && (TARGET_THUMB1)) && ( reload_completed)",
    __builtin_constant_p ((
#line 204 "../../gcc/config/arm/sync.md"
(TARGET_HAVE_LDREXBH && TARGET_HAVE_MEMORY_BARRIER) && 
#line 53 "../../gcc/config/arm/iterators.md"
(TARGET_THUMB1)) && 
#line 206 "../../gcc/config/arm/sync.md"
( reload_completed))
    ? (int) ((
#line 204 "../../gcc/config/arm/sync.md"
(TARGET_HAVE_LDREXBH && TARGET_HAVE_MEMORY_BARRIER) && 
#line 53 "../../gcc/config/arm/iterators.md"
(TARGET_THUMB1)) && 
#line 206 "../../gcc/config/arm/sync.md"
( reload_completed))
    : -1 },
#line 8919 "../../gcc/config/arm/arm.md"
  { "TARGET_ARM && USE_RETURN_INSN (FALSE)",
    __builtin_constant_p 
#line 8919 "../../gcc/config/arm/arm.md"
(TARGET_ARM && USE_RETURN_INSN (FALSE))
    ? (int) 
#line 8919 "../../gcc/config/arm/arm.md"
(TARGET_ARM && USE_RETURN_INSN (FALSE))
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_ARM && TARGET_HARD_FLOAT\n\
   && (   register_operand (operands[0], DFmode)\n\
       || register_operand (operands[1], DFmode)))",
    __builtin_constant_p (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 664 "../../gcc/config/arm/vfp.md"
(TARGET_ARM && TARGET_HARD_FLOAT
   && (   register_operand (operands[0], DFmode)
       || register_operand (operands[1], DFmode))))
    ? (int) (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 664 "../../gcc/config/arm/vfp.md"
(TARGET_ARM && TARGET_HARD_FLOAT
   && (   register_operand (operands[0], DFmode)
       || register_operand (operands[1], DFmode))))
    : -1 },
#line 12721 "../../gcc/config/arm/arm.md"
  { "arm_coproc_builtin_available (VUNSPEC_MCR2)",
    __builtin_constant_p 
#line 12721 "../../gcc/config/arm/arm.md"
(arm_coproc_builtin_available (VUNSPEC_MCR2))
    ? (int) 
#line 12721 "../../gcc/config/arm/arm.md"
(arm_coproc_builtin_available (VUNSPEC_MCR2))
    : -1 },
  { "(TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_FMA && TARGET_VFP_DOUBLE) && (TARGET_VFP_DOUBLE)",
    __builtin_constant_p (
#line 1436 "../../gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_FMA && TARGET_VFP_DOUBLE) && 
#line 56 "../../gcc/config/arm/iterators.md"
(TARGET_VFP_DOUBLE))
    ? (int) (
#line 1436 "../../gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_FMA && TARGET_VFP_DOUBLE) && 
#line 56 "../../gcc/config/arm/iterators.md"
(TARGET_VFP_DOUBLE))
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_THUMB2 && reload_completed\n\
   && GET_CODE(operands[3]) != PLUS\n\
   && GET_CODE(operands[3]) != MINUS)",
    __builtin_constant_p (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 1256 "../../gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && reload_completed
   && GET_CODE(operands[3]) != PLUS
   && GET_CODE(operands[3]) != MINUS))
    ? (int) (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 1256 "../../gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && reload_completed
   && GET_CODE(operands[3]) != PLUS
   && GET_CODE(operands[3]) != MINUS))
    : -1 },
#line 407 "../../gcc/config/arm/vec-common.md"
  { "ARM_HAVE_V4HI_ARITH && !TARGET_REALLY_IWMMXT",
    __builtin_constant_p 
#line 407 "../../gcc/config/arm/vec-common.md"
(ARM_HAVE_V4HI_ARITH && !TARGET_REALLY_IWMMXT)
    ? (int) 
#line 407 "../../gcc/config/arm/vec-common.md"
(ARM_HAVE_V4HI_ARITH && !TARGET_REALLY_IWMMXT)
    : -1 },
#line 26 "../../gcc/config/arm/vec-common.md"
  { "TARGET_NEON\n\
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V16QImode))\n\
   || (TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V16QImode))\n\
   || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V16QImode))",
    __builtin_constant_p 
#line 26 "../../gcc/config/arm/vec-common.md"
(TARGET_NEON
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V16QImode))
   || (TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V16QImode))
   || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V16QImode)))
    ? (int) 
#line 26 "../../gcc/config/arm/vec-common.md"
(TARGET_NEON
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V16QImode))
   || (TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V16QImode))
   || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V16QImode)))
    : -1 },
#line 26 "../../gcc/config/arm/vec-common.md"
  { "TARGET_NEON\n\
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V4SFmode))\n\
   || (TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V4SFmode))\n\
   || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V4SFmode))",
    __builtin_constant_p 
#line 26 "../../gcc/config/arm/vec-common.md"
(TARGET_NEON
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V4SFmode))
   || (TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V4SFmode))
   || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V4SFmode)))
    ? (int) 
#line 26 "../../gcc/config/arm/vec-common.md"
(TARGET_NEON
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V4SFmode))
   || (TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V4SFmode))
   || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V4SFmode)))
    : -1 },
#line 365 "../../gcc/config/arm/thumb2.md"
  { "TARGET_THUMB2\n\
   && arm_restrict_it\n\
   && !arm_borrow_operation (operands[1], SImode)",
    __builtin_constant_p 
#line 365 "../../gcc/config/arm/thumb2.md"
(TARGET_THUMB2
   && arm_restrict_it
   && !arm_borrow_operation (operands[1], SImode))
    ? (int) 
#line 365 "../../gcc/config/arm/thumb2.md"
(TARGET_THUMB2
   && arm_restrict_it
   && !arm_borrow_operation (operands[1], SImode))
    : -1 },
#line 1242 "../../gcc/config/arm/neon.md"
  { "ARM_HAVE_NEON_V16QI_ARITH && !BYTES_BIG_ENDIAN",
    __builtin_constant_p 
#line 1242 "../../gcc/config/arm/neon.md"
(ARM_HAVE_NEON_V16QI_ARITH && !BYTES_BIG_ENDIAN)
    ? (int) 
#line 1242 "../../gcc/config/arm/neon.md"
(ARM_HAVE_NEON_V16QI_ARITH && !BYTES_BIG_ENDIAN)
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_IDIV)",
    __builtin_constant_p (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 5043 "../../gcc/config/arm/arm.md"
(TARGET_IDIV))
    ? (int) (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 5043 "../../gcc/config/arm/arm.md"
(TARGET_IDIV))
    : -1 },
#line 770 "../../gcc/config/arm/vfp.md"
  { "TARGET_ARM && TARGET_HARD_FLOAT",
    __builtin_constant_p 
#line 770 "../../gcc/config/arm/vfp.md"
(TARGET_ARM && TARGET_HARD_FLOAT)
    ? (int) 
#line 770 "../../gcc/config/arm/vfp.md"
(TARGET_ARM && TARGET_HARD_FLOAT)
    : -1 },
#line 12489 "../../gcc/config/arm/arm.md"
  { "TARGET_LDRD && TARGET_THUMB2 && reload_completed\n\
     && (operands_ok_ldrd_strd (operands[0], operands[2],\n\
                                  operands[1], -4, false, true))",
    __builtin_constant_p 
#line 12489 "../../gcc/config/arm/arm.md"
(TARGET_LDRD && TARGET_THUMB2 && reload_completed
     && (operands_ok_ldrd_strd (operands[0], operands[2],
                                  operands[1], -4, false, true)))
    ? (int) 
#line 12489 "../../gcc/config/arm/arm.md"
(TARGET_LDRD && TARGET_THUMB2 && reload_completed
     && (operands_ok_ldrd_strd (operands[0], operands[2],
                                  operands[1], -4, false, true)))
    : -1 },
  { "(TARGET_32BIT\n\
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && (TARGET_ARM && arm_arch4)",
    __builtin_constant_p (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 5881 "../../gcc/config/arm/arm.md"
(TARGET_ARM && arm_arch4))
    ? (int) (
#line 12078 "../../gcc/config/arm/arm.md"
(TARGET_32BIT
   && (!TARGET_NO_VOLATILE_CE || !volatile_refs_p (PATTERN (insn)))) && 
#line 5881 "../../gcc/config/arm/arm.md"
(TARGET_ARM && arm_arch4))
    : -1 },
#line 287 "../../gcc/config/arm/vec-common.md"
  { "ARM_HAVE_V4SF_LDST && !BYTES_BIG_ENDIAN\n\
  && unaligned_access && !TARGET_REALLY_IWMMXT",
    __builtin_constant_p 
#line 287 "../../gcc/config/arm/vec-common.md"
(ARM_HAVE_V4SF_LDST && !BYTES_BIG_ENDIAN
  && unaligned_access && !TARGET_REALLY_IWMMXT)
    ? (int) 
#line 287 "../../gcc/config/arm/vec-common.md"
(ARM_HAVE_V4SF_LDST && !BYTES_BIG_ENDIAN
  && unaligned_access && !TARGET_REALLY_IWMMXT)
    : -1 },
#line 9886 "../../gcc/config/arm/arm.md"
  { "TARGET_32BIT && peep2_regno_dead_p (3, CC_REGNUM)",
    __builtin_constant_p 
#line 9886 "../../gcc/config/arm/arm.md"
(TARGET_32BIT && peep2_regno_dead_p (3, CC_REGNUM))
    ? (int) 
#line 9886 "../../gcc/config/arm/arm.md"
(TARGET_32BIT && peep2_regno_dead_p (3, CC_REGNUM))
    : -1 },
  { "((TARGET_HAVE_LDREX && TARGET_HAVE_MEMORY_BARRIER) && (TARGET_32BIT)) && ( reload_completed)",
    __builtin_constant_p ((
#line 235 "../../gcc/config/arm/sync.md"
(TARGET_HAVE_LDREX && TARGET_HAVE_MEMORY_BARRIER) && 
#line 53 "../../gcc/config/arm/iterators.md"
(TARGET_32BIT)) && 
#line 237 "../../gcc/config/arm/sync.md"
( reload_completed))
    ? (int) ((
#line 235 "../../gcc/config/arm/sync.md"
(TARGET_HAVE_LDREX && TARGET_HAVE_MEMORY_BARRIER) && 
#line 53 "../../gcc/config/arm/iterators.md"
(TARGET_32BIT)) && 
#line 237 "../../gcc/config/arm/sync.md"
( reload_completed))
    : -1 },
#line 106 "../../gcc/config/arm/vec-common.md"
  { "ARM_HAVE_V4SI_ARITH\n\
   && (!TARGET_REALLY_IWMMXT\n\
       || V4SImode == V4HImode\n\
       || V4SImode == V2SImode)",
    __builtin_constant_p 
#line 106 "../../gcc/config/arm/vec-common.md"
(ARM_HAVE_V4SI_ARITH
   && (!TARGET_REALLY_IWMMXT
       || V4SImode == V4HImode
       || V4SImode == V2SImode))
    ? (int) 
#line 106 "../../gcc/config/arm/vec-common.md"
(ARM_HAVE_V4SI_ARITH
   && (!TARGET_REALLY_IWMMXT
       || V4SImode == V4HImode
       || V4SImode == V2SImode))
    : -1 },
#line 5931 "../../gcc/config/arm/arm.md"
  { "TARGET_ARM && arm_arch6",
    __builtin_constant_p 
#line 5931 "../../gcc/config/arm/arm.md"
(TARGET_ARM && arm_arch6)
    ? (int) 
#line 5931 "../../gcc/config/arm/arm.md"
(TARGET_ARM && arm_arch6)
    : -1 },
#line 106 "../../gcc/config/arm/vec-common.md"
  { "ARM_HAVE_V8HF_ARITH\n\
   && (!TARGET_REALLY_IWMMXT\n\
       || V8HFmode == V4HImode\n\
       || V8HFmode == V2SImode)",
    __builtin_constant_p 
#line 106 "../../gcc/config/arm/vec-common.md"
(ARM_HAVE_V8HF_ARITH
   && (!TARGET_REALLY_IWMMXT
       || V8HFmode == V4HImode
       || V8HFmode == V2SImode))
    ? (int) 
#line 106 "../../gcc/config/arm/vec-common.md"
(ARM_HAVE_V8HF_ARITH
   && (!TARGET_REALLY_IWMMXT
       || V8HFmode == V4HImode
       || V8HFmode == V2SImode))
    : -1 },
  { "((TARGET_HAVE_LDREXD && ARM_DOUBLEWORD_ALIGN\n\
	&& TARGET_HAVE_MEMORY_BARRIER) && (TARGET_THUMB1)) && ( reload_completed)",
    __builtin_constant_p ((
#line 235 "../../gcc/config/arm/sync.md"
(TARGET_HAVE_LDREXD && ARM_DOUBLEWORD_ALIGN
	&& TARGET_HAVE_MEMORY_BARRIER) && 
#line 53 "../../gcc/config/arm/iterators.md"
(TARGET_THUMB1)) && 
#line 237 "../../gcc/config/arm/sync.md"
( reload_completed))
    ? (int) ((
#line 235 "../../gcc/config/arm/sync.md"
(TARGET_HAVE_LDREXD && ARM_DOUBLEWORD_ALIGN
	&& TARGET_HAVE_MEMORY_BARRIER) && 
#line 53 "../../gcc/config/arm/iterators.md"
(TARGET_THUMB1)) && 
#line 237 "../../gcc/config/arm/sync.md"
( reload_completed))
    : -1 },
#line 155 "../../gcc/config/arm/crypto.md"
  { "TARGET_CRYPTO",
    __builtin_constant_p 
#line 155 "../../gcc/config/arm/crypto.md"
(TARGET_CRYPTO)
    ? (int) 
#line 155 "../../gcc/config/arm/crypto.md"
(TARGET_CRYPTO)
    : -1 },
#line 490 "../../gcc/config/arm/arm-fixed.md"
  { "TARGET_INT_SIMD && !ARM_Q_BIT_READ",
    __builtin_constant_p 
#line 490 "../../gcc/config/arm/arm-fixed.md"
(TARGET_INT_SIMD && !ARM_Q_BIT_READ)
    ? (int) 
#line 490 "../../gcc/config/arm/arm-fixed.md"
(TARGET_INT_SIMD && !ARM_Q_BIT_READ)
    : -1 },
#line 1092 "../../gcc/config/arm/arm.md"
  { "TARGET_THUMB2\n\
   && dead_or_set_p (peep2_next_insn (0), operands[0])\n\
   && satisfies_constraint_Py (operands[1])",
    __builtin_constant_p 
#line 1092 "../../gcc/config/arm/arm.md"
(TARGET_THUMB2
   && dead_or_set_p (peep2_next_insn (0), operands[0])
   && satisfies_constraint_Py (operands[1]))
    ? (int) 
#line 1092 "../../gcc/config/arm/arm.md"
(TARGET_THUMB2
   && dead_or_set_p (peep2_next_insn (0), operands[0])
   && satisfies_constraint_Py (operands[1]))
    : -1 },

};
#endif /* gcc >= 3.0.1 */

int
main(void)
{
  unsigned int i;
  const char *p;
  puts ("(define_conditions [");
#if GCC_VERSION >= 3001
  for (i = 0; i < ARRAY_SIZE (insn_conditions); i++)
    {
      printf ("  (%d \"", insn_conditions[i].value);
      for (p = insn_conditions[i].expr; *p; p++)
        {
          switch (*p)
	     {
	     case '\\':
	     case '\"': putchar ('\\'); break;
	     default: break;
	     }
          putchar (*p);
        }
      puts ("\")");
    }
#endif /* gcc >= 3.0.1 */
  puts ("])");
  fflush (stdout);
return ferror (stdout) != 0 ? FATAL_EXIT_CODE : SUCCESS_EXIT_CODE;
}
