/* Generated automatically by the program 'build/genpreds'
   from the machine description file '../../gcc/config/arm/arm.md'.  */

#ifndef GCC_TM_CONSTRS_H
#define GCC_TM_CONSTRS_H

static inline bool
satisfies_constraint_m (rtx op)
{
  return (GET_CODE (op) == MEM) && (
#line 26 "../../gcc/common.md"
(memory_address_addr_space_p (GET_MODE (op), XEXP (op, 0),
						 MEM_ADDR_SPACE (op))));
}
static inline bool
satisfies_constraint_o (rtx op)
{
  return (GET_CODE (op) == MEM) && (
#line 32 "../../gcc/common.md"
(offsettable_nonstrict_memref_p (op)));
}
static inline bool
satisfies_constraint_V (rtx op)
{
  return (GET_CODE (op) == MEM) && ((
#line 41 "../../gcc/common.md"
(memory_address_addr_space_p (GET_MODE (op), XEXP (op, 0),
						 MEM_ADDR_SPACE (op)))) && (!(
#line 43 "../../gcc/common.md"
(offsettable_nonstrict_memref_p (op)))));
}
static inline bool
satisfies_constraint__l (rtx op)
{
  return (GET_CODE (op) == MEM) && ((
#line 50 "../../gcc/common.md"
(GET_CODE (XEXP (op, 0)) == PRE_DEC)) || (
#line 51 "../../gcc/common.md"
(GET_CODE (XEXP (op, 0)) == POST_DEC)));
}
static inline bool
satisfies_constraint__g (rtx op)
{
  return (GET_CODE (op) == MEM) && ((
#line 57 "../../gcc/common.md"
(GET_CODE (XEXP (op, 0)) == PRE_INC)) || (
#line 58 "../../gcc/common.md"
(GET_CODE (XEXP (op, 0)) == POST_INC)));
}
static inline bool
satisfies_constraint_p (rtx ARG_UNUSED (op))
{
  return 
#line 62 "../../gcc/common.md"
(address_operand (op, VOIDmode));
}
static inline bool
satisfies_constraint_i (rtx op)
{
  return (
#line 66 "../../gcc/common.md"
(CONSTANT_P (op))) && (
#line 67 "../../gcc/common.md"
(!flag_pic || LEGITIMATE_PIC_OPERAND_P (op)));
}
static inline bool
satisfies_constraint_s (rtx op)
{
  return (
#line 71 "../../gcc/common.md"
(CONSTANT_P (op))) && ((
#line 72 "../../gcc/common.md"
(!CONST_SCALAR_INT_P (op))) && (
#line 73 "../../gcc/common.md"
(!flag_pic || LEGITIMATE_PIC_OPERAND_P (op))));
}
static inline bool
satisfies_constraint_n (rtx op)
{
  return (
#line 77 "../../gcc/common.md"
(CONST_SCALAR_INT_P (op))) && (
#line 78 "../../gcc/common.md"
(!flag_pic || LEGITIMATE_PIC_OPERAND_P (op)));
}
static inline bool
satisfies_constraint_E (rtx op)
{
  return (
#line 82 "../../gcc/common.md"
(CONST_DOUBLE_AS_FLOAT_P (op))) || (
#line 83 "../../gcc/common.md"
(GET_CODE (op) == CONST_VECTOR
		    && GET_MODE_CLASS (GET_MODE (op)) == MODE_VECTOR_FLOAT));
}
static inline bool
satisfies_constraint_F (rtx op)
{
  return (
#line 89 "../../gcc/common.md"
(CONST_DOUBLE_AS_FLOAT_P (op))) || (
#line 90 "../../gcc/common.md"
(GET_CODE (op) == CONST_VECTOR
		    && GET_MODE_CLASS (GET_MODE (op)) == MODE_VECTOR_FLOAT));
}
static inline bool
satisfies_constraint_X (rtx ARG_UNUSED (op))
{
  return 
#line 95 "../../gcc/common.md"
(true);
}
static inline bool
satisfies_constraint_Ri (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 81 "../../gcc/config/arm/predicates.md"
(TARGET_HAVE_MVE && (-1016 <= ival) && (ival <= 1016)
		    && ((ival % 8) == 0)));
}
static inline bool
satisfies_constraint_Ul (rtx op)
{
  return (GET_CODE (op) == MEM) && (
#line 55 "../../gcc/config/arm/constraints.md"
(TARGET_HAVE_MVE && reload_completed
		   && (GET_CODE (XEXP (op, 0)) == LABEL_REF
		       || (GET_CODE (XEXP (op, 0)) == CONST
			   && GET_CODE (XEXP (XEXP (op, 0), 0)) == PLUS
			   && GET_CODE (XEXP (XEXP (XEXP (op, 0), 0), 0)) == LABEL_REF
			   && CONST_INT_P (XEXP (XEXP (XEXP (op, 0), 0), 1))))));
}
static inline bool
satisfies_constraint_Rd (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 72 "../../gcc/config/arm/constraints.md"
(TARGET_HAVE_MVE && ival >= 1 && ival <= 16));
}
static inline bool
satisfies_constraint_Ra (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 77 "../../gcc/config/arm/constraints.md"
(TARGET_HAVE_MVE && ival >= 0 && ival <= 7));
}
static inline bool
satisfies_constraint_Rb (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 82 "../../gcc/config/arm/constraints.md"
(TARGET_HAVE_MVE && ival >= 1 && ival <= 8));
}
static inline bool
satisfies_constraint_Rc (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 87 "../../gcc/config/arm/constraints.md"
(TARGET_HAVE_MVE && ival >= 0 && ival <= 15));
}
static inline bool
satisfies_constraint_Re (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 92 "../../gcc/config/arm/constraints.md"
(TARGET_HAVE_MVE && ival >= 0 && ival <= 31));
}
static inline bool
satisfies_constraint_Rf (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 97 "../../gcc/config/arm/constraints.md"
(TARGET_HAVE_MVE && ival >= 1 && ival <= 32));
}
static inline bool
satisfies_constraint_Rg (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 102 "../../gcc/config/arm/constraints.md"
(TARGET_HAVE_MVE && ((ival == 1) || (ival == 2)
				       || (ival == 4) || (ival == 8))));
}
static inline bool
satisfies_constraint_j (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (
#line 134 "../../gcc/config/arm/constraints.md"
(TARGET_HAVE_MOVT)) && (((GET_CODE (op) == HIGH) && (
#line 136 "../../gcc/config/arm/constraints.md"
(arm_valid_symbolic_address_p (XEXP (op, 0))))) || ((GET_CODE (op) == CONST_INT) && (
#line 138 "../../gcc/config/arm/constraints.md"
((ival & 0xffff0000) == 0))));
}
static inline bool
satisfies_constraint_Pj (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && ((
#line 143 "../../gcc/config/arm/constraints.md"
(TARGET_THUMB2)) && (
#line 144 "../../gcc/config/arm/constraints.md"
((ival & 0xfffff000) == 0)));
}
static inline bool
satisfies_constraint_PJ (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && ((
#line 149 "../../gcc/config/arm/constraints.md"
(TARGET_THUMB2)) && (
#line 150 "../../gcc/config/arm/constraints.md"
(((-ival) & 0xfffff000) == 0)));
}
static inline bool
satisfies_constraint_c (rtx op)
{
  machine_mode mode = GET_MODE (op);
  return cc_register (op, mode);
}
static inline bool
satisfies_constraint_I (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 171 "../../gcc/config/arm/constraints.md"
(TARGET_32BIT ? const_ok_for_arm (ival)
		   : ival >= 0 && ival <= 255));
}
static inline bool
satisfies_constraint_J (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 178 "../../gcc/config/arm/constraints.md"
(TARGET_32BIT ? (ival >= -4095 && ival <= 4095)
		   : (ival >= -255 && ival <= -1)));
}
static inline bool
satisfies_constraint_K (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 186 "../../gcc/config/arm/constraints.md"
(TARGET_32BIT ? const_ok_for_arm (~ival)
		   : thumb_shiftable_const (ival)));
}
static inline bool
satisfies_constraint_L (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 193 "../../gcc/config/arm/constraints.md"
(TARGET_32BIT ? const_ok_for_arm (-ival)
		   : (ival >= -7 && ival <= 7)));
}
static inline bool
satisfies_constraint_M (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 202 "../../gcc/config/arm/constraints.md"
(TARGET_32BIT ? ((ival >= 0 && ival <= 32)
				 || (((ival & (ival - 1)) & 0xFFFFFFFF) == 0))
		   : ival >= 0 && ival <= 1020 && (ival & 3) == 0));
}
static inline bool
satisfies_constraint_N (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 209 "../../gcc/config/arm/constraints.md"
(!TARGET_32BIT && (ival >= 0 && ival <= 31)));
}
static inline bool
satisfies_constraint_O (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 215 "../../gcc/config/arm/constraints.md"
(TARGET_THUMB1 && ival >= -508 && ival <= 508
		   && ((ival & 3) == 0)));
}
static inline bool
satisfies_constraint_Pa (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 221 "../../gcc/config/arm/constraints.md"
(TARGET_THUMB1 && ival >= -510 && ival <= 510
		    && (ival > 255 || ival < -255)));
}
static inline bool
satisfies_constraint_Pb (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 227 "../../gcc/config/arm/constraints.md"
(TARGET_THUMB1 && ival >= -262 && ival <= 262
		    && (ival > 255 || ival < -255)));
}
static inline bool
satisfies_constraint_Pc (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 233 "../../gcc/config/arm/constraints.md"
(TARGET_THUMB1
  		    && ival > 1020 && ival <= 1275));
}
static inline bool
satisfies_constraint_Pd (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 239 "../../gcc/config/arm/constraints.md"
(TARGET_THUMB && ival >= 0 && ival <= 7));
}
static inline bool
satisfies_constraint_Pe (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 244 "../../gcc/config/arm/constraints.md"
(TARGET_THUMB1 && ival >= 256 && ival <= 510));
}
static inline bool
satisfies_constraint_Pf (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 249 "../../gcc/config/arm/constraints.md"
(!is_mm_relaxed (memmodel_from_int (ival))
		    && !is_mm_consume (memmodel_from_int (ival))
		    && !is_mm_release (memmodel_from_int (ival))));
}
static inline bool
satisfies_constraint_Pg (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 256 "../../gcc/config/arm/constraints.md"
(TARGET_THUMB2 && ival >= 1 && ival <= 32));
}
static inline bool
satisfies_constraint_Ps (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 261 "../../gcc/config/arm/constraints.md"
(TARGET_THUMB2 && ival >= -255 && ival <= 255));
}
static inline bool
satisfies_constraint_Pt (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 266 "../../gcc/config/arm/constraints.md"
(TARGET_THUMB2 && ival >= -7 && ival <= 7));
}
static inline bool
satisfies_constraint_Pu (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 271 "../../gcc/config/arm/constraints.md"
(TARGET_THUMB2 && ival >= 1 && ival <= 8));
}
static inline bool
satisfies_constraint_Pv (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 276 "../../gcc/config/arm/constraints.md"
(TARGET_THUMB2 && ival >= -255 && ival <= 0));
}
static inline bool
satisfies_constraint_Pw (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 281 "../../gcc/config/arm/constraints.md"
(TARGET_THUMB2 && ival >= -255 && ival <= -1));
}
static inline bool
satisfies_constraint_Px (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 286 "../../gcc/config/arm/constraints.md"
(TARGET_THUMB2 && ival >= -7 && ival <= -1));
}
static inline bool
satisfies_constraint_Py (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 291 "../../gcc/config/arm/constraints.md"
(TARGET_THUMB2 && ival >= 0 && ival <= 255));
}
static inline bool
satisfies_constraint_Pz (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 296 "../../gcc/config/arm/constraints.md"
(TARGET_THUMB2 && (ival == 0)));
}
static inline bool
satisfies_constraint_G (rtx op)
{
  return (GET_CODE (op) == CONST_DOUBLE) && (
#line 301 "../../gcc/config/arm/constraints.md"
(TARGET_32BIT && arm_const_double_rtx (op)));
}
static inline bool
satisfies_constraint_Ha (rtx op)
{
  return (GET_CODE (op) == CONST_DOUBLE) && ((
#line 306 "../../gcc/config/arm/constraints.md"
(satisfies_constraint_E (op))) && (
#line 307 "../../gcc/config/arm/constraints.md"
(!arm_disable_literal_pool)));
}
static inline bool
satisfies_constraint_Dz (rtx op)
{
  machine_mode mode = GET_MODE (op);
  return (GET_CODE (op) == CONST_VECTOR) && (
#line 313 "../../gcc/config/arm/constraints.md"
((TARGET_NEON || TARGET_HAVE_MVE) && op == CONST0_RTX (mode)));
}
static inline bool
satisfies_constraint_Da (rtx op)
{
  switch (GET_CODE (op))
    {
    case CONST_DOUBLE:
    case CONST_INT:
    case CONST_VECTOR:
      break;
    default:
      return false;
    }
  return 
#line 320 "../../gcc/config/arm/constraints.md"
(TARGET_32BIT && arm_const_double_inline_cost (op) == 2);
}
static inline bool
satisfies_constraint_Db (rtx op)
{
  switch (GET_CODE (op))
    {
    case CONST_DOUBLE:
    case CONST_INT:
    case CONST_VECTOR:
      break;
    default:
      return false;
    }
  return 
#line 327 "../../gcc/config/arm/constraints.md"
(TARGET_32BIT && arm_const_double_inline_cost (op) == 3);
}
static inline bool
satisfies_constraint_Dc (rtx op)
{
  switch (GET_CODE (op))
    {
    case CONST_DOUBLE:
    case CONST_INT:
    case CONST_VECTOR:
      break;
    default:
      return false;
    }
  return 
#line 335 "../../gcc/config/arm/constraints.md"
(TARGET_32BIT && arm_const_double_inline_cost (op) == 4
		   && !(optimize_size || arm_ld_sched));
}
static inline bool
satisfies_constraint_Dd (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 342 "../../gcc/config/arm/constraints.md"
(TARGET_32BIT && const_ok_for_dimode_op (ival, PLUS)));
}
static inline bool
satisfies_constraint_Di (rtx op)
{
  switch (GET_CODE (op))
    {
    case CONST_DOUBLE:
    case CONST_INT:
      break;
    default:
      return false;
    }
  return 
#line 349 "../../gcc/config/arm/constraints.md"
(TARGET_32BIT && arm_const_double_by_immediates (op));
}
static inline bool
satisfies_constraint_Dm (rtx op)
{
  return (GET_CODE (op) == CONST_VECTOR) && (
#line 356 "../../gcc/config/arm/constraints.md"
(TARGET_32BIT
		   && imm_for_neon_mov_operand (op, GET_MODE (op))));
}
static inline bool
satisfies_constraint_Dn (rtx op)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 364 "../../gcc/config/arm/constraints.md"
(TARGET_32BIT && imm_for_neon_mov_operand (op, DImode)));
}
static inline bool
satisfies_constraint_DN (rtx op)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 371 "../../gcc/config/arm/constraints.md"
(TARGET_32BIT && imm_for_neon_mov_operand (op, TImode)));
}
static inline bool
satisfies_constraint_Dl (rtx op)
{
  return (GET_CODE (op) == CONST_VECTOR) && (
#line 378 "../../gcc/config/arm/constraints.md"
(TARGET_32BIT
		   && imm_for_neon_logic_operand (op, GET_MODE (op))));
}
static inline bool
satisfies_constraint_DL (rtx op)
{
  return (GET_CODE (op) == CONST_VECTOR) && (
#line 386 "../../gcc/config/arm/constraints.md"
(TARGET_32BIT
		   && imm_for_neon_inv_logic_operand (op, GET_MODE (op))));
}
static inline bool
satisfies_constraint_Do (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 393 "../../gcc/config/arm/constraints.md"
(TARGET_LDRD && offset_ok_for_ldrd_strd (ival)));
}
static inline bool
satisfies_constraint_Dv (rtx op)
{
  return (GET_CODE (op) == CONST_DOUBLE) && (
#line 400 "../../gcc/config/arm/constraints.md"
(TARGET_32BIT && vfp3_const_double_rtx (op)));
}
static inline bool
satisfies_constraint_Dy (rtx op)
{
  return (GET_CODE (op) == CONST_DOUBLE) && (
#line 407 "../../gcc/config/arm/constraints.md"
(TARGET_32BIT && TARGET_VFP_DOUBLE && vfp3_const_double_rtx (op)));
}
static inline bool
satisfies_constraint_Dt (rtx op)
{
  return (GET_CODE (op) == CONST_DOUBLE) && (
#line 413 "../../gcc/config/arm/constraints.md"
(TARGET_32BIT && vfp3_const_double_for_fract_bits (op)));
}
static inline bool
satisfies_constraint_Ds (rtx op)
{
  return (GET_CODE (op) == CONST_VECTOR) && (
#line 420 "../../gcc/config/arm/constraints.md"
(TARGET_32BIT
		   && imm_for_neon_lshift_operand (op, GET_MODE (op))));
}
static inline bool
satisfies_constraint_Dp (rtx op)
{
  return (GET_CODE (op) == CONST_DOUBLE) && (
#line 427 "../../gcc/config/arm/constraints.md"
(TARGET_32BIT
		    && vfp3_const_double_for_bits (op) > 0));
}
static inline bool
satisfies_constraint_Tu (rtx op)
{
  return (
#line 433 "../../gcc/config/arm/constraints.md"
(CONSTANT_P (op))) && (
#line 434 "../../gcc/config/arm/constraints.md"
(!arm_disable_literal_pool));
}
static inline bool
satisfies_constraint_Ua (rtx op)
{
  machine_mode mode = GET_MODE (op);
  return mem_noofs_operand (op, mode);
}
static inline bool
satisfies_constraint_Uh (rtx op)
{
  return (GET_CODE (op) == MEM) && (
#line 448 "../../gcc/config/arm/constraints.md"
(arm_legitimate_address_p (GET_MODE (op), XEXP (op, 0), false) && !arm_is_constant_pool_ref (op)));
}
static inline bool
satisfies_constraint_Ut (rtx op)
{
  return (GET_CODE (op) == MEM) && (
#line 455 "../../gcc/config/arm/constraints.md"
(TARGET_32BIT && neon_struct_mem_operand (op)));
}
static inline bool
satisfies_constraint_Uv (rtx op)
{
  return (GET_CODE (op) == MEM) && (
#line 461 "../../gcc/config/arm/constraints.md"
(TARGET_32BIT && arm_coproc_mem_operand (op, FALSE)));
}
static inline bool
satisfies_constraint_Ug (rtx op)
{
  machine_mode mode = GET_MODE (op);
  return mve_struct_operand (op, mode);
}
static inline bool
satisfies_constraint_Uj (rtx op)
{
  return (GET_CODE (op) == MEM) && ((
#line 473 "../../gcc/config/arm/constraints.md"
(TARGET_32BIT)) && (
#line 474 "../../gcc/config/arm/constraints.md"
(TARGET_HAVE_MVE
                   ? arm_coproc_mem_operand_no_writeback (op)
                   : neon_vector_mem_operand (op, 2, true))));
}
static inline bool
satisfies_constraint_Uy (rtx op)
{
  return (GET_CODE (op) == MEM) && (
#line 482 "../../gcc/config/arm/constraints.md"
(TARGET_32BIT && arm_coproc_mem_operand (op, TRUE)));
}
static inline bool
satisfies_constraint_Un (rtx op)
{
  return (GET_CODE (op) == MEM) && (
#line 489 "../../gcc/config/arm/constraints.md"
(TARGET_32BIT && neon_vector_mem_operand (op, 0, true)));
}
static inline bool
satisfies_constraint_Um (rtx op)
{
  return (GET_CODE (op) == MEM) && (
#line 496 "../../gcc/config/arm/constraints.md"
(TARGET_32BIT && neon_vector_mem_operand (op, 2, true)));
}
static inline bool
satisfies_constraint_Us (rtx op)
{
  return (GET_CODE (op) == MEM) && (
#line 503 "../../gcc/config/arm/constraints.md"
(TARGET_32BIT && neon_vector_mem_operand (op, 1, true)));
}
static inline bool
satisfies_constraint_Ux (rtx op)
{
  return (GET_CODE (op) == MEM) && (
#line 510 "../../gcc/config/arm/constraints.md"
((TARGET_HAVE_MVE || TARGET_HAVE_MVE_FLOAT)
		   && mve_vector_mem_operand (GET_MODE (op),
					      XEXP (op, 0), true)));
}
static inline bool
satisfies_constraint_Ui (rtx op)
{
  return 
#line 519 "../../gcc/config/arm/constraints.md"
(!arm_disable_literal_pool && satisfies_constraint_i (op));
}
static inline bool
satisfies_constraint_Uq (rtx op)
{
  return (GET_CODE (op) == MEM) && (
#line 525 "../../gcc/config/arm/constraints.md"
(TARGET_ARM
		   && arm_legitimate_address_outer_p (GET_MODE (op), XEXP (op, 0),
						      SIGN_EXTEND, 0)
		   && !arm_is_constant_pool_ref (op)));
}
static inline bool
satisfies_constraint_Q (rtx op)
{
  return (GET_CODE (op) == MEM) && (
#line 534 "../../gcc/config/arm/constraints.md"
(REG_P (XEXP (op, 0))));
}
static inline bool
satisfies_constraint_Uu (rtx op)
{
  return (GET_CODE (op) == MEM) && (
#line 540 "../../gcc/config/arm/constraints.md"
(TARGET_THUMB
		   && thumb1_legitimate_address_p (GET_MODE (op), XEXP (op, 0),
						   0)));
}
static inline bool
satisfies_constraint_Uw (rtx op)
{
  return (GET_CODE (op) == MEM) && (
#line 552 "../../gcc/config/arm/constraints.md"
(TARGET_THUMB
		   && thumb1_legitimate_address_p (GET_MODE (op), XEXP (op, 0),
						   0)
		   && GET_CODE (XEXP (op, 0)) != POST_INC));
}
static inline bool
satisfies_constraint_US (rtx op)
{
  return GET_CODE (op) == SYMBOL_REF;
}
static inline bool
satisfies_constraint_Uz (rtx op)
{
  return (GET_CODE (op) == MEM) && (
#line 567 "../../gcc/config/arm/constraints.md"
(arm_coproc_ldc_stc_legitimate_address (op)));
}
#endif /* tm-constrs.h */
