/* Type information for config/arm/arm.c.
   Copyright (C) 2004-2021 Free Software Foundation, Inc.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify it under
the terms of the GNU General Public License as published by the Free
Software Foundation; either version 3, or (at your option) any later
version.

GCC is distributed in the hope that it will be useful, but WITHOUT ANY
WARRANTY; without even the implied warranty of MERCHANTABILITY or
FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
for more details.

You should have received a copy of the GNU General Public License
along with GCC; see the file COPYING3.  If not see
<http://www.gnu.org/licenses/>.  */

/* This file is machine generated.  Do not edit.  */

void
gt_ggc_mx_cl_target_option (void *x_p)
{
  struct cl_target_option * const x = (struct cl_target_option *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      gt_ggc_m_S ((*x).x_arm_arch_string);
      gt_ggc_m_S ((*x).x_arm_cpu_string);
      gt_ggc_m_S ((*x).x_arm_tune_string);
    }
}

void
gt_pch_nx_cl_target_option (void *x_p)
{
  struct cl_target_option * const x = (struct cl_target_option *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_16cl_target_option))
    {
      gt_pch_n_S ((*x).x_arm_arch_string);
      gt_pch_n_S ((*x).x_arm_cpu_string);
      gt_pch_n_S ((*x).x_arm_tune_string);
    }
}

void
gt_pch_p_16cl_target_option (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  struct cl_target_option * x ATTRIBUTE_UNUSED = (struct cl_target_option *)x_p;
  if ((void *)(x) == this_obj)
    op (&((*x).x_arm_arch_string), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).x_arm_cpu_string), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).x_arm_tune_string), cookie);
}

/* GC roots.  */

EXPORTED_CONST struct ggc_root_tab gt_ggc_r_gt_arm_h[] = {
  {
    &arm_previous_fndecl,
    1,
    sizeof (arm_previous_fndecl),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &last_asm_targ_options,
    1,
    sizeof (last_asm_targ_options),
    &gt_ggc_mx_cl_target_option,
    &gt_pch_nx_cl_target_option
  },
  {
    &tls_get_addr_libfunc,
    1,
    sizeof (tls_get_addr_libfunc),
    &gt_ggc_mx_rtx_def,
    &gt_pch_nx_rtx_def
  },
  {
    &init_optimize,
    1,
    sizeof (init_optimize),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &va_list_type,
    1,
    sizeof (va_list_type),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &speculation_barrier_libfunc,
    1,
    sizeof (speculation_barrier_libfunc),
    &gt_ggc_mx_rtx_def,
    &gt_pch_nx_rtx_def
  },
  LAST_GGC_ROOT_TAB
};

EXPORTED_CONST struct ggc_root_tab gt_pch_rs_gt_arm_h[] = {
  { &pic_labelno, 1, sizeof (pic_labelno), NULL, NULL },
  { &thumb_flipper, 1, sizeof (thumb_flipper), NULL, NULL },
  LAST_GGC_ROOT_TAB
};

