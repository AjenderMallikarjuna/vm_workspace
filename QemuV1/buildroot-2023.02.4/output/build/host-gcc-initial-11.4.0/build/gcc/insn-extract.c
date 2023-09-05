/* Generated automatically by the program `genextract'
   from the machine description file `md'.  */

#define IN_TARGET_CODE 1
#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "rtl.h"
#include "insn-config.h"
#include "recog.h"
#include "diagnostic-core.h"

/* This variable is used as the "location" of any missing operand
   whose numbers are skipped by a given pattern.  */
static rtx junk ATTRIBUTE_UNUSED;

void
insn_extract (rtx_insn *insn)
{
  rtx *ro = recog_data.operand;
  rtx **ro_loc = recog_data.operand_loc;
  rtx pat = PATTERN (insn);
  int i ATTRIBUTE_UNUSED; /* only for peepholes */

  if (flag_checking)
    {
      memset (ro, 0xab, sizeof (*ro) * MAX_RECOG_OPERANDS);
      memset (ro_loc, 0xab, sizeof (*ro_loc) * MAX_RECOG_OPERANDS);
    }

  switch (INSN_CODE (insn))
    {
    default:
      /* Control reaches here if insn_extract has been called with an
         unrecognizable insn (code -1), or an insn whose INSN_CODE
         corresponds to a DEFINE_EXPAND in the machine description;
         either way, a bug.  */
      if (INSN_CODE (insn) < 0)
        fatal_insn ("unrecognizable insn:", insn);
      else
        fatal_insn ("insn with invalid code number:", insn);

    case 6907:  /* *p arm_ssatsihi_shift */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 6852:  /* *p arm_store_release_exclusivesi */
    case 6851:  /* *p arm_store_release_exclusivehi */
    case 6850:  /* *p arm_store_release_exclusiveqi */
    case 6849:  /* *p arm_store_release_exclusivedi */
    case 6848:  /* *p arm_store_exclusivedi */
    case 6847:  /* *p arm_store_exclusivesi */
    case 6846:  /* *p arm_store_exclusivehi */
    case 6845:  /* *p arm_store_exclusiveqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 6829:  /* *p thumb2_lsrl */
    case 6828:  /* *p thumb2_lsll */
    case 6827:  /* *p thumb2_asrl */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (pat, 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 6826:  /* *p *clear_multiple */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (pat, 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 6820:  /* *p *thumb2_mulsi_short */
    case 6819:  /* *p *thumb2_subsi_short */
    case 6818:  /* *p *thumb2_addsi_short */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 6817:  /* *p *thumb2_movsi_shortim */
    case 6816:  /* *p *thumb2_movhi_shortim */
    case 6815:  /* *p *thumb2_movqi_shortim */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (pat, 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 6814:  /* *p *thumb2_shiftsi3_short */
    case 6813:  /* *p *thumb2_alusi3_short */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 6798:  /* *p *combine_vcvtf2i */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 6789:  /* *p lazy_store_multiple_insn */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 6788:  /* *p *clear_vfp_multiple */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 6787:  /* *p pop_fpsysreg_insn */
    case 6786:  /* *p push_fpsysreg_insn */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (pat, 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 6769:  /* *p *fnmadddf4 */
    case 6768:  /* *p *fnmaddsf4 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 6767:  /* *p *fnmsubdf4 */
    case 6766:  /* *p *fnmsubsf4 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 6765:  /* *p *fmsubdf4 */
    case 6764:  /* *p *fmsubsf4 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 2));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 6761:  /* *p *muldf3negdfsubdf_vfp */
    case 6760:  /* *p *mulsf3negsfsubsf_vfp */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 6759:  /* *p *fmuldf3negdfadddf_vfp */
    case 6758:  /* *p *mulsf3negsfaddsf_vfp */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 6753:  /* *p *negmuldf3_vfp */
    case 6751:  /* *p *negmulsf3_vfp */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 6725:  /* *p iwmmxt_textrcv8qi3 */
    case 6724:  /* *p iwmmxt_textrcv4hi3 */
    case 6723:  /* *p iwmmxt_textrcv2si3 */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0), 0, 1));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 6713:  /* *p iwmmxt_wmerge */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 1), 0);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0);
      recog_data.dup_num[1] = 3;
      break;

    case 6704:  /* *p iwmmxt_wmiattn */
    case 6703:  /* *p iwmmxt_wmiatbn */
    case 6702:  /* *p iwmmxt_wmiabtn */
    case 6701:  /* *p iwmmxt_wmiabbn */
    case 6700:  /* *p iwmmxt_wmiatt */
    case 6699:  /* *p iwmmxt_wmiatb */
    case 6698:  /* *p iwmmxt_wmiabt */
    case 6697:  /* *p iwmmxt_wmiabb */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 1), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0), 0), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 1), 0), 0);
      recog_data.dup_num[1] = 3;
      break;

    case 6696:  /* *p iwmmxt_wqmiattn */
    case 6695:  /* *p iwmmxt_wqmiatbn */
    case 6694:  /* *p iwmmxt_wqmiabtn */
    case 6693:  /* *p iwmmxt_wqmiabbn */
    case 6692:  /* *p iwmmxt_wqmiatt */
    case 6691:  /* *p iwmmxt_wqmiatb */
    case 6690:  /* *p iwmmxt_wqmiabt */
    case 6689:  /* *p iwmmxt_wqmiabb */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 3), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 4), 0);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 2), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 6688:  /* *p iwmmxt_waddbhusl */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 6687:  /* *p iwmmxt_waddbhusm */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 6671:  /* *p iwmmxt_avg4r */
    case 6670:  /* *p iwmmxt_avg4 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0), 0), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0), 0), 0), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0), 0), 1), 0), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 6669:  /* *p addcv2si3 */
    case 6668:  /* *p addcv4hi3 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 6667:  /* *p iwmmxt_wsubaddhx */
    case 6666:  /* *p iwmmxt_waddsubhx */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 6655:  /* *p iwmmxt_walignr3 */
    case 6654:  /* *p iwmmxt_walignr2 */
    case 6653:  /* *p iwmmxt_walignr1 */
    case 6652:  /* *p iwmmxt_walignr0 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 6651:  /* *p iwmmxt_walignr */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 6650:  /* *p iwmmxt_waligni */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0), 0), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0), 0), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 6643:  /* *p iwmmxt_tmiatt */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 6642:  /* *p iwmmxt_tmiabt */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 6641:  /* *p iwmmxt_tmiatb */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 6712:  /* *p iwmmxt_wmiawttn */
    case 6711:  /* *p iwmmxt_wmiawtbn */
    case 6710:  /* *p iwmmxt_wmiawbtn */
    case 6709:  /* *p iwmmxt_wmiawbbn */
    case 6708:  /* *p iwmmxt_wmiawtt */
    case 6707:  /* *p iwmmxt_wmiawtb */
    case 6706:  /* *p iwmmxt_wmiawbt */
    case 6705:  /* *p iwmmxt_wmiawbb */
    case 6640:  /* *p iwmmxt_tmiabb */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 6639:  /* *p iwmmxt_tmiaph */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 1), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0), 0), 0), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 1), 0), 0), 0);
      recog_data.dup_num[1] = 3;
      break;

    case 6638:  /* *p iwmmxt_tmia */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 6675:  /* *p iwmmxt_wmaddun */
    case 6674:  /* *p iwmmxt_wmaddsn */
    case 6673:  /* *p iwmmxt_wmaddux */
    case 6672:  /* *p iwmmxt_wmaddsx */
    case 6637:  /* *p iwmmxt_wmaddu */
    case 6636:  /* *p iwmmxt_wmadds */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 6779:  /* *p fixuns_truncdfsi2 */
    case 6778:  /* *p fixuns_truncsfsi2 */
    case 6777:  /* *p *truncsidf2_vfp */
    case 6776:  /* *p *truncsisf2_vfp */
    case 6611:  /* *p iwmmxt_wunpckelsw */
    case 6610:  /* *p iwmmxt_wunpckelsh */
    case 6609:  /* *p iwmmxt_wunpckelsb */
    case 6608:  /* *p iwmmxt_wunpckeluw */
    case 6607:  /* *p iwmmxt_wunpckeluh */
    case 6606:  /* *p iwmmxt_wunpckelub */
    case 6605:  /* *p iwmmxt_wunpckehsw */
    case 6604:  /* *p iwmmxt_wunpckehsh */
    case 6603:  /* *p iwmmxt_wunpckehsb */
    case 6602:  /* *p iwmmxt_wunpckehuw */
    case 6601:  /* *p iwmmxt_wunpckehuh */
    case 6600:  /* *p iwmmxt_wunpckehub */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (pat, 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 6565:  /* *p iwmmxt_textrmw */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 6564:  /* *p iwmmxt_textrmsh */
    case 6563:  /* *p iwmmxt_textrmuh */
    case 6562:  /* *p iwmmxt_textrmsb */
    case 6561:  /* *p iwmmxt_textrmub */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 6560:  /* *p iwmmxt_tinsrw */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 2));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 6559:  /* *p iwmmxt_tinsrh */
    case 6558:  /* *p iwmmxt_tinsrb */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 2));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 6681:  /* *p iwmmxt_wmulwumr */
    case 6680:  /* *p iwmmxt_wmulwsmr */
    case 6679:  /* *p iwmmxt_wmulumr */
    case 6678:  /* *p iwmmxt_wmulsmr */
    case 6555:  /* *p iwmmxt_uavgrndv4hi3 */
    case 6554:  /* *p iwmmxt_uavgrndv8qi3 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 6677:  /* *p iwmmxt_wmulwum */
    case 6676:  /* *p iwmmxt_wmulwsm */
    case 6665:  /* *p iwmmxt_wabsdiffw */
    case 6664:  /* *p iwmmxt_wabsdiffh */
    case 6663:  /* *p iwmmxt_wabsdiffb */
    case 6557:  /* *p iwmmxt_uavgv4hi3 */
    case 6556:  /* *p iwmmxt_uavgv8qi3 */
    case 6545:  /* *p umulv4hi3_highpart */
    case 6544:  /* *p smulv4hi3_highpart */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 6512:  /* *p iwmmxt_nanddi3 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 6505:  /* *p *load_multiple */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 6500:  /* *p *stm2_da_update */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0), 0);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 0), 0);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0);
      recog_data.dup_num[2] = 3;
      break;

    case 6499:  /* *p *stm2_da */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 0);
      recog_data.dup_num[0] = 3;
      break;

    case 6498:  /* *p *ldm2_da_update */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1), 0);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0), 0);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0);
      recog_data.dup_num[2] = 3;
      break;

    case 6497:  /* *p *ldm2_da */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0);
      recog_data.dup_num[0] = 3;
      break;

    case 6504:  /* *p *stm2_db_update */
    case 6496:  /* *p *stm2_ib_update */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0), 0), 0);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 0), 0);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0);
      recog_data.dup_num[2] = 3;
      break;

    case 6503:  /* *p *stm2_db */
    case 6495:  /* *p *stm2_ib */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 0), 0);
      recog_data.dup_num[0] = 3;
      break;

    case 6502:  /* *p *ldm2_db_update */
    case 6494:  /* *p *ldm2_ib_update */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1), 0), 0);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0), 0);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0);
      recog_data.dup_num[2] = 3;
      break;

    case 6501:  /* *p *ldm2_db */
    case 6493:  /* *p *ldm2_ib */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 3;
      break;

    case 6492:  /* *p *stm2_ia_update */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0), 0), 0);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 0);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0);
      recog_data.dup_num[2] = 3;
      break;

    case 6491:  /* *p *stm2_ */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 0), 0);
      recog_data.dup_num[0] = 3;
      break;

    case 6490:  /* *p *ldm2_ia_update */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1), 0), 0);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0);
      recog_data.dup_num[2] = 3;
      break;

    case 6489:  /* *p *ldm2_ */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 3;
      break;

    case 6484:  /* *p *stm3_da_update */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (pat, 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 0), 0);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0), 0), 0);
      recog_data.dup_num[1] = 4;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 0), 0);
      recog_data.dup_num[2] = 4;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0);
      recog_data.dup_num[3] = 4;
      break;

    case 6483:  /* *p *stm3_da */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (pat, 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0), 0);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 0), 0);
      recog_data.dup_num[1] = 4;
      break;

    case 6482:  /* *p *ldm3_da_update */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (pat, 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 1), 0);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1), 0), 0);
      recog_data.dup_num[1] = 4;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0), 0);
      recog_data.dup_num[2] = 4;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0);
      recog_data.dup_num[3] = 4;
      break;

    case 6481:  /* *p *ldm3_da */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (pat, 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1), 0);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0), 0);
      recog_data.dup_num[1] = 4;
      break;

    case 6488:  /* *p *stm3_db_update */
    case 6480:  /* *p *stm3_ib_update */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (pat, 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 0), 0), 0);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0), 0), 0);
      recog_data.dup_num[1] = 4;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 0), 0);
      recog_data.dup_num[2] = 4;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0);
      recog_data.dup_num[3] = 4;
      break;

    case 6487:  /* *p *stm3_db */
    case 6479:  /* *p *stm3_ib */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (pat, 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0), 0), 0);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 0), 0);
      recog_data.dup_num[1] = 4;
      break;

    case 6486:  /* *p *ldm3_db_update */
    case 6478:  /* *p *ldm3_ib_update */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (pat, 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 1), 0), 0);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1), 0), 0);
      recog_data.dup_num[1] = 4;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0), 0);
      recog_data.dup_num[2] = 4;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0);
      recog_data.dup_num[3] = 4;
      break;

    case 6485:  /* *p *ldm3_db */
    case 6477:  /* *p *ldm3_ib */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (pat, 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1), 0), 0);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0), 0);
      recog_data.dup_num[1] = 4;
      break;

    case 6476:  /* *p *stm3_ia_update */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (pat, 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 0), 0), 0);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0), 0), 0);
      recog_data.dup_num[1] = 4;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 0);
      recog_data.dup_num[2] = 4;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0);
      recog_data.dup_num[3] = 4;
      break;

    case 6475:  /* *p *stm3_ */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (pat, 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0), 0), 0);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 0), 0);
      recog_data.dup_num[1] = 4;
      break;

    case 6474:  /* *p *ldm3_ia_update */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (pat, 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 1), 0), 0);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1), 0), 0);
      recog_data.dup_num[1] = 4;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0);
      recog_data.dup_num[2] = 4;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0);
      recog_data.dup_num[3] = 4;
      break;

    case 6473:  /* *p *ldm3_ */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (pat, 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1), 0), 0);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0), 0);
      recog_data.dup_num[1] = 4;
      break;

    case 6468:  /* *p *stm4_da_update */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 4), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[6] = *(ro_loc[6] = &XEXP (pat, 0));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 4), 0), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 0), 0), 0);
      recog_data.dup_num[1] = 5;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0), 0), 0);
      recog_data.dup_num[2] = 5;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 0), 0);
      recog_data.dup_num[3] = 5;
      recog_data.dup_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0);
      recog_data.dup_num[4] = 5;
      break;

    case 6467:  /* *p *stm4_da */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[6] = *(ro_loc[6] = &XEXP (pat, 0));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 0), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0), 0), 0);
      recog_data.dup_num[1] = 5;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 0), 0);
      recog_data.dup_num[2] = 5;
      break;

    case 6466:  /* *p *ldm4_da_update */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 4), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[6] = *(ro_loc[6] = &XEXP (pat, 0));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 4), 1), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 1), 0), 0);
      recog_data.dup_num[1] = 5;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1), 0), 0);
      recog_data.dup_num[2] = 5;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0), 0);
      recog_data.dup_num[3] = 5;
      recog_data.dup_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0);
      recog_data.dup_num[4] = 5;
      break;

    case 6465:  /* *p *ldm4_da */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0), 0));
      ro[6] = *(ro_loc[6] = &XEXP (pat, 0));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 1), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1), 0), 0);
      recog_data.dup_num[1] = 5;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0), 0);
      recog_data.dup_num[2] = 5;
      break;

    case 6472:  /* *p *stm4_db_update */
    case 6464:  /* *p *stm4_ib_update */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 4), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[6] = *(ro_loc[6] = &XEXP (pat, 0));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 4), 0), 0), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 0), 0), 0);
      recog_data.dup_num[1] = 5;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0), 0), 0);
      recog_data.dup_num[2] = 5;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 0), 0);
      recog_data.dup_num[3] = 5;
      recog_data.dup_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0);
      recog_data.dup_num[4] = 5;
      break;

    case 6471:  /* *p *stm4_db */
    case 6463:  /* *p *stm4_ib */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[6] = *(ro_loc[6] = &XEXP (pat, 0));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 0), 0), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0), 0), 0);
      recog_data.dup_num[1] = 5;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 0), 0);
      recog_data.dup_num[2] = 5;
      break;

    case 6470:  /* *p *ldm4_db_update */
    case 6462:  /* *p *ldm4_ib_update */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 4), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[6] = *(ro_loc[6] = &XEXP (pat, 0));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 4), 1), 0), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 1), 0), 0);
      recog_data.dup_num[1] = 5;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1), 0), 0);
      recog_data.dup_num[2] = 5;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0), 0);
      recog_data.dup_num[3] = 5;
      recog_data.dup_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0);
      recog_data.dup_num[4] = 5;
      break;

    case 6469:  /* *p *ldm4_db */
    case 6461:  /* *p *ldm4_ib */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0), 0));
      ro[6] = *(ro_loc[6] = &XEXP (pat, 0));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 1), 0), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1), 0), 0);
      recog_data.dup_num[1] = 5;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0), 0);
      recog_data.dup_num[2] = 5;
      break;

    case 6460:  /* *p *stm4_ia_update */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 4), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[6] = *(ro_loc[6] = &XEXP (pat, 0));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 4), 0), 0), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 0), 0), 0);
      recog_data.dup_num[1] = 5;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0), 0), 0);
      recog_data.dup_num[2] = 5;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 0);
      recog_data.dup_num[3] = 5;
      recog_data.dup_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0);
      recog_data.dup_num[4] = 5;
      break;

    case 6459:  /* *p *stm4_ */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[6] = *(ro_loc[6] = &XEXP (pat, 0));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 0), 0), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0), 0), 0);
      recog_data.dup_num[1] = 5;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 0), 0);
      recog_data.dup_num[2] = 5;
      break;

    case 6458:  /* *p *ldm4_ia_update */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 4), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[6] = *(ro_loc[6] = &XEXP (pat, 0));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 4), 1), 0), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 1), 0), 0);
      recog_data.dup_num[1] = 5;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1), 0), 0);
      recog_data.dup_num[2] = 5;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0);
      recog_data.dup_num[3] = 5;
      recog_data.dup_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0);
      recog_data.dup_num[4] = 5;
      break;

    case 6457:  /* *p *ldm4_ */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0));
      ro[6] = *(ro_loc[6] = &XEXP (pat, 0));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 1), 0), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1), 0), 0);
      recog_data.dup_num[1] = 5;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0), 0);
      recog_data.dup_num[2] = 5;
      break;

    case 6456:  /* *p *arm_strd */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 6455:  /* *p *arm_ldrd */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 6454:  /* *p *thumb2_strd_base_neg */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 6453:  /* *p *thumb2_strd_base */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 0), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 6452:  /* *p *thumb2_strd */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (pat, 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 0), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 6451:  /* *p *thumb2_ldrd_base_neg */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 6450:  /* *p *thumb2_ldrd_base */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 6449:  /* *p *thumb2_ldrd */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (pat, 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 6447:  /* *p *arm_movtas_ze */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (pat, 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 6443:  /* *p *ldr_with_return */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 6442:  /* *p *pop_multiple_with_return */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 6441:  /* *p *pop_multiple_with_writeback_and_return */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0);
      recog_data.dup_num[1] = 1;
      break;

    case 6440:  /* *p *load_multiple_with_writeback */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0);
      recog_data.dup_num[1] = 1;
      break;

    case 6439:  /* *p *arith_adjacentmem */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (pat, 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 6438:  /* *p *sub_shiftsi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (pat, 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 6437:  /* *p *and_shiftsi */
    case 6436:  /* *p *eor_shiftsi */
    case 6435:  /* *p *orr_shiftsi */
    case 6434:  /* *p *rsb_shiftsi */
    case 6433:  /* *p *add_shiftsi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (pat, 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 6757:  /* *p *muldf3subdf_vfp */
    case 6756:  /* *p *mulsf3subsf_vfp */
    case 6755:  /* *p *muldf3adddf_vfp */
    case 6754:  /* *p *mulsf3addsf_vfp */
    case 6432:  /* *p *and_multsi */
    case 6431:  /* *p *eor_multsi */
    case 6430:  /* *p *orr_multsi */
    case 6429:  /* *p *rsb_multsi */
    case 6428:  /* *p *add_multsi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 6427:  /* *p *load_indirect_jump */
    case 6426:  /* *p *arm_indirect_jump */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 1));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 6825:  /* *p *clear_apsr */
    case 6722:  /* *p iwmmxt_torvscv8qi3 */
    case 6721:  /* *p iwmmxt_torvscv4hi3 */
    case 6720:  /* *p iwmmxt_torvscv2si3 */
    case 6719:  /* *p iwmmxt_torcv8qi3 */
    case 6718:  /* *p iwmmxt_torcv4hi3 */
    case 6717:  /* *p iwmmxt_torcv2si3 */
    case 6716:  /* *p iwmmxt_tandcv8qi3 */
    case 6715:  /* *p iwmmxt_tandcv4hi3 */
    case 6714:  /* *p iwmmxt_tandcv2si3 */
    case 6424:  /* *p *arm_simple_return */
    case 6423:  /* *p *arm_return */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 6421:  /* *p *arm_cmpsi_negshiftsi_si */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 6793:  /* *p *cmpdf_trap_vfp */
    case 6792:  /* *p *cmpdf_vfp */
    case 6791:  /* *p *cmpsf_trap_vfp */
    case 6790:  /* *p *cmpsf_vfp */
    case 6420:  /* *p *arm_cmpsi_insn */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (pat, 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 6413:  /* *p tls_load_dot_plus_eight */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0, 2));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 6412:  /* *p pic_add_dot_plus_eight */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 2));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 6392:  /* *p arm_usub16 */
    case 6391:  /* *p arm_usax */
    case 6390:  /* *p arm_uasx */
    case 6389:  /* *p arm_uadd16 */
    case 6388:  /* *p arm_ssub16 */
    case 6387:  /* *p arm_ssax */
    case 6386:  /* *p arm_sasx */
    case 6385:  /* *p arm_sadd16 */
    case 6384:  /* *p arm_usub8 */
    case 6383:  /* *p arm_uadd8 */
    case 6382:  /* *p arm_ssub8 */
    case 6381:  /* *p arm_sadd8 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 6921:  /* *p mve_srshrl_di */
    case 6920:  /* *p mve_srshr_si */
    case 6918:  /* *p mve_urshr_si */
    case 6916:  /* *p mve_urshrl_di */
    case 6914:  /* *p mve_sqrshr_si */
    case 6913:  /* *p mve_uqrshl_si */
    case 6912:  /* *p mve_sqrshrl_sat48_di */
    case 6911:  /* *p mve_sqrshrl_sat64_di */
    case 6910:  /* *p mve_uqrshll_sat48_di */
    case 6909:  /* *p mve_uqrshll_sat64_di */
    case 6835:  /* *p atomic_storesi */
    case 6834:  /* *p atomic_storehi */
    case 6833:  /* *p atomic_storeqi */
    case 6832:  /* *p atomic_loadsi */
    case 6831:  /* *p atomic_loadhi */
    case 6830:  /* *p atomic_loadqi */
    case 6686:  /* *p iwmmxt_wqmulwmr */
    case 6685:  /* *p iwmmxt_wqmulmr */
    case 6684:  /* *p iwmmxt_wqmulwm */
    case 6683:  /* *p iwmmxt_wqmulm */
    case 6659:  /* *p iwmmxt_wsadhz */
    case 6658:  /* *p iwmmxt_wsadbz */
    case 6575:  /* *p gtv2si3 */
    case 6574:  /* *p gtv4hi3 */
    case 6573:  /* *p gtv8qi3 */
    case 6572:  /* *p gtuv2si3 */
    case 6571:  /* *p gtuv4hi3 */
    case 6570:  /* *p gtuv8qi3 */
    case 6569:  /* *p eqv2si3 */
    case 6568:  /* *p eqv4hi3 */
    case 6567:  /* *p eqv8qi3 */
    case 6566:  /* *p iwmmxt_wshufh */
    case 6549:  /* *p iwmmxt_wmacuz */
    case 6547:  /* *p iwmmxt_wmacsz */
    case 6409:  /* *p arm_sel */
    case 6408:  /* *p arm_usat16_setq_insn */
    case 6407:  /* *p arm_usat16_insn */
    case 6406:  /* *p arm_ssat16_setq_insn */
    case 6405:  /* *p arm_ssat16_insn */
    case 6404:  /* *p arm_smuadx_setq_insn */
    case 6403:  /* *p arm_smuadx_insn */
    case 6402:  /* *p arm_smuad_setq_insn */
    case 6401:  /* *p arm_smuad_insn */
    case 6375:  /* *p arm_usad8 */
    case 6374:  /* *p arm_uxtab16 */
    case 6373:  /* *p arm_sxtab16 */
    case 6372:  /* *p arm_smusdx */
    case 6371:  /* *p arm_smusd */
    case 6370:  /* *p arm_uqsub16 */
    case 6369:  /* *p arm_uqsax */
    case 6368:  /* *p arm_uqasx */
    case 6367:  /* *p arm_uqadd16 */
    case 6366:  /* *p arm_uhsub16 */
    case 6365:  /* *p arm_uhsax */
    case 6364:  /* *p arm_uhasx */
    case 6363:  /* *p arm_uhadd16 */
    case 6362:  /* *p arm_shsub16 */
    case 6361:  /* *p arm_shsax */
    case 6360:  /* *p arm_shasx */
    case 6359:  /* *p arm_shadd16 */
    case 6358:  /* *p arm_qsub16 */
    case 6357:  /* *p arm_qsax */
    case 6356:  /* *p arm_qasx */
    case 6355:  /* *p arm_qadd16 */
    case 6354:  /* *p arm_uqsub8 */
    case 6353:  /* *p arm_uqadd8 */
    case 6352:  /* *p arm_uhsub8 */
    case 6351:  /* *p arm_uhadd8 */
    case 6350:  /* *p arm_shsub8 */
    case 6349:  /* *p arm_shadd8 */
    case 6348:  /* *p arm_qsub8 */
    case 6347:  /* *p arm_qadd8 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 6422:  /* *p *arm_jump */
    case 6338:  /* *p *compareqi_eq0 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 6797:  /* *p *combine_vcvt_f64_s32 */
    case 6796:  /* *p *combine_vcvt_f64_u32 */
    case 6795:  /* *p *combine_vcvt_f32_s32 */
    case 6794:  /* *p *combine_vcvt_f32_u32 */
    case 6752:  /* *p *muldf3negdf_vfp */
    case 6750:  /* *p *mulsf3negsf_vfp */
    case 6344:  /* *p *arm_extendqisi2addsi */
    case 6337:  /* *p *arm_zero_extendqisi2addsi */
    case 6334:  /* *p *arm_zero_extendhisi2addsi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 6806:  /* *p *thumb2_neg_abssi2 */
    case 6330:  /* *p *arm_neg_abssi2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (pat, 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 6822:  /* *p *thumb2_negsi2_short */
    case 6821:  /* *p *thumb2_one_cmplsi2_short */
    case 6805:  /* *p *thumb2_abssi2 */
    case 6329:  /* *p *arm_abssi2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (pat, 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 6763:  /* *p fmadf4 */
    case 6762:  /* *p fmasf4 */
    case 6325:  /* *p extzv_t2 */
    case 6324:  /* *p *extv_reg */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 2));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 6840:  /* *p arm_load_acquire_exclusivehi */
    case 6839:  /* *p arm_load_acquire_exclusiveqi */
    case 6838:  /* *p arm_load_exclusivehi */
    case 6837:  /* *p arm_load_exclusiveqi */
    case 6321:  /* *p unaligned_loadhiu */
    case 6320:  /* *p unaligned_loadhis */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (pat, 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 6844:  /* *p arm_load_acquire_exclusivedi */
    case 6843:  /* *p arm_load_exclusivedi */
    case 6842:  /* *p arm_load_acquire_exclusivesi */
    case 6841:  /* *p arm_load_exclusivesi */
    case 6836:  /* *p arm_atomic_loaddi2_ldrd */
    case 6804:  /* *p rintdf2 */
    case 6803:  /* *p nearbyintdf2 */
    case 6802:  /* *p btruncdf2 */
    case 6801:  /* *p rintsf2 */
    case 6800:  /* *p nearbyintsf2 */
    case 6799:  /* *p btruncsf2 */
    case 6662:  /* *p iwmmxt_wabsv8qi3 */
    case 6661:  /* *p iwmmxt_wabsv4hi3 */
    case 6660:  /* *p iwmmxt_wabsv2si3 */
    case 6649:  /* *p iwmmxt_waccw */
    case 6648:  /* *p iwmmxt_wacch */
    case 6647:  /* *p iwmmxt_waccb */
    case 6646:  /* *p iwmmxt_tmovmskw */
    case 6645:  /* *p iwmmxt_tmovmskh */
    case 6644:  /* *p iwmmxt_tmovmskb */
    case 6445:  /* *p rbitsi2 */
    case 6346:  /* *p arm_uxtb16 */
    case 6345:  /* *p arm_sxtb16 */
    case 6323:  /* *p unaligned_storehi */
    case 6322:  /* *p unaligned_storesi */
    case 6319:  /* *p unaligned_loadsi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (pat, 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 6318:  /* *p *not_shiftsi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 6317:  /* *p *arm_shiftsi3 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 6316:  /* *p *satsi_smax_shift */
    case 6315:  /* *p *satsi_smin_shift */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 1));
      ro[6] = *(ro_loc[6] = &XEXP (pat, 0));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 6310:  /* *p arm_set_apsr */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 6807:  /* *p *thumb2_pop_single */
    case 6553:  /* *p iwmmxt_clrv2si */
    case 6552:  /* *p iwmmxt_clrv4hi */
    case 6551:  /* *p iwmmxt_clrv8qi */
    case 6550:  /* *p iwmmxt_clrdi */
    case 6446:  /* *p load_tp_hard */
    case 6425:  /* *p probe_stack */
    case 6309:  /* *p arm_get_apsr */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 6908:  /* *p arm_usatsihi */
    case 6812:  /* *p thumb2_zero_extendqisi2_v6 */
    case 6811:  /* *p *thumb2_zero_extendhisi2_v6 */
    case 6810:  /* *p *thumb2_extendqisi_v6 */
    case 6785:  /* *p *sqrtdf2_vfp */
    case 6784:  /* *p *sqrtsf2_vfp */
    case 6783:  /* *p floatunssidf2 */
    case 6782:  /* *p floatunssisf2 */
    case 6781:  /* *p *floatsidf2_vfp */
    case 6780:  /* *p *floatsisf2_vfp */
    case 6775:  /* *p truncsfhf2 */
    case 6774:  /* *p *extendhfdf2 */
    case 6773:  /* *p *truncdfhf2 */
    case 6772:  /* *p extendhfsf2 */
    case 6771:  /* *p *truncdfsf2_vfp */
    case 6770:  /* *p *extendsfdf2_vfp */
    case 6741:  /* *p *negdf2_vfp */
    case 6740:  /* *p *negsf2_vfp */
    case 6739:  /* *p *absdf2_vfp */
    case 6738:  /* *p *abssf2_vfp */
    case 6508:  /* *p tbcstv2si */
    case 6507:  /* *p tbcstv4hi */
    case 6506:  /* *p tbcstv8qi */
    case 6448:  /* *p *arm_rev */
    case 6444:  /* *p clzsi2 */
    case 6343:  /* *p *arm_extendqisi_v6 */
    case 6342:  /* *p *arm_extendqisi */
    case 6341:  /* *p *arm_extendqihi_insn */
    case 6340:  /* *p *arm_extendhisi2_v6 */
    case 6339:  /* *p *arm_extendhisi2 */
    case 6336:  /* *p *arm_zero_extendqisi2_v6 */
    case 6335:  /* *p *arm_zero_extendqisi2 */
    case 6333:  /* *p *arm_zero_extendhisi2_v6 */
    case 6332:  /* *p *arm_zero_extendhisi2 */
    case 6331:  /* *p *arm_one_cmplsi2 */
    case 6328:  /* *p *arm_negsi2 */
    case 6304:  /* *p *smin_0 */
    case 6303:  /* *p *smax_m1 */
    case 6302:  /* *p *smax_0 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (pat, 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 6301:  /* *p *andsi_iorsi3_notsi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 6298:  /* *p andsi_not_shiftsi_si_scc */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (pat, 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 0;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0), 0), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0), 0), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 1);
      recog_data.dup_num[3] = 3;
      break;

    case 6297:  /* *p andsi_not_shiftsi_si_scc_no_reuse */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (pat, 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 6824:  /* *p *orsi_not_shiftsi_si */
    case 6296:  /* *p andsi_not_shiftsi_si */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (pat, 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 6823:  /* *p *orsi_notsi_si */
    case 6295:  /* *p andsi_notsi_si */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 6294:  /* *p insv_t2 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 6293:  /* *p insv_zero */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 6292:  /* *p *zeroextractsi_compare0_scratch */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 2));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 6657:  /* *p iwmmxt_wsadh */
    case 6656:  /* *p iwmmxt_wsadb */
    case 6548:  /* *p iwmmxt_wmacu */
    case 6546:  /* *p iwmmxt_wmacs */
    case 6400:  /* *p arm_smlsdx_setq_insn */
    case 6399:  /* *p arm_smlsdx_insn */
    case 6398:  /* *p arm_smlsd_setq_insn */
    case 6397:  /* *p arm_smlsd_insn */
    case 6396:  /* *p arm_smladx_setq_insn */
    case 6395:  /* *p arm_smladx_insn */
    case 6394:  /* *p arm_smlad_setq_insn */
    case 6393:  /* *p arm_smlad_insn */
    case 6380:  /* *p arm_smlsldx */
    case 6379:  /* *p arm_smlsld */
    case 6378:  /* *p arm_smlaldx */
    case 6377:  /* *p arm_smlald */
    case 6376:  /* *p arm_usada8 */
    case 6290:  /* *p arm_smlawt_setq_insn */
    case 6289:  /* *p arm_smlawt_insn */
    case 6288:  /* *p arm_smlawb_setq_insn */
    case 6287:  /* *p arm_smlawb_insn */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 6286:  /* *p *maddhidi4tt */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 6285:  /* *p *maddhidi4tb */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 6283:  /* *p arm_smlatt_setq */
    case 6281:  /* *p arm_smlatb_setq */
    case 6279:  /* *p arm_smlabb_setq */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 6284:  /* *p maddhidi4 */
    case 6282:  /* *p maddhisi4tt */
    case 6280:  /* *p maddhisi4tb */
    case 6278:  /* *p *arm_maddhisi4 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 6599:  /* *p iwmmxt_wunpckilw */
    case 6598:  /* *p iwmmxt_wunpckilh */
    case 6597:  /* *p iwmmxt_wunpckilb */
    case 6596:  /* *p iwmmxt_wunpckihw */
    case 6595:  /* *p iwmmxt_wunpckihh */
    case 6594:  /* *p iwmmxt_wunpckihb */
    case 6593:  /* *p iwmmxt_wpackdus */
    case 6592:  /* *p iwmmxt_wpackwus */
    case 6591:  /* *p iwmmxt_wpackhus */
    case 6590:  /* *p iwmmxt_wpackdss */
    case 6589:  /* *p iwmmxt_wpackwss */
    case 6588:  /* *p iwmmxt_wpackhss */
    case 6277:  /* *p *mulhisi3tt */
    case 6276:  /* *p *mulhisi3bt */
    case 6275:  /* *p *mulhisi3tb */
    case 6274:  /* *p mulhisi3 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 6273:  /* *p *umull_high */
    case 6272:  /* *p *smull_high */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 6271:  /* *p umlal */
    case 6270:  /* *p smlal */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0), 1));
      ro[6] = *(ro_loc[6] = &XEXP (pat, 0));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0), 0), 0), 0), 0), 0);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0), 0), 0), 0), 1), 0);
      recog_data.dup_num[1] = 5;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0), 0), 0), 1), 0);
      recog_data.dup_num[2] = 1;
      break;

    case 6269:  /* *p umull */
    case 6268:  /* *p smull */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0), 0), 0), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0), 0), 1), 0);
      recog_data.dup_num[1] = 3;
      break;

    case 6267:  /* *p *mls */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 6266:  /* *p *mla */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 6262:  /* *p *rsbsi3_carryin_shift */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[6] = *(ro_loc[6] = &XEXP (pat, 0));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 6261:  /* *p *subsi3_carryin_shift_alt */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1));
      ro[6] = *(ro_loc[6] = &XEXP (pat, 0));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 6260:  /* *p *subsi3_carryin_shift */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[6] = *(ro_loc[6] = &XEXP (pat, 0));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 6259:  /* *p add_not_shift_cin */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[6] = *(ro_loc[6] = &XEXP (pat, 0));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 6258:  /* *p *add_not_cin */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 6263:  /* *p *rsbsi3_carryin_shift_alt */
    case 6255:  /* *p *addsi3_carryin_shift */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1));
      ro[6] = *(ro_loc[6] = &XEXP (pat, 0));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 6314:  /* *p satsi_smax_setq */
    case 6313:  /* *p satsi_smax */
    case 6312:  /* *p satsi_smin_setq */
    case 6311:  /* *p satsi_smin */
    case 6254:  /* *p *addsi3_carryin_alt2 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 6265:  /* *p *mul */
    case 6253:  /* *p add0si3_carryin */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 6256:  /* *p subsi3_carryin */
    case 6252:  /* *p addsi3_carryin */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 6251:  /* *p *compare_addsi2_op1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (pat, 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 6250:  /* *p *compare_addsi2_op0 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (pat, 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 1);
      recog_data.dup_num[0] = 0;
      break;

    case 6249:  /* *p *compare_negsi_si */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (pat, 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 6248:  /* *p *addsi3_compare0_scratch */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (pat, 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 6922:  /* *p mve_sqshll_di */
    case 6919:  /* *p mve_sqshl_si */
    case 6917:  /* *p mve_uqshl_si */
    case 6915:  /* *p mve_uqshll_di */
    case 6906:  /* *p *arm_sssubsa3 */
    case 6905:  /* *p *arm_sssubsq3 */
    case 6904:  /* *p *arm_sssubha3 */
    case 6903:  /* *p *arm_sssubv2ha3 */
    case 6902:  /* *p *arm_sssubhq3 */
    case 6901:  /* *p *arm_sssubqq3 */
    case 6900:  /* *p *arm_sssubv2hq3 */
    case 6899:  /* *p *arm_sssubv4qq3 */
    case 6898:  /* *p ussubuha3 */
    case 6897:  /* *p ussubv2uha3 */
    case 6896:  /* *p ussubuhq3 */
    case 6895:  /* *p ussubuqq3 */
    case 6894:  /* *p ussubv2uhq3 */
    case 6893:  /* *p ussubv4uqq3 */
    case 6892:  /* *p *arm_subv2ha3 */
    case 6891:  /* *p *arm_subv2hq3 */
    case 6890:  /* *p *arm_subv4qq3 */
    case 6889:  /* *p subusa3 */
    case 6888:  /* *p subuha3 */
    case 6887:  /* *p subsa3 */
    case 6886:  /* *p subha3 */
    case 6885:  /* *p subusq3 */
    case 6884:  /* *p subuhq3 */
    case 6883:  /* *p subuqq3 */
    case 6882:  /* *p subsq3 */
    case 6881:  /* *p subhq3 */
    case 6880:  /* *p subqq3 */
    case 6879:  /* *p *arm_ssaddsa3 */
    case 6878:  /* *p *arm_ssaddsq3 */
    case 6877:  /* *p *arm_ssaddha3 */
    case 6876:  /* *p *arm_ssaddv2ha3 */
    case 6875:  /* *p *arm_ssaddhq3 */
    case 6874:  /* *p *arm_ssaddqq3 */
    case 6873:  /* *p *arm_ssaddv2hq3 */
    case 6872:  /* *p *arm_ssaddv4qq3 */
    case 6871:  /* *p usadduha3 */
    case 6870:  /* *p usaddv2uha3 */
    case 6869:  /* *p usadduhq3 */
    case 6868:  /* *p usadduqq3 */
    case 6867:  /* *p usaddv2uhq3 */
    case 6866:  /* *p usaddv4uqq3 */
    case 6865:  /* *p *arm_addv2ha3 */
    case 6864:  /* *p *arm_addv2hq3 */
    case 6863:  /* *p *arm_addv4qq3 */
    case 6862:  /* *p addusa3 */
    case 6861:  /* *p adduha3 */
    case 6860:  /* *p addsa3 */
    case 6859:  /* *p addha3 */
    case 6858:  /* *p addusq3 */
    case 6857:  /* *p adduhq3 */
    case 6856:  /* *p adduqq3 */
    case 6855:  /* *p addsq3 */
    case 6854:  /* *p addhq3 */
    case 6853:  /* *p addqq3 */
    case 6749:  /* *p *muldf3_vfp */
    case 6748:  /* *p *mulsf3_vfp */
    case 6747:  /* *p *divdf3_vfp */
    case 6746:  /* *p *divsf3_vfp */
    case 6745:  /* *p *subdf3_vfp */
    case 6744:  /* *p *subsf3_vfp */
    case 6743:  /* *p *adddf3_vfp */
    case 6742:  /* *p *addsf3_vfp */
    case 6682:  /* *p iwmmxt_wmulwl */
    case 6635:  /* *p ashldi3_di */
    case 6634:  /* *p ashlv2si3_di */
    case 6633:  /* *p ashlv4hi3_di */
    case 6632:  /* *p lshrdi3_di */
    case 6631:  /* *p lshrv2si3_di */
    case 6630:  /* *p lshrv4hi3_di */
    case 6629:  /* *p ashrdi3_di */
    case 6628:  /* *p ashrv2si3_di */
    case 6627:  /* *p ashrv4hi3_di */
    case 6626:  /* *p rordi3_di */
    case 6625:  /* *p rorv2si3_di */
    case 6624:  /* *p rorv4hi3_di */
    case 6623:  /* *p ashldi3_iwmmxt */
    case 6622:  /* *p ashlv2si3_iwmmxt */
    case 6621:  /* *p ashlv4hi3_iwmmxt */
    case 6620:  /* *p lshrdi3_iwmmxt */
    case 6619:  /* *p lshrv2si3_iwmmxt */
    case 6618:  /* *p lshrv4hi3_iwmmxt */
    case 6617:  /* *p ashrdi3_iwmmxt */
    case 6616:  /* *p ashrv2si3_iwmmxt */
    case 6615:  /* *p ashrv4hi3_iwmmxt */
    case 6614:  /* *p rordi3 */
    case 6613:  /* *p rorv2si3 */
    case 6612:  /* *p rorv4hi3 */
    case 6587:  /* *p *uminv8qi3_iwmmxt */
    case 6586:  /* *p *uminv4hi3_iwmmxt */
    case 6585:  /* *p *uminv2si3_iwmmxt */
    case 6584:  /* *p *sminv8qi3_iwmmxt */
    case 6583:  /* *p *sminv4hi3_iwmmxt */
    case 6582:  /* *p *sminv2si3_iwmmxt */
    case 6581:  /* *p *umaxv8qi3_iwmmxt */
    case 6580:  /* *p *umaxv4hi3_iwmmxt */
    case 6579:  /* *p *umaxv2si3_iwmmxt */
    case 6578:  /* *p *smaxv8qi3_iwmmxt */
    case 6577:  /* *p *smaxv4hi3_iwmmxt */
    case 6576:  /* *p *smaxv2si3_iwmmxt */
    case 6543:  /* *p *mulv4hi3_iwmmxt */
    case 6542:  /* *p ussubv2si3 */
    case 6541:  /* *p ussubv4hi3 */
    case 6540:  /* *p ussubv8qi3 */
    case 6539:  /* *p sssubv2si3 */
    case 6538:  /* *p sssubv4hi3 */
    case 6537:  /* *p sssubv8qi3 */
    case 6536:  /* *p *subv8qi3_iwmmxt */
    case 6535:  /* *p *subv4hi3_iwmmxt */
    case 6534:  /* *p *subv2si3_iwmmxt */
    case 6533:  /* *p usaddv2si3 */
    case 6532:  /* *p usaddv4hi3 */
    case 6531:  /* *p usaddv8qi3 */
    case 6530:  /* *p ssaddv2si3 */
    case 6529:  /* *p ssaddv4hi3 */
    case 6528:  /* *p ssaddv8qi3 */
    case 6527:  /* *p *addv8qi3_iwmmxt */
    case 6526:  /* *p *addv4hi3_iwmmxt */
    case 6525:  /* *p *addv2si3_iwmmxt */
    case 6524:  /* *p *xorv8qi3_iwmmxt */
    case 6523:  /* *p *xorv4hi3_iwmmxt */
    case 6522:  /* *p *xorv2si3_iwmmxt */
    case 6521:  /* *p *iorv8qi3_iwmmxt */
    case 6520:  /* *p *iorv4hi3_iwmmxt */
    case 6519:  /* *p *iorv2si3_iwmmxt */
    case 6518:  /* *p *andv8qi3_iwmmxt */
    case 6517:  /* *p *andv4hi3_iwmmxt */
    case 6516:  /* *p *andv2si3_iwmmxt */
    case 6511:  /* *p iwmmxt_anddi3 */
    case 6510:  /* *p iwmmxt_xordi3 */
    case 6509:  /* *p iwmmxt_iordi3 */
    case 6410:  /* *p *arm_movt */
    case 6327:  /* *p udivsi3 */
    case 6326:  /* *p divsi3 */
    case 6308:  /* *p arm_qsub_setq_insn */
    case 6307:  /* *p arm_qsub_insn */
    case 6306:  /* *p arm_qadd_setq_insn */
    case 6305:  /* *p arm_qadd_insn */
    case 6300:  /* *p *arm_xorsi3 */
    case 6299:  /* *p *iorsi3_insn */
    case 6291:  /* *p *arm_andsi3_insn */
    case 6264:  /* *p *arm_subsi3_insn */
    case 6257:  /* *p rsbsi_carryin_reg */
    case 6247:  /* *p *arm_addsi3 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 4934:  /* arm_vcx3qa_p_v16qi */
    case 4933:  /* arm_vcx3q_p_v16qi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 3));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 4));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (pat, 1), 0, 5));
      break;

    case 4922:  /* mve_vshlcq_m_uv4si */
    case 4921:  /* mve_vshlcq_m_sv4si */
    case 4920:  /* mve_vshlcq_m_uv8hi */
    case 4919:  /* mve_vshlcq_m_sv8hi */
    case 4918:  /* mve_vshlcq_m_uv16qi */
    case 4917:  /* mve_vshlcq_m_sv16qi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 3);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2);
      recog_data.dup_num[1] = 4;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[2] = 3;
      recog_data.dup_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[3] = 2;
      break;

    case 4867:  /* mve_vsbcq_m_sv4si */
    case 4866:  /* mve_vsbcq_m_uv4si */
    case 4863:  /* mve_vsbciq_m_sv4si */
    case 4862:  /* mve_vsbciq_m_uv4si */
    case 4859:  /* mve_vadcq_m_sv4si */
    case 4858:  /* mve_vadcq_m_uv4si */
    case 4855:  /* mve_vadciq_m_sv4si */
    case 4854:  /* mve_vadciq_m_uv4si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      break;

    case 4853:  /* mve_vldrdq_gather_base_wb_z_uv2di_insn */
    case 4852:  /* mve_vldrdq_gather_base_wb_z_sv2di_insn */
    case 4847:  /* mve_vldrwq_gather_base_wb_z_fv4sf_insn */
    case 4845:  /* mve_vldrwq_gather_base_wb_z_uv4si_insn */
    case 4844:  /* mve_vldrwq_gather_base_wb_z_sv4si_insn */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[1] = 2;
      break;

    case 4849:  /* mve_vldrdq_gather_base_wb_uv2di_insn */
    case 4848:  /* mve_vldrdq_gather_base_wb_sv2di_insn */
    case 4846:  /* mve_vldrwq_gather_base_wb_fv4sf_insn */
    case 4843:  /* mve_vldrwq_gather_base_wb_uv4si_insn */
    case 4842:  /* mve_vldrwq_gather_base_wb_sv4si_insn */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[1] = 2;
      break;

    case 4841:  /* mve_vstrdq_scatter_base_wb_p_uv2di */
    case 4840:  /* mve_vstrdq_scatter_base_wb_p_sv2di */
    case 4837:  /* mve_vstrwq_scatter_base_wb_p_fv4sf */
    case 4835:  /* mve_vstrwq_scatter_base_wb_p_uv4si */
    case 4834:  /* mve_vstrwq_scatter_base_wb_p_sv4si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[1] = 1;
      break;

    case 4839:  /* mve_vstrdq_scatter_base_wb_uv2di */
    case 4838:  /* mve_vstrdq_scatter_base_wb_sv2di */
    case 4836:  /* mve_vstrwq_scatter_base_wb_fv4sf */
    case 4833:  /* mve_vstrwq_scatter_base_wb_uv4si */
    case 4832:  /* mve_vstrwq_scatter_base_wb_sv4si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[1] = 1;
      break;

    case 4831:  /* mve_viwdupq_m_wb_uv4si_insn */
    case 4830:  /* mve_viwdupq_m_wb_uv8hi_insn */
    case 4829:  /* mve_viwdupq_m_wb_uv16qi_insn */
    case 4825:  /* mve_vdwdupq_m_wb_uv4si_insn */
    case 4824:  /* mve_vdwdupq_m_wb_uv8hi_insn */
    case 4823:  /* mve_vdwdupq_m_wb_uv16qi_insn */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2), 0));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 4));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 4);
      recog_data.dup_num[0] = 6;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 3);
      recog_data.dup_num[1] = 5;
      recog_data.dup_loc[2] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2), 0);
      recog_data.dup_num[2] = 4;
      recog_data.dup_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[3] = 3;
      recog_data.dup_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[4] = 2;
      break;

    case 4828:  /* mve_viwdupq_wb_uv4si_insn */
    case 4827:  /* mve_viwdupq_wb_uv8hi_insn */
    case 4826:  /* mve_viwdupq_wb_uv16qi_insn */
    case 4822:  /* mve_vdwdupq_wb_uv4si_insn */
    case 4821:  /* mve_vdwdupq_wb_uv8hi_insn */
    case 4820:  /* mve_vdwdupq_wb_uv16qi_insn */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1), 0);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[2] = 2;
      break;

    case 4819:  /* mve_vddupq_m_wb_uv4si_insn */
    case 4818:  /* mve_vddupq_m_wb_uv8hi_insn */
    case 4817:  /* mve_vddupq_m_wb_uv16qi_insn */
    case 4813:  /* mve_vidupq_m_wb_uv4si_insn */
    case 4812:  /* mve_vidupq_m_wb_uv8hi_insn */
    case 4811:  /* mve_vidupq_m_wb_uv16qi_insn */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 3;
      break;

    case 4816:  /* mve_vddupq_uv4si_insn */
    case 4815:  /* mve_vddupq_uv8hi_insn */
    case 4814:  /* mve_vddupq_uv16qi_insn */
    case 4810:  /* mve_vidupq_uv4si_insn */
    case 4809:  /* mve_vidupq_uv8hi_insn */
    case 4808:  /* mve_vidupq_uv16qi_insn */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 2;
      break;

    case 4800:  /* mve_vstrwq_scatter_shifted_offset_p_uv4si_insn */
    case 4799:  /* mve_vstrwq_scatter_shifted_offset_p_sv4si_insn */
    case 4798:  /* mve_vstrwq_scatter_shifted_offset_p_fv4sf_insn */
    case 4794:  /* mve_vstrwq_scatter_offset_p_uv4si_insn */
    case 4793:  /* mve_vstrwq_scatter_offset_p_sv4si_insn */
    case 4792:  /* mve_vstrwq_scatter_offset_p_fv4sf_insn */
    case 4790:  /* mve_vstrwq_scatter_base_p_fv4sf */
    case 4788:  /* mve_vstrhq_scatter_shifted_offset_p_fv8hf_insn */
    case 4786:  /* mve_vstrhq_scatter_offset_p_fv8hf_insn */
    case 4782:  /* mve_vstrdq_scatter_shifted_offset_p_uv2di_insn */
    case 4781:  /* mve_vstrdq_scatter_shifted_offset_p_sv2di_insn */
    case 4778:  /* mve_vstrdq_scatter_offset_p_uv2di_insn */
    case 4777:  /* mve_vstrdq_scatter_offset_p_sv2di_insn */
    case 4774:  /* mve_vstrdq_scatter_base_p_uv2di */
    case 4773:  /* mve_vstrdq_scatter_base_p_sv2di */
    case 4758:  /* mve_vstrhq_scatter_shifted_offset_p_uv4si_insn */
    case 4757:  /* mve_vstrhq_scatter_shifted_offset_p_sv4si_insn */
    case 4756:  /* mve_vstrhq_scatter_shifted_offset_p_uv8hi_insn */
    case 4755:  /* mve_vstrhq_scatter_shifted_offset_p_sv8hi_insn */
    case 4750:  /* mve_vstrhq_scatter_offset_p_uv4si_insn */
    case 4749:  /* mve_vstrhq_scatter_offset_p_sv4si_insn */
    case 4748:  /* mve_vstrhq_scatter_offset_p_uv8hi_insn */
    case 4747:  /* mve_vstrhq_scatter_offset_p_sv8hi_insn */
    case 4658:  /* mve_vstrwq_scatter_base_p_uv4si */
    case 4657:  /* mve_vstrwq_scatter_base_p_sv4si */
    case 4656:  /* mve_vstrbq_scatter_offset_p_uv4si_insn */
    case 4655:  /* mve_vstrbq_scatter_offset_p_sv4si_insn */
    case 4654:  /* mve_vstrbq_scatter_offset_p_uv8hi_insn */
    case 4653:  /* mve_vstrbq_scatter_offset_p_sv8hi_insn */
    case 4652:  /* mve_vstrbq_scatter_offset_p_uv16qi_insn */
    case 4651:  /* mve_vstrbq_scatter_offset_p_sv16qi_insn */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 2));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 3));
      break;

    case 4802:  /* mve_vstrwq_scatter_shifted_offset_uv4si_insn */
    case 4801:  /* mve_vstrwq_scatter_shifted_offset_sv4si_insn */
    case 4797:  /* mve_vstrwq_scatter_shifted_offset_fv4sf_insn */
    case 4796:  /* mve_vstrwq_scatter_offset_uv4si_insn */
    case 4795:  /* mve_vstrwq_scatter_offset_sv4si_insn */
    case 4791:  /* mve_vstrwq_scatter_offset_fv4sf_insn */
    case 4789:  /* mve_vstrwq_scatter_base_fv4sf */
    case 4787:  /* mve_vstrhq_scatter_shifted_offset_fv8hf_insn */
    case 4785:  /* mve_vstrhq_scatter_offset_fv8hf_insn */
    case 4784:  /* mve_vstrdq_scatter_shifted_offset_uv2di_insn */
    case 4783:  /* mve_vstrdq_scatter_shifted_offset_sv2di_insn */
    case 4780:  /* mve_vstrdq_scatter_offset_uv2di_insn */
    case 4779:  /* mve_vstrdq_scatter_offset_sv2di_insn */
    case 4776:  /* mve_vstrdq_scatter_base_uv2di */
    case 4775:  /* mve_vstrdq_scatter_base_sv2di */
    case 4762:  /* mve_vstrhq_scatter_shifted_offset_uv4si_insn */
    case 4761:  /* mve_vstrhq_scatter_shifted_offset_sv4si_insn */
    case 4760:  /* mve_vstrhq_scatter_shifted_offset_uv8hi_insn */
    case 4759:  /* mve_vstrhq_scatter_shifted_offset_sv8hi_insn */
    case 4754:  /* mve_vstrhq_scatter_offset_uv4si_insn */
    case 4753:  /* mve_vstrhq_scatter_offset_sv4si_insn */
    case 4752:  /* mve_vstrhq_scatter_offset_uv8hi_insn */
    case 4751:  /* mve_vstrhq_scatter_offset_sv8hi_insn */
    case 4636:  /* mve_vstrwq_scatter_base_uv4si */
    case 4635:  /* mve_vstrwq_scatter_base_sv4si */
    case 4634:  /* mve_vstrbq_scatter_offset_uv4si_insn */
    case 4633:  /* mve_vstrbq_scatter_offset_sv4si_insn */
    case 4632:  /* mve_vstrbq_scatter_offset_uv8hi_insn */
    case 4631:  /* mve_vstrbq_scatter_offset_sv8hi_insn */
    case 4630:  /* mve_vstrbq_scatter_offset_uv16qi_insn */
    case 4629:  /* mve_vstrbq_scatter_offset_sv16qi_insn */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 2));
      break;

    case 3703:  /* mve_vshlcq_uv4si */
    case 3702:  /* mve_vshlcq_sv4si */
    case 3701:  /* mve_vshlcq_uv8hi */
    case 3700:  /* mve_vshlcq_sv8hi */
    case 3699:  /* mve_vshlcq_uv16qi */
    case 3698:  /* mve_vshlcq_sv16qi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[2] = 2;
      break;

    case 3002:  /* arm_ssatsihi_shift */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 3001:  /* *arm_usmulusa3 */
    case 3000:  /* *arm_ssmulsa3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 2945:  /* arm_store_release_exclusivesi */
    case 2944:  /* arm_store_release_exclusivehi */
    case 2943:  /* arm_store_release_exclusiveqi */
    case 2942:  /* arm_store_release_exclusivedi */
    case 2941:  /* arm_store_exclusivedi */
    case 2940:  /* arm_store_exclusivesi */
    case 2939:  /* arm_store_exclusivehi */
    case 2938:  /* arm_store_exclusiveqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0));
      break;

    case 2929:  /* atomic_nand_fetchdi */
    case 2928:  /* atomic_nand_fetchsi */
    case 2927:  /* atomic_nand_fetchhi */
    case 2926:  /* atomic_nand_fetchqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[2] = 1;
      break;

    case 2925:  /* atomic_and_fetchdi */
    case 2924:  /* atomic_xor_fetchdi */
    case 2923:  /* atomic_or_fetchdi */
    case 2922:  /* atomic_sub_fetchdi */
    case 2921:  /* atomic_add_fetchdi */
    case 2920:  /* atomic_and_fetchsi */
    case 2919:  /* atomic_xor_fetchsi */
    case 2918:  /* atomic_or_fetchsi */
    case 2917:  /* atomic_sub_fetchsi */
    case 2916:  /* atomic_add_fetchsi */
    case 2915:  /* atomic_and_fetchhi */
    case 2914:  /* atomic_xor_fetchhi */
    case 2913:  /* atomic_or_fetchhi */
    case 2912:  /* atomic_sub_fetchhi */
    case 2911:  /* atomic_add_fetchhi */
    case 2910:  /* atomic_and_fetchqi */
    case 2909:  /* atomic_xor_fetchqi */
    case 2908:  /* atomic_or_fetchqi */
    case 2907:  /* atomic_sub_fetchqi */
    case 2906:  /* atomic_add_fetchqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[2] = 1;
      break;

    case 2905:  /* atomic_fetch_nanddi */
    case 2904:  /* atomic_fetch_nandsi */
    case 2903:  /* atomic_fetch_nandhi */
    case 2902:  /* atomic_fetch_nandqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 4), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0), 0), 0);
      recog_data.dup_num[1] = 1;
      break;

    case 2901:  /* atomic_fetch_anddi */
    case 2900:  /* atomic_fetch_xordi */
    case 2899:  /* atomic_fetch_ordi */
    case 2898:  /* atomic_fetch_subdi */
    case 2897:  /* atomic_fetch_adddi */
    case 2896:  /* atomic_fetch_andsi */
    case 2895:  /* atomic_fetch_xorsi */
    case 2894:  /* atomic_fetch_orsi */
    case 2893:  /* atomic_fetch_subsi */
    case 2892:  /* atomic_fetch_addsi */
    case 2891:  /* atomic_fetch_andhi */
    case 2890:  /* atomic_fetch_xorhi */
    case 2889:  /* atomic_fetch_orhi */
    case 2888:  /* atomic_fetch_subhi */
    case 2887:  /* atomic_fetch_addhi */
    case 2886:  /* atomic_fetch_andqi */
    case 2885:  /* atomic_fetch_xorqi */
    case 2884:  /* atomic_fetch_orqi */
    case 2883:  /* atomic_fetch_subqi */
    case 2882:  /* atomic_fetch_addqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 4), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0), 0);
      recog_data.dup_num[1] = 1;
      break;

    case 2881:  /* atomic_nanddi */
    case 2880:  /* atomic_nandsi */
    case 2879:  /* atomic_nandhi */
    case 2878:  /* atomic_nandqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 0), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 2877:  /* atomic_anddi */
    case 2876:  /* atomic_xordi */
    case 2875:  /* atomic_ordi */
    case 2874:  /* atomic_subdi */
    case 2873:  /* atomic_adddi */
    case 2872:  /* atomic_andsi */
    case 2871:  /* atomic_xorsi */
    case 2870:  /* atomic_orsi */
    case 2869:  /* atomic_subsi */
    case 2868:  /* atomic_addsi */
    case 2867:  /* atomic_andhi */
    case 2866:  /* atomic_xorhi */
    case 2865:  /* atomic_orhi */
    case 2864:  /* atomic_subhi */
    case 2863:  /* atomic_addhi */
    case 2862:  /* atomic_andqi */
    case 2861:  /* atomic_xorqi */
    case 2860:  /* atomic_orqi */
    case 2859:  /* atomic_subqi */
    case 2858:  /* atomic_addqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 2857:  /* atomic_exchangedi */
    case 2856:  /* atomic_exchangesi */
    case 2855:  /* atomic_exchangehi */
    case 2854:  /* atomic_exchangeqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 2853:  /* atomic_compare_and_swapt1di_1 */
    case 2852:  /* atomic_compare_and_swapt1si_1 */
    case 2851:  /* atomic_compare_and_swap32di_1 */
    case 2850:  /* atomic_compare_and_swap32si_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 3));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 4));
      ro[8] = *(ro_loc[8] = &XEXP (XVECEXP (pat, 0, 3), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 2), 0);
      recog_data.dup_num[0] = 2;
      break;

    case 2849:  /* atomic_compare_and_swapt1hi_1 */
    case 2848:  /* atomic_compare_and_swapt1qi_1 */
    case 2847:  /* atomic_compare_and_swap32hi_1 */
    case 2846:  /* atomic_compare_and_swap32qi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 3));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 4));
      ro[8] = *(ro_loc[8] = &XEXP (XVECEXP (pat, 0, 3), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 2), 0);
      recog_data.dup_num[0] = 2;
      break;

    case 2838:  /* *memory_barrier */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 0);
      recog_data.dup_num[0] = 0;
      break;

    case 2837:  /* crypto_sha1p_lb */
    case 2836:  /* crypto_sha1m_lb */
    case 2835:  /* crypto_sha1c_lb */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0, 0));
      break;

    case 2833:  /* crypto_sha1h_lb */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0, 0));
      break;

    case 2826:  /* *aarch32_crypto_aesd_fused */
    case 2825:  /* *aarch32_crypto_aese_fused */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 0), 1));
      break;

    case 2797:  /* neon_vabdv4sf_3 */
    case 2796:  /* neon_vabdv2sf_3 */
    case 2795:  /* neon_vabdv8hf_3 */
    case 2794:  /* neon_vabdv4hf_3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      break;

    case 2765:  /* neon_vec_umult_hi_v4si */
    case 2764:  /* neon_vec_smult_hi_v4si */
    case 2763:  /* neon_vec_umult_hi_v8hi */
    case 2762:  /* neon_vec_smult_hi_v8hi */
    case 2761:  /* neon_vec_umult_hi_v16qi */
    case 2760:  /* neon_vec_smult_hi_v16qi */
    case 2759:  /* neon_vec_umult_lo_v4si */
    case 2758:  /* neon_vec_smult_lo_v4si */
    case 2757:  /* neon_vec_umult_lo_v8hi */
    case 2756:  /* neon_vec_smult_lo_v8hi */
    case 2755:  /* neon_vec_umult_lo_v16qi */
    case 2754:  /* neon_vec_smult_lo_v16qi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1);
      recog_data.dup_num[0] = 2;
      break;

    case 2481:  /* *neon_vuzpv4hf_insn */
    case 2480:  /* *neon_vuzpv8hf_insn */
    case 2479:  /* *neon_vuzpv4sf_insn */
    case 2478:  /* *neon_vuzpv2sf_insn */
    case 2477:  /* *neon_vuzpv4si_insn */
    case 2476:  /* *neon_vuzpv2si_insn */
    case 2475:  /* *neon_vuzpv8hi_insn */
    case 2474:  /* *neon_vuzpv4hi_insn */
    case 2473:  /* *neon_vuzpv16qi_insn */
    case 2472:  /* *neon_vuzpv8qi_insn */
    case 2471:  /* *neon_vzipv4hf_insn */
    case 2470:  /* *neon_vzipv8hf_insn */
    case 2469:  /* *neon_vzipv4sf_insn */
    case 2468:  /* *neon_vzipv2sf_insn */
    case 2467:  /* *neon_vzipv4si_insn */
    case 2466:  /* *neon_vzipv2si_insn */
    case 2465:  /* *neon_vzipv8hi_insn */
    case 2464:  /* *neon_vzipv4hi_insn */
    case 2463:  /* *neon_vzipv16qi_insn */
    case 2462:  /* *neon_vzipv8qi_insn */
    case 2461:  /* *neon_vtrnv4hf_insn */
    case 2460:  /* *neon_vtrnv8hf_insn */
    case 2459:  /* *neon_vtrnv4sf_insn */
    case 2458:  /* *neon_vtrnv2sf_insn */
    case 2457:  /* *neon_vtrnv4si_insn */
    case 2456:  /* *neon_vtrnv2si_insn */
    case 2455:  /* *neon_vtrnv8hi_insn */
    case 2454:  /* *neon_vtrnv4hi_insn */
    case 2453:  /* *neon_vtrnv16qi_insn */
    case 2452:  /* *neon_vtrnv8qi_insn */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[1] = 1;
      break;

    case 2052:  /* *neon_vswpv2di */
    case 2051:  /* *neon_vswpdi */
    case 2050:  /* *neon_vswpv4sf */
    case 2049:  /* *neon_vswpv2sf */
    case 2048:  /* *neon_vswpv8bf */
    case 2047:  /* *neon_vswpv4bf */
    case 2046:  /* *neon_vswpv8hf */
    case 2045:  /* *neon_vswpv4hf */
    case 2044:  /* *neon_vswpv4si */
    case 2043:  /* *neon_vswpv2si */
    case 2042:  /* *neon_vswpv8hi */
    case 2041:  /* *neon_vswpv4hi */
    case 2040:  /* *neon_vswpv16qi */
    case 2039:  /* *neon_vswpv8qi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 1);
      recog_data.dup_num[1] = 0;
      break;

    case 1965:  /* neon_sudot_laneqv16qi */
    case 1964:  /* neon_usdot_laneqv16qi */
    case 1963:  /* neon_sudot_laneqv8qi */
    case 1962:  /* neon_usdot_laneqv8qi */
    case 1961:  /* neon_sudot_lanev16qi */
    case 1960:  /* neon_usdot_lanev16qi */
    case 1959:  /* neon_sudot_lanev8qi */
    case 1958:  /* neon_usdot_lanev8qi */
    case 1957:  /* neon_udot_laneqv16qi */
    case 1956:  /* neon_sdot_laneqv16qi */
    case 1955:  /* neon_udot_laneqv8qi */
    case 1954:  /* neon_sdot_laneqv8qi */
    case 1953:  /* neon_udot_lanev16qi */
    case 1952:  /* neon_sdot_lanev16qi */
    case 1951:  /* neon_udot_lanev8qi */
    case 1950:  /* neon_sdot_lanev8qi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      break;

    case 1947:  /* udot_prodv16qi */
    case 1946:  /* sdot_prodv16qi */
    case 1945:  /* udot_prodv8qi */
    case 1944:  /* sdot_prodv8qi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 2820:  /* neon_vfmat_lanev8bf */
    case 2819:  /* neon_vfmab_lanev8bf */
    case 2806:  /* neon_vbfdot_lanev8bfv4sf */
    case 2805:  /* neon_vbfdot_lanev8bfv2sf */
    case 2804:  /* neon_vbfdot_lanev4bfv4sf */
    case 2803:  /* neon_vbfdot_lanev4bfv2sf */
    case 1943:  /* neon_vcmlaq_lane270v4sf */
    case 1942:  /* neon_vcmlaq_lane180v4sf */
    case 1941:  /* neon_vcmlaq_lane90v4sf */
    case 1940:  /* neon_vcmlaq_lane0v4sf */
    case 1939:  /* neon_vcmlaq_lane270v8hf */
    case 1938:  /* neon_vcmlaq_lane180v8hf */
    case 1937:  /* neon_vcmlaq_lane90v8hf */
    case 1936:  /* neon_vcmlaq_lane0v8hf */
    case 1935:  /* neon_vcmla_laneq270v4hf */
    case 1934:  /* neon_vcmla_laneq180v4hf */
    case 1933:  /* neon_vcmla_laneq90v4hf */
    case 1932:  /* neon_vcmla_laneq0v4hf */
    case 1931:  /* neon_vcmla_laneq270v2sf */
    case 1930:  /* neon_vcmla_laneq180v2sf */
    case 1929:  /* neon_vcmla_laneq90v2sf */
    case 1928:  /* neon_vcmla_laneq0v2sf */
    case 1927:  /* neon_vcmla_lane270v4sf */
    case 1926:  /* neon_vcmla_lane180v4sf */
    case 1925:  /* neon_vcmla_lane90v4sf */
    case 1924:  /* neon_vcmla_lane0v4sf */
    case 1923:  /* neon_vcmla_lane270v2sf */
    case 1922:  /* neon_vcmla_lane180v2sf */
    case 1921:  /* neon_vcmla_lane90v2sf */
    case 1920:  /* neon_vcmla_lane0v2sf */
    case 1919:  /* neon_vcmla_lane270v8hf */
    case 1918:  /* neon_vcmla_lane180v8hf */
    case 1917:  /* neon_vcmla_lane90v8hf */
    case 1916:  /* neon_vcmla_lane0v8hf */
    case 1915:  /* neon_vcmla_lane270v4hf */
    case 1914:  /* neon_vcmla_lane180v4hf */
    case 1913:  /* neon_vcmla_lane90v4hf */
    case 1912:  /* neon_vcmla_lane0v4hf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 2));
      break;

    case 3966:  /* mve_vcmlaq_rot270v4sf */
    case 3965:  /* mve_vcmlaq_rot180v4sf */
    case 3964:  /* mve_vcmlaq_rot90v4sf */
    case 3963:  /* mve_vcmlaqv4sf */
    case 3962:  /* mve_vcmlaq_rot270v8hf */
    case 3961:  /* mve_vcmlaq_rot180v8hf */
    case 3960:  /* mve_vcmlaq_rot90v8hf */
    case 3959:  /* mve_vcmlaqv8hf */
    case 2818:  /* neon_vfmatv8bf */
    case 2817:  /* neon_vfmabv8bf */
    case 2816:  /* neon_vmmlav8bf */
    case 2802:  /* neon_vbfdotv4sf */
    case 2801:  /* neon_vbfdotv2sf */
    case 1911:  /* neon_vcmla270v4sf */
    case 1910:  /* neon_vcmla180v4sf */
    case 1909:  /* neon_vcmla90v4sf */
    case 1908:  /* neon_vcmla0v4sf */
    case 1907:  /* neon_vcmla270v2sf */
    case 1906:  /* neon_vcmla180v2sf */
    case 1905:  /* neon_vcmla90v2sf */
    case 1904:  /* neon_vcmla0v2sf */
    case 1903:  /* neon_vcmla270v8hf */
    case 1902:  /* neon_vcmla180v8hf */
    case 1901:  /* neon_vcmla90v8hf */
    case 1900:  /* neon_vcmla0v8hf */
    case 1899:  /* neon_vcmla270v4hf */
    case 1898:  /* neon_vcmla180v4hf */
    case 1897:  /* neon_vcmla90v4hf */
    case 1896:  /* neon_vcmla0v4hf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      break;

    case 2800:  /* neon_usmmlav16qi */
    case 2799:  /* neon_ummlav16qi */
    case 2798:  /* neon_smmlav16qi */
    case 1949:  /* neon_usdotv16qi */
    case 1948:  /* neon_usdotv8qi */
    case 1782:  /* neon_vabaluv2si */
    case 1781:  /* neon_vabalsv2si */
    case 1780:  /* neon_vabaluv4hi */
    case 1779:  /* neon_vabalsv4hi */
    case 1778:  /* neon_vabaluv8qi */
    case 1777:  /* neon_vabalsv8qi */
    case 1776:  /* neon_vabauv4si */
    case 1775:  /* neon_vabasv4si */
    case 1774:  /* neon_vabauv2si */
    case 1773:  /* neon_vabasv2si */
    case 1772:  /* neon_vabauv8hi */
    case 1771:  /* neon_vabasv8hi */
    case 1770:  /* neon_vabauv4hi */
    case 1769:  /* neon_vabasv4hi */
    case 1768:  /* neon_vabauv16qi */
    case 1767:  /* neon_vabasv16qi */
    case 1766:  /* neon_vabauv8qi */
    case 1765:  /* neon_vabasv8qi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      break;

    case 1728:  /* neon_vcalev4hf_fp16insn */
    case 1727:  /* neon_vcaltv4hf_fp16insn */
    case 1726:  /* neon_vcagev4hf_fp16insn */
    case 1725:  /* neon_vcagtv4hf_fp16insn */
    case 1724:  /* neon_vcalev8hf_fp16insn */
    case 1723:  /* neon_vcaltv8hf_fp16insn */
    case 1722:  /* neon_vcagev8hf_fp16insn */
    case 1721:  /* neon_vcagtv8hf_fp16insn */
    case 1716:  /* neon_vcagev4sf_insn */
    case 1715:  /* neon_vcagtv4sf_insn */
    case 1714:  /* neon_vcagev2sf_insn */
    case 1713:  /* neon_vcagtv2sf_insn */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      break;

    case 1523:  /* vfmsl_lane_highv4sf_intrinsic */
    case 1522:  /* vfmsl_lane_highv2sf_intrinsic */
    case 1521:  /* vfmsl_lane_highv4hfv4sf_intrinsic */
    case 1520:  /* vfmsl_lane_highv8hfv2sf_intrinsic */
    case 1519:  /* vfmsl_lane_lowv4hfv4sf_intrinsic */
    case 1518:  /* vfmsl_lane_lowv8hfv2sf_intrinsic */
    case 1517:  /* vfmsl_lane_lowv4sf_intrinsic */
    case 1516:  /* vfmsl_lane_lowv2sf_intrinsic */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 2));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 1), 0, 0));
      break;

    case 1515:  /* vfmal_lane_highv4sf_intrinsic */
    case 1514:  /* vfmal_lane_highv2sf_intrinsic */
    case 1513:  /* vfmal_lane_highv4hfv4sf_intrinsic */
    case 1512:  /* vfmal_lane_highv8hfv2sf_intrinsic */
    case 1511:  /* vfmal_lane_lowv4hfv4sf_intrinsic */
    case 1510:  /* vfmal_lane_lowv8hfv2sf_intrinsic */
    case 1509:  /* vfmal_lane_lowv4sf_intrinsic */
    case 1508:  /* vfmal_lane_lowv2sf_intrinsic */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 2));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 1), 0, 0));
      break;

    case 1507:  /* vfmsl_lowv4sf_intrinsic */
    case 1506:  /* vfmsl_lowv2sf_intrinsic */
    case 1503:  /* vfmsl_highv4sf_intrinsic */
    case 1502:  /* vfmsl_highv2sf_intrinsic */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 2));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1));
      break;

    case 1505:  /* vfmal_highv4sf_intrinsic */
    case 1504:  /* vfmal_highv2sf_intrinsic */
    case 1501:  /* vfmal_lowv4sf_intrinsic */
    case 1500:  /* vfmal_lowv2sf_intrinsic */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 2));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1));
      break;

    case 1397:  /* quad_halves_umaxv16qi */
    case 1396:  /* quad_halves_uminv16qi */
    case 1395:  /* quad_halves_smaxv16qi */
    case 1394:  /* quad_halves_sminv16qi */
    case 1393:  /* quad_halves_plusv16qi */
    case 1392:  /* quad_halves_umaxv8hi */
    case 1391:  /* quad_halves_uminv8hi */
    case 1390:  /* quad_halves_smaxv8hi */
    case 1389:  /* quad_halves_sminv8hi */
    case 1388:  /* quad_halves_plusv8hi */
    case 1387:  /* quad_halves_smaxv4sf */
    case 1386:  /* quad_halves_sminv4sf */
    case 1385:  /* quad_halves_plusv4sf */
    case 1384:  /* quad_halves_umaxv4si */
    case 1383:  /* quad_halves_uminv4si */
    case 1382:  /* quad_halves_smaxv4si */
    case 1381:  /* quad_halves_sminv4si */
    case 1380:  /* quad_halves_plusv4si */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 1376:  /* vec_sel_widen_usum_hiv4siv2si3 */
    case 1375:  /* vec_sel_widen_usum_hiv8hiv4hi3 */
    case 1374:  /* vec_sel_widen_usum_hiv16qiv8qi3 */
    case 1373:  /* vec_sel_widen_usum_lov4siv2si3 */
    case 1372:  /* vec_sel_widen_usum_lov8hiv4hi3 */
    case 1371:  /* vec_sel_widen_usum_lov16qiv8qi3 */
    case 1367:  /* vec_sel_widen_ssum_hiv4siv2si3 */
    case 1366:  /* vec_sel_widen_ssum_hiv8hiv4hi3 */
    case 1365:  /* vec_sel_widen_ssum_hiv16qiv8qi3 */
    case 1364:  /* vec_sel_widen_ssum_lov4siv2si3 */
    case 1363:  /* vec_sel_widen_ssum_lov8hiv4hi3 */
    case 1362:  /* vec_sel_widen_ssum_lov16qiv8qi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 4902:  /* mve_vec_setv2di_internal */
    case 4901:  /* mve_vec_setv4sf_internal */
    case 4900:  /* mve_vec_setv4si_internal */
    case 4899:  /* mve_vec_setv8hf_internal */
    case 4898:  /* mve_vec_setv8hi_internal */
    case 4897:  /* mve_vec_setv16qi_internal */
    case 1110:  /* vec_setv2di_internal */
    case 1109:  /* vec_setv4sf_internal */
    case 1108:  /* vec_setv4si_internal */
    case 1107:  /* vec_setv8hf_internal */
    case 1106:  /* vec_setv8hi_internal */
    case 1105:  /* vec_setv16qi_internal */
    case 1104:  /* vec_setv2sf_internal */
    case 1103:  /* vec_setv2si_internal */
    case 1102:  /* vec_setv4bf_internal */
    case 1101:  /* vec_setv4hf_internal */
    case 1100:  /* vec_setv4hi_internal */
    case 1099:  /* vec_setv8qi_internal */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 2));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 1049:  /* *doloop_end_internal */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 1048:  /* thumb2_lsrl */
    case 1047:  /* thumb2_lsll */
    case 1046:  /* thumb2_asrl */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 1045:  /* *clear_multiple */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 0));
      break;

    case 1039:  /* *thumb2_cbnz */
    case 1038:  /* *thumb2_cbz */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 1030:  /* *thumb2_movsi_shortim */
    case 1029:  /* *thumb2_movhi_shortim */
    case 1028:  /* *thumb2_movqi_shortim */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      break;

    case 1022:  /* *thumb2_casesi_internal_pic */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 3), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 4), 0), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 0);
      recog_data.dup_num[1] = 0;
      break;

    case 1021:  /* *thumb2_casesi_internal */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 3), 0), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 0);
      recog_data.dup_num[1] = 0;
      break;

    case 1016:  /* *thumb2_csneg */
    case 1015:  /* *thumb2_csinc */
    case 1014:  /* *thumb2_csinv */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 1008:  /* *thumb2_ior_scc_strict_it */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 1003:  /* *nonsecure_call_value_reg_thumb2_fpcxt */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 1000:  /* *nonsecure_call_reg_thumb2_fpcxt */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 991:  /* *thumb2_storewb_pairsi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 0), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 0), 0), 0);
      recog_data.dup_num[0] = 0;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0), 0);
      recog_data.dup_num[1] = 0;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0), 1);
      recog_data.dup_num[2] = 2;
      break;

    case 989:  /* tls_load_dot_plus_four */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 2));
      break;

    case 980:  /* thumb1_stack_protect_test_insn */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 2;
      break;

    case 978:  /* *thumb1_tablejump */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0));
      break;

    case 973:  /* thumb1_casesi_dispatch */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1), 0));
      break;

    case 1004:  /* *nonsecure_call_value_reg_thumb2 */
    case 969:  /* *nonsecure_call_value_reg_thumb1_v5 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 1001:  /* *nonsecure_call_reg_thumb2 */
    case 966:  /* *nonsecure_call_reg_thumb1_v5 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 963:  /* thumb1_addsi3_addgeu */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      break;

    case 958:  /* *thumb_cmpdi_zero */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 957:  /* *addsi3_cbranch_scratch */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 956:  /* *addsi3_cbranch */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 3;
      break;

    case 955:  /* *cbranchne_decr1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 2;
      break;

    case 954:  /* *tstsi3_cbranch */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 953:  /* *tlobits_cbranch */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 952:  /* *tbit_cbranch */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 2));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 951:  /* *negated_cbranchsi4 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 950:  /* cbranchsi4_scratch */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      break;

    case 949:  /* cbranchsi4_insn */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 948:  /* thumb1_cbz */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 947:  /* cpymem8b */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 4), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 5), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 3), 1), 0);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0), 0);
      recog_data.dup_num[2] = 2;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[3] = 3;
      break;

    case 946:  /* cpymem12b */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 4), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 5), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 6), 0));
      ro[6] = *(ro_loc[6] = &XEXP (XVECEXP (pat, 0, 7), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 4), 1), 0);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 3), 1), 0);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 0), 0), 0);
      recog_data.dup_num[2] = 2;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0), 0);
      recog_data.dup_num[3] = 3;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0), 0);
      recog_data.dup_num[4] = 2;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[5] = 3;
      break;

    case 932:  /* *thumb1_neg_abssi2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 960:  /* *cstoresi_ne0_thumb1_insn */
    case 959:  /* *cstoresi_eq0_thumb1_insn */
    case 937:  /* thumb1_extendhisi2 */
    case 931:  /* *thumb1_abssi2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 902:  /* no_literal_pool_sf_immediate */
    case 901:  /* no_literal_pool_df_immediate */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 855:  /* neon_vcvthu_nsi_unspec */
    case 854:  /* neon_vcvths_nsi_unspec */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 853:  /* neon_vcvthu_nhf_unspec */
    case 852:  /* neon_vcvths_nhf_unspec */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 847:  /* *combine_vcvtf2i */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      break;

    case 834:  /* lazy_load_multiple_insn */
    case 833:  /* lazy_store_multiple_insn */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      break;

    case 832:  /* *clear_vfp_multiple */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      break;

    case 831:  /* pop_fpsysreg_insn */
    case 830:  /* push_fpsysreg_insn */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      break;

    case 810:  /* *fnmadddf4 */
    case 809:  /* *fnmaddsf4 */
    case 808:  /* *fnmaddhf4 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      break;

    case 807:  /* *fnmsubdf4 */
    case 806:  /* *fnmsubsf4 */
    case 805:  /* *fnmsubhf4 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      break;

    case 1182:  /* fmsubv4hf4_intrinsic */
    case 1181:  /* fmsubv8hf4_intrinsic */
    case 1180:  /* fmsubv4sf4_intrinsic */
    case 1179:  /* fmsubv2sf4_intrinsic */
    case 1178:  /* *fmsubv4sf4 */
    case 1177:  /* *fmsubv2sf4 */
    case 804:  /* *fmsubdf4 */
    case 803:  /* *fmsubsf4 */
    case 802:  /* fmsubhf4_fp16 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 798:  /* *muldf3negdfsubdf_vfp */
    case 797:  /* *mulsf3negsfsubsf_vfp */
    case 796:  /* *mulhf3neghfsubhf_vfp */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 1170:  /* mulv4sf3negv4sfaddv4sf_neon */
    case 1169:  /* mulv2sf3negv2sfaddv2sf_neon */
    case 1168:  /* mulv4si3negv4siaddv4si_neon */
    case 1167:  /* mulv2si3negv2siaddv2si_neon */
    case 1166:  /* mulv8hi3negv8hiaddv8hi_neon */
    case 1165:  /* mulv4hi3negv4hiaddv4hi_neon */
    case 1164:  /* mulv16qi3negv16qiaddv16qi_neon */
    case 1163:  /* mulv8qi3negv8qiaddv8qi_neon */
    case 795:  /* *fmuldf3negdfadddf_vfp */
    case 794:  /* *mulsf3negsfaddsf_vfp */
    case 793:  /* *mulhf3neghfaddhf_vfp */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      break;

    case 2793:  /* neon_vabdv4sf_2 */
    case 2792:  /* neon_vabdv2sf_2 */
    case 2791:  /* neon_vabdv8hf_2 */
    case 2790:  /* neon_vabdv4hf_2 */
    case 2771:  /* neon_vec_ushiftl_v2si */
    case 2770:  /* neon_vec_sshiftl_v2si */
    case 2769:  /* neon_vec_ushiftl_v4hi */
    case 2768:  /* neon_vec_sshiftl_v4hi */
    case 2767:  /* neon_vec_ushiftl_v8qi */
    case 2766:  /* neon_vec_sshiftl_v8qi */
    case 2753:  /* neon_vec_unpacku_hi_v4si */
    case 2752:  /* neon_vec_unpacks_hi_v4si */
    case 2751:  /* neon_vec_unpacku_hi_v8hi */
    case 2750:  /* neon_vec_unpacks_hi_v8hi */
    case 2749:  /* neon_vec_unpacku_hi_v16qi */
    case 2748:  /* neon_vec_unpacks_hi_v16qi */
    case 2747:  /* neon_vec_unpacku_lo_v4si */
    case 2746:  /* neon_vec_unpacks_lo_v4si */
    case 2745:  /* neon_vec_unpacku_lo_v8hi */
    case 2744:  /* neon_vec_unpacks_lo_v8hi */
    case 2743:  /* neon_vec_unpacku_lo_v16qi */
    case 2742:  /* neon_vec_unpacks_lo_v16qi */
    case 1712:  /* neon_vcgeuv4si */
    case 1711:  /* neon_vcgtuv4si */
    case 1710:  /* neon_vcgeuv2si */
    case 1709:  /* neon_vcgtuv2si */
    case 1708:  /* neon_vcgeuv8hi */
    case 1707:  /* neon_vcgtuv8hi */
    case 1706:  /* neon_vcgeuv4hi */
    case 1705:  /* neon_vcgtuv4hi */
    case 1704:  /* neon_vcgeuv16qi */
    case 1703:  /* neon_vcgtuv16qi */
    case 1702:  /* neon_vcgeuv8qi */
    case 1701:  /* neon_vcgtuv8qi */
    case 1690:  /* neon_vcltv4hf_fp16insn */
    case 1689:  /* neon_vclev4hf_fp16insn */
    case 1688:  /* neon_vcgev4hf_fp16insn */
    case 1687:  /* neon_vcgtv4hf_fp16insn */
    case 1686:  /* neon_vceqv4hf_fp16insn */
    case 1685:  /* neon_vcltv8hf_fp16insn */
    case 1684:  /* neon_vclev8hf_fp16insn */
    case 1683:  /* neon_vcgev8hf_fp16insn */
    case 1682:  /* neon_vcgtv8hf_fp16insn */
    case 1681:  /* neon_vceqv8hf_fp16insn */
    case 1670:  /* neon_vcltv4sf_insn */
    case 1669:  /* neon_vclev4sf_insn */
    case 1668:  /* neon_vcgev4sf_insn */
    case 1667:  /* neon_vcgtv4sf_insn */
    case 1666:  /* neon_vceqv4sf_insn */
    case 1665:  /* neon_vcltv2sf_insn */
    case 1664:  /* neon_vclev2sf_insn */
    case 1663:  /* neon_vcgev2sf_insn */
    case 1662:  /* neon_vcgtv2sf_insn */
    case 1661:  /* neon_vceqv2sf_insn */
    case 1660:  /* neon_vcltv4si_insn */
    case 1659:  /* neon_vclev4si_insn */
    case 1658:  /* neon_vcgev4si_insn */
    case 1657:  /* neon_vcgtv4si_insn */
    case 1656:  /* neon_vceqv4si_insn */
    case 1655:  /* neon_vcltv2si_insn */
    case 1654:  /* neon_vclev2si_insn */
    case 1653:  /* neon_vcgev2si_insn */
    case 1652:  /* neon_vcgtv2si_insn */
    case 1651:  /* neon_vceqv2si_insn */
    case 1650:  /* neon_vcltv8hi_insn */
    case 1649:  /* neon_vclev8hi_insn */
    case 1648:  /* neon_vcgev8hi_insn */
    case 1647:  /* neon_vcgtv8hi_insn */
    case 1646:  /* neon_vceqv8hi_insn */
    case 1645:  /* neon_vcltv4hi_insn */
    case 1644:  /* neon_vclev4hi_insn */
    case 1643:  /* neon_vcgev4hi_insn */
    case 1642:  /* neon_vcgtv4hi_insn */
    case 1641:  /* neon_vceqv4hi_insn */
    case 1640:  /* neon_vcltv16qi_insn */
    case 1639:  /* neon_vclev16qi_insn */
    case 1638:  /* neon_vcgev16qi_insn */
    case 1637:  /* neon_vcgtv16qi_insn */
    case 1636:  /* neon_vceqv16qi_insn */
    case 1635:  /* neon_vcltv8qi_insn */
    case 1634:  /* neon_vclev8qi_insn */
    case 1633:  /* neon_vcgev8qi_insn */
    case 1632:  /* neon_vcgtv8qi_insn */
    case 1631:  /* neon_vceqv8qi_insn */
    case 961:  /* cstoresi_nltu_thumb1 */
    case 786:  /* *negmuldf3_vfp */
    case 784:  /* *negmulsf3_vfp */
    case 782:  /* *negmulhf3_vfp */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 734:  /* iwmmxt_textrcv8qi3 */
    case 733:  /* iwmmxt_textrcv4hi3 */
    case 732:  /* iwmmxt_textrcv2si3 */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      break;

    case 722:  /* iwmmxt_wmerge */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0);
      recog_data.dup_num[1] = 3;
      break;

    case 713:  /* iwmmxt_wmiattn */
    case 712:  /* iwmmxt_wmiatbn */
    case 711:  /* iwmmxt_wmiabtn */
    case 710:  /* iwmmxt_wmiabbn */
    case 709:  /* iwmmxt_wmiatt */
    case 708:  /* iwmmxt_wmiatb */
    case 707:  /* iwmmxt_wmiabt */
    case 706:  /* iwmmxt_wmiabb */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0), 0);
      recog_data.dup_num[1] = 3;
      break;

    case 705:  /* iwmmxt_wqmiattn */
    case 704:  /* iwmmxt_wqmiatbn */
    case 703:  /* iwmmxt_wqmiabtn */
    case 702:  /* iwmmxt_wqmiabbn */
    case 701:  /* iwmmxt_wqmiatt */
    case 700:  /* iwmmxt_wqmiatb */
    case 699:  /* iwmmxt_wqmiabt */
    case 698:  /* iwmmxt_wqmiabb */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 4), 0);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 697:  /* iwmmxt_waddbhusl */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0), 0));
      break;

    case 696:  /* iwmmxt_waddbhusm */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0), 0));
      break;

    case 680:  /* iwmmxt_avg4r */
    case 679:  /* iwmmxt_avg4 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0), 0), 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0), 0), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0), 1), 0), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 2824:  /* crypto_aese */
    case 2823:  /* crypto_aesd */
    case 678:  /* addcv2si3 */
    case 677:  /* addcv4hi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      break;

    case 676:  /* iwmmxt_wsubaddhx */
    case 675:  /* iwmmxt_waddsubhx */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 664:  /* iwmmxt_walignr3 */
    case 663:  /* iwmmxt_walignr2 */
    case 662:  /* iwmmxt_walignr1 */
    case 661:  /* iwmmxt_walignr0 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1));
      break;

    case 660:  /* iwmmxt_walignr */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0));
      break;

    case 659:  /* iwmmxt_waligni */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1), 0));
      break;

    case 652:  /* iwmmxt_tmiatt */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0), 0));
      break;

    case 651:  /* iwmmxt_tmiabt */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0), 0));
      break;

    case 650:  /* iwmmxt_tmiatb */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0));
      break;

    case 721:  /* iwmmxt_wmiawttn */
    case 720:  /* iwmmxt_wmiawtbn */
    case 719:  /* iwmmxt_wmiawbtn */
    case 718:  /* iwmmxt_wmiawbbn */
    case 717:  /* iwmmxt_wmiawtt */
    case 716:  /* iwmmxt_wmiawtb */
    case 715:  /* iwmmxt_wmiawbt */
    case 714:  /* iwmmxt_wmiawbb */
    case 649:  /* iwmmxt_tmiabb */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0));
      break;

    case 648:  /* iwmmxt_tmiaph */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0), 0), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0), 0), 0);
      recog_data.dup_num[1] = 3;
      break;

    case 647:  /* iwmmxt_tmia */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0));
      break;

    case 684:  /* iwmmxt_wmaddun */
    case 683:  /* iwmmxt_wmaddsn */
    case 682:  /* iwmmxt_wmaddux */
    case 681:  /* iwmmxt_wmaddsx */
    case 646:  /* iwmmxt_wmaddu */
    case 645:  /* iwmmxt_wmadds */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 4890:  /* mve_vec_extractv2didi */
    case 4889:  /* mve_vec_extractv4sfsf */
    case 4888:  /* mve_vec_extractv8hfhf */
    case 4887:  /* mve_vec_extractv4sisi */
    case 4886:  /* mve_vec_extractv8hihi */
    case 4885:  /* mve_vec_extractv16qiqi */
    case 1122:  /* neon_vec_extractv2didi */
    case 1121:  /* neon_vec_extractv4sfsf */
    case 1120:  /* neon_vec_extractv4sisi */
    case 1119:  /* neon_vec_extractv8hfhf */
    case 1118:  /* neon_vec_extractv8hihi */
    case 1117:  /* neon_vec_extractv16qiqi */
    case 1116:  /* vec_extractv2sfsf */
    case 1115:  /* vec_extractv2sisi */
    case 1114:  /* vec_extractv4bfbf */
    case 1113:  /* vec_extractv4hfhf */
    case 1112:  /* vec_extractv4hihi */
    case 1111:  /* vec_extractv8qiqi */
    case 574:  /* iwmmxt_textrmw */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      break;

    case 4896:  /* *mve_vec_extract_zext_internalv4si */
    case 4895:  /* *mve_vec_extract_zext_internalv8hi */
    case 4894:  /* *mve_vec_extract_zext_internalv16qi */
    case 4893:  /* *mve_vec_extract_sext_internalv4si */
    case 4892:  /* *mve_vec_extract_sext_internalv8hi */
    case 4891:  /* *mve_vec_extract_sext_internalv16qi */
    case 2038:  /* neon_vdup_lanev8bf_internal */
    case 2037:  /* neon_vdup_lanev4bf_internal */
    case 2036:  /* neon_vdup_lanev4hf_internal */
    case 2035:  /* neon_vdup_lanev8hf_internal */
    case 2034:  /* neon_vdup_lanev4sf_internal */
    case 2033:  /* neon_vdup_lanev2sf_internal */
    case 2032:  /* neon_vdup_lanev4si_internal */
    case 2031:  /* neon_vdup_lanev2si_internal */
    case 2030:  /* neon_vdup_lanev8hi_internal */
    case 2029:  /* neon_vdup_lanev4hi_internal */
    case 2028:  /* neon_vdup_lanev16qi_internal */
    case 2027:  /* neon_vdup_lanev8qi_internal */
    case 2013:  /* neon_vget_lanev4sf_zext_internal */
    case 2012:  /* neon_vget_lanev4si_zext_internal */
    case 2011:  /* neon_vget_lanev8hf_zext_internal */
    case 2010:  /* neon_vget_lanev8hi_zext_internal */
    case 2009:  /* neon_vget_lanev16qi_zext_internal */
    case 2008:  /* neon_vget_lanev4sf_sext_internal */
    case 2007:  /* neon_vget_lanev4si_sext_internal */
    case 2006:  /* neon_vget_lanev8hf_sext_internal */
    case 2005:  /* neon_vget_lanev8hi_sext_internal */
    case 2004:  /* neon_vget_lanev16qi_sext_internal */
    case 2003:  /* neon_vget_lanev2sf_zext_internal */
    case 2002:  /* neon_vget_lanev2si_zext_internal */
    case 2001:  /* neon_vget_lanev4hi_zext_internal */
    case 2000:  /* neon_vget_lanev8qi_zext_internal */
    case 1999:  /* neon_vget_lanev2sf_sext_internal */
    case 1998:  /* neon_vget_lanev2si_sext_internal */
    case 1997:  /* neon_vget_lanev4hi_sext_internal */
    case 1996:  /* neon_vget_lanev8qi_sext_internal */
    case 573:  /* iwmmxt_textrmsh */
    case 572:  /* iwmmxt_textrmuh */
    case 571:  /* iwmmxt_textrmsb */
    case 570:  /* iwmmxt_textrmub */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      break;

    case 569:  /* iwmmxt_tinsrw */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 568:  /* iwmmxt_tinsrh */
    case 567:  /* iwmmxt_tinsrb */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 690:  /* iwmmxt_wmulwumr */
    case 689:  /* iwmmxt_wmulwsmr */
    case 688:  /* iwmmxt_wmulumr */
    case 687:  /* iwmmxt_wmulsmr */
    case 564:  /* iwmmxt_uavgrndv4hi3 */
    case 563:  /* iwmmxt_uavgrndv8qi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1), 0));
      break;

    case 686:  /* iwmmxt_wmulwum */
    case 685:  /* iwmmxt_wmulwsm */
    case 674:  /* iwmmxt_wabsdiffw */
    case 673:  /* iwmmxt_wabsdiffh */
    case 672:  /* iwmmxt_wabsdiffb */
    case 566:  /* iwmmxt_uavgv4hi3 */
    case 565:  /* iwmmxt_uavgv8qi3 */
    case 554:  /* umulv4hi3_highpart */
    case 553:  /* smulv4hi3_highpart */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0));
      break;

    case 6809:  /* *p *thumb2_movhi_insn */
    case 6808:  /* *p *thumb2_movsi_insn */
    case 6737:  /* *p *movdf_vfp */
    case 6736:  /* *p *thumb2_movsf_vfp */
    case 6735:  /* *p *movsf_vfp */
    case 6734:  /* *p *movbf_vfp_bf16 */
    case 6733:  /* *p *movhf_vfp_hf16 */
    case 6732:  /* *p *movdi_vfp */
    case 6731:  /* *p *thumb2_movsi_vfp */
    case 6730:  /* *p *arm_movsi_vfp */
    case 6729:  /* *p *thumb2_movhi_fp16 */
    case 6728:  /* *p *arm_movhi_fp16 */
    case 6727:  /* *p *thumb2_movhi_vfp */
    case 6726:  /* *p *arm_movhi_vfp */
    case 6515:  /* *p movv8qi_internal */
    case 6514:  /* *p movv4hi_internal */
    case 6513:  /* *p movv2si_internal */
    case 6419:  /* *p *arm_movsf_soft_insn */
    case 6418:  /* *p *arm32_movbf */
    case 6417:  /* *p *arm32_movhf */
    case 6416:  /* *p *arm_movqi_insn */
    case 6415:  /* *p *movhi_bytes */
    case 6414:  /* *p *movhi_insn_arch4 */
    case 6411:  /* *p *arm_movsi_insn */
    case 521:  /* *cond_iwmmxt_movsi_insn */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (pat, 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 518:  /* iwmmxt_nanddi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 496:  /* arm_mcrr2 */
    case 495:  /* arm_mcrr */
      ro[0] = *(ro_loc[0] = &XVECEXP (XVECEXP (pat, 0, 0), 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XVECEXP (pat, 0, 0), 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (pat, 0, 0), 0, 2));
      ro[3] = *(ro_loc[3] = &XVECEXP (XVECEXP (pat, 0, 0), 0, 3));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 2;
      break;

    case 492:  /* arm_mcr2 */
    case 491:  /* arm_mcr */
      ro[0] = *(ro_loc[0] = &XVECEXP (XVECEXP (pat, 0, 0), 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XVECEXP (pat, 0, 0), 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (pat, 0, 0), 0, 2));
      ro[3] = *(ro_loc[3] = &XVECEXP (XVECEXP (pat, 0, 0), 0, 3));
      ro[4] = *(ro_loc[4] = &XVECEXP (XVECEXP (pat, 0, 0), 0, 4));
      ro[5] = *(ro_loc[5] = &XVECEXP (XVECEXP (pat, 0, 0), 0, 5));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 2;
      break;

    case 490:  /* *stc */
    case 489:  /* *stc */
    case 488:  /* *stc */
    case 487:  /* *stc */
    case 486:  /* *ldc */
    case 485:  /* *ldc */
    case 484:  /* *ldc */
    case 483:  /* *ldc */
      ro[0] = *(ro_loc[0] = &XVECEXP (pat, 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (pat, 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (pat, 0, 2));
      break;

    case 482:  /* arm_cdp2 */
    case 481:  /* arm_cdp */
      ro[0] = *(ro_loc[0] = &XVECEXP (pat, 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (pat, 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (pat, 0, 2));
      ro[3] = *(ro_loc[3] = &XVECEXP (pat, 0, 3));
      ro[4] = *(ro_loc[4] = &XVECEXP (pat, 0, 4));
      ro[5] = *(ro_loc[5] = &XVECEXP (pat, 0, 5));
      break;

    case 480:  /* *load_multiple */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 0), 0));
      break;

    case 475:  /* *stm2_da_update */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 2), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 0), 0);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0), 0);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0);
      recog_data.dup_num[2] = 3;
      break;

    case 474:  /* *stm2_da */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0);
      recog_data.dup_num[0] = 3;
      break;

    case 473:  /* *ldm2_da_update */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0);
      recog_data.dup_num[2] = 3;
      break;

    case 472:  /* *ldm2_da */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 3;
      break;

    case 479:  /* *stm2_db_update */
    case 471:  /* *stm2_ib_update */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 2), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 0), 0), 0);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0), 0);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0);
      recog_data.dup_num[2] = 3;
      break;

    case 478:  /* *stm2_db */
    case 470:  /* *stm2_ib */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0), 0);
      recog_data.dup_num[0] = 3;
      break;

    case 477:  /* *ldm2_db_update */
    case 469:  /* *ldm2_ib_update */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0), 0);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0);
      recog_data.dup_num[2] = 3;
      break;

    case 476:  /* *ldm2_db */
    case 468:  /* *ldm2_ib */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 3;
      break;

    case 467:  /* *thumb_stm2_ia_update */
    case 466:  /* *stm2_ia_update */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 2), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 0), 0), 0);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0);
      recog_data.dup_num[2] = 3;
      break;

    case 465:  /* *stm2_ */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0), 0);
      recog_data.dup_num[0] = 3;
      break;

    case 464:  /* *thumb_ldm2_ia_update */
    case 463:  /* *ldm2_ia_update */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0), 0);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0);
      recog_data.dup_num[2] = 3;
      break;

    case 462:  /* *thumb_ldm2_ia */
    case 461:  /* *ldm2_ */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 3;
      break;

    case 456:  /* *stm3_da_update */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 2), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 3), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 3), 0), 0);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 0), 0), 0);
      recog_data.dup_num[1] = 4;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0), 0);
      recog_data.dup_num[2] = 4;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0);
      recog_data.dup_num[3] = 4;
      break;

    case 455:  /* *stm3_da */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 0), 0);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0), 0);
      recog_data.dup_num[1] = 4;
      break;

    case 454:  /* *ldm3_da_update */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 3), 1), 0);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0), 0);
      recog_data.dup_num[1] = 4;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[2] = 4;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0);
      recog_data.dup_num[3] = 4;
      break;

    case 453:  /* *ldm3_da */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[1] = 4;
      break;

    case 460:  /* *stm3_db_update */
    case 452:  /* *stm3_ib_update */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 2), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 3), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 3), 0), 0), 0);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 0), 0), 0);
      recog_data.dup_num[1] = 4;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0), 0);
      recog_data.dup_num[2] = 4;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0);
      recog_data.dup_num[3] = 4;
      break;

    case 459:  /* *stm3_db */
    case 451:  /* *stm3_ib */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 0), 0), 0);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0), 0);
      recog_data.dup_num[1] = 4;
      break;

    case 458:  /* *ldm3_db_update */
    case 450:  /* *ldm3_ib_update */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 3), 1), 0), 0);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0), 0);
      recog_data.dup_num[1] = 4;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[2] = 4;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0);
      recog_data.dup_num[3] = 4;
      break;

    case 457:  /* *ldm3_db */
    case 449:  /* *ldm3_ib */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0), 0);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[1] = 4;
      break;

    case 448:  /* *thumb_stm3_ia_update */
    case 447:  /* *stm3_ia_update */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 2), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 3), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 3), 0), 0), 0);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 0), 0), 0);
      recog_data.dup_num[1] = 4;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0);
      recog_data.dup_num[2] = 4;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0);
      recog_data.dup_num[3] = 4;
      break;

    case 446:  /* *stm3_ */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 0), 0), 0);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0), 0);
      recog_data.dup_num[1] = 4;
      break;

    case 445:  /* *thumb_ldm3_ia_update */
    case 444:  /* *ldm3_ia_update */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 3), 1), 0), 0);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0), 0);
      recog_data.dup_num[1] = 4;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[2] = 4;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0);
      recog_data.dup_num[3] = 4;
      break;

    case 443:  /* *thumb_ldm3_ia */
    case 442:  /* *ldm3_ */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0), 0);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[1] = 4;
      break;

    case 437:  /* *stm4_da_update */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 2), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 3), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 4), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 4), 0), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 3), 0), 0), 0);
      recog_data.dup_num[1] = 5;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 0), 0), 0);
      recog_data.dup_num[2] = 5;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0), 0);
      recog_data.dup_num[3] = 5;
      recog_data.dup_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0);
      recog_data.dup_num[4] = 5;
      break;

    case 436:  /* *stm4_da */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 3), 0), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 0), 0), 0);
      recog_data.dup_num[1] = 5;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0), 0);
      recog_data.dup_num[2] = 5;
      break;

    case 435:  /* *ldm4_da_update */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 4), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 4), 1), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 3), 1), 0), 0);
      recog_data.dup_num[1] = 5;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0), 0);
      recog_data.dup_num[2] = 5;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[3] = 5;
      recog_data.dup_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0);
      recog_data.dup_num[4] = 5;
      break;

    case 434:  /* *ldm4_da */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 3), 1), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0), 0);
      recog_data.dup_num[1] = 5;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[2] = 5;
      break;

    case 441:  /* *stm4_db_update */
    case 433:  /* *stm4_ib_update */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 2), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 3), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 4), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 4), 0), 0), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 3), 0), 0), 0);
      recog_data.dup_num[1] = 5;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 0), 0), 0);
      recog_data.dup_num[2] = 5;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0), 0);
      recog_data.dup_num[3] = 5;
      recog_data.dup_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0);
      recog_data.dup_num[4] = 5;
      break;

    case 440:  /* *stm4_db */
    case 432:  /* *stm4_ib */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 3), 0), 0), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 0), 0), 0);
      recog_data.dup_num[1] = 5;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0), 0);
      recog_data.dup_num[2] = 5;
      break;

    case 439:  /* *ldm4_db_update */
    case 431:  /* *ldm4_ib_update */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 4), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 4), 1), 0), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 3), 1), 0), 0);
      recog_data.dup_num[1] = 5;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0), 0);
      recog_data.dup_num[2] = 5;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[3] = 5;
      recog_data.dup_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0);
      recog_data.dup_num[4] = 5;
      break;

    case 438:  /* *ldm4_db */
    case 430:  /* *ldm4_ib */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 3), 1), 0), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0), 0);
      recog_data.dup_num[1] = 5;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[2] = 5;
      break;

    case 429:  /* *thumb_stm4_ia_update */
    case 428:  /* *stm4_ia_update */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 2), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 3), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 4), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 4), 0), 0), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 3), 0), 0), 0);
      recog_data.dup_num[1] = 5;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 0), 0), 0);
      recog_data.dup_num[2] = 5;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0);
      recog_data.dup_num[3] = 5;
      recog_data.dup_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0);
      recog_data.dup_num[4] = 5;
      break;

    case 427:  /* *stm4_ */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 3), 0), 0), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 0), 0), 0);
      recog_data.dup_num[1] = 5;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0), 0);
      recog_data.dup_num[2] = 5;
      break;

    case 426:  /* *thumb_ldm4_ia_update */
    case 425:  /* *ldm4_ia_update */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 4), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 4), 1), 0), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 3), 1), 0), 0);
      recog_data.dup_num[1] = 5;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0), 0);
      recog_data.dup_num[2] = 5;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[3] = 5;
      recog_data.dup_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0);
      recog_data.dup_num[4] = 5;
      break;

    case 424:  /* *thumb_ldm4_ia */
    case 423:  /* *ldm4_ */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 3), 1), 0), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0), 0);
      recog_data.dup_num[1] = 5;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[2] = 5;
      break;

    case 422:  /* *arm_strd */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 421:  /* *arm_ldrd */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 1));
      break;

    case 414:  /* *thumb2_strd_base_neg */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 413:  /* *thumb2_strd_base */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 412:  /* *thumb2_strd */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 411:  /* *thumb2_ldrd_base_neg */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 410:  /* *thumb2_ldrd_base */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 409:  /* *thumb2_ldrd */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 408:  /* arm_rev16si2_alt */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 407:  /* arm_rev16si2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 820:  /* fixuns_truncdfsi2 */
    case 819:  /* fixuns_truncsfsi2 */
    case 818:  /* *truncsidf2_vfp */
    case 817:  /* *truncsisf2_vfp */
    case 620:  /* iwmmxt_wunpckelsw */
    case 619:  /* iwmmxt_wunpckelsh */
    case 618:  /* iwmmxt_wunpckelsb */
    case 617:  /* iwmmxt_wunpckeluw */
    case 616:  /* iwmmxt_wunpckeluh */
    case 615:  /* iwmmxt_wunpckelub */
    case 614:  /* iwmmxt_wunpckehsw */
    case 613:  /* iwmmxt_wunpckehsh */
    case 612:  /* iwmmxt_wunpckehsb */
    case 611:  /* iwmmxt_wunpckehuw */
    case 610:  /* iwmmxt_wunpckehuh */
    case 609:  /* iwmmxt_wunpckehub */
    case 405:  /* *arm_revsh */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 403:  /* *arm_movtas_ze */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      break;

    case 402:  /* tlscall */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      break;

    case 1025:  /* thumb2_eh_return */
    case 979:  /* thumb_eh_return */
    case 398:  /* arm_eh_return */
      ro[0] = *(ro_loc[0] = &XVECEXP (XVECEXP (pat, 0, 0), 0, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 396:  /* prefetch */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      ro[2] = *(ro_loc[2] = &XEXP (pat, 2));
      break;

    case 899:  /* set_fpscr */
    case 397:  /* force_register_use */
    case 392:  /* consttable_16 */
    case 391:  /* consttable_8 */
    case 390:  /* consttable_4 */
    case 389:  /* consttable_2 */
    case 388:  /* consttable_1 */
      ro[0] = *(ro_loc[0] = &XVECEXP (pat, 0, 0));
      break;

    case 383:  /* *ldr_with_return */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0));
      break;

    case 382:  /* *pop_multiple_with_return */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 381:  /* *pop_multiple_with_writeback_and_return */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[1] = 1;
      break;

    case 384:  /* *vfp_pop_multiple_with_writeback */
    case 380:  /* *load_multiple_with_writeback */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0);
      recog_data.dup_num[1] = 1;
      break;

    case 379:  /* stack_tie */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 864:  /* *push_multi_vfp */
    case 378:  /* *push_multi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &PATTERN (insn));
      break;

    case 377:  /* *not_signextract_onebit */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 2));
      break;

    case 376:  /* *sign_extract_onebit */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      break;

    case 374:  /* *arith_adjacentmem */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 369:  /* *if_arith_not */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 368:  /* *ifcompare_arith_not */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 367:  /* *if_not_arith */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 2), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 366:  /* *ifcompare_not_arith */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      break;

    case 364:  /* *ifcompare_shift_shift */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[8] = *(ro_loc[8] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[9] = *(ro_loc[9] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      break;

    case 363:  /* *if_move_shift */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 2), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 361:  /* *if_shift_move */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 2));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 360:  /* *ifcompare_shift_move */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 371:  /* *if_neg_move */
    case 359:  /* *if_not_move */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 2));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 370:  /* *ifcompare_neg_move */
    case 358:  /* *ifcompare_not_move */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      break;

    case 375:  /* *cond_move_not */
    case 373:  /* *if_move_neg */
    case 357:  /* *if_move_not */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 372:  /* *ifcompare_move_neg */
    case 356:  /* *ifcompare_move_not */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      break;

    case 355:  /* *if_move_arith */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 2), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 362:  /* *ifcompare_move_shift */
    case 354:  /* *ifcompare_move_arith */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      break;

    case 353:  /* *if_arith_move */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 2));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 1));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 352:  /* *ifcompare_arith_move */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 365:  /* *if_shift_shift */
    case 351:  /* *if_arith_arith */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 2), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 1), 1));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (pat, 1), 2));
      ro[8] = *(ro_loc[8] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 350:  /* *ifcompare_arith_arith */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      ro[8] = *(ro_loc[8] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[9] = *(ro_loc[9] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      break;

    case 349:  /* *if_move_plus */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 2), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 348:  /* *ifcompare_move_plus */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      break;

    case 347:  /* *if_plus_move */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 2));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 346:  /* *ifcompare_plus_move */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      break;

    case 1017:  /* *thumb2_movcond */
    case 345:  /* movcond */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      break;

    case 344:  /* movcond_addsi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      break;

    case 1013:  /* *thumb2_negscc */
    case 343:  /* *negscc */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      break;

    case 341:  /* *and_scc_scc_cmp */
    case 339:  /* *ior_scc_scc_cmp */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 1));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[7] = *(ro_loc[7] = &XEXP (XVECEXP (pat, 0, 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[3] = 6;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1), 1);
      recog_data.dup_num[4] = 5;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1), 0);
      recog_data.dup_num[5] = 4;
      break;

    case 342:  /* *and_scc_scc_nodom */
    case 340:  /* *and_scc_scc */
    case 338:  /* *ior_scc_scc */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 337:  /* *cmp_ior */
    case 336:  /* *cmp_and */
    case 335:  /* *cmp_ite1 */
    case 334:  /* *cmp_ite0 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[6] = *(ro_loc[6] = &XEXP (pat, 0));
      break;

    case 1011:  /* *thumb2_cond_arith_strict_it */
    case 1010:  /* *thumb2_cond_arith */
    case 332:  /* *cond_arith */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 0), 1));
      break;

    case 1009:  /* *thumb2_cond_move */
    case 331:  /* *cond_move */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 2));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      break;

    case 330:  /* *compare_scc */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 1007:  /* *thumb2_ior_scc */
    case 1006:  /* *thumb2_and_scc */
    case 329:  /* *ior_scc */
    case 328:  /* *and_scc */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 327:  /* *sub_shiftsi_compare0_scratch */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 1));
      break;

    case 326:  /* *sub_shiftsi_compare0 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1), 1);
      recog_data.dup_num[2] = 4;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1), 0);
      recog_data.dup_num[3] = 3;
      break;

    case 325:  /* *sub_shiftsi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      break;

    case 324:  /* *arith_shiftsi_compare0_scratch */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      break;

    case 323:  /* *arith_shiftsi_compare0 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 1);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[2] = 3;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[3] = 5;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[4] = 4;
      break;

    case 322:  /* *and_shiftsi */
    case 321:  /* *eor_shiftsi */
    case 320:  /* *orr_shiftsi */
    case 319:  /* *rsb_shiftsi */
    case 318:  /* *add_shiftsi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 1162:  /* mulv4hf3addv4hf_neon */
    case 1161:  /* mulv8hf3addv8hf_neon */
    case 1160:  /* mulv4sf3addv4sf_neon */
    case 1159:  /* mulv2sf3addv2sf_neon */
    case 1158:  /* mulv4si3addv4si_neon */
    case 1157:  /* mulv2si3addv2si_neon */
    case 1156:  /* mulv8hi3addv8hi_neon */
    case 1155:  /* mulv4hi3addv4hi_neon */
    case 1154:  /* mulv16qi3addv16qi_neon */
    case 1153:  /* mulv8qi3addv8qi_neon */
    case 792:  /* *muldf3subdf_vfp */
    case 791:  /* *mulsf3subsf_vfp */
    case 790:  /* *mulhf3subhf_vfp */
    case 789:  /* *muldf3adddf_vfp */
    case 788:  /* *mulsf3addsf_vfp */
    case 787:  /* *mulsf3addhf_vfp */
    case 317:  /* *and_multsi */
    case 316:  /* *eor_multsi */
    case 315:  /* *orr_multsi */
    case 314:  /* *rsb_multsi */
    case 313:  /* *add_multsi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 1005:  /* *thumb2_indirect_jump */
    case 974:  /* *thumb1_indirect_jump */
    case 310:  /* *load_indirect_jump */
    case 309:  /* *arm_indirect_jump */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      break;

    case 308:  /* *arm_casesi_internal */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 0), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 0);
      recog_data.dup_num[1] = 0;
      break;

    case 307:  /* arm_stack_protect_test_insn */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 2), 0);
      recog_data.dup_num[0] = 2;
      break;

    case 306:  /* *stack_protect_combined_test_insn */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 305:  /* *stack_protect_set_insn */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 304:  /* *stack_protect_combined_set_insn */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 298:  /* *cond_simple_return_inverted */
    case 297:  /* *cond_return_inverted */
    case 296:  /* *cond_simple_return */
    case 295:  /* *cond_return */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 1044:  /* *clear_apsr */
    case 1024:  /* *thumb2_cmse_entry_return */
    case 1023:  /* *thumb2_return */
    case 976:  /* *epilogue_insns */
    case 975:  /* prologue_thumb1_interwork */
    case 829:  /* *movcc_vfp */
    case 731:  /* iwmmxt_torvscv8qi3 */
    case 730:  /* iwmmxt_torvscv4hi3 */
    case 729:  /* iwmmxt_torvscv2si3 */
    case 728:  /* iwmmxt_torcv8qi3 */
    case 727:  /* iwmmxt_torcv4hi3 */
    case 726:  /* iwmmxt_torcv2si3 */
    case 725:  /* iwmmxt_tandcv8qi3 */
    case 724:  /* iwmmxt_tandcv4hi3 */
    case 723:  /* iwmmxt_tandcv2si3 */
    case 499:  /* *speculation_barrier_insn */
    case 401:  /* load_tp_soft */
    case 400:  /* load_tp_soft_fdpic */
    case 387:  /* consttable_end */
    case 386:  /* align_8 */
    case 385:  /* align_4 */
    case 312:  /* trap */
    case 311:  /* nop */
    case 301:  /* blockage */
    case 299:  /* *arm_simple_return */
    case 294:  /* *arm_return */
      break;

    case 293:  /* *sibcall_value_insn */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 292:  /* *sibcall_insn */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 1002:  /* *call_value_reg_thumb2 */
    case 972:  /* *call_value_insn */
    case 970:  /* *call_value_reg_thumb1 */
    case 968:  /* *call_value_reg_thumb1_v5 */
    case 291:  /* *call_value_symbol */
    case 289:  /* *call_value_reg_arm */
    case 288:  /* *call_value_reg_armv5 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 999:  /* *call_reg_thumb2 */
    case 971:  /* *call_insn */
    case 967:  /* *call_reg_thumb1 */
    case 965:  /* *call_reg_thumb1_v5 */
    case 290:  /* *call_symbol */
    case 287:  /* *call_reg_arm */
    case 286:  /* *call_reg_armv5 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 285:  /* restore_pic_register_after_call */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 0);
      recog_data.dup_num[0] = 0;
      break;

    case 998:  /* *thumb2_movsfcc_soft_insn */
    case 997:  /* *thumb2_movsicc_insn */
    case 755:  /* *thumb2_movdfcc_vfp */
    case 754:  /* *movdfcc_vfp */
    case 753:  /* *thumb2_movsfcc_vfp */
    case 752:  /* *movsfcc_vfp */
    case 283:  /* *movsfcc_soft_insn */
    case 282:  /* *movsicc_insn */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 2));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 281:  /* *cmovhf */
    case 280:  /* *cmovdf */
    case 279:  /* *cmovsf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 996:  /* *thumb2_mov_notscc_strict_it */
    case 995:  /* *thumb2_mov_notscc */
    case 994:  /* *thumb2_mov_negscc_strict_it */
    case 993:  /* *thumb2_mov_negscc */
    case 278:  /* *mov_notscc */
    case 277:  /* *mov_negscc */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 992:  /* *thumb2_mov_scc */
    case 275:  /* *mov_scc */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 274:  /* *arm_cond_branch_reversed */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 273:  /* arm_cond_branch */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 272:  /* *deleted_compare */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      recog_data.dup_loc[0] = &XEXP (pat, 1);
      recog_data.dup_num[0] = 0;
      break;

    case 271:  /* *arm_cmpsi_negshiftsi_si */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 1));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      break;

    case 270:  /* *cmpsi_shiftsi_swp */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 1));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 269:  /* *cmpsi_shiftsi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 842:  /* *cmpdf_trap_vfp */
    case 841:  /* *cmpdf_vfp */
    case 840:  /* *cmpsf_trap_vfp */
    case 839:  /* *cmpsf_vfp */
    case 838:  /* *cmpdf_trap_split_vfp */
    case 837:  /* *cmpdf_split_vfp */
    case 836:  /* *cmpsf_trap_split_vfp */
    case 835:  /* *cmpsf_split_vfp */
    case 268:  /* *arm_cmpsi_insn */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 260:  /* *movsi_compare0 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 259:  /* tls_load_dot_plus_eight */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      break;

    case 258:  /* pic_add_dot_plus_eight */
    case 257:  /* pic_add_dot_plus_four */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 2));
      break;

    case 3011:  /* *mve_movv2df */
    case 3010:  /* *mve_movv4sf */
    case 3009:  /* *mve_movv8hf */
    case 3008:  /* *mve_movti */
    case 3007:  /* *mve_movv2di */
    case 3006:  /* *mve_movv4si */
    case 3005:  /* *mve_movv8hi */
    case 3004:  /* *mve_movv16qi */
    case 1070:  /* *neon_movxi */
    case 1069:  /* *neon_movci */
    case 1068:  /* *neon_movoi */
    case 1067:  /* *neon_movei */
    case 1066:  /* *neon_movti */
    case 1065:  /* *neon_movv2di */
    case 1064:  /* *neon_movv4sf */
    case 1063:  /* *neon_movv4si */
    case 1062:  /* *neon_movv8bf */
    case 1061:  /* *neon_movv8hf */
    case 1060:  /* *neon_movv8hi */
    case 1059:  /* *neon_movv16qi */
    case 1058:  /* *neon_movdi */
    case 1057:  /* *neon_movv2sf */
    case 1056:  /* *neon_movv2si */
    case 1055:  /* *neon_movv4bf */
    case 1054:  /* *neon_movv4hf */
    case 1053:  /* *neon_movv4hi */
    case 1052:  /* *neon_movv8qi */
    case 990:  /* *thumb2_movhi_insn */
    case 988:  /* *thumb2_movsi_insn */
    case 945:  /* *thumb_movdf_insn */
    case 944:  /* *thumb1_movsf_insn */
    case 943:  /* *thumb1_movhf */
    case 942:  /* *thumb1_movqi_insn */
    case 941:  /* *thumb1_movhi_insn */
    case 940:  /* *thumb1_movsi_insn */
    case 939:  /* *thumb1_movdi_insn */
    case 751:  /* *thumb2_movdf_vfp */
    case 750:  /* *movdf_vfp */
    case 749:  /* *thumb2_movsf_vfp */
    case 748:  /* *movsf_vfp */
    case 747:  /* *movbf_vfp */
    case 746:  /* *movhf_vfp */
    case 745:  /* *movbf_vfp_neon */
    case 744:  /* *movhf_vfp_neon */
    case 743:  /* *movbf_vfp_bf16 */
    case 742:  /* *movhf_vfp_hf16 */
    case 741:  /* *movdi_vfp */
    case 740:  /* *thumb2_movsi_vfp */
    case 739:  /* *arm_movsi_vfp */
    case 738:  /* *thumb2_movhi_fp16 */
    case 737:  /* *arm_movhi_fp16 */
    case 736:  /* *thumb2_movhi_vfp */
    case 735:  /* *arm_movhi_vfp */
    case 524:  /* movv8qi_internal */
    case 523:  /* movv4hi_internal */
    case 522:  /* movv2si_internal */
    case 520:  /* *iwmmxt_movsi_insn */
    case 519:  /* *iwmmxt_arm_movdi */
    case 267:  /* *movdf_soft_insn */
    case 266:  /* *arm_movsf_soft_insn */
    case 265:  /* *arm32_movbf */
    case 264:  /* *arm32_movhf */
    case 263:  /* *arm_movqi_insn */
    case 262:  /* *movhi_bytes */
    case 261:  /* *movhi_insn_arch4 */
    case 253:  /* *arm_movsi_insn */
    case 251:  /* *arm_movdi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      break;

    case 4869:  /* mve_vsbcq_sv4si */
    case 4868:  /* mve_vsbcq_uv4si */
    case 4865:  /* mve_vsbciq_sv4si */
    case 4864:  /* mve_vsbciq_uv4si */
    case 4861:  /* mve_vadcq_sv4si */
    case 4860:  /* mve_vadcq_uv4si */
    case 4857:  /* mve_vadciq_sv4si */
    case 4856:  /* mve_vadciq_uv4si */
    case 249:  /* arm_usat16_setq_insn */
    case 247:  /* arm_ssat16_setq_insn */
    case 245:  /* arm_smuadx_setq_insn */
    case 243:  /* arm_smuad_setq_insn */
    case 233:  /* arm_usub16 */
    case 232:  /* arm_usax */
    case 231:  /* arm_uasx */
    case 230:  /* arm_uadd16 */
    case 229:  /* arm_ssub16 */
    case 228:  /* arm_ssax */
    case 227:  /* arm_sasx */
    case 226:  /* arm_sadd16 */
    case 225:  /* arm_usub8 */
    case 224:  /* arm_uadd8 */
    case 223:  /* arm_ssub8 */
    case 222:  /* arm_sadd8 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      break;

    case 964:  /* *thumb_jump */
    case 284:  /* *arm_jump */
    case 178:  /* *compareqi_eq0 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 171:  /* *notsi_compare0_scratch */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      break;

    case 986:  /* *thumb2_neg_abssi2 */
    case 168:  /* *arm_neg_abssi2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      break;

    case 1041:  /* *thumb2_negsi2_short */
    case 1040:  /* *thumb2_one_cmplsi2_short */
    case 985:  /* *thumb2_abssi2 */
    case 929:  /* *thumb1_negdi2 */
    case 167:  /* *arm_abssi2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      break;

    case 3536:  /* mve_vbicq_fv4sf */
    case 3535:  /* mve_vbicq_fv8hf */
    case 1379:  /* widen_usumv2si3 */
    case 1378:  /* widen_usumv4hi3 */
    case 1377:  /* widen_usumv8qi3 */
    case 1370:  /* widen_ssumv2si3 */
    case 1369:  /* widen_ssumv4hi3 */
    case 1368:  /* widen_ssumv8qi3 */
    case 922:  /* thumb1_bicsi3 */
    case 846:  /* *combine_vcvt_f64_s32 */
    case 845:  /* *combine_vcvt_f64_u32 */
    case 844:  /* *combine_vcvt_f32_s32 */
    case 843:  /* *combine_vcvt_f32_u32 */
    case 785:  /* *muldf3negdf_vfp */
    case 783:  /* *mulsf3negsf_vfp */
    case 781:  /* *mulsf3neghf_vfp */
    case 185:  /* *arm_extendqisi2addsi */
    case 181:  /* *arm_extendhisi2addsi */
    case 177:  /* *arm_zero_extendqisi2addsi */
    case 174:  /* *arm_zero_extendhisi2addsi */
    case 166:  /* negsi2_carryin */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 170:  /* *notsi_compare0 */
    case 165:  /* negsi2_0compare */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 1176:  /* fmav4hf4 */
    case 1175:  /* fmav8hf4 */
    case 1174:  /* fmav4sf4_intrinsic */
    case 1173:  /* fmav2sf4_intrinsic */
    case 1172:  /* fmav4sf4 */
    case 1171:  /* fmav2sf4 */
    case 801:  /* fmadf4 */
    case 800:  /* fmasf4 */
    case 799:  /* fmahf4 */
    case 161:  /* extzv_t2 */
    case 160:  /* *extv_reg */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 2933:  /* arm_load_acquire_exclusivehi */
    case 2932:  /* arm_load_acquire_exclusiveqi */
    case 2931:  /* arm_load_exclusivehi */
    case 2930:  /* arm_load_exclusiveqi */
    case 1206:  /* neon_vcvtauv4sfv4si */
    case 1205:  /* neon_vcvtmuv4sfv4si */
    case 1204:  /* neon_vcvtpuv4sfv4si */
    case 1203:  /* neon_vcvtav4sfv4si */
    case 1202:  /* neon_vcvtmv4sfv4si */
    case 1201:  /* neon_vcvtpv4sfv4si */
    case 1200:  /* neon_vcvtauv2sfv2si */
    case 1199:  /* neon_vcvtmuv2sfv2si */
    case 1198:  /* neon_vcvtpuv2sfv2si */
    case 1197:  /* neon_vcvtav2sfv2si */
    case 1196:  /* neon_vcvtmv2sfv2si */
    case 1195:  /* neon_vcvtpv2sfv2si */
    case 888:  /* lroundudfsi2 */
    case 887:  /* lfloorudfsi2 */
    case 886:  /* lceiludfsi2 */
    case 885:  /* lrounddfsi2 */
    case 884:  /* lfloordfsi2 */
    case 883:  /* lceildfsi2 */
    case 882:  /* lroundusfsi2 */
    case 881:  /* lfloorusfsi2 */
    case 880:  /* lceilusfsi2 */
    case 879:  /* lroundsfsi2 */
    case 878:  /* lfloorsfsi2 */
    case 877:  /* lceilsfsi2 */
    case 156:  /* unaligned_loadhiu */
    case 155:  /* unaligned_loadhis */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      break;

    case 4944:  /* *movmisalignv4sf_mve_load */
    case 4943:  /* *movmisalignv8hf_mve_load */
    case 4942:  /* *movmisalignv4si_mve_load */
    case 4941:  /* *movmisalignv8hi_mve_load */
    case 4940:  /* *movmisalignv16qi_mve_load */
    case 4939:  /* *movmisalignv4sf_mve_store */
    case 4938:  /* *movmisalignv8hf_mve_store */
    case 4937:  /* *movmisalignv4si_mve_store */
    case 4936:  /* *movmisalignv8hi_mve_store */
    case 4935:  /* *movmisalignv16qi_mve_store */
    case 4884:  /* mve_vld4qv4sf */
    case 4883:  /* mve_vld4qv8hf */
    case 4882:  /* mve_vld4qv4si */
    case 4881:  /* mve_vld4qv8hi */
    case 4880:  /* mve_vld4qv16qi */
    case 4879:  /* mve_vld2qv4sf */
    case 4878:  /* mve_vld2qv8hf */
    case 4877:  /* mve_vld2qv4si */
    case 4876:  /* mve_vld2qv8hi */
    case 4875:  /* mve_vld2qv16qi */
    case 4874:  /* mve_vst2qv4sf */
    case 4873:  /* mve_vst2qv8hf */
    case 4872:  /* mve_vst2qv4si */
    case 4871:  /* mve_vst2qv8hi */
    case 4870:  /* mve_vst2qv16qi */
    case 4772:  /* mve_vstrwq_uv4si */
    case 4771:  /* mve_vstrwq_sv4si */
    case 4767:  /* mve_vstrwq_fv4sf */
    case 4766:  /* mve_vstrhq_uv4si */
    case 4765:  /* mve_vstrhq_sv4si */
    case 4764:  /* mve_vstrhq_uv8hi */
    case 4763:  /* mve_vstrhq_sv8hi */
    case 4741:  /* mve_vstrhq_fv8hf */
    case 4707:  /* mve_vldrwq_uv4si */
    case 4706:  /* mve_vldrwq_sv4si */
    case 4705:  /* mve_vldrwq_fv4sf */
    case 4699:  /* mve_vldrhq_uv4si */
    case 4698:  /* mve_vldrhq_sv4si */
    case 4697:  /* mve_vldrhq_uv8hi */
    case 4696:  /* mve_vldrhq_sv8hi */
    case 4679:  /* mve_vldrhq_fv8hf */
    case 4648:  /* mve_vldrbq_uv4si */
    case 4647:  /* mve_vldrbq_sv4si */
    case 4646:  /* mve_vldrbq_uv8hi */
    case 4645:  /* mve_vldrbq_sv8hi */
    case 4644:  /* mve_vldrbq_uv16qi */
    case 4643:  /* mve_vldrbq_sv16qi */
    case 4628:  /* mve_vstrbq_uv4si */
    case 4627:  /* mve_vstrbq_sv4si */
    case 4626:  /* mve_vstrbq_uv8hi */
    case 4625:  /* mve_vstrbq_sv8hi */
    case 4624:  /* mve_vstrbq_uv16qi */
    case 4623:  /* mve_vstrbq_sv16qi */
    case 3139:  /* mve_vpnothi */
    case 3138:  /* mve_vctp64qhi */
    case 3137:  /* mve_vctp32qhi */
    case 3136:  /* mve_vctp16qhi */
    case 3135:  /* mve_vctp8qhi */
    case 3134:  /* mve_vaddlvq_sv4si */
    case 3133:  /* mve_vaddlvq_uv4si */
    case 3132:  /* mve_vrev16q_sv16qi */
    case 3131:  /* mve_vrev16q_uv16qi */
    case 3130:  /* mve_vmvnq_n_sv4si */
    case 3129:  /* mve_vmvnq_n_uv4si */
    case 3128:  /* mve_vmvnq_n_sv8hi */
    case 3127:  /* mve_vmvnq_n_uv8hi */
    case 3126:  /* mve_vcvtaq_sv4si */
    case 3125:  /* mve_vcvtaq_uv4si */
    case 3124:  /* mve_vcvtaq_sv8hi */
    case 3123:  /* mve_vcvtaq_uv8hi */
    case 3122:  /* mve_vcvtmq_uv4si */
    case 3121:  /* mve_vcvtmq_sv4si */
    case 3120:  /* mve_vcvtmq_uv8hi */
    case 3119:  /* mve_vcvtmq_sv8hi */
    case 3118:  /* mve_vcvtnq_uv4si */
    case 3117:  /* mve_vcvtnq_sv4si */
    case 3116:  /* mve_vcvtnq_uv8hi */
    case 3115:  /* mve_vcvtnq_sv8hi */
    case 3114:  /* mve_vcvtpq_uv4si */
    case 3113:  /* mve_vcvtpq_sv4si */
    case 3112:  /* mve_vcvtpq_uv8hi */
    case 3111:  /* mve_vcvtpq_sv8hi */
    case 3110:  /* mve_vmovlbq_uv8hi */
    case 3109:  /* mve_vmovlbq_sv8hi */
    case 3108:  /* mve_vmovlbq_uv16qi */
    case 3107:  /* mve_vmovlbq_sv16qi */
    case 3106:  /* mve_vmovltq_sv8hi */
    case 3105:  /* mve_vmovltq_uv8hi */
    case 3104:  /* mve_vmovltq_sv16qi */
    case 3103:  /* mve_vmovltq_uv16qi */
    case 3102:  /* mve_vrev32q_sv8hi */
    case 3101:  /* mve_vrev32q_uv8hi */
    case 3100:  /* mve_vrev32q_sv16qi */
    case 3099:  /* mve_vrev32q_uv16qi */
    case 3098:  /* mve_vabsq_sv4si */
    case 3097:  /* mve_vabsq_sv8hi */
    case 3096:  /* mve_vabsq_sv16qi */
    case 3095:  /* mve_vaddvq_sv4si */
    case 3094:  /* mve_vaddvq_uv4si */
    case 3093:  /* mve_vaddvq_sv8hi */
    case 3092:  /* mve_vaddvq_uv8hi */
    case 3091:  /* mve_vaddvq_sv16qi */
    case 3090:  /* mve_vaddvq_uv16qi */
    case 3089:  /* mve_vclsq_sv4si */
    case 3088:  /* mve_vclsq_sv8hi */
    case 3087:  /* mve_vclsq_sv16qi */
    case 3086:  /* mve_vclzq_sv4si */
    case 3085:  /* mve_vclzq_uv4si */
    case 3084:  /* mve_vclzq_sv8hi */
    case 3083:  /* mve_vclzq_uv8hi */
    case 3082:  /* mve_vclzq_sv16qi */
    case 3081:  /* mve_vclzq_uv16qi */
    case 3080:  /* mve_vdupq_n_sv4si */
    case 3079:  /* mve_vdupq_n_uv4si */
    case 3078:  /* mve_vdupq_n_sv8hi */
    case 3077:  /* mve_vdupq_n_uv8hi */
    case 3076:  /* mve_vdupq_n_sv16qi */
    case 3075:  /* mve_vdupq_n_uv16qi */
    case 3068:  /* mve_vqabsq_sv4si */
    case 3067:  /* mve_vqabsq_sv8hi */
    case 3066:  /* mve_vqabsq_sv16qi */
    case 3065:  /* mve_vqnegq_sv4si */
    case 3064:  /* mve_vqnegq_sv8hi */
    case 3063:  /* mve_vqnegq_sv16qi */
    case 3062:  /* mve_vcvtq_from_f_uv4si */
    case 3061:  /* mve_vcvtq_from_f_sv4si */
    case 3060:  /* mve_vcvtq_from_f_uv8hi */
    case 3059:  /* mve_vcvtq_from_f_sv8hi */
    case 3058:  /* mve_vrev64q_uv4si */
    case 3057:  /* mve_vrev64q_sv4si */
    case 3056:  /* mve_vrev64q_uv8hi */
    case 3055:  /* mve_vrev64q_sv8hi */
    case 3054:  /* mve_vrev64q_uv16qi */
    case 3053:  /* mve_vrev64q_sv16qi */
    case 3052:  /* mve_vcvtq_to_f_uv4sf */
    case 3051:  /* mve_vcvtq_to_f_sv4sf */
    case 3050:  /* mve_vcvtq_to_f_uv8hf */
    case 3049:  /* mve_vcvtq_to_f_sv8hf */
    case 3048:  /* mve_vcvtbq_f32_f16v4sf */
    case 3047:  /* mve_vcvttq_f32_f16v4sf */
    case 3046:  /* mve_vrev32q_fv8hf */
    case 3045:  /* mve_vabsq_fv4sf */
    case 3044:  /* mve_vabsq_fv8hf */
    case 3043:  /* mve_vdupq_n_fv4sf */
    case 3042:  /* mve_vdupq_n_fv8hf */
    case 3039:  /* mve_vrev64q_fv4sf */
    case 3038:  /* mve_vrev64q_fv8hf */
    case 3037:  /* mve_vrndaq_fv4sf */
    case 3036:  /* mve_vrndaq_fv8hf */
    case 3035:  /* mve_vrndmq_fv4sf */
    case 3034:  /* mve_vrndmq_fv8hf */
    case 3033:  /* mve_vrndnq_fv4sf */
    case 3032:  /* mve_vrndnq_fv8hf */
    case 3031:  /* mve_vrndpq_fv4sf */
    case 3030:  /* mve_vrndpq_fv8hf */
    case 3029:  /* mve_vrndq_fv4sf */
    case 3028:  /* mve_vrndq_fv8hf */
    case 3027:  /* mve_vrndxq_fv4sf */
    case 3026:  /* mve_vrndxq_fv8hf */
    case 3023:  /* mve_vst4qv4sf */
    case 3022:  /* mve_vst4qv8hf */
    case 3021:  /* mve_vst4qv4si */
    case 3020:  /* mve_vst4qv8hi */
    case 3019:  /* mve_vst4qv16qi */
    case 2937:  /* arm_load_acquire_exclusivedi */
    case 2936:  /* arm_load_exclusivedi */
    case 2935:  /* arm_load_acquire_exclusivesi */
    case 2934:  /* arm_load_exclusivesi */
    case 2845:  /* arm_atomic_loaddi2_ldrd */
    case 2822:  /* crypto_aesimc */
    case 2821:  /* crypto_aesmc */
    case 2815:  /* neon_vbfcvtbf_cvtmodesf */
    case 2814:  /* neon_vbfcvtbf_cvtmodev2si */
    case 2813:  /* neon_vbfcvt_highv8bf */
    case 2812:  /* neon_vbfcvtv8bf */
    case 2811:  /* neon_vbfcvtv4bf */
    case 2810:  /* neon_vbfcvtsf */
    case 2808:  /* neon_vbfcvtv4sfv8bf */
    case 2807:  /* neon_vbfcvtv4sfv4bf */
    case 2730:  /* neon_vst4qbv4sf */
    case 2729:  /* neon_vst4qbv4si */
    case 2728:  /* neon_vst4qbv8bf */
    case 2727:  /* neon_vst4qbv8hf */
    case 2726:  /* neon_vst4qbv8hi */
    case 2725:  /* neon_vst4qbv16qi */
    case 2724:  /* neon_vst4qav4sf */
    case 2723:  /* neon_vst4qav4si */
    case 2722:  /* neon_vst4qav8bf */
    case 2721:  /* neon_vst4qav8hf */
    case 2720:  /* neon_vst4qav8hi */
    case 2719:  /* neon_vst4qav16qi */
    case 2718:  /* neon_vst4di */
    case 2717:  /* neon_vst4v2sf */
    case 2716:  /* neon_vst4v2si */
    case 2715:  /* neon_vst4v4bf */
    case 2714:  /* neon_vst4v4hf */
    case 2713:  /* neon_vst4v4hi */
    case 2712:  /* neon_vst4v8qi */
    case 2711:  /* neon_vld4_dupv8bf */
    case 2710:  /* neon_vld4_dupdi */
    case 2709:  /* neon_vld4_dupv2sf */
    case 2708:  /* neon_vld4_dupv2si */
    case 2707:  /* neon_vld4_dupv4bf */
    case 2706:  /* neon_vld4_dupv4hf */
    case 2705:  /* neon_vld4_dupv4hi */
    case 2704:  /* neon_vld4_dupv8qi */
    case 2686:  /* neon_vld4qav4sf */
    case 2685:  /* neon_vld4qav4si */
    case 2684:  /* neon_vld4qav8bf */
    case 2683:  /* neon_vld4qav8hf */
    case 2682:  /* neon_vld4qav8hi */
    case 2681:  /* neon_vld4qav16qi */
    case 2680:  /* neon_vld4di */
    case 2679:  /* neon_vld4v2sf */
    case 2678:  /* neon_vld4v2si */
    case 2677:  /* neon_vld4v4bf */
    case 2676:  /* neon_vld4v4hf */
    case 2675:  /* neon_vld4v4hi */
    case 2674:  /* neon_vld4v8qi */
    case 2662:  /* neon_vst3qbv4sf */
    case 2661:  /* neon_vst3qbv4si */
    case 2660:  /* neon_vst3qbv8bf */
    case 2659:  /* neon_vst3qbv8hf */
    case 2658:  /* neon_vst3qbv8hi */
    case 2657:  /* neon_vst3qbv16qi */
    case 2656:  /* neon_vst3qav4sf */
    case 2655:  /* neon_vst3qav4si */
    case 2654:  /* neon_vst3qav8bf */
    case 2653:  /* neon_vst3qav8hf */
    case 2652:  /* neon_vst3qav8hi */
    case 2651:  /* neon_vst3qav16qi */
    case 2650:  /* neon_vst3di */
    case 2649:  /* neon_vst3v2sf */
    case 2648:  /* neon_vst3v2si */
    case 2647:  /* neon_vst3v4bf */
    case 2646:  /* neon_vst3v4hf */
    case 2645:  /* neon_vst3v4hi */
    case 2644:  /* neon_vst3v8qi */
    case 2643:  /* neon_vld3_dupv8bf */
    case 2642:  /* neon_vld3_dupdi */
    case 2641:  /* neon_vld3_dupv2sf */
    case 2640:  /* neon_vld3_dupv2si */
    case 2639:  /* neon_vld3_dupv4bf */
    case 2638:  /* neon_vld3_dupv4hf */
    case 2637:  /* neon_vld3_dupv4hi */
    case 2636:  /* neon_vld3_dupv8qi */
    case 2618:  /* neon_vld3qav4sf */
    case 2617:  /* neon_vld3qav4si */
    case 2616:  /* neon_vld3qav8bf */
    case 2615:  /* neon_vld3qav8hf */
    case 2614:  /* neon_vld3qav8hi */
    case 2613:  /* neon_vld3qav16qi */
    case 2612:  /* neon_vld3di */
    case 2611:  /* neon_vld3v2sf */
    case 2610:  /* neon_vld3v2si */
    case 2609:  /* neon_vld3v4bf */
    case 2608:  /* neon_vld3v4hf */
    case 2607:  /* neon_vld3v4hi */
    case 2606:  /* neon_vld3v8qi */
    case 2594:  /* neon_vst2v4sf */
    case 2593:  /* neon_vst2v4si */
    case 2592:  /* neon_vst2v8bf */
    case 2591:  /* neon_vst2v8hf */
    case 2590:  /* neon_vst2v8hi */
    case 2589:  /* neon_vst2v16qi */
    case 2588:  /* neon_vst2di */
    case 2587:  /* neon_vst2v2sf */
    case 2586:  /* neon_vst2v2si */
    case 2585:  /* neon_vst2v4bf */
    case 2584:  /* neon_vst2v4hf */
    case 2583:  /* neon_vst2v4hi */
    case 2582:  /* neon_vst2v8qi */
    case 2581:  /* neon_vld2_dupv8bf */
    case 2580:  /* neon_vld2_dupdi */
    case 2579:  /* neon_vld2_dupv2sf */
    case 2578:  /* neon_vld2_dupv2si */
    case 2577:  /* neon_vld2_dupv4bf */
    case 2576:  /* neon_vld2_dupv4hf */
    case 2575:  /* neon_vld2_dupv4hi */
    case 2574:  /* neon_vld2_dupv8qi */
    case 2562:  /* neon_vld2v4sf */
    case 2561:  /* neon_vld2v4si */
    case 2560:  /* neon_vld2v8bf */
    case 2559:  /* neon_vld2v8hf */
    case 2558:  /* neon_vld2v8hi */
    case 2557:  /* neon_vld2v16qi */
    case 2556:  /* neon_vld2di */
    case 2555:  /* neon_vld2v2sf */
    case 2554:  /* neon_vld2v2si */
    case 2553:  /* neon_vld2v4bf */
    case 2552:  /* neon_vld2v4hf */
    case 2551:  /* neon_vld2v4hi */
    case 2550:  /* neon_vld2v8qi */
    case 2535:  /* neon_vst1v2di */
    case 2534:  /* neon_vst1di */
    case 2533:  /* neon_vst1v4sf */
    case 2532:  /* neon_vst1v2sf */
    case 2531:  /* neon_vst1v8bf */
    case 2530:  /* neon_vst1v4bf */
    case 2529:  /* neon_vst1v8hf */
    case 2528:  /* neon_vst1v4hf */
    case 2527:  /* neon_vst1v4si */
    case 2526:  /* neon_vst1v2si */
    case 2525:  /* neon_vst1v8hi */
    case 2524:  /* neon_vst1v4hi */
    case 2523:  /* neon_vst1v16qi */
    case 2522:  /* neon_vst1v8qi */
    case 2495:  /* neon_vld1v2di */
    case 2494:  /* neon_vld1di */
    case 2493:  /* neon_vld1v4sf */
    case 2492:  /* neon_vld1v2sf */
    case 2491:  /* neon_vld1v8bf */
    case 2490:  /* neon_vld1v4bf */
    case 2489:  /* neon_vld1v8hf */
    case 2488:  /* neon_vld1v4hf */
    case 2487:  /* neon_vld1v4si */
    case 2486:  /* neon_vld1v2si */
    case 2485:  /* neon_vld1v8hi */
    case 2484:  /* neon_vld1v4hi */
    case 2483:  /* neon_vld1v16qi */
    case 2482:  /* neon_vld1v8qi */
    case 2220:  /* neon_vrev16v16qi */
    case 2219:  /* neon_vrev16v8qi */
    case 2218:  /* neon_vrev32v8hi */
    case 2217:  /* neon_vrev32v16qi */
    case 2216:  /* neon_vrev32v4hi */
    case 2215:  /* neon_vrev32v8qi */
    case 2214:  /* neon_vrev64v2di */
    case 2213:  /* neon_vrev64v4sf */
    case 2212:  /* neon_vrev64v2sf */
    case 2211:  /* neon_vrev64v8hf */
    case 2210:  /* neon_vrev64v4hf */
    case 2209:  /* neon_vrev64v4si */
    case 2208:  /* neon_vrev64v2si */
    case 2207:  /* neon_vrev64v8hi */
    case 2206:  /* neon_vrev64v4hi */
    case 2205:  /* neon_vrev64v16qi */
    case 2204:  /* neon_vrev64v8qi */
    case 2135:  /* neon_vmovluv2si */
    case 2134:  /* neon_vmovlsv2si */
    case 2133:  /* neon_vmovluv4hi */
    case 2132:  /* neon_vmovlsv4hi */
    case 2131:  /* neon_vmovluv8qi */
    case 2130:  /* neon_vmovlsv8qi */
    case 2129:  /* neon_vqmovunv2di */
    case 2128:  /* neon_vqmovunv4si */
    case 2127:  /* neon_vqmovunv8hi */
    case 2126:  /* neon_vqmovnuv2di */
    case 2125:  /* neon_vqmovnsv2di */
    case 2124:  /* neon_vqmovnuv4si */
    case 2123:  /* neon_vqmovnsv4si */
    case 2122:  /* neon_vqmovnuv8hi */
    case 2121:  /* neon_vqmovnsv8hi */
    case 2120:  /* neon_vmovnv2di */
    case 2119:  /* neon_vmovnv4si */
    case 2118:  /* neon_vmovnv8hi */
    case 2117:  /* neon_vcvtpuv4hf */
    case 2116:  /* neon_vcvtpsv4hf */
    case 2115:  /* neon_vcvtnuv4hf */
    case 2114:  /* neon_vcvtnsv4hf */
    case 2113:  /* neon_vcvtmuv4hf */
    case 2112:  /* neon_vcvtmsv4hf */
    case 2111:  /* neon_vcvtauv4hf */
    case 2110:  /* neon_vcvtasv4hf */
    case 2109:  /* neon_vcvtpuv8hf */
    case 2108:  /* neon_vcvtpsv8hf */
    case 2107:  /* neon_vcvtnuv8hf */
    case 2106:  /* neon_vcvtnsv8hf */
    case 2105:  /* neon_vcvtmuv8hf */
    case 2104:  /* neon_vcvtmsv8hf */
    case 2103:  /* neon_vcvtauv8hf */
    case 2102:  /* neon_vcvtasv8hf */
    case 2085:  /* neon_vcvtuv4hf */
    case 2084:  /* neon_vcvtsv4hf */
    case 2083:  /* neon_vcvtuv8hf */
    case 2082:  /* neon_vcvtsv8hf */
    case 2081:  /* neon_vcvtuv8hi */
    case 2080:  /* neon_vcvtsv8hi */
    case 2079:  /* neon_vcvtuv4hi */
    case 2078:  /* neon_vcvtsv4hi */
    case 2077:  /* neon_vcvtv4hfv4sf */
    case 2076:  /* neon_vcvtv4sfv4hf */
    case 2075:  /* neon_vcvtuv4si */
    case 2074:  /* neon_vcvtsv4si */
    case 2073:  /* neon_vcvtuv2si */
    case 2072:  /* neon_vcvtsv2si */
    case 2071:  /* neon_vcvtuv4sf */
    case 2070:  /* neon_vcvtsv4sf */
    case 2069:  /* neon_vcvtuv2sf */
    case 2068:  /* neon_vcvtsv2sf */
    case 1995:  /* neon_vrsqrtev4sf */
    case 1994:  /* neon_vrsqrtev4si */
    case 1993:  /* neon_vrsqrtev2sf */
    case 1992:  /* neon_vrsqrtev2si */
    case 1991:  /* neon_vrecpev4sf */
    case 1990:  /* neon_vrecpev4si */
    case 1989:  /* neon_vrecpev2sf */
    case 1988:  /* neon_vrecpev2si */
    case 1987:  /* neon_vrecpev4hf */
    case 1986:  /* neon_vrecpev8hf */
    case 1977:  /* neon_vclsv4si */
    case 1976:  /* neon_vclsv2si */
    case 1975:  /* neon_vclsv8hi */
    case 1974:  /* neon_vclsv4hi */
    case 1973:  /* neon_vclsv16qi */
    case 1972:  /* neon_vclsv8qi */
    case 1971:  /* neon_vqnegv4si */
    case 1970:  /* neon_vqnegv2si */
    case 1969:  /* neon_vqnegv8hi */
    case 1968:  /* neon_vqnegv4hi */
    case 1967:  /* neon_vqnegv16qi */
    case 1966:  /* neon_vqnegv8qi */
    case 1882:  /* neon_vqabsv4si */
    case 1881:  /* neon_vqabsv2si */
    case 1880:  /* neon_vqabsv8hi */
    case 1879:  /* neon_vqabsv4hi */
    case 1878:  /* neon_vqabsv16qi */
    case 1877:  /* neon_vqabsv8qi */
    case 1840:  /* neon_vpaddluv4si */
    case 1839:  /* neon_vpaddlsv4si */
    case 1838:  /* neon_vpaddluv2si */
    case 1837:  /* neon_vpaddlsv2si */
    case 1836:  /* neon_vpaddluv8hi */
    case 1835:  /* neon_vpaddlsv8hi */
    case 1834:  /* neon_vpaddluv4hi */
    case 1833:  /* neon_vpaddlsv4hi */
    case 1832:  /* neon_vpaddluv16qi */
    case 1831:  /* neon_vpaddlsv16qi */
    case 1830:  /* neon_vpaddluv8qi */
    case 1829:  /* neon_vpaddlsv8qi */
    case 1398:  /* arm_reduc_plus_internal_v2di */
    case 1361:  /* neon_load_count */
    case 1306:  /* neon_vrsqrtev4hf */
    case 1305:  /* neon_vrsqrtev8hf */
    case 1304:  /* neon_vrndxv4hf */
    case 1303:  /* neon_vrndpv4hf */
    case 1302:  /* neon_vrndnv4hf */
    case 1301:  /* neon_vrndmv4hf */
    case 1300:  /* neon_vrndav4hf */
    case 1299:  /* neon_vrndv4hf */
    case 1298:  /* neon_vrndxv8hf */
    case 1297:  /* neon_vrndpv8hf */
    case 1296:  /* neon_vrndnv8hf */
    case 1295:  /* neon_vrndmv8hf */
    case 1294:  /* neon_vrndav8hf */
    case 1293:  /* neon_vrndv8hf */
    case 1194:  /* neon_vrintnv4sf */
    case 1193:  /* neon_vrintav4sf */
    case 1192:  /* neon_vrintxv4sf */
    case 1191:  /* neon_vrintmv4sf */
    case 1190:  /* neon_vrintzv4sf */
    case 1189:  /* neon_vrintpv4sf */
    case 1188:  /* neon_vrintnv2sf */
    case 1187:  /* neon_vrintav2sf */
    case 1186:  /* neon_vrintxv2sf */
    case 1185:  /* neon_vrintmv2sf */
    case 1184:  /* neon_vrintzv2sf */
    case 1183:  /* neon_vrintpv2sf */
    case 1098:  /* *movmisalignv2di_neon_load */
    case 1097:  /* *movmisalignv4sf_neon_load */
    case 1096:  /* *movmisalignv4si_neon_load */
    case 1095:  /* *movmisalignv8bf_neon_load */
    case 1094:  /* *movmisalignv8hf_neon_load */
    case 1093:  /* *movmisalignv8hi_neon_load */
    case 1092:  /* *movmisalignv16qi_neon_load */
    case 1091:  /* *movmisalignv2di_neon_store */
    case 1090:  /* *movmisalignv4sf_neon_store */
    case 1089:  /* *movmisalignv4si_neon_store */
    case 1088:  /* *movmisalignv8bf_neon_store */
    case 1087:  /* *movmisalignv8hf_neon_store */
    case 1086:  /* *movmisalignv8hi_neon_store */
    case 1085:  /* *movmisalignv16qi_neon_store */
    case 1084:  /* *movmisaligndi_neon_load */
    case 1083:  /* *movmisalignv2sf_neon_load */
    case 1082:  /* *movmisalignv2si_neon_load */
    case 1081:  /* *movmisalignv4bf_neon_load */
    case 1080:  /* *movmisalignv4hf_neon_load */
    case 1079:  /* *movmisalignv4hi_neon_load */
    case 1078:  /* *movmisalignv8qi_neon_load */
    case 1077:  /* *movmisaligndi_neon_store */
    case 1076:  /* *movmisalignv2sf_neon_store */
    case 1075:  /* *movmisalignv2si_neon_store */
    case 1074:  /* *movmisalignv4bf_neon_store */
    case 1073:  /* *movmisalignv4hf_neon_store */
    case 1072:  /* *movmisalignv4hi_neon_store */
    case 1071:  /* *movmisalignv8qi_neon_store */
    case 1051:  /* unaligned_storev8qi */
    case 876:  /* rounddf2 */
    case 875:  /* rintdf2 */
    case 874:  /* nearbyintdf2 */
    case 873:  /* floordf2 */
    case 872:  /* ceildf2 */
    case 871:  /* btruncdf2 */
    case 870:  /* roundsf2 */
    case 869:  /* rintsf2 */
    case 868:  /* nearbyintsf2 */
    case 867:  /* floorsf2 */
    case 866:  /* ceilsf2 */
    case 865:  /* btruncsf2 */
    case 863:  /* neon_vcvtphusi */
    case 862:  /* neon_vcvtphssi */
    case 861:  /* neon_vcvtnhusi */
    case 860:  /* neon_vcvtnhssi */
    case 859:  /* neon_vcvtmhusi */
    case 858:  /* neon_vcvtmhssi */
    case 857:  /* neon_vcvtahusi */
    case 856:  /* neon_vcvtahssi */
    case 851:  /* neon_vcvthusi */
    case 850:  /* neon_vcvthssi */
    case 849:  /* neon_vcvthuhf */
    case 848:  /* neon_vcvthshf */
    case 768:  /* neon_vrndihf */
    case 767:  /* neon_vrndxhf */
    case 766:  /* neon_vrndphf */
    case 765:  /* neon_vrndnhf */
    case 764:  /* neon_vrndmhf */
    case 763:  /* neon_vrndahf */
    case 762:  /* neon_vrndhf */
    case 671:  /* iwmmxt_wabsv8qi3 */
    case 670:  /* iwmmxt_wabsv4hi3 */
    case 669:  /* iwmmxt_wabsv2si3 */
    case 658:  /* iwmmxt_waccw */
    case 657:  /* iwmmxt_wacch */
    case 656:  /* iwmmxt_waccb */
    case 655:  /* iwmmxt_tmovmskw */
    case 654:  /* iwmmxt_tmovmskh */
    case 653:  /* iwmmxt_tmovmskb */
    case 394:  /* rbitsi2 */
    case 256:  /* pic_load_addr_thumb1 */
    case 255:  /* pic_load_addr_32bit */
    case 187:  /* arm_uxtb16 */
    case 186:  /* arm_sxtb16 */
    case 159:  /* unaligned_storehi */
    case 158:  /* unaligned_storesi */
    case 157:  /* unaligned_storedi */
    case 154:  /* unaligned_loadsi */
    case 153:  /* unaligned_loaddi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      break;

    case 152:  /* *not_shiftsi_compare0_scratch */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      break;

    case 151:  /* *not_shiftsi_compare0 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[2] = 1;
      break;

    case 150:  /* *not_shiftsi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 149:  /* *shiftsi3_compare0_scratch */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      break;

    case 148:  /* *shiftsi3_compare0 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 1);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[2] = 1;
      break;

    case 147:  /* *arm_shiftsi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 1));
      break;

    case 4932:  /* arm_vcx2qa_p_v16qi */
    case 4931:  /* arm_vcx2q_p_v16qi */
    case 4928:  /* arm_vcx3qav16qi */
    case 914:  /* arm_vcx3adi */
    case 913:  /* arm_vcx3asi */
    case 494:  /* arm_mrc2 */
    case 493:  /* arm_mrc */
    case 146:  /* arm_cx3adi */
    case 145:  /* arm_cx3asi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 3));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 4));
      break;

    case 4930:  /* arm_vcx1qa_p_v16qi */
    case 4929:  /* arm_vcx1q_p_v16qi */
    case 4927:  /* arm_vcx3qv16qi */
    case 4926:  /* arm_vcx2qav16qi */
    case 4622:  /* mve_vsubq_m_n_fv4sf */
    case 4621:  /* mve_vsubq_m_n_fv8hf */
    case 4620:  /* mve_vsubq_m_fv4sf */
    case 4619:  /* mve_vsubq_m_fv8hf */
    case 4618:  /* mve_vorrq_m_fv4sf */
    case 4617:  /* mve_vorrq_m_fv8hf */
    case 4616:  /* mve_vornq_m_fv4sf */
    case 4615:  /* mve_vornq_m_fv8hf */
    case 4614:  /* mve_vmulq_m_n_fv4sf */
    case 4613:  /* mve_vmulq_m_n_fv8hf */
    case 4612:  /* mve_vmulq_m_fv4sf */
    case 4611:  /* mve_vmulq_m_fv8hf */
    case 4610:  /* mve_vminnmq_m_fv4sf */
    case 4609:  /* mve_vminnmq_m_fv8hf */
    case 4608:  /* mve_vmaxnmq_m_fv4sf */
    case 4607:  /* mve_vmaxnmq_m_fv8hf */
    case 4606:  /* mve_vfmsq_m_fv4sf */
    case 4605:  /* mve_vfmsq_m_fv8hf */
    case 4604:  /* mve_vfmasq_m_n_fv4sf */
    case 4603:  /* mve_vfmasq_m_n_fv8hf */
    case 4602:  /* mve_vfmaq_m_n_fv4sf */
    case 4601:  /* mve_vfmaq_m_n_fv8hf */
    case 4600:  /* mve_vfmaq_m_fv4sf */
    case 4599:  /* mve_vfmaq_m_fv8hf */
    case 4598:  /* mve_veorq_m_fv4sf */
    case 4597:  /* mve_veorq_m_fv8hf */
    case 4596:  /* mve_vcmulq_rot90_m_fv4sf */
    case 4595:  /* mve_vcmulq_rot90_m_fv8hf */
    case 4594:  /* mve_vcmulq_rot270_m_fv4sf */
    case 4593:  /* mve_vcmulq_rot270_m_fv8hf */
    case 4592:  /* mve_vcmulq_rot180_m_fv4sf */
    case 4591:  /* mve_vcmulq_rot180_m_fv8hf */
    case 4590:  /* mve_vcmulq_m_fv4sf */
    case 4589:  /* mve_vcmulq_m_fv8hf */
    case 4588:  /* mve_vcmlaq_rot90_m_fv4sf */
    case 4587:  /* mve_vcmlaq_rot90_m_fv8hf */
    case 4586:  /* mve_vcmlaq_rot270_m_fv4sf */
    case 4585:  /* mve_vcmlaq_rot270_m_fv8hf */
    case 4584:  /* mve_vcmlaq_rot180_m_fv4sf */
    case 4583:  /* mve_vcmlaq_rot180_m_fv8hf */
    case 4582:  /* mve_vcmlaq_m_fv4sf */
    case 4581:  /* mve_vcmlaq_m_fv8hf */
    case 4580:  /* mve_vcaddq_rot90_m_fv4sf */
    case 4579:  /* mve_vcaddq_rot90_m_fv8hf */
    case 4578:  /* mve_vcaddq_rot270_m_fv4sf */
    case 4577:  /* mve_vcaddq_rot270_m_fv8hf */
    case 4576:  /* mve_vbrsrq_m_n_fv4sf */
    case 4575:  /* mve_vbrsrq_m_n_fv8hf */
    case 4574:  /* mve_vbicq_m_fv4sf */
    case 4573:  /* mve_vbicq_m_fv8hf */
    case 4572:  /* mve_vandq_m_fv4sf */
    case 4571:  /* mve_vandq_m_fv8hf */
    case 4570:  /* mve_vaddq_m_n_fv4sf */
    case 4569:  /* mve_vaddq_m_n_fv8hf */
    case 4568:  /* mve_vaddq_m_fv4sf */
    case 4567:  /* mve_vaddq_m_fv8hf */
    case 4566:  /* mve_vabdq_m_fv4sf */
    case 4565:  /* mve_vabdq_m_fv8hf */
    case 4564:  /* mve_vrmlsldavhaxq_p_sv4si */
    case 4563:  /* mve_vrmlsldavhaq_p_sv4si */
    case 4562:  /* mve_vrmlaldavhaxq_p_sv4si */
    case 4561:  /* mve_vrmlaldavhaq_p_uv4si */
    case 4560:  /* mve_vqshruntq_m_n_sv4si */
    case 4559:  /* mve_vqshruntq_m_n_sv8hi */
    case 4558:  /* mve_vqshrunbq_m_n_sv4si */
    case 4557:  /* mve_vqshrunbq_m_n_sv8hi */
    case 4556:  /* mve_vqrshruntq_m_n_sv4si */
    case 4555:  /* mve_vqrshruntq_m_n_sv8hi */
    case 4554:  /* mve_vqrshrunbq_m_n_sv4si */
    case 4553:  /* mve_vqrshrunbq_m_n_sv8hi */
    case 4552:  /* mve_vqdmulltq_m_sv4si */
    case 4551:  /* mve_vqdmulltq_m_sv8hi */
    case 4550:  /* mve_vqdmulltq_m_n_sv4si */
    case 4549:  /* mve_vqdmulltq_m_n_sv8hi */
    case 4548:  /* mve_vqdmullbq_m_sv4si */
    case 4547:  /* mve_vqdmullbq_m_sv8hi */
    case 4546:  /* mve_vqdmullbq_m_n_sv4si */
    case 4545:  /* mve_vqdmullbq_m_n_sv8hi */
    case 4544:  /* mve_vmulltq_poly_m_pv8hi */
    case 4543:  /* mve_vmulltq_poly_m_pv16qi */
    case 4542:  /* mve_vmullbq_poly_m_pv8hi */
    case 4541:  /* mve_vmullbq_poly_m_pv16qi */
    case 4540:  /* mve_vmlsldavaxq_p_sv4si */
    case 4539:  /* mve_vmlsldavaxq_p_sv8hi */
    case 4538:  /* mve_vmlsldavaq_p_sv4si */
    case 4537:  /* mve_vmlsldavaq_p_sv8hi */
    case 4536:  /* mve_vshrntq_m_n_uv4si */
    case 4535:  /* mve_vshrntq_m_n_sv4si */
    case 4534:  /* mve_vshrntq_m_n_uv8hi */
    case 4533:  /* mve_vshrntq_m_n_sv8hi */
    case 4532:  /* mve_vshrnbq_m_n_uv4si */
    case 4531:  /* mve_vshrnbq_m_n_sv4si */
    case 4530:  /* mve_vshrnbq_m_n_uv8hi */
    case 4529:  /* mve_vshrnbq_m_n_sv8hi */
    case 4528:  /* mve_vshlltq_m_n_sv8hi */
    case 4527:  /* mve_vshlltq_m_n_uv8hi */
    case 4526:  /* mve_vshlltq_m_n_sv16qi */
    case 4525:  /* mve_vshlltq_m_n_uv16qi */
    case 4524:  /* mve_vshllbq_m_n_sv8hi */
    case 4523:  /* mve_vshllbq_m_n_uv8hi */
    case 4522:  /* mve_vshllbq_m_n_sv16qi */
    case 4521:  /* mve_vshllbq_m_n_uv16qi */
    case 4520:  /* mve_vrshrntq_m_n_sv4si */
    case 4519:  /* mve_vrshrntq_m_n_uv4si */
    case 4518:  /* mve_vrshrntq_m_n_sv8hi */
    case 4517:  /* mve_vrshrntq_m_n_uv8hi */
    case 4516:  /* mve_vrshrnbq_m_n_sv4si */
    case 4515:  /* mve_vrshrnbq_m_n_uv4si */
    case 4514:  /* mve_vrshrnbq_m_n_sv8hi */
    case 4513:  /* mve_vrshrnbq_m_n_uv8hi */
    case 4512:  /* mve_vrmlaldavhaq_p_sv4si */
    case 4511:  /* mve_vqshrntq_m_n_uv4si */
    case 4510:  /* mve_vqshrntq_m_n_sv4si */
    case 4509:  /* mve_vqshrntq_m_n_uv8hi */
    case 4508:  /* mve_vqshrntq_m_n_sv8hi */
    case 4507:  /* mve_vqshrnbq_m_n_sv4si */
    case 4506:  /* mve_vqshrnbq_m_n_uv4si */
    case 4505:  /* mve_vqshrnbq_m_n_sv8hi */
    case 4504:  /* mve_vqshrnbq_m_n_uv8hi */
    case 4503:  /* mve_vqrshrntq_m_n_uv4si */
    case 4502:  /* mve_vqrshrntq_m_n_sv4si */
    case 4501:  /* mve_vqrshrntq_m_n_uv8hi */
    case 4500:  /* mve_vqrshrntq_m_n_sv8hi */
    case 4499:  /* mve_vqrshrnbq_m_n_sv4si */
    case 4498:  /* mve_vqrshrnbq_m_n_uv4si */
    case 4497:  /* mve_vqrshrnbq_m_n_sv8hi */
    case 4496:  /* mve_vqrshrnbq_m_n_uv8hi */
    case 4495:  /* mve_vmlaldavaxq_p_sv4si */
    case 4494:  /* mve_vmlaldavaxq_p_sv8hi */
    case 4493:  /* mve_vmlaldavaq_p_sv4si */
    case 4492:  /* mve_vmlaldavaq_p_uv4si */
    case 4491:  /* mve_vmlaldavaq_p_sv8hi */
    case 4490:  /* mve_vmlaldavaq_p_uv8hi */
    case 4489:  /* mve_vqrdmulhq_m_sv4si */
    case 4488:  /* mve_vqrdmulhq_m_sv8hi */
    case 4487:  /* mve_vqrdmulhq_m_sv16qi */
    case 4486:  /* mve_vqrdmulhq_m_n_sv4si */
    case 4485:  /* mve_vqrdmulhq_m_n_sv8hi */
    case 4484:  /* mve_vqrdmulhq_m_n_sv16qi */
    case 4483:  /* mve_vqrdmlsdhxq_m_sv4si */
    case 4482:  /* mve_vqrdmlsdhxq_m_sv8hi */
    case 4481:  /* mve_vqrdmlsdhxq_m_sv16qi */
    case 4480:  /* mve_vqrdmlsdhq_m_sv4si */
    case 4479:  /* mve_vqrdmlsdhq_m_sv8hi */
    case 4478:  /* mve_vqrdmlsdhq_m_sv16qi */
    case 4477:  /* mve_vqrdmladhxq_m_sv4si */
    case 4476:  /* mve_vqrdmladhxq_m_sv8hi */
    case 4475:  /* mve_vqrdmladhxq_m_sv16qi */
    case 4474:  /* mve_vqrdmladhq_m_sv4si */
    case 4473:  /* mve_vqrdmladhq_m_sv8hi */
    case 4472:  /* mve_vqrdmladhq_m_sv16qi */
    case 4471:  /* mve_vqdmulhq_m_sv4si */
    case 4470:  /* mve_vqdmulhq_m_sv8hi */
    case 4469:  /* mve_vqdmulhq_m_sv16qi */
    case 4468:  /* mve_vqdmulhq_m_n_sv4si */
    case 4467:  /* mve_vqdmulhq_m_n_sv8hi */
    case 4466:  /* mve_vqdmulhq_m_n_sv16qi */
    case 4465:  /* mve_vqdmlsdhxq_m_sv4si */
    case 4464:  /* mve_vqdmlsdhxq_m_sv8hi */
    case 4463:  /* mve_vqdmlsdhxq_m_sv16qi */
    case 4462:  /* mve_vqdmlsdhq_m_sv4si */
    case 4461:  /* mve_vqdmlsdhq_m_sv8hi */
    case 4460:  /* mve_vqdmlsdhq_m_sv16qi */
    case 4459:  /* mve_vqdmladhxq_m_sv4si */
    case 4458:  /* mve_vqdmladhxq_m_sv8hi */
    case 4457:  /* mve_vqdmladhxq_m_sv16qi */
    case 4456:  /* mve_vqdmladhq_m_sv4si */
    case 4455:  /* mve_vqdmladhq_m_sv8hi */
    case 4454:  /* mve_vqdmladhq_m_sv16qi */
    case 4453:  /* mve_vmlsdavaxq_p_sv4si */
    case 4452:  /* mve_vmlsdavaxq_p_sv8hi */
    case 4451:  /* mve_vmlsdavaxq_p_sv16qi */
    case 4450:  /* mve_vmlsdavaq_p_sv4si */
    case 4449:  /* mve_vmlsdavaq_p_sv8hi */
    case 4448:  /* mve_vmlsdavaq_p_sv16qi */
    case 4447:  /* mve_vmladavaxq_p_sv4si */
    case 4446:  /* mve_vmladavaxq_p_sv8hi */
    case 4445:  /* mve_vmladavaxq_p_sv16qi */
    case 4444:  /* mve_vhcaddq_rot90_m_sv4si */
    case 4443:  /* mve_vhcaddq_rot90_m_sv8hi */
    case 4442:  /* mve_vhcaddq_rot90_m_sv16qi */
    case 4441:  /* mve_vhcaddq_rot270_m_sv4si */
    case 4440:  /* mve_vhcaddq_rot270_m_sv8hi */
    case 4439:  /* mve_vhcaddq_rot270_m_sv16qi */
    case 4438:  /* mve_vsubq_m_n_uv4si */
    case 4437:  /* mve_vsubq_m_n_sv4si */
    case 4436:  /* mve_vsubq_m_n_uv8hi */
    case 4435:  /* mve_vsubq_m_n_sv8hi */
    case 4434:  /* mve_vsubq_m_n_uv16qi */
    case 4433:  /* mve_vsubq_m_n_sv16qi */
    case 4432:  /* mve_vsliq_m_n_sv4si */
    case 4431:  /* mve_vsliq_m_n_uv4si */
    case 4430:  /* mve_vsliq_m_n_sv8hi */
    case 4429:  /* mve_vsliq_m_n_uv8hi */
    case 4428:  /* mve_vsliq_m_n_sv16qi */
    case 4427:  /* mve_vsliq_m_n_uv16qi */
    case 4426:  /* mve_vshrq_m_n_uv4si */
    case 4425:  /* mve_vshrq_m_n_sv4si */
    case 4424:  /* mve_vshrq_m_n_uv8hi */
    case 4423:  /* mve_vshrq_m_n_sv8hi */
    case 4422:  /* mve_vshrq_m_n_uv16qi */
    case 4421:  /* mve_vshrq_m_n_sv16qi */
    case 4420:  /* mve_vshlq_m_n_uv4si */
    case 4419:  /* mve_vshlq_m_n_sv4si */
    case 4418:  /* mve_vshlq_m_n_uv8hi */
    case 4417:  /* mve_vshlq_m_n_sv8hi */
    case 4416:  /* mve_vshlq_m_n_uv16qi */
    case 4415:  /* mve_vshlq_m_n_sv16qi */
    case 4414:  /* mve_vrshrq_m_n_uv4si */
    case 4413:  /* mve_vrshrq_m_n_sv4si */
    case 4412:  /* mve_vrshrq_m_n_uv8hi */
    case 4411:  /* mve_vrshrq_m_n_sv8hi */
    case 4410:  /* mve_vrshrq_m_n_uv16qi */
    case 4409:  /* mve_vrshrq_m_n_sv16qi */
    case 4408:  /* mve_vrshlq_m_uv4si */
    case 4407:  /* mve_vrshlq_m_sv4si */
    case 4406:  /* mve_vrshlq_m_uv8hi */
    case 4405:  /* mve_vrshlq_m_sv8hi */
    case 4404:  /* mve_vrshlq_m_uv16qi */
    case 4403:  /* mve_vrshlq_m_sv16qi */
    case 4402:  /* mve_vrmulhq_m_sv4si */
    case 4401:  /* mve_vrmulhq_m_uv4si */
    case 4400:  /* mve_vrmulhq_m_sv8hi */
    case 4399:  /* mve_vrmulhq_m_uv8hi */
    case 4398:  /* mve_vrmulhq_m_sv16qi */
    case 4397:  /* mve_vrmulhq_m_uv16qi */
    case 4396:  /* mve_vrhaddq_m_sv4si */
    case 4395:  /* mve_vrhaddq_m_uv4si */
    case 4394:  /* mve_vrhaddq_m_sv8hi */
    case 4393:  /* mve_vrhaddq_m_uv8hi */
    case 4392:  /* mve_vrhaddq_m_sv16qi */
    case 4391:  /* mve_vrhaddq_m_uv16qi */
    case 4390:  /* mve_vqsubq_m_sv4si */
    case 4389:  /* mve_vqsubq_m_uv4si */
    case 4388:  /* mve_vqsubq_m_sv8hi */
    case 4387:  /* mve_vqsubq_m_uv8hi */
    case 4386:  /* mve_vqsubq_m_sv16qi */
    case 4385:  /* mve_vqsubq_m_uv16qi */
    case 4384:  /* mve_vqsubq_m_n_sv4si */
    case 4383:  /* mve_vqsubq_m_n_uv4si */
    case 4382:  /* mve_vqsubq_m_n_sv8hi */
    case 4381:  /* mve_vqsubq_m_n_uv8hi */
    case 4380:  /* mve_vqsubq_m_n_sv16qi */
    case 4379:  /* mve_vqsubq_m_n_uv16qi */
    case 4378:  /* mve_vqshlq_m_sv4si */
    case 4377:  /* mve_vqshlq_m_uv4si */
    case 4376:  /* mve_vqshlq_m_sv8hi */
    case 4375:  /* mve_vqshlq_m_uv8hi */
    case 4374:  /* mve_vqshlq_m_sv16qi */
    case 4373:  /* mve_vqshlq_m_uv16qi */
    case 4372:  /* mve_vqshlq_m_n_uv4si */
    case 4371:  /* mve_vqshlq_m_n_sv4si */
    case 4370:  /* mve_vqshlq_m_n_uv8hi */
    case 4369:  /* mve_vqshlq_m_n_sv8hi */
    case 4368:  /* mve_vqshlq_m_n_uv16qi */
    case 4367:  /* mve_vqshlq_m_n_sv16qi */
    case 4366:  /* mve_vqrshlq_m_sv4si */
    case 4365:  /* mve_vqrshlq_m_uv4si */
    case 4364:  /* mve_vqrshlq_m_sv8hi */
    case 4363:  /* mve_vqrshlq_m_uv8hi */
    case 4362:  /* mve_vqrshlq_m_sv16qi */
    case 4361:  /* mve_vqrshlq_m_uv16qi */
    case 4360:  /* mve_vqrdmlashq_m_n_sv4si */
    case 4359:  /* mve_vqrdmlashq_m_n_sv8hi */
    case 4358:  /* mve_vqrdmlashq_m_n_sv16qi */
    case 4357:  /* mve_vqrdmlahq_m_n_sv4si */
    case 4356:  /* mve_vqrdmlahq_m_n_sv8hi */
    case 4355:  /* mve_vqrdmlahq_m_n_sv16qi */
    case 4354:  /* mve_vqdmlashq_m_n_sv4si */
    case 4353:  /* mve_vqdmlashq_m_n_sv8hi */
    case 4352:  /* mve_vqdmlashq_m_n_sv16qi */
    case 4351:  /* mve_vqdmlahq_m_n_sv4si */
    case 4350:  /* mve_vqdmlahq_m_n_sv8hi */
    case 4349:  /* mve_vqdmlahq_m_n_sv16qi */
    case 4348:  /* mve_vqaddq_m_sv4si */
    case 4347:  /* mve_vqaddq_m_uv4si */
    case 4346:  /* mve_vqaddq_m_sv8hi */
    case 4345:  /* mve_vqaddq_m_uv8hi */
    case 4344:  /* mve_vqaddq_m_sv16qi */
    case 4343:  /* mve_vqaddq_m_uv16qi */
    case 4342:  /* mve_vqaddq_m_n_sv4si */
    case 4341:  /* mve_vqaddq_m_n_uv4si */
    case 4340:  /* mve_vqaddq_m_n_sv8hi */
    case 4339:  /* mve_vqaddq_m_n_uv8hi */
    case 4338:  /* mve_vqaddq_m_n_sv16qi */
    case 4337:  /* mve_vqaddq_m_n_uv16qi */
    case 4336:  /* mve_vorrq_m_uv4si */
    case 4335:  /* mve_vorrq_m_sv4si */
    case 4334:  /* mve_vorrq_m_uv8hi */
    case 4333:  /* mve_vorrq_m_sv8hi */
    case 4332:  /* mve_vorrq_m_uv16qi */
    case 4331:  /* mve_vorrq_m_sv16qi */
    case 4330:  /* mve_vornq_m_sv4si */
    case 4329:  /* mve_vornq_m_uv4si */
    case 4328:  /* mve_vornq_m_sv8hi */
    case 4327:  /* mve_vornq_m_uv8hi */
    case 4326:  /* mve_vornq_m_sv16qi */
    case 4325:  /* mve_vornq_m_uv16qi */
    case 4324:  /* mve_vmulq_m_uv4si */
    case 4323:  /* mve_vmulq_m_sv4si */
    case 4322:  /* mve_vmulq_m_uv8hi */
    case 4321:  /* mve_vmulq_m_sv8hi */
    case 4320:  /* mve_vmulq_m_uv16qi */
    case 4319:  /* mve_vmulq_m_sv16qi */
    case 4318:  /* mve_vmulq_m_n_sv4si */
    case 4317:  /* mve_vmulq_m_n_uv4si */
    case 4316:  /* mve_vmulq_m_n_sv8hi */
    case 4315:  /* mve_vmulq_m_n_uv8hi */
    case 4314:  /* mve_vmulq_m_n_sv16qi */
    case 4313:  /* mve_vmulq_m_n_uv16qi */
    case 4312:  /* mve_vmulltq_int_m_uv4si */
    case 4311:  /* mve_vmulltq_int_m_sv4si */
    case 4310:  /* mve_vmulltq_int_m_uv8hi */
    case 4309:  /* mve_vmulltq_int_m_sv8hi */
    case 4308:  /* mve_vmulltq_int_m_uv16qi */
    case 4307:  /* mve_vmulltq_int_m_sv16qi */
    case 4306:  /* mve_vmullbq_int_m_sv4si */
    case 4305:  /* mve_vmullbq_int_m_uv4si */
    case 4304:  /* mve_vmullbq_int_m_sv8hi */
    case 4303:  /* mve_vmullbq_int_m_uv8hi */
    case 4302:  /* mve_vmullbq_int_m_sv16qi */
    case 4301:  /* mve_vmullbq_int_m_uv16qi */
    case 4300:  /* mve_vmulhq_m_uv4si */
    case 4299:  /* mve_vmulhq_m_sv4si */
    case 4298:  /* mve_vmulhq_m_uv8hi */
    case 4297:  /* mve_vmulhq_m_sv8hi */
    case 4296:  /* mve_vmulhq_m_uv16qi */
    case 4295:  /* mve_vmulhq_m_sv16qi */
    case 4294:  /* mve_vmlasq_m_n_sv4si */
    case 4293:  /* mve_vmlasq_m_n_uv4si */
    case 4292:  /* mve_vmlasq_m_n_sv8hi */
    case 4291:  /* mve_vmlasq_m_n_uv8hi */
    case 4290:  /* mve_vmlasq_m_n_sv16qi */
    case 4289:  /* mve_vmlasq_m_n_uv16qi */
    case 4288:  /* mve_vmlaq_m_n_uv4si */
    case 4287:  /* mve_vmlaq_m_n_sv4si */
    case 4286:  /* mve_vmlaq_m_n_uv8hi */
    case 4285:  /* mve_vmlaq_m_n_sv8hi */
    case 4284:  /* mve_vmlaq_m_n_uv16qi */
    case 4283:  /* mve_vmlaq_m_n_sv16qi */
    case 4282:  /* mve_vmladavaq_p_sv4si */
    case 4281:  /* mve_vmladavaq_p_uv4si */
    case 4280:  /* mve_vmladavaq_p_sv8hi */
    case 4279:  /* mve_vmladavaq_p_uv8hi */
    case 4278:  /* mve_vmladavaq_p_sv16qi */
    case 4277:  /* mve_vmladavaq_p_uv16qi */
    case 4276:  /* mve_vminq_m_uv4si */
    case 4275:  /* mve_vminq_m_sv4si */
    case 4274:  /* mve_vminq_m_uv8hi */
    case 4273:  /* mve_vminq_m_sv8hi */
    case 4272:  /* mve_vminq_m_uv16qi */
    case 4271:  /* mve_vminq_m_sv16qi */
    case 4270:  /* mve_vmaxq_m_uv4si */
    case 4269:  /* mve_vmaxq_m_sv4si */
    case 4268:  /* mve_vmaxq_m_uv8hi */
    case 4267:  /* mve_vmaxq_m_sv8hi */
    case 4266:  /* mve_vmaxq_m_uv16qi */
    case 4265:  /* mve_vmaxq_m_sv16qi */
    case 4264:  /* mve_vhsubq_m_uv4si */
    case 4263:  /* mve_vhsubq_m_sv4si */
    case 4262:  /* mve_vhsubq_m_uv8hi */
    case 4261:  /* mve_vhsubq_m_sv8hi */
    case 4260:  /* mve_vhsubq_m_uv16qi */
    case 4259:  /* mve_vhsubq_m_sv16qi */
    case 4258:  /* mve_vhsubq_m_n_uv4si */
    case 4257:  /* mve_vhsubq_m_n_sv4si */
    case 4256:  /* mve_vhsubq_m_n_uv8hi */
    case 4255:  /* mve_vhsubq_m_n_sv8hi */
    case 4254:  /* mve_vhsubq_m_n_uv16qi */
    case 4253:  /* mve_vhsubq_m_n_sv16qi */
    case 4252:  /* mve_vhaddq_m_uv4si */
    case 4251:  /* mve_vhaddq_m_sv4si */
    case 4250:  /* mve_vhaddq_m_uv8hi */
    case 4249:  /* mve_vhaddq_m_sv8hi */
    case 4248:  /* mve_vhaddq_m_uv16qi */
    case 4247:  /* mve_vhaddq_m_sv16qi */
    case 4246:  /* mve_vhaddq_m_n_uv4si */
    case 4245:  /* mve_vhaddq_m_n_sv4si */
    case 4244:  /* mve_vhaddq_m_n_uv8hi */
    case 4243:  /* mve_vhaddq_m_n_sv8hi */
    case 4242:  /* mve_vhaddq_m_n_uv16qi */
    case 4241:  /* mve_vhaddq_m_n_sv16qi */
    case 4240:  /* mve_veorq_m_uv4si */
    case 4239:  /* mve_veorq_m_sv4si */
    case 4238:  /* mve_veorq_m_uv8hi */
    case 4237:  /* mve_veorq_m_sv8hi */
    case 4236:  /* mve_veorq_m_uv16qi */
    case 4235:  /* mve_veorq_m_sv16qi */
    case 4234:  /* mve_vcaddq_rot90_m_sv4si */
    case 4233:  /* mve_vcaddq_rot90_m_uv4si */
    case 4232:  /* mve_vcaddq_rot90_m_sv8hi */
    case 4231:  /* mve_vcaddq_rot90_m_uv8hi */
    case 4230:  /* mve_vcaddq_rot90_m_sv16qi */
    case 4229:  /* mve_vcaddq_rot90_m_uv16qi */
    case 4228:  /* mve_vcaddq_rot270_m_sv4si */
    case 4227:  /* mve_vcaddq_rot270_m_uv4si */
    case 4226:  /* mve_vcaddq_rot270_m_sv8hi */
    case 4225:  /* mve_vcaddq_rot270_m_uv8hi */
    case 4224:  /* mve_vcaddq_rot270_m_sv16qi */
    case 4223:  /* mve_vcaddq_rot270_m_uv16qi */
    case 4222:  /* mve_vbrsrq_m_n_sv4si */
    case 4221:  /* mve_vbrsrq_m_n_uv4si */
    case 4220:  /* mve_vbrsrq_m_n_sv8hi */
    case 4219:  /* mve_vbrsrq_m_n_uv8hi */
    case 4218:  /* mve_vbrsrq_m_n_sv16qi */
    case 4217:  /* mve_vbrsrq_m_n_uv16qi */
    case 4216:  /* mve_vbicq_m_sv4si */
    case 4215:  /* mve_vbicq_m_uv4si */
    case 4214:  /* mve_vbicq_m_sv8hi */
    case 4213:  /* mve_vbicq_m_uv8hi */
    case 4212:  /* mve_vbicq_m_sv16qi */
    case 4211:  /* mve_vbicq_m_uv16qi */
    case 4210:  /* mve_vandq_m_sv4si */
    case 4209:  /* mve_vandq_m_uv4si */
    case 4208:  /* mve_vandq_m_sv8hi */
    case 4207:  /* mve_vandq_m_uv8hi */
    case 4206:  /* mve_vandq_m_sv16qi */
    case 4205:  /* mve_vandq_m_uv16qi */
    case 4204:  /* mve_vaddq_m_sv4si */
    case 4203:  /* mve_vaddq_m_uv4si */
    case 4202:  /* mve_vaddq_m_sv8hi */
    case 4201:  /* mve_vaddq_m_uv8hi */
    case 4200:  /* mve_vaddq_m_sv16qi */
    case 4199:  /* mve_vaddq_m_uv16qi */
    case 4198:  /* mve_vaddq_m_n_uv4si */
    case 4197:  /* mve_vaddq_m_n_sv4si */
    case 4196:  /* mve_vaddq_m_n_uv8hi */
    case 4195:  /* mve_vaddq_m_n_sv8hi */
    case 4194:  /* mve_vaddq_m_n_uv16qi */
    case 4193:  /* mve_vaddq_m_n_sv16qi */
    case 4192:  /* mve_vabdq_m_uv4si */
    case 4191:  /* mve_vabdq_m_sv4si */
    case 4190:  /* mve_vabdq_m_uv8hi */
    case 4189:  /* mve_vabdq_m_sv8hi */
    case 4188:  /* mve_vabdq_m_uv16qi */
    case 4187:  /* mve_vabdq_m_sv16qi */
    case 4186:  /* mve_vcvtq_m_n_to_f_sv4sf */
    case 4185:  /* mve_vcvtq_m_n_to_f_uv4sf */
    case 4184:  /* mve_vcvtq_m_n_to_f_sv8hf */
    case 4183:  /* mve_vcvtq_m_n_to_f_uv8hf */
    case 4182:  /* mve_vsubq_m_sv4si */
    case 4181:  /* mve_vsubq_m_uv4si */
    case 4180:  /* mve_vsubq_m_sv8hi */
    case 4179:  /* mve_vsubq_m_uv8hi */
    case 4178:  /* mve_vsubq_m_sv16qi */
    case 4177:  /* mve_vsubq_m_uv16qi */
    case 4176:  /* mve_vsriq_m_n_uv4si */
    case 4175:  /* mve_vsriq_m_n_sv4si */
    case 4174:  /* mve_vsriq_m_n_uv8hi */
    case 4173:  /* mve_vsriq_m_n_sv8hi */
    case 4172:  /* mve_vsriq_m_n_uv16qi */
    case 4171:  /* mve_vsriq_m_n_sv16qi */
    case 4170:  /* mve_vshlq_m_uv4si */
    case 4169:  /* mve_vshlq_m_sv4si */
    case 4168:  /* mve_vshlq_m_uv8hi */
    case 4167:  /* mve_vshlq_m_sv8hi */
    case 4166:  /* mve_vshlq_m_uv16qi */
    case 4165:  /* mve_vshlq_m_sv16qi */
    case 4164:  /* mve_vqshluq_m_n_sv4si */
    case 4163:  /* mve_vqshluq_m_n_sv8hi */
    case 4162:  /* mve_vqshluq_m_n_sv16qi */
    case 4161:  /* mve_vabavq_p_uv4si */
    case 4160:  /* mve_vabavq_p_sv4si */
    case 4159:  /* mve_vabavq_p_uv8hi */
    case 4158:  /* mve_vabavq_p_sv8hi */
    case 4157:  /* mve_vabavq_p_uv16qi */
    case 4156:  /* mve_vabavq_p_sv16qi */
    case 4146:  /* mve_vcvtq_m_n_from_f_uv4si */
    case 4145:  /* mve_vcvtq_m_n_from_f_sv4si */
    case 4144:  /* mve_vcvtq_m_n_from_f_uv8hi */
    case 4143:  /* mve_vcvtq_m_n_from_f_sv8hi */
    case 2189:  /* neon_vqdmlsl_lanev2si */
    case 2188:  /* neon_vqdmlsl_lanev4hi */
    case 2187:  /* neon_vmlslu_lanev2si */
    case 2186:  /* neon_vmlsls_lanev2si */
    case 2185:  /* neon_vmlslu_lanev4hi */
    case 2184:  /* neon_vmlsls_lanev4hi */
    case 2183:  /* neon_vmls_lanev4sf */
    case 2182:  /* neon_vmls_lanev4si */
    case 2181:  /* neon_vmls_lanev8hi */
    case 2180:  /* neon_vmls_lanev2sf */
    case 2179:  /* neon_vmls_lanev2si */
    case 2178:  /* neon_vmls_lanev4hi */
    case 2177:  /* neon_vqdmlal_lanev2si */
    case 2176:  /* neon_vqdmlal_lanev4hi */
    case 2175:  /* neon_vmlalu_lanev2si */
    case 2174:  /* neon_vmlals_lanev2si */
    case 2173:  /* neon_vmlalu_lanev4hi */
    case 2172:  /* neon_vmlals_lanev4hi */
    case 2171:  /* neon_vmla_lanev4sf */
    case 2170:  /* neon_vmla_lanev4si */
    case 2169:  /* neon_vmla_lanev8hi */
    case 2168:  /* neon_vmla_lanev2sf */
    case 2167:  /* neon_vmla_lanev2si */
    case 2166:  /* neon_vmla_lanev4hi */
    case 2165:  /* neon_vqrdmlsh_lanev2si */
    case 2164:  /* neon_vqrdmlah_lanev2si */
    case 2163:  /* neon_vqrdmlsh_lanev4hi */
    case 2162:  /* neon_vqrdmlah_lanev4hi */
    case 2161:  /* neon_vqrdmlsh_lanev4si */
    case 2160:  /* neon_vqrdmlah_lanev4si */
    case 2159:  /* neon_vqrdmlsh_lanev8hi */
    case 2158:  /* neon_vqrdmlah_lanev8hi */
    case 912:  /* arm_vcx3di */
    case 911:  /* arm_vcx3si */
    case 910:  /* arm_vcx2adi */
    case 909:  /* arm_vcx2asi */
    case 144:  /* arm_cx3di */
    case 143:  /* arm_cx3si */
    case 142:  /* arm_cx2adi */
    case 141:  /* arm_cx2asi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 3));
      break;

    case 4923:  /* arm_vcx1qv16qi */
    case 4915:  /* mve_srshrl_di */
    case 4914:  /* mve_srshr_si */
    case 4912:  /* mve_urshr_si */
    case 4910:  /* mve_urshrl_di */
    case 4908:  /* mve_sqrshr_si */
    case 4907:  /* mve_uqrshl_si */
    case 4906:  /* mve_sqrshrl_sat48_di */
    case 4905:  /* mve_sqrshrl_sat64_di */
    case 4904:  /* mve_uqrshll_sat48_di */
    case 4903:  /* mve_uqrshll_sat64_di */
    case 4770:  /* mve_vstrwq_p_uv4si */
    case 4769:  /* mve_vstrwq_p_sv4si */
    case 4768:  /* mve_vstrwq_p_fv4sf */
    case 4746:  /* mve_vstrhq_p_uv4si */
    case 4745:  /* mve_vstrhq_p_sv4si */
    case 4744:  /* mve_vstrhq_p_uv8hi */
    case 4743:  /* mve_vstrhq_p_sv8hi */
    case 4742:  /* mve_vstrhq_p_fv8hf */
    case 4737:  /* mve_vldrwq_gather_shifted_offset_uv4si */
    case 4736:  /* mve_vldrwq_gather_shifted_offset_sv4si */
    case 4735:  /* mve_vldrwq_gather_shifted_offset_fv4sf */
    case 4731:  /* mve_vldrwq_gather_offset_uv4si */
    case 4730:  /* mve_vldrwq_gather_offset_sv4si */
    case 4729:  /* mve_vldrwq_gather_offset_fv4sf */
    case 4727:  /* mve_vldrwq_gather_base_fv4sf */
    case 4725:  /* mve_vldrhq_gather_shifted_offset_fv8hf */
    case 4723:  /* mve_vldrhq_gather_offset_fv8hf */
    case 4720:  /* mve_vldrdq_gather_shifted_offset_uv2di */
    case 4719:  /* mve_vldrdq_gather_shifted_offset_sv2di */
    case 4716:  /* mve_vldrdq_gather_offset_uv2di */
    case 4715:  /* mve_vldrdq_gather_offset_sv2di */
    case 4712:  /* mve_vldrdq_gather_base_uv2di */
    case 4711:  /* mve_vldrdq_gather_base_sv2di */
    case 4710:  /* mve_vldrwq_z_uv4si */
    case 4709:  /* mve_vldrwq_z_sv4si */
    case 4708:  /* mve_vldrwq_z_fv4sf */
    case 4704:  /* mve_vldrhq_z_uv4si */
    case 4703:  /* mve_vldrhq_z_sv4si */
    case 4702:  /* mve_vldrhq_z_uv8hi */
    case 4701:  /* mve_vldrhq_z_sv8hi */
    case 4700:  /* mve_vldrhq_z_fv8hf */
    case 4691:  /* mve_vldrhq_gather_shifted_offset_uv4si */
    case 4690:  /* mve_vldrhq_gather_shifted_offset_sv4si */
    case 4689:  /* mve_vldrhq_gather_shifted_offset_uv8hi */
    case 4688:  /* mve_vldrhq_gather_shifted_offset_sv8hi */
    case 4683:  /* mve_vldrhq_gather_offset_uv4si */
    case 4682:  /* mve_vldrhq_gather_offset_sv4si */
    case 4681:  /* mve_vldrhq_gather_offset_uv8hi */
    case 4680:  /* mve_vldrhq_gather_offset_sv8hi */
    case 4676:  /* mve_vldrbq_z_uv4si */
    case 4675:  /* mve_vldrbq_z_sv4si */
    case 4674:  /* mve_vldrbq_z_uv8hi */
    case 4673:  /* mve_vldrbq_z_sv8hi */
    case 4672:  /* mve_vldrbq_z_uv16qi */
    case 4671:  /* mve_vldrbq_z_sv16qi */
    case 4664:  /* mve_vstrbq_p_uv4si */
    case 4663:  /* mve_vstrbq_p_sv4si */
    case 4662:  /* mve_vstrbq_p_uv8hi */
    case 4661:  /* mve_vstrbq_p_sv8hi */
    case 4660:  /* mve_vstrbq_p_uv16qi */
    case 4659:  /* mve_vstrbq_p_sv16qi */
    case 4650:  /* mve_vldrwq_gather_base_uv4si */
    case 4649:  /* mve_vldrwq_gather_base_sv4si */
    case 4642:  /* mve_vldrbq_gather_offset_uv4si */
    case 4641:  /* mve_vldrbq_gather_offset_sv4si */
    case 4640:  /* mve_vldrbq_gather_offset_uv8hi */
    case 4639:  /* mve_vldrbq_gather_offset_sv8hi */
    case 4638:  /* mve_vldrbq_gather_offset_uv16qi */
    case 4637:  /* mve_vldrbq_gather_offset_sv16qi */
    case 3669:  /* mve_vrmlaldavhq_sv4si */
    case 3668:  /* mve_vrmlaldavhq_uv4si */
    case 3667:  /* mve_vmullbq_poly_pv8hi */
    case 3666:  /* mve_vmullbq_poly_pv16qi */
    case 3665:  /* mve_vmulltq_poly_pv8hi */
    case 3664:  /* mve_vmulltq_poly_pv16qi */
    case 3661:  /* mve_vshlltq_n_sv8hi */
    case 3660:  /* mve_vshlltq_n_uv8hi */
    case 3659:  /* mve_vshlltq_n_sv16qi */
    case 3658:  /* mve_vshlltq_n_uv16qi */
    case 3657:  /* mve_vshllbq_n_uv8hi */
    case 3656:  /* mve_vshllbq_n_sv8hi */
    case 3655:  /* mve_vshllbq_n_uv16qi */
    case 3654:  /* mve_vshllbq_n_sv16qi */
    case 3653:  /* mve_vrmlsldavhxq_sv4si */
    case 3652:  /* mve_vrmlsldavhq_sv4si */
    case 3651:  /* mve_vrmlaldavhxq_sv4si */
    case 3650:  /* mve_vqmovuntq_sv4si */
    case 3649:  /* mve_vqmovuntq_sv8hi */
    case 3648:  /* mve_vqmovunbq_sv4si */
    case 3647:  /* mve_vqmovunbq_sv8hi */
    case 3646:  /* mve_vqmovntq_sv4si */
    case 3645:  /* mve_vqmovntq_uv4si */
    case 3644:  /* mve_vqmovntq_sv8hi */
    case 3643:  /* mve_vqmovntq_uv8hi */
    case 3642:  /* mve_vqmovnbq_sv4si */
    case 3641:  /* mve_vqmovnbq_uv4si */
    case 3640:  /* mve_vqmovnbq_sv8hi */
    case 3639:  /* mve_vqmovnbq_uv8hi */
    case 3638:  /* mve_vqdmulltq_sv4si */
    case 3637:  /* mve_vqdmulltq_sv8hi */
    case 3636:  /* mve_vqdmulltq_n_sv4si */
    case 3635:  /* mve_vqdmulltq_n_sv8hi */
    case 3634:  /* mve_vqdmullbq_sv4si */
    case 3633:  /* mve_vqdmullbq_sv8hi */
    case 3632:  /* mve_vqdmullbq_n_sv4si */
    case 3631:  /* mve_vqdmullbq_n_sv8hi */
    case 3630:  /* mve_vorrq_n_sv4si */
    case 3629:  /* mve_vorrq_n_uv4si */
    case 3628:  /* mve_vorrq_n_sv8hi */
    case 3627:  /* mve_vorrq_n_uv8hi */
    case 3622:  /* mve_vmulq_n_fv4sf */
    case 3621:  /* mve_vmulq_n_fv8hf */
    case 3618:  /* mve_vmovntq_uv4si */
    case 3617:  /* mve_vmovntq_sv4si */
    case 3616:  /* mve_vmovntq_uv8hi */
    case 3615:  /* mve_vmovntq_sv8hi */
    case 3614:  /* mve_vmovnbq_sv4si */
    case 3613:  /* mve_vmovnbq_uv4si */
    case 3612:  /* mve_vmovnbq_sv8hi */
    case 3611:  /* mve_vmovnbq_uv8hi */
    case 3610:  /* mve_vmlsldavxq_sv4si */
    case 3609:  /* mve_vmlsldavxq_sv8hi */
    case 3608:  /* mve_vmlsldavq_sv4si */
    case 3607:  /* mve_vmlsldavq_sv8hi */
    case 3606:  /* mve_vmlaldavxq_sv4si */
    case 3605:  /* mve_vmlaldavxq_sv8hi */
    case 3604:  /* mve_vmlaldavq_sv4si */
    case 3603:  /* mve_vmlaldavq_uv4si */
    case 3602:  /* mve_vmlaldavq_sv8hi */
    case 3601:  /* mve_vmlaldavq_uv8hi */
    case 3600:  /* mve_vminnmvq_fv4sf */
    case 3599:  /* mve_vminnmvq_fv8hf */
    case 3596:  /* mve_vminnmavq_fv4sf */
    case 3595:  /* mve_vminnmavq_fv8hf */
    case 3594:  /* mve_vminnmaq_fv4sf */
    case 3593:  /* mve_vminnmaq_fv8hf */
    case 3592:  /* mve_vmaxnmvq_fv4sf */
    case 3591:  /* mve_vmaxnmvq_fv8hf */
    case 3588:  /* mve_vmaxnmavq_fv4sf */
    case 3587:  /* mve_vmaxnmavq_fv8hf */
    case 3586:  /* mve_vmaxnmaq_fv4sf */
    case 3585:  /* mve_vmaxnmaq_fv8hf */
    case 3582:  /* mve_vcvttq_f16_f32v8hf */
    case 3581:  /* mve_vcvtbq_f16_f32v8hf */
    case 3580:  /* mve_vctp64q_mhi */
    case 3579:  /* mve_vctp32q_mhi */
    case 3578:  /* mve_vctp16q_mhi */
    case 3577:  /* mve_vctp8q_mhi */
    case 3576:  /* mve_vcmulq_rot270v4sf */
    case 3575:  /* mve_vcmulq_rot180v4sf */
    case 3574:  /* mve_vcmulq_rot90v4sf */
    case 3573:  /* mve_vcmulqv4sf */
    case 3572:  /* mve_vcmulq_rot270v8hf */
    case 3571:  /* mve_vcmulq_rot180v8hf */
    case 3570:  /* mve_vcmulq_rot90v8hf */
    case 3569:  /* mve_vcmulqv8hf */
    case 3568:  /* mve_vcmpneq_n_fv4sf */
    case 3567:  /* mve_vcmpneq_n_fv8hf */
    case 3566:  /* mve_vcmpneq_fv4sf */
    case 3565:  /* mve_vcmpneq_fv8hf */
    case 3564:  /* mve_vcmpltq_n_fv4sf */
    case 3563:  /* mve_vcmpltq_n_fv8hf */
    case 3562:  /* mve_vcmpltq_fv4sf */
    case 3561:  /* mve_vcmpltq_fv8hf */
    case 3560:  /* mve_vcmpleq_n_fv4sf */
    case 3559:  /* mve_vcmpleq_n_fv8hf */
    case 3558:  /* mve_vcmpleq_fv4sf */
    case 3557:  /* mve_vcmpleq_fv8hf */
    case 3556:  /* mve_vcmpgtq_n_fv4sf */
    case 3555:  /* mve_vcmpgtq_n_fv8hf */
    case 3554:  /* mve_vcmpgtq_fv4sf */
    case 3553:  /* mve_vcmpgtq_fv8hf */
    case 3552:  /* mve_vcmpgeq_n_fv4sf */
    case 3551:  /* mve_vcmpgeq_n_fv8hf */
    case 3550:  /* mve_vcmpgeq_fv4sf */
    case 3549:  /* mve_vcmpgeq_fv8hf */
    case 3548:  /* mve_vcmpeqq_n_fv4sf */
    case 3547:  /* mve_vcmpeqq_n_fv8hf */
    case 3546:  /* mve_vcmpeqq_fv4sf */
    case 3545:  /* mve_vcmpeqq_fv8hf */
    case 3544:  /* mve_vcaddq_rot270v4sf */
    case 3543:  /* mve_vcaddq_rot90v4sf */
    case 3542:  /* mve_vcaddq_rot270v8hf */
    case 3541:  /* mve_vcaddq_rot90v8hf */
    case 3540:  /* mve_vbicq_n_uv4si */
    case 3539:  /* mve_vbicq_n_sv4si */
    case 3538:  /* mve_vbicq_n_uv8hi */
    case 3537:  /* mve_vbicq_n_sv8hi */
    case 3532:  /* mve_vaddq_n_fv4sf */
    case 3531:  /* mve_vaddq_n_fv8hf */
    case 3530:  /* mve_vaddlvaq_uv4si */
    case 3529:  /* mve_vaddlvaq_sv4si */
    case 3528:  /* mve_vabdq_fv4sf */
    case 3527:  /* mve_vabdq_fv8hf */
    case 3523:  /* mve_vsubq_uv4si */
    case 3522:  /* mve_vsubq_sv4si */
    case 3521:  /* mve_vsubq_uv8hi */
    case 3520:  /* mve_vsubq_sv8hi */
    case 3519:  /* mve_vsubq_uv16qi */
    case 3518:  /* mve_vsubq_sv16qi */
    case 3517:  /* mve_vsubq_n_uv4si */
    case 3516:  /* mve_vsubq_n_sv4si */
    case 3515:  /* mve_vsubq_n_uv8hi */
    case 3514:  /* mve_vsubq_n_sv8hi */
    case 3513:  /* mve_vsubq_n_uv16qi */
    case 3512:  /* mve_vsubq_n_sv16qi */
    case 3511:  /* mve_vshlq_r_uv4si */
    case 3510:  /* mve_vshlq_r_sv4si */
    case 3509:  /* mve_vshlq_r_uv8hi */
    case 3508:  /* mve_vshlq_r_sv8hi */
    case 3507:  /* mve_vshlq_r_uv16qi */
    case 3506:  /* mve_vshlq_r_sv16qi */
    case 3505:  /* mve_vshlq_n_sv4si */
    case 3504:  /* mve_vshlq_n_uv4si */
    case 3503:  /* mve_vshlq_n_sv8hi */
    case 3502:  /* mve_vshlq_n_uv8hi */
    case 3501:  /* mve_vshlq_n_sv16qi */
    case 3500:  /* mve_vshlq_n_uv16qi */
    case 3499:  /* mve_vrshrq_n_uv4si */
    case 3498:  /* mve_vrshrq_n_sv4si */
    case 3497:  /* mve_vrshrq_n_uv8hi */
    case 3496:  /* mve_vrshrq_n_sv8hi */
    case 3495:  /* mve_vrshrq_n_uv16qi */
    case 3494:  /* mve_vrshrq_n_sv16qi */
    case 3493:  /* mve_vrshlq_uv4si */
    case 3492:  /* mve_vrshlq_sv4si */
    case 3491:  /* mve_vrshlq_uv8hi */
    case 3490:  /* mve_vrshlq_sv8hi */
    case 3489:  /* mve_vrshlq_uv16qi */
    case 3488:  /* mve_vrshlq_sv16qi */
    case 3487:  /* mve_vrshlq_n_sv4si */
    case 3486:  /* mve_vrshlq_n_uv4si */
    case 3485:  /* mve_vrshlq_n_sv8hi */
    case 3484:  /* mve_vrshlq_n_uv8hi */
    case 3483:  /* mve_vrshlq_n_sv16qi */
    case 3482:  /* mve_vrshlq_n_uv16qi */
    case 3481:  /* mve_vrmulhq_uv4si */
    case 3480:  /* mve_vrmulhq_sv4si */
    case 3479:  /* mve_vrmulhq_uv8hi */
    case 3478:  /* mve_vrmulhq_sv8hi */
    case 3477:  /* mve_vrmulhq_uv16qi */
    case 3476:  /* mve_vrmulhq_sv16qi */
    case 3475:  /* mve_vrhaddq_uv4si */
    case 3474:  /* mve_vrhaddq_sv4si */
    case 3473:  /* mve_vrhaddq_uv8hi */
    case 3472:  /* mve_vrhaddq_sv8hi */
    case 3471:  /* mve_vrhaddq_uv16qi */
    case 3470:  /* mve_vrhaddq_sv16qi */
    case 3469:  /* mve_vqsubq_sv4si */
    case 3468:  /* mve_vqsubq_uv4si */
    case 3467:  /* mve_vqsubq_sv8hi */
    case 3466:  /* mve_vqsubq_uv8hi */
    case 3465:  /* mve_vqsubq_sv16qi */
    case 3464:  /* mve_vqsubq_uv16qi */
    case 3463:  /* mve_vqsubq_n_uv4si */
    case 3462:  /* mve_vqsubq_n_sv4si */
    case 3461:  /* mve_vqsubq_n_uv8hi */
    case 3460:  /* mve_vqsubq_n_sv8hi */
    case 3459:  /* mve_vqsubq_n_uv16qi */
    case 3458:  /* mve_vqsubq_n_sv16qi */
    case 3457:  /* mve_vqshluq_n_sv4si */
    case 3456:  /* mve_vqshluq_n_sv8hi */
    case 3455:  /* mve_vqshluq_n_sv16qi */
    case 3454:  /* mve_vqshlq_uv4si */
    case 3453:  /* mve_vqshlq_sv4si */
    case 3452:  /* mve_vqshlq_uv8hi */
    case 3451:  /* mve_vqshlq_sv8hi */
    case 3450:  /* mve_vqshlq_uv16qi */
    case 3449:  /* mve_vqshlq_sv16qi */
    case 3448:  /* mve_vqshlq_r_sv4si */
    case 3447:  /* mve_vqshlq_r_uv4si */
    case 3446:  /* mve_vqshlq_r_sv8hi */
    case 3445:  /* mve_vqshlq_r_uv8hi */
    case 3444:  /* mve_vqshlq_r_sv16qi */
    case 3443:  /* mve_vqshlq_r_uv16qi */
    case 3442:  /* mve_vqshlq_n_uv4si */
    case 3441:  /* mve_vqshlq_n_sv4si */
    case 3440:  /* mve_vqshlq_n_uv8hi */
    case 3439:  /* mve_vqshlq_n_sv8hi */
    case 3438:  /* mve_vqshlq_n_uv16qi */
    case 3437:  /* mve_vqshlq_n_sv16qi */
    case 3436:  /* mve_vqrshlq_uv4si */
    case 3435:  /* mve_vqrshlq_sv4si */
    case 3434:  /* mve_vqrshlq_uv8hi */
    case 3433:  /* mve_vqrshlq_sv8hi */
    case 3432:  /* mve_vqrshlq_uv16qi */
    case 3431:  /* mve_vqrshlq_sv16qi */
    case 3430:  /* mve_vqrshlq_n_uv4si */
    case 3429:  /* mve_vqrshlq_n_sv4si */
    case 3428:  /* mve_vqrshlq_n_uv8hi */
    case 3427:  /* mve_vqrshlq_n_sv8hi */
    case 3426:  /* mve_vqrshlq_n_uv16qi */
    case 3425:  /* mve_vqrshlq_n_sv16qi */
    case 3424:  /* mve_vqrdmulhq_sv4si */
    case 3423:  /* mve_vqrdmulhq_sv8hi */
    case 3422:  /* mve_vqrdmulhq_sv16qi */
    case 3421:  /* mve_vqrdmulhq_n_sv4si */
    case 3420:  /* mve_vqrdmulhq_n_sv8hi */
    case 3419:  /* mve_vqrdmulhq_n_sv16qi */
    case 3418:  /* mve_vqdmulhq_sv4si */
    case 3417:  /* mve_vqdmulhq_sv8hi */
    case 3416:  /* mve_vqdmulhq_sv16qi */
    case 3415:  /* mve_vqdmulhq_n_sv4si */
    case 3414:  /* mve_vqdmulhq_n_sv8hi */
    case 3413:  /* mve_vqdmulhq_n_sv16qi */
    case 3412:  /* mve_vqaddq_sv4si */
    case 3411:  /* mve_vqaddq_uv4si */
    case 3410:  /* mve_vqaddq_sv8hi */
    case 3409:  /* mve_vqaddq_uv8hi */
    case 3408:  /* mve_vqaddq_sv16qi */
    case 3407:  /* mve_vqaddq_uv16qi */
    case 3406:  /* mve_vqaddq_n_uv4si */
    case 3405:  /* mve_vqaddq_n_sv4si */
    case 3404:  /* mve_vqaddq_n_uv8hi */
    case 3403:  /* mve_vqaddq_n_sv8hi */
    case 3402:  /* mve_vqaddq_n_uv16qi */
    case 3401:  /* mve_vqaddq_n_sv16qi */
    case 3391:  /* mve_vmulq_sv4si */
    case 3390:  /* mve_vmulq_uv4si */
    case 3389:  /* mve_vmulq_sv8hi */
    case 3388:  /* mve_vmulq_uv8hi */
    case 3387:  /* mve_vmulq_sv16qi */
    case 3386:  /* mve_vmulq_uv16qi */
    case 3385:  /* mve_vmulq_n_sv4si */
    case 3384:  /* mve_vmulq_n_uv4si */
    case 3383:  /* mve_vmulq_n_sv8hi */
    case 3382:  /* mve_vmulq_n_uv8hi */
    case 3381:  /* mve_vmulq_n_sv16qi */
    case 3380:  /* mve_vmulq_n_uv16qi */
    case 3379:  /* mve_vmulltq_int_sv4si */
    case 3378:  /* mve_vmulltq_int_uv4si */
    case 3377:  /* mve_vmulltq_int_sv8hi */
    case 3376:  /* mve_vmulltq_int_uv8hi */
    case 3375:  /* mve_vmulltq_int_sv16qi */
    case 3374:  /* mve_vmulltq_int_uv16qi */
    case 3373:  /* mve_vmullbq_int_sv4si */
    case 3372:  /* mve_vmullbq_int_uv4si */
    case 3371:  /* mve_vmullbq_int_sv8hi */
    case 3370:  /* mve_vmullbq_int_uv8hi */
    case 3369:  /* mve_vmullbq_int_sv16qi */
    case 3368:  /* mve_vmullbq_int_uv16qi */
    case 3367:  /* mve_vmulhq_uv4si */
    case 3366:  /* mve_vmulhq_sv4si */
    case 3365:  /* mve_vmulhq_uv8hi */
    case 3364:  /* mve_vmulhq_sv8hi */
    case 3363:  /* mve_vmulhq_uv16qi */
    case 3362:  /* mve_vmulhq_sv16qi */
    case 3361:  /* mve_vmlsdavxq_sv4si */
    case 3360:  /* mve_vmlsdavxq_sv8hi */
    case 3359:  /* mve_vmlsdavxq_sv16qi */
    case 3358:  /* mve_vmlsdavq_sv4si */
    case 3357:  /* mve_vmlsdavq_sv8hi */
    case 3356:  /* mve_vmlsdavq_sv16qi */
    case 3355:  /* mve_vmladavxq_sv4si */
    case 3354:  /* mve_vmladavxq_sv8hi */
    case 3353:  /* mve_vmladavxq_sv16qi */
    case 3352:  /* mve_vmladavq_sv4si */
    case 3351:  /* mve_vmladavq_uv4si */
    case 3350:  /* mve_vmladavq_sv8hi */
    case 3349:  /* mve_vmladavq_uv8hi */
    case 3348:  /* mve_vmladavq_sv16qi */
    case 3347:  /* mve_vmladavq_uv16qi */
    case 3346:  /* mve_vminvq_sv4si */
    case 3345:  /* mve_vminvq_uv4si */
    case 3344:  /* mve_vminvq_sv8hi */
    case 3343:  /* mve_vminvq_uv8hi */
    case 3342:  /* mve_vminvq_sv16qi */
    case 3341:  /* mve_vminvq_uv16qi */
    case 3334:  /* mve_vminavq_sv4si */
    case 3333:  /* mve_vminavq_sv8hi */
    case 3332:  /* mve_vminavq_sv16qi */
    case 3331:  /* mve_vminaq_sv4si */
    case 3330:  /* mve_vminaq_sv8hi */
    case 3329:  /* mve_vminaq_sv16qi */
    case 3328:  /* mve_vmaxvq_sv4si */
    case 3327:  /* mve_vmaxvq_uv4si */
    case 3326:  /* mve_vmaxvq_sv8hi */
    case 3325:  /* mve_vmaxvq_uv8hi */
    case 3324:  /* mve_vmaxvq_sv16qi */
    case 3323:  /* mve_vmaxvq_uv16qi */
    case 3316:  /* mve_vmaxavq_sv4si */
    case 3315:  /* mve_vmaxavq_sv8hi */
    case 3314:  /* mve_vmaxavq_sv16qi */
    case 3313:  /* mve_vmaxaq_sv4si */
    case 3312:  /* mve_vmaxaq_sv8hi */
    case 3311:  /* mve_vmaxaq_sv16qi */
    case 3310:  /* mve_vhsubq_uv4si */
    case 3309:  /* mve_vhsubq_sv4si */
    case 3308:  /* mve_vhsubq_uv8hi */
    case 3307:  /* mve_vhsubq_sv8hi */
    case 3306:  /* mve_vhsubq_uv16qi */
    case 3305:  /* mve_vhsubq_sv16qi */
    case 3304:  /* mve_vhsubq_n_sv4si */
    case 3303:  /* mve_vhsubq_n_uv4si */
    case 3302:  /* mve_vhsubq_n_sv8hi */
    case 3301:  /* mve_vhsubq_n_uv8hi */
    case 3300:  /* mve_vhsubq_n_sv16qi */
    case 3299:  /* mve_vhsubq_n_uv16qi */
    case 3298:  /* mve_vhcaddq_rot90_sv4si */
    case 3297:  /* mve_vhcaddq_rot90_sv8hi */
    case 3296:  /* mve_vhcaddq_rot90_sv16qi */
    case 3295:  /* mve_vhcaddq_rot270_sv4si */
    case 3294:  /* mve_vhcaddq_rot270_sv8hi */
    case 3293:  /* mve_vhcaddq_rot270_sv16qi */
    case 3292:  /* mve_vhaddq_uv4si */
    case 3291:  /* mve_vhaddq_sv4si */
    case 3290:  /* mve_vhaddq_uv8hi */
    case 3289:  /* mve_vhaddq_sv8hi */
    case 3288:  /* mve_vhaddq_uv16qi */
    case 3287:  /* mve_vhaddq_sv16qi */
    case 3286:  /* mve_vhaddq_n_sv4si */
    case 3285:  /* mve_vhaddq_n_uv4si */
    case 3284:  /* mve_vhaddq_n_sv8hi */
    case 3283:  /* mve_vhaddq_n_uv8hi */
    case 3282:  /* mve_vhaddq_n_sv16qi */
    case 3281:  /* mve_vhaddq_n_uv16qi */
    case 3277:  /* mve_vcmpneq_n_sv4si */
    case 3276:  /* mve_vcmpneq_n_uv4si */
    case 3275:  /* mve_vcmpneq_n_sv8hi */
    case 3274:  /* mve_vcmpneq_n_uv8hi */
    case 3273:  /* mve_vcmpneq_n_sv16qi */
    case 3272:  /* mve_vcmpneq_n_uv16qi */
    case 3271:  /* mve_vcmpltq_sv4si */
    case 3270:  /* mve_vcmpltq_sv8hi */
    case 3269:  /* mve_vcmpltq_sv16qi */
    case 3268:  /* mve_vcmpltq_n_sv4si */
    case 3267:  /* mve_vcmpltq_n_sv8hi */
    case 3266:  /* mve_vcmpltq_n_sv16qi */
    case 3265:  /* mve_vcmpleq_sv4si */
    case 3264:  /* mve_vcmpleq_sv8hi */
    case 3263:  /* mve_vcmpleq_sv16qi */
    case 3262:  /* mve_vcmpleq_n_sv4si */
    case 3261:  /* mve_vcmpleq_n_sv8hi */
    case 3260:  /* mve_vcmpleq_n_sv16qi */
    case 3259:  /* mve_vcmphiq_uv4si */
    case 3258:  /* mve_vcmphiq_uv8hi */
    case 3257:  /* mve_vcmphiq_uv16qi */
    case 3256:  /* mve_vcmphiq_n_uv4si */
    case 3255:  /* mve_vcmphiq_n_uv8hi */
    case 3254:  /* mve_vcmphiq_n_uv16qi */
    case 3253:  /* mve_vcmpgtq_sv4si */
    case 3252:  /* mve_vcmpgtq_sv8hi */
    case 3251:  /* mve_vcmpgtq_sv16qi */
    case 3250:  /* mve_vcmpgtq_n_sv4si */
    case 3249:  /* mve_vcmpgtq_n_sv8hi */
    case 3248:  /* mve_vcmpgtq_n_sv16qi */
    case 3247:  /* mve_vcmpgeq_sv4si */
    case 3246:  /* mve_vcmpgeq_sv8hi */
    case 3245:  /* mve_vcmpgeq_sv16qi */
    case 3244:  /* mve_vcmpgeq_n_sv4si */
    case 3243:  /* mve_vcmpgeq_n_sv8hi */
    case 3242:  /* mve_vcmpgeq_n_sv16qi */
    case 3241:  /* mve_vcmpeqq_sv4si */
    case 3240:  /* mve_vcmpeqq_uv4si */
    case 3239:  /* mve_vcmpeqq_sv8hi */
    case 3238:  /* mve_vcmpeqq_uv8hi */
    case 3237:  /* mve_vcmpeqq_sv16qi */
    case 3236:  /* mve_vcmpeqq_uv16qi */
    case 3235:  /* mve_vcmpeqq_n_uv4si */
    case 3234:  /* mve_vcmpeqq_n_sv4si */
    case 3233:  /* mve_vcmpeqq_n_uv8hi */
    case 3232:  /* mve_vcmpeqq_n_sv8hi */
    case 3231:  /* mve_vcmpeqq_n_uv16qi */
    case 3230:  /* mve_vcmpeqq_n_sv16qi */
    case 3229:  /* mve_vcmpcsq_uv4si */
    case 3228:  /* mve_vcmpcsq_uv8hi */
    case 3227:  /* mve_vcmpcsq_uv16qi */
    case 3226:  /* mve_vcmpcsq_n_uv4si */
    case 3225:  /* mve_vcmpcsq_n_uv8hi */
    case 3224:  /* mve_vcmpcsq_n_uv16qi */
    case 3223:  /* mve_vcaddq_rot270v4si */
    case 3222:  /* mve_vcaddq_rot90v4si */
    case 3221:  /* mve_vcaddq_rot270v8hi */
    case 3220:  /* mve_vcaddq_rot90v8hi */
    case 3219:  /* mve_vcaddq_rot270v16qi */
    case 3218:  /* mve_vcaddq_rot90v16qi */
    case 3217:  /* mve_vbrsrq_n_sv4si */
    case 3216:  /* mve_vbrsrq_n_uv4si */
    case 3215:  /* mve_vbrsrq_n_sv8hi */
    case 3214:  /* mve_vbrsrq_n_uv8hi */
    case 3213:  /* mve_vbrsrq_n_sv16qi */
    case 3212:  /* mve_vbrsrq_n_uv16qi */
    case 3205:  /* mve_vaddvq_p_sv4si */
    case 3204:  /* mve_vaddvq_p_uv4si */
    case 3203:  /* mve_vaddvq_p_sv8hi */
    case 3202:  /* mve_vaddvq_p_uv8hi */
    case 3201:  /* mve_vaddvq_p_sv16qi */
    case 3200:  /* mve_vaddvq_p_uv16qi */
    case 3199:  /* mve_vaddvaq_uv4si */
    case 3198:  /* mve_vaddvaq_sv4si */
    case 3197:  /* mve_vaddvaq_uv8hi */
    case 3196:  /* mve_vaddvaq_sv8hi */
    case 3195:  /* mve_vaddvaq_uv16qi */
    case 3194:  /* mve_vaddvaq_sv16qi */
    case 3193:  /* mve_vaddq_n_uv4si */
    case 3192:  /* mve_vaddq_n_sv4si */
    case 3191:  /* mve_vaddq_n_uv8hi */
    case 3190:  /* mve_vaddq_n_sv8hi */
    case 3189:  /* mve_vaddq_n_uv16qi */
    case 3188:  /* mve_vaddq_n_sv16qi */
    case 3187:  /* mve_vabdq_uv4si */
    case 3186:  /* mve_vabdq_sv4si */
    case 3185:  /* mve_vabdq_uv8hi */
    case 3184:  /* mve_vabdq_sv8hi */
    case 3183:  /* mve_vabdq_uv16qi */
    case 3182:  /* mve_vabdq_sv16qi */
    case 3181:  /* mve_vcmpneq_sv4si */
    case 3180:  /* mve_vcmpneq_uv4si */
    case 3179:  /* mve_vcmpneq_sv8hi */
    case 3178:  /* mve_vcmpneq_uv8hi */
    case 3177:  /* mve_vcmpneq_sv16qi */
    case 3176:  /* mve_vcmpneq_uv16qi */
    case 3175:  /* mve_vaddlvq_p_uv4si */
    case 3174:  /* mve_vaddlvq_p_sv4si */
    case 3173:  /* mve_vcvtq_n_from_f_uv4si */
    case 3172:  /* mve_vcvtq_n_from_f_sv4si */
    case 3171:  /* mve_vcvtq_n_from_f_uv8hi */
    case 3170:  /* mve_vcvtq_n_from_f_sv8hi */
    case 3163:  /* mve_vshrq_n_uv4si */
    case 3162:  /* mve_vshrq_n_sv4si */
    case 3161:  /* mve_vshrq_n_uv8hi */
    case 3160:  /* mve_vshrq_n_sv8hi */
    case 3159:  /* mve_vshrq_n_uv16qi */
    case 3158:  /* mve_vshrq_n_sv16qi */
    case 3157:  /* mve_vcreateq_sv2di */
    case 3156:  /* mve_vcreateq_uv2di */
    case 3155:  /* mve_vcreateq_sv4si */
    case 3154:  /* mve_vcreateq_uv4si */
    case 3153:  /* mve_vcreateq_sv8hi */
    case 3152:  /* mve_vcreateq_uv8hi */
    case 3151:  /* mve_vcreateq_sv16qi */
    case 3150:  /* mve_vcreateq_uv16qi */
    case 3149:  /* mve_vcreateq_fv4sf */
    case 3148:  /* mve_vcreateq_fv8hf */
    case 3147:  /* mve_vcvtq_n_to_f_uv4sf */
    case 3146:  /* mve_vcvtq_n_to_f_sv4sf */
    case 3145:  /* mve_vcvtq_n_to_f_uv8hf */
    case 3144:  /* mve_vcvtq_n_to_f_sv8hf */
    case 3143:  /* mve_vbrsrq_n_fv4sf */
    case 3142:  /* mve_vbrsrq_n_fv8hf */
    case 3141:  /* mve_vsubq_n_fv4sf */
    case 3140:  /* mve_vsubq_n_fv8hf */
    case 2844:  /* atomic_storesi */
    case 2843:  /* atomic_storehi */
    case 2842:  /* atomic_storeqi */
    case 2841:  /* atomic_loadsi */
    case 2840:  /* atomic_loadhi */
    case 2839:  /* atomic_loadqi */
    case 2834:  /* crypto_vmullp64 */
    case 2828:  /* crypto_sha256su0 */
    case 2827:  /* crypto_sha1su1 */
    case 2809:  /* neon_vbfcvtv4sf_highv8bf */
    case 2741:  /* neon_vst4_lanev8bf */
    case 2740:  /* neon_vst4_lanev4sf */
    case 2739:  /* neon_vst4_lanev4si */
    case 2738:  /* neon_vst4_lanev8hf */
    case 2737:  /* neon_vst4_lanev8hi */
    case 2736:  /* neon_vst4_lanev2sf */
    case 2735:  /* neon_vst4_lanev2si */
    case 2734:  /* neon_vst4_lanev4bf */
    case 2733:  /* neon_vst4_lanev4hf */
    case 2732:  /* neon_vst4_lanev4hi */
    case 2731:  /* neon_vst4_lanev8qi */
    case 2692:  /* neon_vld4qbv4sf */
    case 2691:  /* neon_vld4qbv4si */
    case 2690:  /* neon_vld4qbv8bf */
    case 2689:  /* neon_vld4qbv8hf */
    case 2688:  /* neon_vld4qbv8hi */
    case 2687:  /* neon_vld4qbv16qi */
    case 2673:  /* neon_vst3_lanev8bf */
    case 2672:  /* neon_vst3_lanev4sf */
    case 2671:  /* neon_vst3_lanev4si */
    case 2670:  /* neon_vst3_lanev8hf */
    case 2669:  /* neon_vst3_lanev8hi */
    case 2668:  /* neon_vst3_lanev2sf */
    case 2667:  /* neon_vst3_lanev2si */
    case 2666:  /* neon_vst3_lanev4bf */
    case 2665:  /* neon_vst3_lanev4hf */
    case 2664:  /* neon_vst3_lanev4hi */
    case 2663:  /* neon_vst3_lanev8qi */
    case 2624:  /* neon_vld3qbv4sf */
    case 2623:  /* neon_vld3qbv4si */
    case 2622:  /* neon_vld3qbv8bf */
    case 2621:  /* neon_vld3qbv8hf */
    case 2620:  /* neon_vld3qbv8hi */
    case 2619:  /* neon_vld3qbv16qi */
    case 2605:  /* neon_vst2_lanev8bf */
    case 2604:  /* neon_vst2_lanev4sf */
    case 2603:  /* neon_vst2_lanev4si */
    case 2602:  /* neon_vst2_lanev8hf */
    case 2601:  /* neon_vst2_lanev8hi */
    case 2600:  /* neon_vst2_lanev2sf */
    case 2599:  /* neon_vst2_lanev2si */
    case 2598:  /* neon_vst2_lanev4bf */
    case 2597:  /* neon_vst2_lanev4hf */
    case 2596:  /* neon_vst2_lanev4hi */
    case 2595:  /* neon_vst2_lanev8qi */
    case 2549:  /* neon_vst1_lanev2di */
    case 2548:  /* neon_vst1_lanev4sf */
    case 2547:  /* neon_vst1_lanev4si */
    case 2546:  /* neon_vst1_lanev8bf */
    case 2545:  /* neon_vst1_lanev8hf */
    case 2544:  /* neon_vst1_lanev8hi */
    case 2543:  /* neon_vst1_lanev16qi */
    case 2542:  /* neon_vst1_lanedi */
    case 2541:  /* neon_vst1_lanev2sf */
    case 2540:  /* neon_vst1_lanev2si */
    case 2539:  /* neon_vst1_lanev4bf */
    case 2538:  /* neon_vst1_lanev4hf */
    case 2537:  /* neon_vst1_lanev4hi */
    case 2536:  /* neon_vst1_lanev8qi */
    case 2447:  /* neon_vcombinev16qi */
    case 2446:  /* neon_vtbl2v16qi */
    case 2445:  /* neon_vtbl1v16qi */
    case 2444:  /* neon_vtbl4v8qi */
    case 2443:  /* neon_vtbl3v8qi */
    case 2442:  /* neon_vtbl2v8qi */
    case 2441:  /* neon_vtbl1v8qi */
    case 2392:  /* neon_vshllu_nv2si */
    case 2391:  /* neon_vshlls_nv2si */
    case 2390:  /* neon_vshllu_nv4hi */
    case 2389:  /* neon_vshlls_nv4hi */
    case 2388:  /* neon_vshllu_nv8qi */
    case 2387:  /* neon_vshlls_nv8qi */
    case 2386:  /* neon_vqshlu_nv2di */
    case 2385:  /* neon_vqshlu_ndi */
    case 2384:  /* neon_vqshlu_nv4si */
    case 2383:  /* neon_vqshlu_nv2si */
    case 2382:  /* neon_vqshlu_nv8hi */
    case 2381:  /* neon_vqshlu_nv4hi */
    case 2380:  /* neon_vqshlu_nv16qi */
    case 2379:  /* neon_vqshlu_nv8qi */
    case 2378:  /* neon_vqshl_u_nv2di */
    case 2377:  /* neon_vqshl_s_nv2di */
    case 2376:  /* neon_vqshl_u_ndi */
    case 2375:  /* neon_vqshl_s_ndi */
    case 2374:  /* neon_vqshl_u_nv4si */
    case 2373:  /* neon_vqshl_s_nv4si */
    case 2372:  /* neon_vqshl_u_nv2si */
    case 2371:  /* neon_vqshl_s_nv2si */
    case 2370:  /* neon_vqshl_u_nv8hi */
    case 2369:  /* neon_vqshl_s_nv8hi */
    case 2368:  /* neon_vqshl_u_nv4hi */
    case 2367:  /* neon_vqshl_s_nv4hi */
    case 2366:  /* neon_vqshl_u_nv16qi */
    case 2365:  /* neon_vqshl_s_nv16qi */
    case 2364:  /* neon_vqshl_u_nv8qi */
    case 2363:  /* neon_vqshl_s_nv8qi */
    case 2362:  /* neon_vshl_nv2di */
    case 2361:  /* neon_vshl_ndi */
    case 2360:  /* neon_vshl_nv4si */
    case 2359:  /* neon_vshl_nv2si */
    case 2358:  /* neon_vshl_nv8hi */
    case 2357:  /* neon_vshl_nv4hi */
    case 2356:  /* neon_vshl_nv16qi */
    case 2355:  /* neon_vshl_nv8qi */
    case 2354:  /* neon_vqrshrun_nv2di */
    case 2353:  /* neon_vqshrun_nv2di */
    case 2352:  /* neon_vqrshrun_nv4si */
    case 2351:  /* neon_vqshrun_nv4si */
    case 2350:  /* neon_vqrshrun_nv8hi */
    case 2349:  /* neon_vqshrun_nv8hi */
    case 2348:  /* neon_vqrshrnu_nv2di */
    case 2347:  /* neon_vqrshrns_nv2di */
    case 2346:  /* neon_vqshrnu_nv2di */
    case 2345:  /* neon_vqshrns_nv2di */
    case 2344:  /* neon_vqrshrnu_nv4si */
    case 2343:  /* neon_vqrshrns_nv4si */
    case 2342:  /* neon_vqshrnu_nv4si */
    case 2341:  /* neon_vqshrns_nv4si */
    case 2340:  /* neon_vqrshrnu_nv8hi */
    case 2339:  /* neon_vqrshrns_nv8hi */
    case 2338:  /* neon_vqshrnu_nv8hi */
    case 2337:  /* neon_vqshrns_nv8hi */
    case 2336:  /* neon_vrshrn_nv2di */
    case 2335:  /* neon_vshrn_nv2di */
    case 2334:  /* neon_vrshrn_nv4si */
    case 2333:  /* neon_vshrn_nv4si */
    case 2332:  /* neon_vrshrn_nv8hi */
    case 2331:  /* neon_vshrn_nv8hi */
    case 2330:  /* neon_vrshru_nv2di */
    case 2329:  /* neon_vrshrs_nv2di */
    case 2328:  /* neon_vshru_nv2di */
    case 2327:  /* neon_vshrs_nv2di */
    case 2326:  /* neon_vrshru_ndi */
    case 2325:  /* neon_vrshrs_ndi */
    case 2324:  /* neon_vshru_ndi */
    case 2323:  /* neon_vshrs_ndi */
    case 2322:  /* neon_vrshru_nv4si */
    case 2321:  /* neon_vrshrs_nv4si */
    case 2320:  /* neon_vshru_nv4si */
    case 2319:  /* neon_vshrs_nv4si */
    case 2318:  /* neon_vrshru_nv2si */
    case 2317:  /* neon_vrshrs_nv2si */
    case 2316:  /* neon_vshru_nv2si */
    case 2315:  /* neon_vshrs_nv2si */
    case 2314:  /* neon_vrshru_nv8hi */
    case 2313:  /* neon_vrshrs_nv8hi */
    case 2312:  /* neon_vshru_nv8hi */
    case 2311:  /* neon_vshrs_nv8hi */
    case 2310:  /* neon_vrshru_nv4hi */
    case 2309:  /* neon_vrshrs_nv4hi */
    case 2308:  /* neon_vshru_nv4hi */
    case 2307:  /* neon_vshrs_nv4hi */
    case 2306:  /* neon_vrshru_nv16qi */
    case 2305:  /* neon_vrshrs_nv16qi */
    case 2304:  /* neon_vshru_nv16qi */
    case 2303:  /* neon_vshrs_nv16qi */
    case 2302:  /* neon_vrshru_nv8qi */
    case 2301:  /* neon_vrshrs_nv8qi */
    case 2300:  /* neon_vshru_nv8qi */
    case 2299:  /* neon_vshrs_nv8qi */
    case 2298:  /* neon_vqrshluv2di */
    case 2297:  /* neon_vqrshlsv2di */
    case 2296:  /* neon_vqshluv2di */
    case 2295:  /* neon_vqshlsv2di */
    case 2294:  /* neon_vqrshludi */
    case 2293:  /* neon_vqrshlsdi */
    case 2292:  /* neon_vqshludi */
    case 2291:  /* neon_vqshlsdi */
    case 2290:  /* neon_vqrshluv4si */
    case 2289:  /* neon_vqrshlsv4si */
    case 2288:  /* neon_vqshluv4si */
    case 2287:  /* neon_vqshlsv4si */
    case 2286:  /* neon_vqrshluv2si */
    case 2285:  /* neon_vqrshlsv2si */
    case 2284:  /* neon_vqshluv2si */
    case 2283:  /* neon_vqshlsv2si */
    case 2282:  /* neon_vqrshluv8hi */
    case 2281:  /* neon_vqrshlsv8hi */
    case 2280:  /* neon_vqshluv8hi */
    case 2279:  /* neon_vqshlsv8hi */
    case 2278:  /* neon_vqrshluv4hi */
    case 2277:  /* neon_vqrshlsv4hi */
    case 2276:  /* neon_vqshluv4hi */
    case 2275:  /* neon_vqshlsv4hi */
    case 2274:  /* neon_vqrshluv16qi */
    case 2273:  /* neon_vqrshlsv16qi */
    case 2272:  /* neon_vqshluv16qi */
    case 2271:  /* neon_vqshlsv16qi */
    case 2270:  /* neon_vqrshluv8qi */
    case 2269:  /* neon_vqrshlsv8qi */
    case 2268:  /* neon_vqshluv8qi */
    case 2267:  /* neon_vqshlsv8qi */
    case 2266:  /* neon_vrshluv2di */
    case 2265:  /* neon_vrshlsv2di */
    case 2264:  /* neon_vshluv2di */
    case 2263:  /* neon_vshlsv2di */
    case 2262:  /* neon_vrshludi */
    case 2261:  /* neon_vrshlsdi */
    case 2260:  /* neon_vshludi */
    case 2259:  /* neon_vshlsdi */
    case 2258:  /* neon_vrshluv4si */
    case 2257:  /* neon_vrshlsv4si */
    case 2256:  /* neon_vshluv4si */
    case 2255:  /* neon_vshlsv4si */
    case 2254:  /* neon_vrshluv2si */
    case 2253:  /* neon_vrshlsv2si */
    case 2252:  /* neon_vshluv2si */
    case 2251:  /* neon_vshlsv2si */
    case 2250:  /* neon_vrshluv8hi */
    case 2249:  /* neon_vrshlsv8hi */
    case 2248:  /* neon_vshluv8hi */
    case 2247:  /* neon_vshlsv8hi */
    case 2246:  /* neon_vrshluv4hi */
    case 2245:  /* neon_vrshlsv4hi */
    case 2244:  /* neon_vshluv4hi */
    case 2243:  /* neon_vshlsv4hi */
    case 2242:  /* neon_vrshluv16qi */
    case 2241:  /* neon_vrshlsv16qi */
    case 2240:  /* neon_vshluv16qi */
    case 2239:  /* neon_vshlsv16qi */
    case 2238:  /* neon_vrshluv8qi */
    case 2237:  /* neon_vrshlsv8qi */
    case 2236:  /* neon_vshluv8qi */
    case 2235:  /* neon_vshlsv8qi */
    case 2101:  /* neon_vcvtu_nv8hi */
    case 2100:  /* neon_vcvts_nv8hi */
    case 2099:  /* neon_vcvtu_nv4hi */
    case 2098:  /* neon_vcvts_nv4hi */
    case 2097:  /* neon_vcvtu_nv4si */
    case 2096:  /* neon_vcvts_nv4si */
    case 2095:  /* neon_vcvtu_nv2si */
    case 2094:  /* neon_vcvts_nv2si */
    case 2093:  /* neon_vcvtu_nv4hf */
    case 2092:  /* neon_vcvts_nv4hf */
    case 2091:  /* neon_vcvtu_nv8hf */
    case 2090:  /* neon_vcvts_nv8hf */
    case 2089:  /* neon_vcvtu_nv4sf */
    case 2088:  /* neon_vcvts_nv4sf */
    case 2087:  /* neon_vcvtu_nv2sf */
    case 2086:  /* neon_vcvts_nv2sf */
    case 1895:  /* neon_vcadd270v4sf */
    case 1894:  /* neon_vcadd90v4sf */
    case 1893:  /* neon_vcadd270v2sf */
    case 1892:  /* neon_vcadd90v2sf */
    case 1891:  /* neon_vcadd270v8hf */
    case 1890:  /* neon_vcadd90v8hf */
    case 1889:  /* neon_vcadd270v4hf */
    case 1888:  /* neon_vcadd90v4hf */
    case 1876:  /* neon_vrsqrtsv4hf */
    case 1875:  /* neon_vrsqrtsv8hf */
    case 1874:  /* neon_vrsqrtsv4sf */
    case 1873:  /* neon_vrsqrtsv2sf */
    case 1872:  /* neon_vrecpsv4hf */
    case 1871:  /* neon_vrecpsv8hf */
    case 1870:  /* neon_vrecpsv4sf */
    case 1869:  /* neon_vrecpsv2sf */
    case 1868:  /* neon_vpminfv4sf */
    case 1867:  /* neon_vpmaxfv4sf */
    case 1866:  /* neon_vpminfv2sf */
    case 1865:  /* neon_vpmaxfv2sf */
    case 1864:  /* neon_vpminuv2si */
    case 1863:  /* neon_vpminsv2si */
    case 1862:  /* neon_vpmaxuv2si */
    case 1861:  /* neon_vpmaxsv2si */
    case 1860:  /* neon_vpminuv4hi */
    case 1859:  /* neon_vpminsv4hi */
    case 1858:  /* neon_vpmaxuv4hi */
    case 1857:  /* neon_vpmaxsv4hi */
    case 1856:  /* neon_vpminuv8qi */
    case 1855:  /* neon_vpminsv8qi */
    case 1854:  /* neon_vpmaxuv8qi */
    case 1853:  /* neon_vpmaxsv8qi */
    case 1852:  /* neon_vpadaluv4si */
    case 1851:  /* neon_vpadalsv4si */
    case 1850:  /* neon_vpadaluv2si */
    case 1849:  /* neon_vpadalsv2si */
    case 1848:  /* neon_vpadaluv8hi */
    case 1847:  /* neon_vpadalsv8hi */
    case 1846:  /* neon_vpadaluv4hi */
    case 1845:  /* neon_vpadalsv4hi */
    case 1844:  /* neon_vpadaluv16qi */
    case 1843:  /* neon_vpadalsv16qi */
    case 1842:  /* neon_vpadaluv8qi */
    case 1841:  /* neon_vpadalsv8qi */
    case 1828:  /* fminv4sf3 */
    case 1827:  /* fmaxv4sf3 */
    case 1826:  /* fminv2sf3 */
    case 1825:  /* fmaxv2sf3 */
    case 1824:  /* neon_vminnmv4sf */
    case 1823:  /* neon_vmaxnmv4sf */
    case 1822:  /* neon_vminnmv2sf */
    case 1821:  /* neon_vmaxnmv2sf */
    case 1820:  /* neon_vminnmv4hf */
    case 1819:  /* neon_vmaxnmv4hf */
    case 1818:  /* neon_vminnmv8hf */
    case 1817:  /* neon_vmaxnmv8hf */
    case 1816:  /* neon_vpminfv4hf */
    case 1815:  /* neon_vpmaxfv4hf */
    case 1814:  /* neon_vminfv4hf */
    case 1813:  /* neon_vmaxfv4hf */
    case 1812:  /* neon_vminfv8hf */
    case 1811:  /* neon_vmaxfv8hf */
    case 1810:  /* neon_vminfv4sf */
    case 1809:  /* neon_vmaxfv4sf */
    case 1808:  /* neon_vminfv2sf */
    case 1807:  /* neon_vmaxfv2sf */
    case 1806:  /* neon_vminuv4si */
    case 1805:  /* neon_vminsv4si */
    case 1804:  /* neon_vmaxuv4si */
    case 1803:  /* neon_vmaxsv4si */
    case 1802:  /* neon_vminuv2si */
    case 1801:  /* neon_vminsv2si */
    case 1800:  /* neon_vmaxuv2si */
    case 1799:  /* neon_vmaxsv2si */
    case 1798:  /* neon_vminuv8hi */
    case 1797:  /* neon_vminsv8hi */
    case 1796:  /* neon_vmaxuv8hi */
    case 1795:  /* neon_vmaxsv8hi */
    case 1794:  /* neon_vminuv4hi */
    case 1793:  /* neon_vminsv4hi */
    case 1792:  /* neon_vmaxuv4hi */
    case 1791:  /* neon_vmaxsv4hi */
    case 1790:  /* neon_vminuv16qi */
    case 1789:  /* neon_vminsv16qi */
    case 1788:  /* neon_vmaxuv16qi */
    case 1787:  /* neon_vmaxsv16qi */
    case 1786:  /* neon_vminuv8qi */
    case 1785:  /* neon_vminsv8qi */
    case 1784:  /* neon_vmaxuv8qi */
    case 1783:  /* neon_vmaxsv8qi */
    case 1764:  /* neon_vabdluv2si */
    case 1763:  /* neon_vabdlsv2si */
    case 1762:  /* neon_vabdluv4hi */
    case 1761:  /* neon_vabdlsv4hi */
    case 1760:  /* neon_vabdluv8qi */
    case 1759:  /* neon_vabdlsv8qi */
    case 1758:  /* neon_vabdfv4sf */
    case 1757:  /* neon_vabdfv2sf */
    case 1756:  /* neon_vabdv4hf */
    case 1755:  /* neon_vabdv8hf */
    case 1754:  /* neon_vabduv4si */
    case 1753:  /* neon_vabdsv4si */
    case 1752:  /* neon_vabduv2si */
    case 1751:  /* neon_vabdsv2si */
    case 1750:  /* neon_vabduv8hi */
    case 1749:  /* neon_vabdsv8hi */
    case 1748:  /* neon_vabduv4hi */
    case 1747:  /* neon_vabdsv4hi */
    case 1746:  /* neon_vabduv16qi */
    case 1745:  /* neon_vabdsv16qi */
    case 1744:  /* neon_vabduv8qi */
    case 1743:  /* neon_vabdsv8qi */
    case 1742:  /* neon_vtstv4si */
    case 1741:  /* neon_vtstv2si */
    case 1740:  /* neon_vtstv8hi */
    case 1739:  /* neon_vtstv4hi */
    case 1738:  /* neon_vtstv16qi */
    case 1737:  /* neon_vtstv8qi */
    case 1736:  /* neon_vcaltv4hf_fp16insn_unspec */
    case 1735:  /* neon_vcalev4hf_fp16insn_unspec */
    case 1734:  /* neon_vcagtv4hf_fp16insn_unspec */
    case 1733:  /* neon_vcagev4hf_fp16insn_unspec */
    case 1732:  /* neon_vcaltv8hf_fp16insn_unspec */
    case 1731:  /* neon_vcalev8hf_fp16insn_unspec */
    case 1730:  /* neon_vcagtv8hf_fp16insn_unspec */
    case 1729:  /* neon_vcagev8hf_fp16insn_unspec */
    case 1720:  /* neon_vcagtv4sf_insn_unspec */
    case 1719:  /* neon_vcagev4sf_insn_unspec */
    case 1718:  /* neon_vcagtv2sf_insn_unspec */
    case 1717:  /* neon_vcagev2sf_insn_unspec */
    case 1700:  /* neon_vclev4hf_fp16insn_unspec */
    case 1699:  /* neon_vcltv4hf_fp16insn_unspec */
    case 1698:  /* neon_vcgev4hf_fp16insn_unspec */
    case 1697:  /* neon_vcgtv4hf_fp16insn_unspec */
    case 1696:  /* neon_vceqv4hf_fp16insn_unspec */
    case 1695:  /* neon_vclev8hf_fp16insn_unspec */
    case 1694:  /* neon_vcltv8hf_fp16insn_unspec */
    case 1693:  /* neon_vcgev8hf_fp16insn_unspec */
    case 1692:  /* neon_vcgtv8hf_fp16insn_unspec */
    case 1691:  /* neon_vceqv8hf_fp16insn_unspec */
    case 1680:  /* neon_vclev4sf_insn_unspec */
    case 1679:  /* neon_vcltv4sf_insn_unspec */
    case 1678:  /* neon_vcgev4sf_insn_unspec */
    case 1677:  /* neon_vcgtv4sf_insn_unspec */
    case 1676:  /* neon_vceqv4sf_insn_unspec */
    case 1675:  /* neon_vclev2sf_insn_unspec */
    case 1674:  /* neon_vcltv2sf_insn_unspec */
    case 1673:  /* neon_vcgev2sf_insn_unspec */
    case 1672:  /* neon_vcgtv2sf_insn_unspec */
    case 1671:  /* neon_vceqv2sf_insn_unspec */
    case 1630:  /* neon_vrsubhnv2di */
    case 1629:  /* neon_vsubhnv2di */
    case 1628:  /* neon_vrsubhnv4si */
    case 1627:  /* neon_vsubhnv4si */
    case 1626:  /* neon_vrsubhnv8hi */
    case 1625:  /* neon_vsubhnv8hi */
    case 1624:  /* neon_vhsubuv4si */
    case 1623:  /* neon_vhsubsv4si */
    case 1622:  /* neon_vhsubuv2si */
    case 1621:  /* neon_vhsubsv2si */
    case 1620:  /* neon_vhsubuv8hi */
    case 1619:  /* neon_vhsubsv8hi */
    case 1618:  /* neon_vhsubuv4hi */
    case 1617:  /* neon_vhsubsv4hi */
    case 1616:  /* neon_vhsubuv16qi */
    case 1615:  /* neon_vhsubsv16qi */
    case 1614:  /* neon_vhsubuv8qi */
    case 1613:  /* neon_vhsubsv8qi */
    case 1612:  /* neon_vqsubuv2di */
    case 1611:  /* neon_vqsubsv2di */
    case 1610:  /* neon_vqsubudi */
    case 1609:  /* neon_vqsubsdi */
    case 1608:  /* neon_vqsubuv4si */
    case 1607:  /* neon_vqsubsv4si */
    case 1606:  /* neon_vqsubuv2si */
    case 1605:  /* neon_vqsubsv2si */
    case 1604:  /* neon_vqsubuv8hi */
    case 1603:  /* neon_vqsubsv8hi */
    case 1602:  /* neon_vqsubuv4hi */
    case 1601:  /* neon_vqsubsv4hi */
    case 1600:  /* neon_vqsubuv16qi */
    case 1599:  /* neon_vqsubsv16qi */
    case 1598:  /* neon_vqsubuv8qi */
    case 1597:  /* neon_vqsubsv8qi */
    case 1596:  /* neon_vsubwuv2si */
    case 1595:  /* neon_vsubwsv2si */
    case 1594:  /* neon_vsubwuv4hi */
    case 1593:  /* neon_vsubwsv4hi */
    case 1592:  /* neon_vsubwuv8qi */
    case 1591:  /* neon_vsubwsv8qi */
    case 1590:  /* neon_vsubluv2si */
    case 1589:  /* neon_vsublsv2si */
    case 1588:  /* neon_vsubluv4hi */
    case 1587:  /* neon_vsublsv4hi */
    case 1586:  /* neon_vsubluv8qi */
    case 1585:  /* neon_vsublsv8qi */
    case 1584:  /* neon_vsubv4sf_unspec */
    case 1583:  /* neon_vsubv2sf_unspec */
    case 1582:  /* neon_vqdmullv2si */
    case 1581:  /* neon_vqdmullv4hi */
    case 1580:  /* neon_vmullpv2si */
    case 1579:  /* neon_vmulluv2si */
    case 1578:  /* neon_vmullsv2si */
    case 1577:  /* neon_vmullpv4hi */
    case 1576:  /* neon_vmulluv4hi */
    case 1575:  /* neon_vmullsv4hi */
    case 1574:  /* neon_vmullpv8qi */
    case 1573:  /* neon_vmulluv8qi */
    case 1572:  /* neon_vmullsv8qi */
    case 1559:  /* neon_vqrdmulhv4si */
    case 1558:  /* neon_vqdmulhv4si */
    case 1557:  /* neon_vqrdmulhv8hi */
    case 1556:  /* neon_vqdmulhv8hi */
    case 1555:  /* neon_vqrdmulhv2si */
    case 1554:  /* neon_vqdmulhv2si */
    case 1553:  /* neon_vqrdmulhv4hi */
    case 1552:  /* neon_vqdmulhv4hi */
    case 1497:  /* neon_vmulfv4sf */
    case 1496:  /* neon_vmulfv2sf */
    case 1495:  /* neon_vmulpv16qi */
    case 1494:  /* neon_vmulpv8qi */
    case 1493:  /* neon_vraddhnv2di */
    case 1492:  /* neon_vaddhnv2di */
    case 1491:  /* neon_vraddhnv4si */
    case 1490:  /* neon_vaddhnv4si */
    case 1489:  /* neon_vraddhnv8hi */
    case 1488:  /* neon_vaddhnv8hi */
    case 1487:  /* neon_vqadduv2di */
    case 1486:  /* neon_vqaddsv2di */
    case 1485:  /* neon_vqaddudi */
    case 1484:  /* neon_vqaddsdi */
    case 1483:  /* neon_vqadduv4si */
    case 1482:  /* neon_vqaddsv4si */
    case 1481:  /* neon_vqadduv2si */
    case 1480:  /* neon_vqaddsv2si */
    case 1479:  /* neon_vqadduv8hi */
    case 1478:  /* neon_vqaddsv8hi */
    case 1477:  /* neon_vqadduv4hi */
    case 1476:  /* neon_vqaddsv4hi */
    case 1475:  /* neon_vqadduv16qi */
    case 1474:  /* neon_vqaddsv16qi */
    case 1473:  /* neon_vqadduv8qi */
    case 1472:  /* neon_vqaddsv8qi */
    case 1471:  /* neon_vhadduv4si */
    case 1470:  /* neon_vhaddsv4si */
    case 1469:  /* neon_vrhadduv4si */
    case 1468:  /* neon_vrhaddsv4si */
    case 1467:  /* neon_vhadduv2si */
    case 1466:  /* neon_vhaddsv2si */
    case 1465:  /* neon_vrhadduv2si */
    case 1464:  /* neon_vrhaddsv2si */
    case 1463:  /* neon_vhadduv8hi */
    case 1462:  /* neon_vhaddsv8hi */
    case 1461:  /* neon_vrhadduv8hi */
    case 1460:  /* neon_vrhaddsv8hi */
    case 1459:  /* neon_vhadduv4hi */
    case 1458:  /* neon_vhaddsv4hi */
    case 1457:  /* neon_vrhadduv4hi */
    case 1456:  /* neon_vrhaddsv4hi */
    case 1455:  /* neon_vhadduv16qi */
    case 1454:  /* neon_vhaddsv16qi */
    case 1453:  /* neon_vrhadduv16qi */
    case 1452:  /* neon_vrhaddsv16qi */
    case 1451:  /* neon_vhadduv8qi */
    case 1450:  /* neon_vhaddsv8qi */
    case 1449:  /* neon_vrhadduv8qi */
    case 1448:  /* neon_vrhaddsv8qi */
    case 1447:  /* neon_vaddwuv2si */
    case 1446:  /* neon_vaddwsv2si */
    case 1445:  /* neon_vaddwuv4hi */
    case 1444:  /* neon_vaddwsv4hi */
    case 1443:  /* neon_vaddwuv8qi */
    case 1442:  /* neon_vaddwsv8qi */
    case 1441:  /* neon_vaddluv2si */
    case 1440:  /* neon_vaddlsv2si */
    case 1439:  /* neon_vaddluv4hi */
    case 1438:  /* neon_vaddlsv4hi */
    case 1437:  /* neon_vaddluv8qi */
    case 1436:  /* neon_vaddlsv8qi */
    case 1435:  /* neon_vaddv4sf_unspec */
    case 1434:  /* neon_vaddv2sf_unspec */
    case 1417:  /* neon_vpumaxv2si */
    case 1416:  /* neon_vpumaxv4hi */
    case 1415:  /* neon_vpumaxv8qi */
    case 1414:  /* neon_vpuminv2si */
    case 1413:  /* neon_vpuminv4hi */
    case 1412:  /* neon_vpuminv8qi */
    case 1411:  /* neon_vpsmaxv2sf */
    case 1410:  /* neon_vpsmaxv2si */
    case 1409:  /* neon_vpsmaxv4hi */
    case 1408:  /* neon_vpsmaxv8qi */
    case 1407:  /* neon_vpsminv2sf */
    case 1406:  /* neon_vpsminv2si */
    case 1405:  /* neon_vpsminv4hi */
    case 1404:  /* neon_vpsminv8qi */
    case 1403:  /* neon_vpaddv4hf */
    case 1402:  /* neon_vpadd_internalv2sf */
    case 1401:  /* neon_vpadd_internalv2si */
    case 1400:  /* neon_vpadd_internalv4hi */
    case 1399:  /* neon_vpadd_internalv8qi */
    case 1360:  /* ashlv2di3_unsigned */
    case 1359:  /* ashlv4si3_unsigned */
    case 1358:  /* ashlv2si3_unsigned */
    case 1357:  /* ashlv8hi3_unsigned */
    case 1356:  /* ashlv4hi3_unsigned */
    case 1355:  /* ashlv16qi3_unsigned */
    case 1354:  /* ashlv8qi3_unsigned */
    case 1353:  /* ashlv2di3_signed */
    case 1352:  /* ashlv4si3_signed */
    case 1351:  /* ashlv2si3_signed */
    case 1350:  /* ashlv8hi3_signed */
    case 1349:  /* ashlv4hi3_signed */
    case 1348:  /* ashlv16qi3_signed */
    case 1347:  /* ashlv8qi3_signed */
    case 904:  /* arm_vcx1di */
    case 903:  /* arm_vcx1si */
    case 898:  /* fmindf3 */
    case 897:  /* fmaxdf3 */
    case 896:  /* fminsf3 */
    case 895:  /* fmaxsf3 */
    case 894:  /* neon_vminnmhf */
    case 893:  /* neon_vmaxnmhf */
    case 826:  /* neon_vrsqrtshf */
    case 695:  /* iwmmxt_wqmulwmr */
    case 694:  /* iwmmxt_wqmulmr */
    case 693:  /* iwmmxt_wqmulwm */
    case 692:  /* iwmmxt_wqmulm */
    case 668:  /* iwmmxt_wsadhz */
    case 667:  /* iwmmxt_wsadbz */
    case 584:  /* gtv2si3 */
    case 583:  /* gtv4hi3 */
    case 582:  /* gtv8qi3 */
    case 581:  /* gtuv2si3 */
    case 580:  /* gtuv4hi3 */
    case 579:  /* gtuv8qi3 */
    case 578:  /* eqv2si3 */
    case 577:  /* eqv4hi3 */
    case 576:  /* eqv8qi3 */
    case 575:  /* iwmmxt_wshufh */
    case 558:  /* iwmmxt_wmacuz */
    case 556:  /* iwmmxt_wmacsz */
    case 511:  /* mve_vshlq_uv4si */
    case 510:  /* mve_vshlq_sv4si */
    case 509:  /* mve_vshlq_uv2si */
    case 508:  /* mve_vshlq_sv2si */
    case 507:  /* mve_vshlq_uv8hi */
    case 506:  /* mve_vshlq_sv8hi */
    case 505:  /* mve_vshlq_uv4hi */
    case 504:  /* mve_vshlq_sv4hi */
    case 503:  /* mve_vshlq_uv16qi */
    case 502:  /* mve_vshlq_sv16qi */
    case 501:  /* mve_vshlq_uv8qi */
    case 500:  /* mve_vshlq_sv8qi */
    case 420:  /* arm_crc32cw */
    case 419:  /* arm_crc32ch */
    case 418:  /* arm_crc32cb */
    case 417:  /* arm_crc32w */
    case 416:  /* arm_crc32h */
    case 415:  /* arm_crc32b */
    case 303:  /* probe_stack_range */
    case 254:  /* pic_load_addr_unified */
    case 250:  /* arm_sel */
    case 248:  /* arm_usat16_insn */
    case 246:  /* arm_ssat16_insn */
    case 244:  /* arm_smuadx_insn */
    case 242:  /* arm_smuad_insn */
    case 216:  /* arm_usad8 */
    case 215:  /* arm_uxtab16 */
    case 214:  /* arm_sxtab16 */
    case 213:  /* arm_smusdx */
    case 212:  /* arm_smusd */
    case 211:  /* arm_uqsub16 */
    case 210:  /* arm_uqsax */
    case 209:  /* arm_uqasx */
    case 208:  /* arm_uqadd16 */
    case 207:  /* arm_uhsub16 */
    case 206:  /* arm_uhsax */
    case 205:  /* arm_uhasx */
    case 204:  /* arm_uhadd16 */
    case 203:  /* arm_shsub16 */
    case 202:  /* arm_shsax */
    case 201:  /* arm_shasx */
    case 200:  /* arm_shadd16 */
    case 199:  /* arm_qsub16 */
    case 198:  /* arm_qsax */
    case 197:  /* arm_qasx */
    case 196:  /* arm_qadd16 */
    case 195:  /* arm_uqsub8 */
    case 194:  /* arm_uqadd8 */
    case 193:  /* arm_uhsub8 */
    case 192:  /* arm_uhadd8 */
    case 191:  /* arm_shsub8 */
    case 190:  /* arm_shadd8 */
    case 189:  /* arm_qsub8 */
    case 188:  /* arm_qadd8 */
    case 136:  /* arm_cx1di */
    case 135:  /* arm_cx1si */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 134:  /* *satsi_smax_shift */
    case 133:  /* *satsi_smin_shift */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      break;

    case 132:  /* satsi_smax_setq */
    case 130:  /* satsi_smin_setq */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      break;

    case 4851:  /* set_fpscr_nzcvqc */
    case 1050:  /* dls_insn */
    case 128:  /* arm_set_apsr */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 0));
      break;

    case 4850:  /* get_fpscr_nzcvqc */
    case 987:  /* *thumb2_pop_single */
    case 977:  /* *thumb1_movpc_insn */
    case 900:  /* get_fpscr */
    case 562:  /* iwmmxt_clrv2si */
    case 561:  /* iwmmxt_clrv4hi */
    case 560:  /* iwmmxt_clrv8qi */
    case 559:  /* iwmmxt_clrdi */
    case 399:  /* load_tp_hard */
    case 302:  /* probe_stack */
    case 300:  /* *check_arch2 */
    case 127:  /* arm_get_apsr */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      break;

    case 1012:  /* *thumb2_cond_sub */
    case 333:  /* *cond_sub */
    case 122:  /* *minmax_arithsi_non_canon */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 121:  /* *minmax_arithsi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      break;

    case 1027:  /* *thumb2_shiftsi3_short */
    case 1026:  /* *thumb2_alusi3_short */
    case 120:  /* *store_minmaxsi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 0), 1));
      break;

    case 1035:  /* *thumb2_mulsi_short */
    case 1032:  /* *thumb2_subsi_short */
    case 1031:  /* *thumb2_addsi_short */
    case 984:  /* *thumb2_uminsi3 */
    case 983:  /* *thumb32_umaxsi3 */
    case 982:  /* *thumb2_sminsi3 */
    case 981:  /* *thumb2_smaxsi3 */
    case 917:  /* *thumb_subdi3 */
    case 915:  /* *thumb1_adddi3 */
    case 126:  /* arm_qsub_setq_insn */
    case 124:  /* arm_qadd_setq_insn */
    case 119:  /* *arm_uminsi3 */
    case 118:  /* *arm_umaxsi3 */
    case 117:  /* *arm_smin_insn */
    case 115:  /* *arm_smax_insn */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 3074:  /* mve_vmvnq_uv4si */
    case 3073:  /* mve_vmvnq_uv8hi */
    case 3072:  /* mve_vmvnq_uv16qi */
    case 3071:  /* mve_vnegq_sv4si */
    case 3070:  /* mve_vnegq_sv8hi */
    case 3069:  /* mve_vnegq_sv16qi */
    case 3041:  /* mve_vnegq_fv4sf */
    case 3040:  /* mve_vnegq_fv8hf */
    case 3018:  /* *mve_vdupv2df */
    case 3017:  /* *mve_vdupv4sf */
    case 3016:  /* *mve_vdupv8hf */
    case 3015:  /* *mve_vdupv2di */
    case 3014:  /* *mve_vdupv4si */
    case 3013:  /* *mve_vdupv8hi */
    case 3012:  /* *mve_vdupv16qi */
    case 3003:  /* arm_usatsihi */
    case 2789:  /* neon_vec_pack_trunc_v2di */
    case 2788:  /* neon_vec_pack_trunc_v4si */
    case 2787:  /* neon_vec_pack_trunc_v8hi */
    case 2777:  /* neon_unpacku_v2si */
    case 2776:  /* neon_unpacks_v2si */
    case 2775:  /* neon_unpacku_v4hi */
    case 2774:  /* neon_unpacks_v4hi */
    case 2773:  /* neon_unpacku_v8qi */
    case 2772:  /* neon_unpacks_v8qi */
    case 2521:  /* neon_vld1_dupv2di */
    case 2520:  /* neon_vld1_dupv4sf */
    case 2519:  /* neon_vld1_dupv4si */
    case 2518:  /* neon_vld1_dupv8hf */
    case 2517:  /* neon_vld1_dupv8hi */
    case 2516:  /* neon_vld1_dupv16qi */
    case 2515:  /* neon_vld1_dupv2sf */
    case 2514:  /* neon_vld1_dupv2si */
    case 2513:  /* neon_vld1_dupv4bf */
    case 2512:  /* neon_vld1_dupv4hf */
    case 2511:  /* neon_vld1_dupv4hi */
    case 2510:  /* neon_vld1_dupv8qi */
    case 2067:  /* fixuns_truncv4sfv4si2 */
    case 2066:  /* fixuns_truncv2sfv2si2 */
    case 2065:  /* fix_truncv4sfv4si2 */
    case 2064:  /* fix_truncv2sfv2si2 */
    case 2063:  /* floatunsv4siv4sf2 */
    case 2062:  /* floatunsv2siv2sf2 */
    case 2061:  /* floatv4siv4sf2 */
    case 2060:  /* floatv2siv2sf2 */
    case 2026:  /* neon_vdup_nv2di */
    case 2025:  /* neon_vdup_nv4sf */
    case 2024:  /* neon_vdup_nv4si */
    case 2023:  /* neon_vdup_nv2sf */
    case 2022:  /* neon_vdup_nv2si */
    case 2021:  /* neon_vdup_nv8bf */
    case 2020:  /* neon_vdup_nv4bf */
    case 2019:  /* neon_vdup_nv8hf */
    case 2018:  /* neon_vdup_nv4hf */
    case 2017:  /* neon_vdup_nv8hi */
    case 2016:  /* neon_vdup_nv16qi */
    case 2015:  /* neon_vdup_nv4hi */
    case 2014:  /* neon_vdup_nv8qi */
    case 1985:  /* popcountv16qi2 */
    case 1984:  /* popcountv8qi2 */
    case 1983:  /* clzv4si2 */
    case 1982:  /* clzv2si2 */
    case 1981:  /* clzv8hi2 */
    case 1980:  /* clzv4hi2 */
    case 1979:  /* clzv16qi2 */
    case 1978:  /* clzv8qi2 */
    case 1887:  /* neon_bswapv2di */
    case 1886:  /* neon_bswapv4si */
    case 1885:  /* neon_bswapv2si */
    case 1884:  /* neon_bswapv8hi */
    case 1883:  /* neon_bswapv4hi */
    case 1292:  /* neon_negv4hf2 */
    case 1291:  /* neon_absv4hf2 */
    case 1290:  /* neon_negv8hf2 */
    case 1289:  /* neon_absv8hf2 */
    case 1288:  /* neon_negv4sf2 */
    case 1287:  /* neon_negv2sf2 */
    case 1286:  /* neon_negv4si2 */
    case 1285:  /* neon_negv2si2 */
    case 1284:  /* neon_negv8hi2 */
    case 1283:  /* neon_negv4hi2 */
    case 1282:  /* neon_negv16qi2 */
    case 1281:  /* neon_negv8qi2 */
    case 1280:  /* absv4sf2 */
    case 1279:  /* absv2sf2 */
    case 1278:  /* absv4si2 */
    case 1277:  /* absv2si2 */
    case 1276:  /* absv8hi2 */
    case 1275:  /* absv4hi2 */
    case 1274:  /* absv16qi2 */
    case 1273:  /* absv8qi2 */
    case 1272:  /* one_cmplv2di2_neon */
    case 1271:  /* one_cmplv4sf2_neon */
    case 1270:  /* one_cmplv2sf2_neon */
    case 1269:  /* one_cmplv8hf2_neon */
    case 1268:  /* one_cmplv4hf2_neon */
    case 1267:  /* one_cmplv4si2_neon */
    case 1266:  /* one_cmplv2si2_neon */
    case 1265:  /* one_cmplv8hi2_neon */
    case 1264:  /* one_cmplv4hi2_neon */
    case 1263:  /* one_cmplv16qi2_neon */
    case 1262:  /* one_cmplv8qi2_neon */
    case 1020:  /* thumb2_zero_extendqisi2_v6 */
    case 1019:  /* *thumb2_zero_extendhisi2_v6 */
    case 1018:  /* *thumb2_extendqisi_v6 */
    case 938:  /* thumb1_extendqisi2 */
    case 936:  /* *thumb1_zero_extendqisi2_v6 */
    case 935:  /* *thumb1_zero_extendqisi2 */
    case 934:  /* *thumb1_zero_extendhisi2 */
    case 933:  /* *thumb1_one_cmplsi2 */
    case 930:  /* *thumb1_negsi2 */
    case 828:  /* *sqrtdf2_vfp */
    case 827:  /* *sqrtsf2_vfp */
    case 825:  /* neon_vsqrthf */
    case 824:  /* floatunssidf2 */
    case 823:  /* floatunssisf2 */
    case 822:  /* *floatsidf2_vfp */
    case 821:  /* *floatsisf2_vfp */
    case 816:  /* truncsfhf2 */
    case 815:  /* *extendhfdf2 */
    case 814:  /* *truncdfhf2 */
    case 813:  /* extendhfsf2 */
    case 812:  /* *truncdfsf2_vfp */
    case 811:  /* *extendsfdf2_vfp */
    case 761:  /* neghf2 */
    case 760:  /* abshf2 */
    case 759:  /* *negdf2_vfp */
    case 758:  /* *negsf2_vfp */
    case 757:  /* *absdf2_vfp */
    case 756:  /* *abssf2_vfp */
    case 514:  /* tbcstv2si */
    case 513:  /* tbcstv4hi */
    case 512:  /* tbcstv8qi */
    case 406:  /* *arm_rev16 */
    case 404:  /* *arm_rev */
    case 395:  /* ctzsi2 */
    case 393:  /* clzsi2 */
    case 276:  /* *negscc_borrow */
    case 184:  /* *arm_extendqisi_v6 */
    case 183:  /* *arm_extendqisi */
    case 182:  /* *arm_extendqihi_insn */
    case 180:  /* *arm_extendhisi2_v6 */
    case 179:  /* *arm_extendhisi2 */
    case 176:  /* *arm_zero_extendqisi2_v6 */
    case 175:  /* *arm_zero_extendqisi2 */
    case 173:  /* *arm_zero_extendhisi2_v6 */
    case 172:  /* *arm_zero_extendhisi2 */
    case 169:  /* *arm_one_cmplsi2 */
    case 164:  /* *arm_negsi2 */
    case 116:  /* *smin_0 */
    case 114:  /* *smax_m1 */
    case 113:  /* *smax_0 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 112:  /* *andsi_iorsi3_notsi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 1037:  /* *thumb2_mulsi_short_compare0_scratch */
    case 108:  /* *iorsi3_compare0_scratch */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      break;

    case 105:  /* *andsi_notsi_si_compare0_scratch */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      break;

    case 104:  /* *andsi_notsi_si_compare0 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 1;
      break;

    case 103:  /* andsi_not_shiftsi_si_scc */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 0;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[3] = 3;
      break;

    case 102:  /* andsi_not_shiftsi_si_scc_no_reuse */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 1043:  /* *orsi_not_shiftsi_si */
    case 101:  /* andsi_not_shiftsi_si */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 3624:  /* mve_vornq_fv4sf */
    case 3623:  /* mve_vornq_fv8hf */
    case 3397:  /* mve_vornq_sv4si */
    case 3396:  /* mve_vornq_sv8hi */
    case 3395:  /* mve_vornq_sv16qi */
    case 3211:  /* mve_vbicq_uv4si */
    case 3210:  /* mve_vbicq_uv8hi */
    case 3209:  /* mve_vbicq_uv16qi */
    case 1250:  /* bicv2di3_neon */
    case 1249:  /* bicv4sf3_neon */
    case 1248:  /* bicv2sf3_neon */
    case 1247:  /* bicv8hf3_neon */
    case 1246:  /* bicv4hf3_neon */
    case 1245:  /* bicv4si3_neon */
    case 1244:  /* bicv2si3_neon */
    case 1243:  /* bicv8hi3_neon */
    case 1242:  /* bicv4hi3_neon */
    case 1241:  /* bicv16qi3_neon */
    case 1240:  /* bicv8qi3_neon */
    case 1239:  /* ornv2di3_neon */
    case 1238:  /* ornv4sf3_neon */
    case 1237:  /* ornv2sf3_neon */
    case 1236:  /* ornv8hf3_neon */
    case 1235:  /* ornv4hf3_neon */
    case 1234:  /* ornv4si3_neon */
    case 1233:  /* ornv2si3_neon */
    case 1232:  /* ornv8hi3_neon */
    case 1231:  /* ornv4hi3_neon */
    case 1230:  /* ornv16qi3_neon */
    case 1229:  /* ornv8qi3_neon */
    case 1042:  /* *orsi_notsi_si */
    case 100:  /* andsi_notsi_si */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 99:  /* insv_t2 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 0), 2));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 1));
      break;

    case 98:  /* insv_zero */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 0), 2));
      break;

    case 97:  /* *ite_ne_zeroextractsi_shifted */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 96:  /* *ite_ne_zeroextractsi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 95:  /* *ne_zeroextractsi_shifted */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      break;

    case 94:  /* *ne_zeroextractsi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 2));
      break;

    case 93:  /* *zeroextractsi_compare0_scratch */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      break;

    case 92:  /* *andsi3_compare0_scratch */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 241:  /* arm_smlsdx_setq_insn */
    case 239:  /* arm_smlsd_setq_insn */
    case 237:  /* arm_smladx_setq_insn */
    case 235:  /* arm_smlad_setq_insn */
    case 89:  /* arm_smlawt_setq_insn */
    case 87:  /* arm_smlawb_setq_insn */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      break;

    case 4925:  /* arm_vcx2qv16qi */
    case 4924:  /* arm_vcx1qav16qi */
    case 4740:  /* mve_vldrwq_gather_shifted_offset_z_uv4si */
    case 4739:  /* mve_vldrwq_gather_shifted_offset_z_sv4si */
    case 4738:  /* mve_vldrwq_gather_shifted_offset_z_fv4sf */
    case 4734:  /* mve_vldrwq_gather_offset_z_uv4si */
    case 4733:  /* mve_vldrwq_gather_offset_z_sv4si */
    case 4732:  /* mve_vldrwq_gather_offset_z_fv4sf */
    case 4728:  /* mve_vldrwq_gather_base_z_fv4sf */
    case 4726:  /* mve_vldrhq_gather_shifted_offset_z_fv8hf */
    case 4724:  /* mve_vldrhq_gather_offset_z_fv8hf */
    case 4722:  /* mve_vldrdq_gather_shifted_offset_z_uv2di */
    case 4721:  /* mve_vldrdq_gather_shifted_offset_z_sv2di */
    case 4718:  /* mve_vldrdq_gather_offset_z_uv2di */
    case 4717:  /* mve_vldrdq_gather_offset_z_sv2di */
    case 4714:  /* mve_vldrdq_gather_base_z_uv2di */
    case 4713:  /* mve_vldrdq_gather_base_z_sv2di */
    case 4695:  /* mve_vldrhq_gather_shifted_offset_z_uv4si */
    case 4694:  /* mve_vldrhq_gather_shifted_offset_z_sv4si */
    case 4693:  /* mve_vldrhq_gather_shifted_offset_z_uv8hi */
    case 4692:  /* mve_vldrhq_gather_shifted_offset_z_sv8hi */
    case 4687:  /* mve_vldrhq_gather_offset_z_uv4si */
    case 4686:  /* mve_vldrhq_gather_offset_z_sv4si */
    case 4685:  /* mve_vldrhq_gather_offset_z_uv8hi */
    case 4684:  /* mve_vldrhq_gather_offset_z_sv8hi */
    case 4678:  /* mve_vldrwq_gather_base_z_uv4si */
    case 4677:  /* mve_vldrwq_gather_base_z_sv4si */
    case 4670:  /* mve_vldrbq_gather_offset_z_uv4si */
    case 4669:  /* mve_vldrbq_gather_offset_z_sv4si */
    case 4668:  /* mve_vldrbq_gather_offset_z_uv8hi */
    case 4667:  /* mve_vldrbq_gather_offset_z_sv8hi */
    case 4666:  /* mve_vldrbq_gather_offset_z_uv16qi */
    case 4665:  /* mve_vldrbq_gather_offset_z_sv16qi */
    case 4155:  /* mve_vrmlsldavhaq_sv4si */
    case 4154:  /* mve_vrmlaldavhq_p_uv4si */
    case 4153:  /* mve_vrmlaldavhq_p_sv4si */
    case 4152:  /* mve_vcvtq_m_from_f_sv4si */
    case 4151:  /* mve_vcvtq_m_from_f_uv4si */
    case 4150:  /* mve_vcvtq_m_from_f_sv8hi */
    case 4149:  /* mve_vcvtq_m_from_f_uv8hi */
    case 4148:  /* mve_vrev16q_m_uv16qi */
    case 4147:  /* mve_vrev16q_m_sv16qi */
    case 4142:  /* mve_vcvtnq_m_uv4si */
    case 4141:  /* mve_vcvtnq_m_sv4si */
    case 4140:  /* mve_vcvtnq_m_uv8hi */
    case 4139:  /* mve_vcvtnq_m_sv8hi */
    case 4138:  /* mve_vcvtpq_m_uv4si */
    case 4137:  /* mve_vcvtpq_m_sv4si */
    case 4136:  /* mve_vcvtpq_m_uv8hi */
    case 4135:  /* mve_vcvtpq_m_sv8hi */
    case 4134:  /* mve_vcvtmq_m_uv4si */
    case 4133:  /* mve_vcvtmq_m_sv4si */
    case 4132:  /* mve_vcvtmq_m_uv8hi */
    case 4131:  /* mve_vcvtmq_m_sv8hi */
    case 4130:  /* mve_vshrntq_n_uv4si */
    case 4129:  /* mve_vshrntq_n_sv4si */
    case 4128:  /* mve_vshrntq_n_uv8hi */
    case 4127:  /* mve_vshrntq_n_sv8hi */
    case 4126:  /* mve_vshrnbq_n_sv4si */
    case 4125:  /* mve_vshrnbq_n_uv4si */
    case 4124:  /* mve_vshrnbq_n_sv8hi */
    case 4123:  /* mve_vshrnbq_n_uv8hi */
    case 4122:  /* mve_vrshrntq_n_sv4si */
    case 4121:  /* mve_vrshrntq_n_uv4si */
    case 4120:  /* mve_vrshrntq_n_sv8hi */
    case 4119:  /* mve_vrshrntq_n_uv8hi */
    case 4118:  /* mve_vrshrnbq_n_uv4si */
    case 4117:  /* mve_vrshrnbq_n_sv4si */
    case 4116:  /* mve_vrshrnbq_n_uv8hi */
    case 4115:  /* mve_vrshrnbq_n_sv8hi */
    case 4114:  /* mve_vrndxq_m_fv4sf */
    case 4113:  /* mve_vrndxq_m_fv8hf */
    case 4112:  /* mve_vrndpq_m_fv4sf */
    case 4111:  /* mve_vrndpq_m_fv8hf */
    case 4110:  /* mve_vrndnq_m_fv4sf */
    case 4109:  /* mve_vrndnq_m_fv8hf */
    case 4108:  /* mve_vrndmq_m_fv4sf */
    case 4107:  /* mve_vrndmq_m_fv8hf */
    case 4106:  /* mve_vrndaq_m_fv4sf */
    case 4105:  /* mve_vrndaq_m_fv8hf */
    case 4104:  /* mve_vrmlsldavhxq_p_sv4si */
    case 4103:  /* mve_vrmlsldavhq_p_sv4si */
    case 4102:  /* mve_vrmlsldavhaxq_sv4si */
    case 4101:  /* mve_vrmlaldavhxq_p_sv4si */
    case 4100:  /* mve_vrmlaldavhaxq_sv4si */
    case 4099:  /* mve_vrev64q_m_fv4sf */
    case 4098:  /* mve_vrev64q_m_fv8hf */
    case 4097:  /* mve_vrev32q_m_uv8hi */
    case 4096:  /* mve_vrev32q_m_sv8hi */
    case 4095:  /* mve_vrev32q_m_uv16qi */
    case 4094:  /* mve_vrev32q_m_sv16qi */
    case 4093:  /* mve_vrev32q_m_fv8hf */
    case 4092:  /* mve_vqshruntq_n_sv4si */
    case 4091:  /* mve_vqshruntq_n_sv8hi */
    case 4090:  /* mve_vqshrunbq_n_sv4si */
    case 4089:  /* mve_vqshrunbq_n_sv8hi */
    case 4088:  /* mve_vqshrntq_n_sv4si */
    case 4087:  /* mve_vqshrntq_n_uv4si */
    case 4086:  /* mve_vqshrntq_n_sv8hi */
    case 4085:  /* mve_vqshrntq_n_uv8hi */
    case 4084:  /* mve_vqshrnbq_n_sv4si */
    case 4083:  /* mve_vqshrnbq_n_uv4si */
    case 4082:  /* mve_vqshrnbq_n_sv8hi */
    case 4081:  /* mve_vqshrnbq_n_uv8hi */
    case 4080:  /* mve_vqrshruntq_n_sv4si */
    case 4079:  /* mve_vqrshruntq_n_sv8hi */
    case 4078:  /* mve_vqrshrntq_n_sv4si */
    case 4077:  /* mve_vqrshrntq_n_uv4si */
    case 4076:  /* mve_vqrshrntq_n_sv8hi */
    case 4075:  /* mve_vqrshrntq_n_uv8hi */
    case 4074:  /* mve_vqmovuntq_m_sv4si */
    case 4073:  /* mve_vqmovuntq_m_sv8hi */
    case 4072:  /* mve_vqmovunbq_m_sv4si */
    case 4071:  /* mve_vqmovunbq_m_sv8hi */
    case 4070:  /* mve_vqmovntq_m_sv4si */
    case 4069:  /* mve_vqmovntq_m_uv4si */
    case 4068:  /* mve_vqmovntq_m_sv8hi */
    case 4067:  /* mve_vqmovntq_m_uv8hi */
    case 4066:  /* mve_vqmovnbq_m_uv4si */
    case 4065:  /* mve_vqmovnbq_m_sv4si */
    case 4064:  /* mve_vqmovnbq_m_uv8hi */
    case 4063:  /* mve_vqmovnbq_m_sv8hi */
    case 4062:  /* mve_vpselq_fv4sf */
    case 4061:  /* mve_vpselq_fv8hf */
    case 4060:  /* mve_vorrq_m_n_uv4si */
    case 4059:  /* mve_vorrq_m_n_sv4si */
    case 4058:  /* mve_vorrq_m_n_uv8hi */
    case 4057:  /* mve_vorrq_m_n_sv8hi */
    case 4056:  /* mve_vnegq_m_fv4sf */
    case 4055:  /* mve_vnegq_m_fv8hf */
    case 4054:  /* mve_vmvnq_m_n_sv4si */
    case 4053:  /* mve_vmvnq_m_n_uv4si */
    case 4052:  /* mve_vmvnq_m_n_sv8hi */
    case 4051:  /* mve_vmvnq_m_n_uv8hi */
    case 4050:  /* mve_vmovntq_m_sv4si */
    case 4049:  /* mve_vmovntq_m_uv4si */
    case 4048:  /* mve_vmovntq_m_sv8hi */
    case 4047:  /* mve_vmovntq_m_uv8hi */
    case 4046:  /* mve_vmovnbq_m_sv4si */
    case 4045:  /* mve_vmovnbq_m_uv4si */
    case 4044:  /* mve_vmovnbq_m_sv8hi */
    case 4043:  /* mve_vmovnbq_m_uv8hi */
    case 4042:  /* mve_vmovltq_m_sv8hi */
    case 4041:  /* mve_vmovltq_m_uv8hi */
    case 4040:  /* mve_vmovltq_m_sv16qi */
    case 4039:  /* mve_vmovltq_m_uv16qi */
    case 4038:  /* mve_vmovlbq_m_sv8hi */
    case 4037:  /* mve_vmovlbq_m_uv8hi */
    case 4036:  /* mve_vmovlbq_m_sv16qi */
    case 4035:  /* mve_vmovlbq_m_uv16qi */
    case 4034:  /* mve_vmlsldavxq_p_sv4si */
    case 4033:  /* mve_vmlsldavxq_p_sv8hi */
    case 4032:  /* mve_vmlsldavq_p_sv4si */
    case 4031:  /* mve_vmlsldavq_p_sv8hi */
    case 4030:  /* mve_vmlsldavaxq_sv4si */
    case 4029:  /* mve_vmlsldavaxq_sv8hi */
    case 4028:  /* mve_vmlsldavaq_sv4si */
    case 4027:  /* mve_vmlsldavaq_sv8hi */
    case 4026:  /* mve_vmlaldavxq_p_sv4si */
    case 4025:  /* mve_vmlaldavxq_p_sv8hi */
    case 4024:  /* mve_vmlaldavq_p_sv4si */
    case 4023:  /* mve_vmlaldavq_p_uv4si */
    case 4022:  /* mve_vmlaldavq_p_sv8hi */
    case 4021:  /* mve_vmlaldavq_p_uv8hi */
    case 4020:  /* mve_vmlaldavaxq_sv4si */
    case 4019:  /* mve_vmlaldavaxq_sv8hi */
    case 4018:  /* mve_vmlaldavaq_uv4si */
    case 4017:  /* mve_vmlaldavaq_sv4si */
    case 4016:  /* mve_vmlaldavaq_uv8hi */
    case 4015:  /* mve_vmlaldavaq_sv8hi */
    case 4014:  /* mve_vminnmvq_p_fv4sf */
    case 4013:  /* mve_vminnmvq_p_fv8hf */
    case 4012:  /* mve_vminnmavq_p_fv4sf */
    case 4011:  /* mve_vminnmavq_p_fv8hf */
    case 4010:  /* mve_vminnmaq_m_fv4sf */
    case 4009:  /* mve_vminnmaq_m_fv8hf */
    case 4008:  /* mve_vmaxnmvq_p_fv4sf */
    case 4007:  /* mve_vmaxnmvq_p_fv8hf */
    case 4006:  /* mve_vmaxnmavq_p_fv4sf */
    case 4005:  /* mve_vmaxnmavq_p_fv8hf */
    case 4004:  /* mve_vmaxnmaq_m_fv4sf */
    case 4003:  /* mve_vmaxnmaq_m_fv8hf */
    case 4002:  /* mve_vfmsq_fv4sf */
    case 4001:  /* mve_vfmsq_fv8hf */
    case 4000:  /* mve_vfmasq_n_fv4sf */
    case 3999:  /* mve_vfmasq_n_fv8hf */
    case 3998:  /* mve_vfmaq_n_fv4sf */
    case 3997:  /* mve_vfmaq_n_fv8hf */
    case 3996:  /* mve_vfmaq_fv4sf */
    case 3995:  /* mve_vfmaq_fv8hf */
    case 3994:  /* mve_vdupq_m_n_fv4sf */
    case 3993:  /* mve_vdupq_m_n_fv8hf */
    case 3992:  /* mve_vcvttq_m_f32_f16v4sf */
    case 3991:  /* mve_vcvttq_m_f16_f32v8hf */
    case 3990:  /* mve_vcvtbq_m_f32_f16v4sf */
    case 3989:  /* mve_vcvtbq_m_f16_f32v8hf */
    case 3988:  /* mve_vcmpneq_m_n_fv4sf */
    case 3987:  /* mve_vcmpneq_m_n_fv8hf */
    case 3986:  /* mve_vcmpneq_m_fv4sf */
    case 3985:  /* mve_vcmpneq_m_fv8hf */
    case 3984:  /* mve_vcmpltq_m_n_fv4sf */
    case 3983:  /* mve_vcmpltq_m_n_fv8hf */
    case 3982:  /* mve_vcmpltq_m_fv4sf */
    case 3981:  /* mve_vcmpltq_m_fv8hf */
    case 3980:  /* mve_vcmpleq_m_n_fv4sf */
    case 3979:  /* mve_vcmpleq_m_n_fv8hf */
    case 3978:  /* mve_vcmpleq_m_fv4sf */
    case 3977:  /* mve_vcmpleq_m_fv8hf */
    case 3976:  /* mve_vcmpgtq_m_n_fv4sf */
    case 3975:  /* mve_vcmpgtq_m_n_fv8hf */
    case 3974:  /* mve_vcmpgtq_m_fv4sf */
    case 3973:  /* mve_vcmpgtq_m_fv8hf */
    case 3972:  /* mve_vcmpgeq_m_n_fv4sf */
    case 3971:  /* mve_vcmpgeq_m_n_fv8hf */
    case 3970:  /* mve_vcmpgeq_m_fv4sf */
    case 3969:  /* mve_vcmpgeq_m_fv8hf */
    case 3968:  /* mve_vcmpeqq_m_n_fv4sf */
    case 3967:  /* mve_vcmpeqq_m_n_fv8hf */
    case 3958:  /* mve_vaddlvaq_p_sv4si */
    case 3957:  /* mve_vaddlvaq_p_uv4si */
    case 3956:  /* mve_vabsq_m_fv4sf */
    case 3955:  /* mve_vabsq_m_fv8hf */
    case 3954:  /* mve_vmladavaxq_sv4si */
    case 3953:  /* mve_vmladavaxq_sv8hi */
    case 3952:  /* mve_vmladavaxq_sv16qi */
    case 3951:  /* mve_vmlsdavaq_sv4si */
    case 3950:  /* mve_vmlsdavaq_sv8hi */
    case 3949:  /* mve_vmlsdavaq_sv16qi */
    case 3948:  /* mve_vmlsdavaxq_sv4si */
    case 3947:  /* mve_vmlsdavaxq_sv8hi */
    case 3946:  /* mve_vmlsdavaxq_sv16qi */
    case 3945:  /* mve_vqdmladhq_sv4si */
    case 3944:  /* mve_vqdmladhq_sv8hi */
    case 3943:  /* mve_vqdmladhq_sv16qi */
    case 3942:  /* mve_vqdmladhxq_sv4si */
    case 3941:  /* mve_vqdmladhxq_sv8hi */
    case 3940:  /* mve_vqdmladhxq_sv16qi */
    case 3939:  /* mve_vqdmlsdhq_sv4si */
    case 3938:  /* mve_vqdmlsdhq_sv8hi */
    case 3937:  /* mve_vqdmlsdhq_sv16qi */
    case 3936:  /* mve_vqdmlsdhxq_sv4si */
    case 3935:  /* mve_vqdmlsdhxq_sv8hi */
    case 3934:  /* mve_vqdmlsdhxq_sv16qi */
    case 3933:  /* mve_vsriq_n_uv4si */
    case 3932:  /* mve_vsriq_n_sv4si */
    case 3931:  /* mve_vsriq_n_uv8hi */
    case 3930:  /* mve_vsriq_n_sv8hi */
    case 3929:  /* mve_vsriq_n_uv16qi */
    case 3928:  /* mve_vsriq_n_sv16qi */
    case 3927:  /* mve_vsliq_n_uv4si */
    case 3926:  /* mve_vsliq_n_sv4si */
    case 3925:  /* mve_vsliq_n_uv8hi */
    case 3924:  /* mve_vsliq_n_sv8hi */
    case 3923:  /* mve_vsliq_n_uv16qi */
    case 3922:  /* mve_vsliq_n_sv16qi */
    case 3921:  /* mve_vshlq_m_r_uv4si */
    case 3920:  /* mve_vshlq_m_r_sv4si */
    case 3919:  /* mve_vshlq_m_r_uv8hi */
    case 3918:  /* mve_vshlq_m_r_sv8hi */
    case 3917:  /* mve_vshlq_m_r_uv16qi */
    case 3916:  /* mve_vshlq_m_r_sv16qi */
    case 3915:  /* mve_vrshlq_m_n_uv4si */
    case 3914:  /* mve_vrshlq_m_n_sv4si */
    case 3913:  /* mve_vrshlq_m_n_uv8hi */
    case 3912:  /* mve_vrshlq_m_n_sv8hi */
    case 3911:  /* mve_vrshlq_m_n_uv16qi */
    case 3910:  /* mve_vrshlq_m_n_sv16qi */
    case 3909:  /* mve_vrev64q_m_uv4si */
    case 3908:  /* mve_vrev64q_m_sv4si */
    case 3907:  /* mve_vrev64q_m_uv8hi */
    case 3906:  /* mve_vrev64q_m_sv8hi */
    case 3905:  /* mve_vrev64q_m_uv16qi */
    case 3904:  /* mve_vrev64q_m_sv16qi */
    case 3903:  /* mve_vqshlq_m_r_uv4si */
    case 3902:  /* mve_vqshlq_m_r_sv4si */
    case 3901:  /* mve_vqshlq_m_r_uv8hi */
    case 3900:  /* mve_vqshlq_m_r_sv8hi */
    case 3899:  /* mve_vqshlq_m_r_uv16qi */
    case 3898:  /* mve_vqshlq_m_r_sv16qi */
    case 3897:  /* mve_vqrshlq_m_n_uv4si */
    case 3896:  /* mve_vqrshlq_m_n_sv4si */
    case 3895:  /* mve_vqrshlq_m_n_uv8hi */
    case 3894:  /* mve_vqrshlq_m_n_sv8hi */
    case 3893:  /* mve_vqrshlq_m_n_uv16qi */
    case 3892:  /* mve_vqrshlq_m_n_sv16qi */
    case 3891:  /* mve_vqrdmlsdhxq_sv4si */
    case 3890:  /* mve_vqrdmlsdhxq_sv8hi */
    case 3889:  /* mve_vqrdmlsdhxq_sv16qi */
    case 3888:  /* mve_vqrdmlsdhq_sv4si */
    case 3887:  /* mve_vqrdmlsdhq_sv8hi */
    case 3886:  /* mve_vqrdmlsdhq_sv16qi */
    case 3885:  /* mve_vqrdmlashq_n_sv4si */
    case 3884:  /* mve_vqrdmlashq_n_sv8hi */
    case 3883:  /* mve_vqrdmlashq_n_sv16qi */
    case 3882:  /* mve_vqrdmlahq_n_sv4si */
    case 3881:  /* mve_vqrdmlahq_n_sv8hi */
    case 3880:  /* mve_vqrdmlahq_n_sv16qi */
    case 3879:  /* mve_vqrdmladhxq_sv4si */
    case 3878:  /* mve_vqrdmladhxq_sv8hi */
    case 3877:  /* mve_vqrdmladhxq_sv16qi */
    case 3876:  /* mve_vqrdmladhq_sv4si */
    case 3875:  /* mve_vqrdmladhq_sv8hi */
    case 3874:  /* mve_vqrdmladhq_sv16qi */
    case 3873:  /* mve_vqnegq_m_sv4si */
    case 3872:  /* mve_vqnegq_m_sv8hi */
    case 3871:  /* mve_vqnegq_m_sv16qi */
    case 3870:  /* mve_vqdmlashq_n_sv4si */
    case 3869:  /* mve_vqdmlashq_n_sv8hi */
    case 3868:  /* mve_vqdmlashq_n_sv16qi */
    case 3867:  /* mve_vqdmlahq_n_sv4si */
    case 3866:  /* mve_vqdmlahq_n_sv8hi */
    case 3865:  /* mve_vqdmlahq_n_sv16qi */
    case 3864:  /* mve_vqabsq_m_sv4si */
    case 3863:  /* mve_vqabsq_m_sv8hi */
    case 3862:  /* mve_vqabsq_m_sv16qi */
    case 3861:  /* mve_vpselq_uv2di */
    case 3860:  /* mve_vpselq_sv2di */
    case 3859:  /* mve_vpselq_uv4si */
    case 3858:  /* mve_vpselq_sv4si */
    case 3857:  /* mve_vpselq_uv8hi */
    case 3856:  /* mve_vpselq_sv8hi */
    case 3855:  /* mve_vpselq_uv16qi */
    case 3854:  /* mve_vpselq_sv16qi */
    case 3853:  /* mve_vnegq_m_sv4si */
    case 3852:  /* mve_vnegq_m_sv8hi */
    case 3851:  /* mve_vnegq_m_sv16qi */
    case 3850:  /* mve_vmvnq_m_uv4si */
    case 3849:  /* mve_vmvnq_m_sv4si */
    case 3848:  /* mve_vmvnq_m_uv8hi */
    case 3847:  /* mve_vmvnq_m_sv8hi */
    case 3846:  /* mve_vmvnq_m_uv16qi */
    case 3845:  /* mve_vmvnq_m_sv16qi */
    case 3844:  /* mve_vmlsdavxq_p_sv4si */
    case 3843:  /* mve_vmlsdavxq_p_sv8hi */
    case 3842:  /* mve_vmlsdavxq_p_sv16qi */
    case 3841:  /* mve_vmlsdavq_p_sv4si */
    case 3840:  /* mve_vmlsdavq_p_sv8hi */
    case 3839:  /* mve_vmlsdavq_p_sv16qi */
    case 3838:  /* mve_vmlasq_n_uv4si */
    case 3837:  /* mve_vmlasq_n_sv4si */
    case 3836:  /* mve_vmlasq_n_uv8hi */
    case 3835:  /* mve_vmlasq_n_sv8hi */
    case 3834:  /* mve_vmlasq_n_uv16qi */
    case 3833:  /* mve_vmlasq_n_sv16qi */
    case 3832:  /* mve_vmlaq_n_uv4si */
    case 3831:  /* mve_vmlaq_n_sv4si */
    case 3830:  /* mve_vmlaq_n_uv8hi */
    case 3829:  /* mve_vmlaq_n_sv8hi */
    case 3828:  /* mve_vmlaq_n_uv16qi */
    case 3827:  /* mve_vmlaq_n_sv16qi */
    case 3826:  /* mve_vmladavxq_p_sv4si */
    case 3825:  /* mve_vmladavxq_p_sv8hi */
    case 3824:  /* mve_vmladavxq_p_sv16qi */
    case 3823:  /* mve_vmladavq_p_uv4si */
    case 3822:  /* mve_vmladavq_p_sv4si */
    case 3821:  /* mve_vmladavq_p_uv8hi */
    case 3820:  /* mve_vmladavq_p_sv8hi */
    case 3819:  /* mve_vmladavq_p_uv16qi */
    case 3818:  /* mve_vmladavq_p_sv16qi */
    case 3817:  /* mve_vmladavaq_uv4si */
    case 3816:  /* mve_vmladavaq_sv4si */
    case 3815:  /* mve_vmladavaq_uv8hi */
    case 3814:  /* mve_vmladavaq_sv8hi */
    case 3813:  /* mve_vmladavaq_uv16qi */
    case 3812:  /* mve_vmladavaq_sv16qi */
    case 3811:  /* mve_vminvq_p_uv4si */
    case 3810:  /* mve_vminvq_p_sv4si */
    case 3809:  /* mve_vminvq_p_uv8hi */
    case 3808:  /* mve_vminvq_p_sv8hi */
    case 3807:  /* mve_vminvq_p_uv16qi */
    case 3806:  /* mve_vminvq_p_sv16qi */
    case 3805:  /* mve_vminavq_p_sv4si */
    case 3804:  /* mve_vminavq_p_sv8hi */
    case 3803:  /* mve_vminavq_p_sv16qi */
    case 3802:  /* mve_vminaq_m_sv4si */
    case 3801:  /* mve_vminaq_m_sv8hi */
    case 3800:  /* mve_vminaq_m_sv16qi */
    case 3799:  /* mve_vmaxvq_p_uv4si */
    case 3798:  /* mve_vmaxvq_p_sv4si */
    case 3797:  /* mve_vmaxvq_p_uv8hi */
    case 3796:  /* mve_vmaxvq_p_sv8hi */
    case 3795:  /* mve_vmaxvq_p_uv16qi */
    case 3794:  /* mve_vmaxvq_p_sv16qi */
    case 3793:  /* mve_vmaxavq_p_sv4si */
    case 3792:  /* mve_vmaxavq_p_sv8hi */
    case 3791:  /* mve_vmaxavq_p_sv16qi */
    case 3790:  /* mve_vmaxaq_m_sv4si */
    case 3789:  /* mve_vmaxaq_m_sv8hi */
    case 3788:  /* mve_vmaxaq_m_sv16qi */
    case 3787:  /* mve_vdupq_m_n_uv4si */
    case 3786:  /* mve_vdupq_m_n_sv4si */
    case 3785:  /* mve_vdupq_m_n_uv8hi */
    case 3784:  /* mve_vdupq_m_n_sv8hi */
    case 3783:  /* mve_vdupq_m_n_uv16qi */
    case 3782:  /* mve_vdupq_m_n_sv16qi */
    case 3781:  /* mve_vcmpneq_m_uv4si */
    case 3780:  /* mve_vcmpneq_m_sv4si */
    case 3779:  /* mve_vcmpneq_m_uv8hi */
    case 3778:  /* mve_vcmpneq_m_sv8hi */
    case 3777:  /* mve_vcmpneq_m_uv16qi */
    case 3776:  /* mve_vcmpneq_m_sv16qi */
    case 3775:  /* mve_vcmpneq_m_n_uv4si */
    case 3774:  /* mve_vcmpneq_m_n_sv4si */
    case 3773:  /* mve_vcmpneq_m_n_uv8hi */
    case 3772:  /* mve_vcmpneq_m_n_sv8hi */
    case 3771:  /* mve_vcmpneq_m_n_uv16qi */
    case 3770:  /* mve_vcmpneq_m_n_sv16qi */
    case 3769:  /* mve_vcmpltq_m_sv4si */
    case 3768:  /* mve_vcmpltq_m_sv8hi */
    case 3767:  /* mve_vcmpltq_m_sv16qi */
    case 3766:  /* mve_vcmpltq_m_n_sv4si */
    case 3765:  /* mve_vcmpltq_m_n_sv8hi */
    case 3764:  /* mve_vcmpltq_m_n_sv16qi */
    case 3763:  /* mve_vcmpleq_m_sv4si */
    case 3762:  /* mve_vcmpleq_m_sv8hi */
    case 3761:  /* mve_vcmpleq_m_sv16qi */
    case 3760:  /* mve_vcmpleq_m_n_sv4si */
    case 3759:  /* mve_vcmpleq_m_n_sv8hi */
    case 3758:  /* mve_vcmpleq_m_n_sv16qi */
    case 3757:  /* mve_vcmphiq_m_uv4si */
    case 3756:  /* mve_vcmphiq_m_uv8hi */
    case 3755:  /* mve_vcmphiq_m_uv16qi */
    case 3754:  /* mve_vcmphiq_m_n_uv4si */
    case 3753:  /* mve_vcmphiq_m_n_uv8hi */
    case 3752:  /* mve_vcmphiq_m_n_uv16qi */
    case 3751:  /* mve_vcmpgtq_m_sv4si */
    case 3750:  /* mve_vcmpgtq_m_sv8hi */
    case 3749:  /* mve_vcmpgtq_m_sv16qi */
    case 3748:  /* mve_vcmpgtq_m_n_sv4si */
    case 3747:  /* mve_vcmpgtq_m_n_sv8hi */
    case 3746:  /* mve_vcmpgtq_m_n_sv16qi */
    case 3745:  /* mve_vcmpgeq_m_sv4si */
    case 3744:  /* mve_vcmpgeq_m_sv8hi */
    case 3743:  /* mve_vcmpgeq_m_sv16qi */
    case 3742:  /* mve_vcmpgeq_m_n_sv4si */
    case 3741:  /* mve_vcmpgeq_m_n_sv8hi */
    case 3740:  /* mve_vcmpgeq_m_n_sv16qi */
    case 3739:  /* mve_vcmpeqq_m_uv4si */
    case 3738:  /* mve_vcmpeqq_m_sv4si */
    case 3737:  /* mve_vcmpeqq_m_uv8hi */
    case 3736:  /* mve_vcmpeqq_m_sv8hi */
    case 3735:  /* mve_vcmpeqq_m_uv16qi */
    case 3734:  /* mve_vcmpeqq_m_sv16qi */
    case 3733:  /* mve_vcmpeqq_m_n_uv4si */
    case 3732:  /* mve_vcmpeqq_m_n_sv4si */
    case 3731:  /* mve_vcmpeqq_m_n_uv8hi */
    case 3730:  /* mve_vcmpeqq_m_n_sv8hi */
    case 3729:  /* mve_vcmpeqq_m_n_uv16qi */
    case 3728:  /* mve_vcmpeqq_m_n_sv16qi */
    case 3727:  /* mve_vcmpcsq_m_uv4si */
    case 3726:  /* mve_vcmpcsq_m_uv8hi */
    case 3725:  /* mve_vcmpcsq_m_uv16qi */
    case 3724:  /* mve_vcmpcsq_m_n_uv4si */
    case 3723:  /* mve_vcmpcsq_m_n_uv8hi */
    case 3722:  /* mve_vcmpcsq_m_n_uv16qi */
    case 3721:  /* mve_vclzq_m_uv4si */
    case 3720:  /* mve_vclzq_m_sv4si */
    case 3719:  /* mve_vclzq_m_uv8hi */
    case 3718:  /* mve_vclzq_m_sv8hi */
    case 3717:  /* mve_vclzq_m_uv16qi */
    case 3716:  /* mve_vclzq_m_sv16qi */
    case 3715:  /* mve_vclsq_m_sv4si */
    case 3714:  /* mve_vclsq_m_sv8hi */
    case 3713:  /* mve_vclsq_m_sv16qi */
    case 3712:  /* mve_vaddvaq_p_uv4si */
    case 3711:  /* mve_vaddvaq_p_sv4si */
    case 3710:  /* mve_vaddvaq_p_uv8hi */
    case 3709:  /* mve_vaddvaq_p_sv8hi */
    case 3708:  /* mve_vaddvaq_p_uv16qi */
    case 3707:  /* mve_vaddvaq_p_sv16qi */
    case 3706:  /* mve_vabsq_m_sv4si */
    case 3705:  /* mve_vabsq_m_sv8hi */
    case 3704:  /* mve_vabsq_m_sv16qi */
    case 3697:  /* mve_vabavq_uv4si */
    case 3696:  /* mve_vabavq_sv4si */
    case 3695:  /* mve_vabavq_uv8hi */
    case 3694:  /* mve_vabavq_sv8hi */
    case 3693:  /* mve_vabavq_uv16qi */
    case 3692:  /* mve_vabavq_sv16qi */
    case 3691:  /* mve_vrmlaldavhaq_uv4si */
    case 3690:  /* mve_vrmlaldavhaq_sv4si */
    case 3689:  /* mve_vqrshrunbq_n_sv4si */
    case 3688:  /* mve_vqrshrunbq_n_sv8hi */
    case 3687:  /* mve_vqrshrnbq_n_sv4si */
    case 3686:  /* mve_vqrshrnbq_n_uv4si */
    case 3685:  /* mve_vqrshrnbq_n_sv8hi */
    case 3684:  /* mve_vqrshrnbq_n_uv8hi */
    case 3683:  /* mve_vcvtq_m_to_f_uv4sf */
    case 3682:  /* mve_vcvtq_m_to_f_sv4sf */
    case 3681:  /* mve_vcvtq_m_to_f_uv8hf */
    case 3680:  /* mve_vcvtq_m_to_f_sv8hf */
    case 3679:  /* mve_vcvtaq_m_uv4si */
    case 3678:  /* mve_vcvtaq_m_sv4si */
    case 3677:  /* mve_vcvtaq_m_uv8hi */
    case 3676:  /* mve_vcvtaq_m_sv8hi */
    case 3675:  /* mve_vcmpeqq_m_fv4sf */
    case 3674:  /* mve_vcmpeqq_m_fv8hf */
    case 3673:  /* mve_vbicq_m_n_uv4si */
    case 3672:  /* mve_vbicq_m_n_sv4si */
    case 3671:  /* mve_vbicq_m_n_uv8hi */
    case 3670:  /* mve_vbicq_m_n_sv8hi */
    case 3025:  /* mve_vrndq_m_fv4sf */
    case 3024:  /* mve_vrndq_m_fv8hf */
    case 2832:  /* crypto_sha256su1 */
    case 2831:  /* crypto_sha256h2 */
    case 2830:  /* crypto_sha256h */
    case 2829:  /* crypto_sha1su0 */
    case 2703:  /* neon_vld4_lanev8bf */
    case 2702:  /* neon_vld4_lanev4sf */
    case 2701:  /* neon_vld4_lanev4si */
    case 2700:  /* neon_vld4_lanev8hf */
    case 2699:  /* neon_vld4_lanev8hi */
    case 2698:  /* neon_vld4_lanev2sf */
    case 2697:  /* neon_vld4_lanev2si */
    case 2696:  /* neon_vld4_lanev4bf */
    case 2695:  /* neon_vld4_lanev4hf */
    case 2694:  /* neon_vld4_lanev4hi */
    case 2693:  /* neon_vld4_lanev8qi */
    case 2635:  /* neon_vld3_lanev8bf */
    case 2634:  /* neon_vld3_lanev4sf */
    case 2633:  /* neon_vld3_lanev4si */
    case 2632:  /* neon_vld3_lanev8hf */
    case 2631:  /* neon_vld3_lanev8hi */
    case 2630:  /* neon_vld3_lanev2sf */
    case 2629:  /* neon_vld3_lanev2si */
    case 2628:  /* neon_vld3_lanev4bf */
    case 2627:  /* neon_vld3_lanev4hf */
    case 2626:  /* neon_vld3_lanev4hi */
    case 2625:  /* neon_vld3_lanev8qi */
    case 2573:  /* neon_vld2_lanev8bf */
    case 2572:  /* neon_vld2_lanev4sf */
    case 2571:  /* neon_vld2_lanev4si */
    case 2570:  /* neon_vld2_lanev8hf */
    case 2569:  /* neon_vld2_lanev8hi */
    case 2568:  /* neon_vld2_lanev2sf */
    case 2567:  /* neon_vld2_lanev2si */
    case 2566:  /* neon_vld2_lanev4bf */
    case 2565:  /* neon_vld2_lanev4hf */
    case 2564:  /* neon_vld2_lanev4hi */
    case 2563:  /* neon_vld2_lanev8qi */
    case 2509:  /* neon_vld1_lanev2di */
    case 2508:  /* neon_vld1_lanev4sf */
    case 2507:  /* neon_vld1_lanev4si */
    case 2506:  /* neon_vld1_lanev8bf */
    case 2505:  /* neon_vld1_lanev8hf */
    case 2504:  /* neon_vld1_lanev8hi */
    case 2503:  /* neon_vld1_lanev16qi */
    case 2502:  /* neon_vld1_lanedi */
    case 2501:  /* neon_vld1_lanev2sf */
    case 2500:  /* neon_vld1_lanev2si */
    case 2499:  /* neon_vld1_lanev4bf */
    case 2498:  /* neon_vld1_lanev4hf */
    case 2497:  /* neon_vld1_lanev4hi */
    case 2496:  /* neon_vld1_lanev8qi */
    case 2451:  /* neon_vtbx4v8qi */
    case 2450:  /* neon_vtbx3v8qi */
    case 2449:  /* neon_vtbx2v8qi */
    case 2448:  /* neon_vtbx1v8qi */
    case 2440:  /* neon_vsli_nv2di */
    case 2439:  /* neon_vsli_ndi */
    case 2438:  /* neon_vsli_nv4si */
    case 2437:  /* neon_vsli_nv2si */
    case 2436:  /* neon_vsli_nv8hi */
    case 2435:  /* neon_vsli_nv4hi */
    case 2434:  /* neon_vsli_nv16qi */
    case 2433:  /* neon_vsli_nv8qi */
    case 2432:  /* neon_vsri_nv2di */
    case 2431:  /* neon_vsri_ndi */
    case 2430:  /* neon_vsri_nv4si */
    case 2429:  /* neon_vsri_nv2si */
    case 2428:  /* neon_vsri_nv8hi */
    case 2427:  /* neon_vsri_nv4hi */
    case 2426:  /* neon_vsri_nv16qi */
    case 2425:  /* neon_vsri_nv8qi */
    case 2424:  /* neon_vrsrau_nv2di */
    case 2423:  /* neon_vrsras_nv2di */
    case 2422:  /* neon_vsrau_nv2di */
    case 2421:  /* neon_vsras_nv2di */
    case 2420:  /* neon_vrsrau_ndi */
    case 2419:  /* neon_vrsras_ndi */
    case 2418:  /* neon_vsrau_ndi */
    case 2417:  /* neon_vsras_ndi */
    case 2416:  /* neon_vrsrau_nv4si */
    case 2415:  /* neon_vrsras_nv4si */
    case 2414:  /* neon_vsrau_nv4si */
    case 2413:  /* neon_vsras_nv4si */
    case 2412:  /* neon_vrsrau_nv2si */
    case 2411:  /* neon_vrsras_nv2si */
    case 2410:  /* neon_vsrau_nv2si */
    case 2409:  /* neon_vsras_nv2si */
    case 2408:  /* neon_vrsrau_nv8hi */
    case 2407:  /* neon_vrsras_nv8hi */
    case 2406:  /* neon_vsrau_nv8hi */
    case 2405:  /* neon_vsras_nv8hi */
    case 2404:  /* neon_vrsrau_nv4hi */
    case 2403:  /* neon_vrsras_nv4hi */
    case 2402:  /* neon_vsrau_nv4hi */
    case 2401:  /* neon_vsras_nv4hi */
    case 2400:  /* neon_vrsrau_nv16qi */
    case 2399:  /* neon_vrsras_nv16qi */
    case 2398:  /* neon_vsrau_nv16qi */
    case 2397:  /* neon_vsras_nv16qi */
    case 2396:  /* neon_vrsrau_nv8qi */
    case 2395:  /* neon_vrsras_nv8qi */
    case 2394:  /* neon_vsrau_nv8qi */
    case 2393:  /* neon_vsras_nv8qi */
    case 2234:  /* neon_vbslv2di_internal */
    case 2233:  /* neon_vbsldi_internal */
    case 2232:  /* neon_vbslv4sf_internal */
    case 2231:  /* neon_vbslv2sf_internal */
    case 2230:  /* neon_vbslv8bf_internal */
    case 2229:  /* neon_vbslv4bf_internal */
    case 2228:  /* neon_vbslv8hf_internal */
    case 2227:  /* neon_vbslv4hf_internal */
    case 2226:  /* neon_vbslv4si_internal */
    case 2225:  /* neon_vbslv2si_internal */
    case 2224:  /* neon_vbslv8hi_internal */
    case 2223:  /* neon_vbslv4hi_internal */
    case 2222:  /* neon_vbslv16qi_internal */
    case 2221:  /* neon_vbslv8qi_internal */
    case 2203:  /* neon_vextv2di */
    case 2202:  /* neon_vextdi */
    case 2201:  /* neon_vextv4sf */
    case 2200:  /* neon_vextv2sf */
    case 2199:  /* neon_vextv8bf */
    case 2198:  /* neon_vextv4bf */
    case 2197:  /* neon_vextv8hf */
    case 2196:  /* neon_vextv4hf */
    case 2195:  /* neon_vextv4si */
    case 2194:  /* neon_vextv2si */
    case 2193:  /* neon_vextv8hi */
    case 2192:  /* neon_vextv4hi */
    case 2191:  /* neon_vextv16qi */
    case 2190:  /* neon_vextv8qi */
    case 2157:  /* neon_vqrdmulh_lanev2si */
    case 2156:  /* neon_vqdmulh_lanev2si */
    case 2155:  /* neon_vqrdmulh_lanev4hi */
    case 2154:  /* neon_vqdmulh_lanev4hi */
    case 2153:  /* neon_vqrdmulh_lanev4si */
    case 2152:  /* neon_vqdmulh_lanev4si */
    case 2151:  /* neon_vqrdmulh_lanev8hi */
    case 2150:  /* neon_vqdmulh_lanev8hi */
    case 2149:  /* neon_vqdmull_lanev2si */
    case 2148:  /* neon_vqdmull_lanev4hi */
    case 2147:  /* neon_vmullu_lanev2si */
    case 2146:  /* neon_vmulls_lanev2si */
    case 2145:  /* neon_vmullu_lanev4hi */
    case 2144:  /* neon_vmulls_lanev4hi */
    case 2143:  /* neon_vmul_lanev4hf */
    case 2142:  /* neon_vmul_lanev8hf */
    case 2141:  /* neon_vmul_lanev4sf */
    case 2140:  /* neon_vmul_lanev4si */
    case 2139:  /* neon_vmul_lanev8hi */
    case 2138:  /* neon_vmul_lanev2sf */
    case 2137:  /* neon_vmul_lanev2si */
    case 2136:  /* neon_vmul_lanev4hi */
    case 1571:  /* neon_vqdmlslv2si */
    case 1570:  /* neon_vqdmlslv4hi */
    case 1569:  /* neon_vqdmlalv2si */
    case 1568:  /* neon_vqdmlalv4hi */
    case 1567:  /* neon_vqrdmlshv4si */
    case 1566:  /* neon_vqrdmlahv4si */
    case 1565:  /* neon_vqrdmlshv8hi */
    case 1564:  /* neon_vqrdmlahv8hi */
    case 1563:  /* neon_vqrdmlshv2si */
    case 1562:  /* neon_vqrdmlahv2si */
    case 1561:  /* neon_vqrdmlshv4hi */
    case 1560:  /* neon_vqrdmlahv4hi */
    case 1551:  /* neon_vmlsluv2si */
    case 1550:  /* neon_vmlslsv2si */
    case 1549:  /* neon_vmlsluv4hi */
    case 1548:  /* neon_vmlslsv4hi */
    case 1547:  /* neon_vmlsluv8qi */
    case 1546:  /* neon_vmlslsv8qi */
    case 1545:  /* neon_vmlsv4sf_unspec */
    case 1544:  /* neon_vmlsv2sf_unspec */
    case 1543:  /* neon_vmlsv4si_unspec */
    case 1542:  /* neon_vmlsv2si_unspec */
    case 1541:  /* neon_vmlsv8hi_unspec */
    case 1540:  /* neon_vmlsv4hi_unspec */
    case 1539:  /* neon_vmlsv16qi_unspec */
    case 1538:  /* neon_vmlsv8qi_unspec */
    case 1537:  /* neon_vmlaluv2si */
    case 1536:  /* neon_vmlalsv2si */
    case 1535:  /* neon_vmlaluv4hi */
    case 1534:  /* neon_vmlalsv4hi */
    case 1533:  /* neon_vmlaluv8qi */
    case 1532:  /* neon_vmlalsv8qi */
    case 1531:  /* neon_vmlav4sf_unspec */
    case 1530:  /* neon_vmlav2sf_unspec */
    case 1529:  /* neon_vmlav4si_unspec */
    case 1528:  /* neon_vmlav2si_unspec */
    case 1527:  /* neon_vmlav8hi_unspec */
    case 1526:  /* neon_vmlav4hi_unspec */
    case 1525:  /* neon_vmlav16qi_unspec */
    case 1524:  /* neon_vmlav8qi_unspec */
    case 908:  /* arm_vcx2di */
    case 907:  /* arm_vcx2si */
    case 906:  /* arm_vcx1adi */
    case 905:  /* arm_vcx1asi */
    case 666:  /* iwmmxt_wsadh */
    case 665:  /* iwmmxt_wsadb */
    case 557:  /* iwmmxt_wmacu */
    case 555:  /* iwmmxt_wmacs */
    case 498:  /* arm_mrrc2 */
    case 497:  /* arm_mrrc */
    case 240:  /* arm_smlsdx_insn */
    case 238:  /* arm_smlsd_insn */
    case 236:  /* arm_smladx_insn */
    case 234:  /* arm_smlad_insn */
    case 221:  /* arm_smlsldx */
    case 220:  /* arm_smlsld */
    case 219:  /* arm_smlaldx */
    case 218:  /* arm_smlald */
    case 217:  /* arm_usada8 */
    case 140:  /* arm_cx2di */
    case 139:  /* arm_cx2si */
    case 138:  /* arm_cx1adi */
    case 137:  /* arm_cx1asi */
    case 88:  /* arm_smlawt_insn */
    case 86:  /* arm_smlawb_insn */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 2));
      break;

    case 85:  /* *maddhidi4tt */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 84:  /* *maddhidi4tb */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 82:  /* arm_smlatt_setq */
    case 80:  /* arm_smlatb_setq */
    case 78:  /* arm_smlabb_setq */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 83:  /* maddhidi4 */
    case 81:  /* maddhisi4tt */
    case 79:  /* maddhisi4tb */
    case 77:  /* *arm_maddhisi4 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 2786:  /* vec_pack_trunc_v2di */
    case 2785:  /* vec_pack_trunc_v4si */
    case 2784:  /* vec_pack_trunc_v8hi */
    case 2783:  /* neon_vec_umult_v2si */
    case 2782:  /* neon_vec_smult_v2si */
    case 2781:  /* neon_vec_umult_v4hi */
    case 2780:  /* neon_vec_smult_v4hi */
    case 2779:  /* neon_vec_umult_v8qi */
    case 2778:  /* neon_vec_smult_v8qi */
    case 608:  /* iwmmxt_wunpckilw */
    case 607:  /* iwmmxt_wunpckilh */
    case 606:  /* iwmmxt_wunpckilb */
    case 605:  /* iwmmxt_wunpckihw */
    case 604:  /* iwmmxt_wunpckihh */
    case 603:  /* iwmmxt_wunpckihb */
    case 602:  /* iwmmxt_wpackdus */
    case 601:  /* iwmmxt_wpackwus */
    case 600:  /* iwmmxt_wpackhus */
    case 599:  /* iwmmxt_wpackdss */
    case 598:  /* iwmmxt_wpackwss */
    case 597:  /* iwmmxt_wpackhss */
    case 76:  /* *mulhisi3tt */
    case 75:  /* *mulhisi3bt */
    case 74:  /* *mulhisi3tb */
    case 73:  /* mulhisi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 72:  /* *umull_high */
    case 71:  /* *smull_high */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 70:  /* umlal */
    case 69:  /* smlal */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0), 0), 0), 0), 0);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0), 0), 0), 1), 0);
      recog_data.dup_num[1] = 5;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0), 0), 1), 0);
      recog_data.dup_num[2] = 1;
      break;

    case 68:  /* umull */
    case 67:  /* smull */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0), 0), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0), 1), 0);
      recog_data.dup_num[1] = 3;
      break;

    case 66:  /* *mulsi3addsi_compare0_scratch_v6 */
    case 65:  /* *mulsi3addsi_compare0_scratch */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      break;

    case 64:  /* *mulsi3addsi_compare0_v6 */
    case 63:  /* *mulsi3addsi_compare0 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[2] = 3;
      break;

    case 62:  /* *mulsi_compare0_scratch_v6 */
    case 61:  /* *mulsi_compare0_scratch */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      break;

    case 60:  /* *mulsi3_compare0_v6 */
    case 59:  /* *mulsi3_compare0 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 1;
      break;

    case 58:  /* *mls */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 57:  /* *mla */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 55:  /* subvsi3_borrow_imm */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[2] = 3;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 0);
      recog_data.dup_num[3] = 1;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 1);
      recog_data.dup_num[4] = 2;
      break;

    case 54:  /* subvsi3_borrow */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[2] = 3;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 0);
      recog_data.dup_num[3] = 1;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 1);
      recog_data.dup_num[4] = 2;
      break;

    case 53:  /* usubvsi3_borrow_imm */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 52:  /* usubvsi3_borrow */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 51:  /* rscsi3_CC_Bout_scratch */
    case 50:  /* rscsi3_CC_NVout_scratch */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      break;

    case 49:  /* rsb_imm_compare_scratch */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      break;

    case 48:  /* rsb_imm_compare */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[0] = 2;
      break;

    case 43:  /* *rsbsi3_carryin_shift */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 42:  /* *subsi3_carryin_shift_alt */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 41:  /* *subsi3_carryin_shift */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 38:  /* cmpsi3_0_carryin_CC_Bout */
    case 37:  /* cmpsi3_0_carryin_CC_NVout */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 36:  /* cmpsi3_imm_carryin_CC_Bout */
    case 35:  /* cmpsi3_imm_carryin_CC_NVout */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 34:  /* cmpsi3_carryin_CC_Bout */
    case 33:  /* cmpsi3_carryin_CC_NVout */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 32:  /* add_not_shift_cin */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 31:  /* *add_not_cin */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 28:  /* subvsi3_imm1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 1);
      recog_data.dup_num[3] = 2;
      break;

    case 47:  /* subsi3_compare */
    case 26:  /* subsi3_compare1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 25:  /* *addsi3_carryin_clobercc */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 44:  /* *rsbsi3_carryin_shift_alt */
    case 24:  /* *addsi3_carryin_shift */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 131:  /* satsi_smax */
    case 129:  /* satsi_smin */
    case 23:  /* *addsi3_carryin_alt2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 56:  /* *mul */
    case 22:  /* add0si3_carryin */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 39:  /* *subsi3_carryin_const */
    case 29:  /* subsi3_carryin */
    case 21:  /* addsi3_carryin */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 20:  /* *compare_addsi2_op1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 19:  /* *compare_addsi2_op0 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 0;
      break;

    case 18:  /* *addsi3_compare_op2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[2] = 2;
      break;

    case 17:  /* addsi3_compare_op1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[2] = 1;
      break;

    case 16:  /* cmpsi2_addneg */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 15:  /* *compare_negsi_si */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 1034:  /* *thumb2_addsi3_compare0_scratch */
    case 111:  /* *xorsi3_compare0_scratch */
    case 14:  /* *addsi3_compare0_scratch */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 1036:  /* *thumb2_mulsi_short_compare0 */
    case 1033:  /* thumb2_addsi3_compare0 */
    case 110:  /* *xorsi3_compare0 */
    case 107:  /* *iorsi3_compare0 */
    case 91:  /* *andsi3_compare0 */
    case 46:  /* subsi3_compare0 */
    case 13:  /* addsi3_compare0 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 12:  /* addsi3_compareV_imm_nosum */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0);
      recog_data.dup_num[0] = 0;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1);
      recog_data.dup_num[1] = 1;
      break;

    case 11:  /* addsi3_compareV_imm */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 1);
      recog_data.dup_num[3] = 2;
      break;

    case 10:  /* subvsi3_intmin */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0);
      recog_data.dup_num[1] = 1;
      break;

    case 9:  /* *addsi3_compareV_reg_nosum */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0);
      recog_data.dup_num[0] = 0;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1);
      recog_data.dup_num[1] = 1;
      break;

    case 27:  /* subvsi3 */
    case 8:  /* addsi3_compareV_reg */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 1);
      recog_data.dup_num[3] = 2;
      break;

    case 4916:  /* mve_sqshll_di */
    case 4913:  /* mve_sqshl_si */
    case 4911:  /* mve_uqshl_si */
    case 4909:  /* mve_uqshll_di */
    case 4807:  /* mve_vaddq_fv4sf */
    case 4806:  /* mve_vaddq_fv8hf */
    case 4805:  /* mve_vaddqv4si */
    case 4804:  /* mve_vaddqv8hi */
    case 4803:  /* mve_vaddqv16qi */
    case 3663:  /* mve_vsubq_fv4sf */
    case 3662:  /* mve_vsubq_fv8hf */
    case 3626:  /* mve_vorrq_fv4sf */
    case 3625:  /* mve_vorrq_fv8hf */
    case 3620:  /* mve_vmulq_fv4sf */
    case 3619:  /* mve_vmulq_fv8hf */
    case 3598:  /* mve_vminnmq_fv4sf */
    case 3597:  /* mve_vminnmq_fv8hf */
    case 3590:  /* mve_vmaxnmq_fv4sf */
    case 3589:  /* mve_vmaxnmq_fv8hf */
    case 3584:  /* mve_veorq_fv4sf */
    case 3583:  /* mve_veorq_fv8hf */
    case 3534:  /* mve_vandq_fv4sf */
    case 3533:  /* mve_vandq_fv8hf */
    case 3526:  /* mve_vsubqv4si */
    case 3525:  /* mve_vsubqv8hi */
    case 3524:  /* mve_vsubqv16qi */
    case 3400:  /* mve_vorrq_sv4si */
    case 3399:  /* mve_vorrq_sv8hi */
    case 3398:  /* mve_vorrq_sv16qi */
    case 3394:  /* mve_vmulqv4si */
    case 3393:  /* mve_vmulqv8hi */
    case 3392:  /* mve_vmulqv16qi */
    case 3340:  /* mve_vminq_uv4si */
    case 3339:  /* mve_vminq_uv8hi */
    case 3338:  /* mve_vminq_uv16qi */
    case 3337:  /* mve_vminq_sv4si */
    case 3336:  /* mve_vminq_sv8hi */
    case 3335:  /* mve_vminq_sv16qi */
    case 3322:  /* mve_vmaxq_uv4si */
    case 3321:  /* mve_vmaxq_uv8hi */
    case 3320:  /* mve_vmaxq_uv16qi */
    case 3319:  /* mve_vmaxq_sv4si */
    case 3318:  /* mve_vmaxq_sv8hi */
    case 3317:  /* mve_vmaxq_sv16qi */
    case 3280:  /* mve_veorq_uv4si */
    case 3279:  /* mve_veorq_uv8hi */
    case 3278:  /* mve_veorq_uv16qi */
    case 3208:  /* mve_vandq_uv4si */
    case 3207:  /* mve_vandq_uv8hi */
    case 3206:  /* mve_vandq_uv16qi */
    case 3169:  /* mve_vshrq_n_uv4si_imm */
    case 3168:  /* mve_vshrq_n_uv8hi_imm */
    case 3167:  /* mve_vshrq_n_uv16qi_imm */
    case 3166:  /* mve_vshrq_n_sv4si_imm */
    case 3165:  /* mve_vshrq_n_sv8hi_imm */
    case 3164:  /* mve_vshrq_n_sv16qi_imm */
    case 2999:  /* *arm_sssubsa3 */
    case 2998:  /* *arm_sssubsq3 */
    case 2997:  /* *arm_sssubha3 */
    case 2996:  /* *arm_sssubv2ha3 */
    case 2995:  /* *arm_sssubhq3 */
    case 2994:  /* *arm_sssubqq3 */
    case 2993:  /* *arm_sssubv2hq3 */
    case 2992:  /* *arm_sssubv4qq3 */
    case 2991:  /* ussubuha3 */
    case 2990:  /* ussubv2uha3 */
    case 2989:  /* ussubuhq3 */
    case 2988:  /* ussubuqq3 */
    case 2987:  /* ussubv2uhq3 */
    case 2986:  /* ussubv4uqq3 */
    case 2985:  /* *arm_subv2ha3 */
    case 2984:  /* *arm_subv2hq3 */
    case 2983:  /* *arm_subv4qq3 */
    case 2982:  /* subusa3 */
    case 2981:  /* subuha3 */
    case 2980:  /* subsa3 */
    case 2979:  /* subha3 */
    case 2978:  /* subusq3 */
    case 2977:  /* subuhq3 */
    case 2976:  /* subuqq3 */
    case 2975:  /* subsq3 */
    case 2974:  /* subhq3 */
    case 2973:  /* subqq3 */
    case 2972:  /* *arm_ssaddsa3 */
    case 2971:  /* *arm_ssaddsq3 */
    case 2970:  /* *arm_ssaddha3 */
    case 2969:  /* *arm_ssaddv2ha3 */
    case 2968:  /* *arm_ssaddhq3 */
    case 2967:  /* *arm_ssaddqq3 */
    case 2966:  /* *arm_ssaddv2hq3 */
    case 2965:  /* *arm_ssaddv4qq3 */
    case 2964:  /* usadduha3 */
    case 2963:  /* usaddv2uha3 */
    case 2962:  /* usadduhq3 */
    case 2961:  /* usadduqq3 */
    case 2960:  /* usaddv2uhq3 */
    case 2959:  /* usaddv4uqq3 */
    case 2958:  /* *arm_addv2ha3 */
    case 2957:  /* *arm_addv2hq3 */
    case 2956:  /* *arm_addv4qq3 */
    case 2955:  /* addusa3 */
    case 2954:  /* adduha3 */
    case 2953:  /* addsa3 */
    case 2952:  /* addha3 */
    case 2951:  /* addusq3 */
    case 2950:  /* adduhq3 */
    case 2949:  /* adduqq3 */
    case 2948:  /* addsq3 */
    case 2947:  /* addhq3 */
    case 2946:  /* addqq3 */
    case 2059:  /* neon_vcombinedi */
    case 2058:  /* neon_vcombinev2sf */
    case 2057:  /* neon_vcombinev2si */
    case 2056:  /* neon_vcombinev4bf */
    case 2055:  /* neon_vcombinev4hf */
    case 2054:  /* neon_vcombinev4hi */
    case 2053:  /* neon_vcombinev8qi */
    case 1499:  /* neon_vmulfv4hf */
    case 1498:  /* neon_vmulfv8hf */
    case 1433:  /* *us_subv2sf_neon */
    case 1432:  /* *us_subv2si_neon */
    case 1431:  /* *us_subv4hi_neon */
    case 1430:  /* *us_subv8qi_neon */
    case 1429:  /* *ss_subv2sf_neon */
    case 1428:  /* *ss_subv2si_neon */
    case 1427:  /* *ss_subv4hi_neon */
    case 1426:  /* *ss_subv8qi_neon */
    case 1425:  /* *us_addv2sf_neon */
    case 1424:  /* *us_addv2si_neon */
    case 1423:  /* *us_addv4hi_neon */
    case 1422:  /* *us_addv8qi_neon */
    case 1421:  /* *ss_addv2sf_neon */
    case 1420:  /* *ss_addv2si_neon */
    case 1419:  /* *ss_addv4hi_neon */
    case 1418:  /* *ss_addv8qi_neon */
    case 1346:  /* vlshrv4si3_imm */
    case 1345:  /* vlshrv2si3_imm */
    case 1344:  /* vlshrv8hi3_imm */
    case 1343:  /* vlshrv4hi3_imm */
    case 1342:  /* vlshrv16qi3_imm */
    case 1341:  /* vlshrv8qi3_imm */
    case 1340:  /* vashrv4si3_imm */
    case 1339:  /* vashrv2si3_imm */
    case 1338:  /* vashrv8hi3_imm */
    case 1337:  /* vashrv4hi3_imm */
    case 1336:  /* vashrv16qi3_imm */
    case 1335:  /* vashrv8qi3_imm */
    case 1334:  /* *smaxv4sf3_neon */
    case 1333:  /* *smaxv2sf3_neon */
    case 1332:  /* *smaxv4si3_neon */
    case 1331:  /* *smaxv2si3_neon */
    case 1330:  /* *smaxv8hi3_neon */
    case 1329:  /* *smaxv4hi3_neon */
    case 1328:  /* *smaxv16qi3_neon */
    case 1327:  /* *smaxv8qi3_neon */
    case 1326:  /* *sminv4sf3_neon */
    case 1325:  /* *sminv2sf3_neon */
    case 1324:  /* *sminv4si3_neon */
    case 1323:  /* *sminv2si3_neon */
    case 1322:  /* *sminv8hi3_neon */
    case 1321:  /* *sminv4hi3_neon */
    case 1320:  /* *sminv16qi3_neon */
    case 1319:  /* *sminv8qi3_neon */
    case 1318:  /* *umaxv4si3_neon */
    case 1317:  /* *umaxv2si3_neon */
    case 1316:  /* *umaxv8hi3_neon */
    case 1315:  /* *umaxv4hi3_neon */
    case 1314:  /* *umaxv16qi3_neon */
    case 1313:  /* *umaxv8qi3_neon */
    case 1312:  /* *uminv4si3_neon */
    case 1311:  /* *uminv2si3_neon */
    case 1310:  /* *uminv8hi3_neon */
    case 1309:  /* *uminv4hi3_neon */
    case 1308:  /* *uminv16qi3_neon */
    case 1307:  /* *uminv8qi3_neon */
    case 1261:  /* xorv2di3_neon */
    case 1260:  /* xorv4sf3_neon */
    case 1259:  /* xorv2sf3_neon */
    case 1258:  /* xorv8hf3_neon */
    case 1257:  /* xorv4hf3_neon */
    case 1256:  /* xorv4si3_neon */
    case 1255:  /* xorv2si3_neon */
    case 1254:  /* xorv8hi3_neon */
    case 1253:  /* xorv4hi3_neon */
    case 1252:  /* xorv16qi3_neon */
    case 1251:  /* xorv8qi3_neon */
    case 1228:  /* andv2di3_neon */
    case 1227:  /* andv4sf3_neon */
    case 1226:  /* andv2sf3_neon */
    case 1225:  /* andv8hf3_neon */
    case 1224:  /* andv4hf3_neon */
    case 1223:  /* andv4si3_neon */
    case 1222:  /* andv2si3_neon */
    case 1221:  /* andv8hi3_neon */
    case 1220:  /* andv4hi3_neon */
    case 1219:  /* andv16qi3_neon */
    case 1218:  /* andv8qi3_neon */
    case 1217:  /* iorv2di3_neon */
    case 1216:  /* iorv4sf3_neon */
    case 1215:  /* iorv2sf3_neon */
    case 1214:  /* iorv8hf3_neon */
    case 1213:  /* iorv4hf3_neon */
    case 1212:  /* iorv4si3_neon */
    case 1211:  /* iorv2si3_neon */
    case 1210:  /* iorv8hi3_neon */
    case 1209:  /* iorv4hi3_neon */
    case 1208:  /* iorv16qi3_neon */
    case 1207:  /* iorv8qi3_neon */
    case 1152:  /* *mulv4sf3_neon */
    case 1151:  /* *mulv2sf3_neon */
    case 1150:  /* *mulv4si3_neon */
    case 1149:  /* *mulv2si3_neon */
    case 1148:  /* *mulv8hi3_neon */
    case 1147:  /* *mulv4hi3_neon */
    case 1146:  /* *mulv16qi3_neon */
    case 1145:  /* *mulv8qi3_neon */
    case 1144:  /* *subv2di3_neon */
    case 1143:  /* *subv4sf3_neon */
    case 1142:  /* *subv2sf3_neon */
    case 1141:  /* *subv8hf3_neon */
    case 1140:  /* *subv4hf3_neon */
    case 1139:  /* *subv4si3_neon */
    case 1138:  /* *subv2si3_neon */
    case 1137:  /* *subv8hi3_neon */
    case 1136:  /* *subv4hi3_neon */
    case 1135:  /* *subv16qi3_neon */
    case 1134:  /* *subv8qi3_neon */
    case 1133:  /* *addv2di3_neon */
    case 1132:  /* *addv4sf3_neon */
    case 1131:  /* *addv2sf3_neon */
    case 1130:  /* *addv8hf3_neon */
    case 1129:  /* *addv4hf3_neon */
    case 1128:  /* *addv4si3_neon */
    case 1127:  /* *addv2si3_neon */
    case 1126:  /* *addv8hi3_neon */
    case 1125:  /* *addv4hi3_neon */
    case 1124:  /* *addv16qi3_neon */
    case 1123:  /* *addv8qi3_neon */
    case 962:  /* cstoresi_ltu_thumb1 */
    case 928:  /* *thumb1_rotrsi3 */
    case 927:  /* *thumb1_lshrsi3 */
    case 926:  /* *thumb1_ashrsi3 */
    case 925:  /* *thumb1_ashlsi3 */
    case 924:  /* *thumb1_xorsi3_insn */
    case 923:  /* *thumb1_iorsi3_insn */
    case 921:  /* *thumb1_andsi3_insn */
    case 920:  /* *thumb_mulsi3_v6 */
    case 919:  /* *thumb_mulsi3 */
    case 918:  /* thumb1_subsi3_insn */
    case 916:  /* *thumb1_addsi3 */
    case 892:  /* smindf3 */
    case 891:  /* sminsf3 */
    case 890:  /* smaxdf3 */
    case 889:  /* smaxsf3 */
    case 780:  /* *muldf3_vfp */
    case 779:  /* *mulsf3_vfp */
    case 778:  /* mulhf3 */
    case 777:  /* *divdf3_vfp */
    case 776:  /* *divsf3_vfp */
    case 775:  /* divhf3 */
    case 774:  /* *subdf3_vfp */
    case 773:  /* *subsf3_vfp */
    case 772:  /* subhf3 */
    case 771:  /* *adddf3_vfp */
    case 770:  /* *addsf3_vfp */
    case 769:  /* addhf3 */
    case 691:  /* iwmmxt_wmulwl */
    case 644:  /* ashldi3_di */
    case 643:  /* ashlv2si3_di */
    case 642:  /* ashlv4hi3_di */
    case 641:  /* lshrdi3_di */
    case 640:  /* lshrv2si3_di */
    case 639:  /* lshrv4hi3_di */
    case 638:  /* ashrdi3_di */
    case 637:  /* ashrv2si3_di */
    case 636:  /* ashrv4hi3_di */
    case 635:  /* rordi3_di */
    case 634:  /* rorv2si3_di */
    case 633:  /* rorv4hi3_di */
    case 632:  /* ashldi3_iwmmxt */
    case 631:  /* ashlv2si3_iwmmxt */
    case 630:  /* ashlv4hi3_iwmmxt */
    case 629:  /* lshrdi3_iwmmxt */
    case 628:  /* lshrv2si3_iwmmxt */
    case 627:  /* lshrv4hi3_iwmmxt */
    case 626:  /* ashrdi3_iwmmxt */
    case 625:  /* ashrv2si3_iwmmxt */
    case 624:  /* ashrv4hi3_iwmmxt */
    case 623:  /* rordi3 */
    case 622:  /* rorv2si3 */
    case 621:  /* rorv4hi3 */
    case 596:  /* *uminv8qi3_iwmmxt */
    case 595:  /* *uminv4hi3_iwmmxt */
    case 594:  /* *uminv2si3_iwmmxt */
    case 593:  /* *sminv8qi3_iwmmxt */
    case 592:  /* *sminv4hi3_iwmmxt */
    case 591:  /* *sminv2si3_iwmmxt */
    case 590:  /* *umaxv8qi3_iwmmxt */
    case 589:  /* *umaxv4hi3_iwmmxt */
    case 588:  /* *umaxv2si3_iwmmxt */
    case 587:  /* *smaxv8qi3_iwmmxt */
    case 586:  /* *smaxv4hi3_iwmmxt */
    case 585:  /* *smaxv2si3_iwmmxt */
    case 552:  /* *mulv4hi3_iwmmxt */
    case 551:  /* ussubv2si3 */
    case 550:  /* ussubv4hi3 */
    case 549:  /* ussubv8qi3 */
    case 548:  /* sssubv2si3 */
    case 547:  /* sssubv4hi3 */
    case 546:  /* sssubv8qi3 */
    case 545:  /* *subv8qi3_iwmmxt */
    case 544:  /* *subv4hi3_iwmmxt */
    case 543:  /* *subv2si3_iwmmxt */
    case 542:  /* usaddv2si3 */
    case 541:  /* usaddv4hi3 */
    case 540:  /* usaddv8qi3 */
    case 539:  /* ssaddv2si3 */
    case 538:  /* ssaddv4hi3 */
    case 537:  /* ssaddv8qi3 */
    case 536:  /* *addv8qi3_iwmmxt */
    case 535:  /* *addv4hi3_iwmmxt */
    case 534:  /* *addv2si3_iwmmxt */
    case 533:  /* *xorv8qi3_iwmmxt */
    case 532:  /* *xorv4hi3_iwmmxt */
    case 531:  /* *xorv2si3_iwmmxt */
    case 530:  /* *iorv8qi3_iwmmxt */
    case 529:  /* *iorv4hi3_iwmmxt */
    case 528:  /* *iorv2si3_iwmmxt */
    case 527:  /* *andv8qi3_iwmmxt */
    case 526:  /* *andv4hi3_iwmmxt */
    case 525:  /* *andv2si3_iwmmxt */
    case 517:  /* iwmmxt_anddi3 */
    case 516:  /* iwmmxt_xordi3 */
    case 515:  /* iwmmxt_iordi3 */
    case 252:  /* *arm_movt */
    case 163:  /* udivsi3 */
    case 162:  /* divsi3 */
    case 125:  /* arm_qsub_insn */
    case 123:  /* arm_qadd_insn */
    case 109:  /* *arm_xorsi3 */
    case 106:  /* *iorsi3_insn */
    case 90:  /* *arm_andsi3_insn */
    case 45:  /* *arm_subsi3_insn */
    case 40:  /* *subsi3_carryin_const0 */
    case 30:  /* rsbsi_carryin_reg */
    case 7:  /* *arm_addsi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 6:  /* *addsi3_cin_cout_0_insn */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 5:  /* *addsi3_cin_cout_imm_insn */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 4:  /* *addsi3_cin_cout_reg_insn */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 3:  /* *addsi3_cin_vout_0_insn */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 1);
      recog_data.dup_num[2] = 1;
      break;

    case 2:  /* *addsi3_cin_vout_imm_insn */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[2] = 2;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 1);
      recog_data.dup_num[3] = 1;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 1);
      recog_data.dup_num[4] = 2;
      break;

    case 1:  /* *addsi3_cin_vout_reg_insn */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[2] = 2;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 1);
      recog_data.dup_num[3] = 1;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 1);
      recog_data.dup_num[4] = 2;
      break;

    }
}
