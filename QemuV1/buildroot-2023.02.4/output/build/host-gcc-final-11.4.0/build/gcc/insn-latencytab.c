/* Generated automatically by the program `genattrtab'
   from the machine description file `md'.  */

#define IN_TARGET_CODE 1
#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "backend.h"
#include "predict.h"
#include "tree.h"
#include "rtl.h"
#include "alias.h"
#include "options.h"
#include "varasm.h"
#include "stor-layout.h"
#include "calls.h"
#include "insn-attr.h"
#include "memmodel.h"
#include "tm_p.h"
#include "insn-config.h"
#include "recog.h"
#include "regs.h"
#include "real.h"
#include "output.h"
#include "toplev.h"
#include "flags.h"
#include "emit-rtl.h"

#define operands recog_data.operand

int
insn_default_latency (rtx_insn *insn ATTRIBUTE_UNUSED)
{
  enum attr_type cached_type ATTRIBUTE_UNUSED;
  enum attr_mul32 cached_mul32 ATTRIBUTE_UNUSED;
  enum attr_widen_mul64 cached_widen_mul64 ATTRIBUTE_UNUSED;
  enum attr_core_cycles cached_core_cycles ATTRIBUTE_UNUSED;
  enum attr_cortex_a7_neon_type cached_cortex_a7_neon_type ATTRIBUTE_UNUSED;
  enum attr_cortex_a8_neon_type cached_cortex_a8_neon_type ATTRIBUTE_UNUSED;
  enum attr_cortex_a9_neon_type cached_cortex_a9_neon_type ATTRIBUTE_UNUSED;
  enum attr_cortex_a15_neon_type cached_cortex_a15_neon_type ATTRIBUTE_UNUSED;
  enum attr_cortex_a17_neon_type cached_cortex_a17_neon_type ATTRIBUTE_UNUSED;
  enum attr_cortex_a53_advsimd_type cached_cortex_a53_advsimd_type ATTRIBUTE_UNUSED;
  enum attr_cortex_a57_neon_type cached_cortex_a57_neon_type ATTRIBUTE_UNUSED;
  enum attr_predicated cached_predicated ATTRIBUTE_UNUSED;
  enum attr_exynos_m1_neon_type cached_exynos_m1_neon_type ATTRIBUTE_UNUSED;
  enum attr_conds cached_conds ATTRIBUTE_UNUSED;
  int cached_shift ATTRIBUTE_UNUSED;

  switch (recog_memoized (insn))
    {
    case 2806:  /* neon_vbfdot_lanev8bfv4sf */
    case 2805:  /* neon_vbfdot_lanev8bfv2sf */
    case 2804:  /* neon_vbfdot_lanev4bfv4sf */
    case 2803:  /* neon_vbfdot_lanev4bfv2sf */
    case 2802:  /* neon_vbfdotv4sf */
    case 2801:  /* neon_vbfdotv2sf */
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
    case 1949:  /* neon_usdotv16qi */
    case 1948:  /* neon_usdotv8qi */
    case 1947:  /* udot_prodv16qi */
    case 1946:  /* sdot_prodv16qi */
    case 1945:  /* udot_prodv8qi */
    case 1944:  /* sdot_prodv8qi */
      if ((! (((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA12)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1))))) || (((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))))))
        {
	  return 32 /* 0x20 */;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))))
        {
	  return 4;
        }
      else
        {
	  return 0;
        }

    case 6725:  /* *p iwmmxt_textrcv8qi3 */
    case 6724:  /* *p iwmmxt_textrcv4hi3 */
    case 6723:  /* *p iwmmxt_textrcv2si3 */
    case 6722:  /* *p iwmmxt_torvscv8qi3 */
    case 6721:  /* *p iwmmxt_torvscv4hi3 */
    case 6720:  /* *p iwmmxt_torvscv2si3 */
    case 6719:  /* *p iwmmxt_torcv8qi3 */
    case 6718:  /* *p iwmmxt_torcv4hi3 */
    case 6717:  /* *p iwmmxt_torcv2si3 */
    case 6716:  /* *p iwmmxt_tandcv8qi3 */
    case 6715:  /* *p iwmmxt_tandcv4hi3 */
    case 6714:  /* *p iwmmxt_tandcv2si3 */
    case 734:  /* iwmmxt_textrcv8qi3 */
    case 733:  /* iwmmxt_textrcv4hi3 */
    case 732:  /* iwmmxt_textrcv2si3 */
    case 731:  /* iwmmxt_torvscv8qi3 */
    case 730:  /* iwmmxt_torvscv4hi3 */
    case 729:  /* iwmmxt_torvscv2si3 */
    case 728:  /* iwmmxt_torcv8qi3 */
    case 727:  /* iwmmxt_torcv4hi3 */
    case 726:  /* iwmmxt_torcv2si3 */
    case 725:  /* iwmmxt_tandcv8qi3 */
    case 724:  /* iwmmxt_tandcv4hi3 */
    case 723:  /* iwmmxt_tandcv2si3 */
      if ((! (((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA12)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1))))) || (((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 6646:  /* *p iwmmxt_tmovmskw */
    case 6645:  /* *p iwmmxt_tmovmskh */
    case 6644:  /* *p iwmmxt_tmovmskb */
    case 6565:  /* *p iwmmxt_textrmw */
    case 6564:  /* *p iwmmxt_textrmsh */
    case 6563:  /* *p iwmmxt_textrmuh */
    case 6562:  /* *p iwmmxt_textrmsb */
    case 6561:  /* *p iwmmxt_textrmub */
    case 655:  /* iwmmxt_tmovmskw */
    case 654:  /* iwmmxt_tmovmskh */
    case 653:  /* iwmmxt_tmovmskb */
    case 574:  /* iwmmxt_textrmw */
    case 573:  /* iwmmxt_textrmsh */
    case 572:  /* iwmmxt_textrmuh */
    case 571:  /* iwmmxt_textrmsb */
    case 570:  /* iwmmxt_textrmub */
      if ((
#line 56 "../../gcc/config/arm/marvell-f-iwmmxt.md"
(arm_arch_iwmmxt)))
        {
	  return 5;
        }
      else if ((! (((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA12)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1))))) || (((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 6712:  /* *p iwmmxt_wmiawttn */
    case 6711:  /* *p iwmmxt_wmiawtbn */
    case 6710:  /* *p iwmmxt_wmiawbtn */
    case 6709:  /* *p iwmmxt_wmiawbbn */
    case 6708:  /* *p iwmmxt_wmiawtt */
    case 6707:  /* *p iwmmxt_wmiawtb */
    case 6706:  /* *p iwmmxt_wmiawbt */
    case 6705:  /* *p iwmmxt_wmiawbb */
    case 6704:  /* *p iwmmxt_wmiattn */
    case 6703:  /* *p iwmmxt_wmiatbn */
    case 6702:  /* *p iwmmxt_wmiabtn */
    case 6701:  /* *p iwmmxt_wmiabbn */
    case 6700:  /* *p iwmmxt_wmiatt */
    case 6699:  /* *p iwmmxt_wmiatb */
    case 6698:  /* *p iwmmxt_wmiabt */
    case 6697:  /* *p iwmmxt_wmiabb */
    case 6696:  /* *p iwmmxt_wqmiattn */
    case 6695:  /* *p iwmmxt_wqmiatbn */
    case 6694:  /* *p iwmmxt_wqmiabtn */
    case 6693:  /* *p iwmmxt_wqmiabbn */
    case 6692:  /* *p iwmmxt_wqmiatt */
    case 6691:  /* *p iwmmxt_wqmiatb */
    case 6690:  /* *p iwmmxt_wqmiabt */
    case 6689:  /* *p iwmmxt_wqmiabb */
    case 6686:  /* *p iwmmxt_wqmulwmr */
    case 6684:  /* *p iwmmxt_wqmulwm */
    case 6682:  /* *p iwmmxt_wmulwl */
    case 6681:  /* *p iwmmxt_wmulwumr */
    case 6677:  /* *p iwmmxt_wmulwum */
    case 6676:  /* *p iwmmxt_wmulwsm */
    case 6675:  /* *p iwmmxt_wmaddun */
    case 6674:  /* *p iwmmxt_wmaddsn */
    case 6673:  /* *p iwmmxt_wmaddux */
    case 6672:  /* *p iwmmxt_wmaddsx */
    case 6643:  /* *p iwmmxt_tmiatt */
    case 6642:  /* *p iwmmxt_tmiabt */
    case 6641:  /* *p iwmmxt_tmiatb */
    case 6640:  /* *p iwmmxt_tmiabb */
    case 6639:  /* *p iwmmxt_tmiaph */
    case 6638:  /* *p iwmmxt_tmia */
    case 6637:  /* *p iwmmxt_wmaddu */
    case 6636:  /* *p iwmmxt_wmadds */
    case 6549:  /* *p iwmmxt_wmacuz */
    case 6548:  /* *p iwmmxt_wmacu */
    case 6547:  /* *p iwmmxt_wmacsz */
    case 6546:  /* *p iwmmxt_wmacs */
    case 721:  /* iwmmxt_wmiawttn */
    case 720:  /* iwmmxt_wmiawtbn */
    case 719:  /* iwmmxt_wmiawbtn */
    case 718:  /* iwmmxt_wmiawbbn */
    case 717:  /* iwmmxt_wmiawtt */
    case 716:  /* iwmmxt_wmiawtb */
    case 715:  /* iwmmxt_wmiawbt */
    case 714:  /* iwmmxt_wmiawbb */
    case 713:  /* iwmmxt_wmiattn */
    case 712:  /* iwmmxt_wmiatbn */
    case 711:  /* iwmmxt_wmiabtn */
    case 710:  /* iwmmxt_wmiabbn */
    case 709:  /* iwmmxt_wmiatt */
    case 708:  /* iwmmxt_wmiatb */
    case 707:  /* iwmmxt_wmiabt */
    case 706:  /* iwmmxt_wmiabb */
    case 705:  /* iwmmxt_wqmiattn */
    case 704:  /* iwmmxt_wqmiatbn */
    case 703:  /* iwmmxt_wqmiabtn */
    case 702:  /* iwmmxt_wqmiabbn */
    case 701:  /* iwmmxt_wqmiatt */
    case 700:  /* iwmmxt_wqmiatb */
    case 699:  /* iwmmxt_wqmiabt */
    case 698:  /* iwmmxt_wqmiabb */
    case 695:  /* iwmmxt_wqmulwmr */
    case 693:  /* iwmmxt_wqmulwm */
    case 691:  /* iwmmxt_wmulwl */
    case 690:  /* iwmmxt_wmulwumr */
    case 686:  /* iwmmxt_wmulwum */
    case 685:  /* iwmmxt_wmulwsm */
    case 684:  /* iwmmxt_wmaddun */
    case 683:  /* iwmmxt_wmaddsn */
    case 682:  /* iwmmxt_wmaddux */
    case 681:  /* iwmmxt_wmaddsx */
    case 652:  /* iwmmxt_tmiatt */
    case 651:  /* iwmmxt_tmiabt */
    case 650:  /* iwmmxt_tmiatb */
    case 649:  /* iwmmxt_tmiabb */
    case 648:  /* iwmmxt_tmiaph */
    case 647:  /* iwmmxt_tmia */
    case 646:  /* iwmmxt_wmaddu */
    case 645:  /* iwmmxt_wmadds */
    case 558:  /* iwmmxt_wmacuz */
    case 557:  /* iwmmxt_wmacu */
    case 556:  /* iwmmxt_wmacsz */
    case 555:  /* iwmmxt_wmacs */
      if ((
#line 56 "../../gcc/config/arm/marvell-f-iwmmxt.md"
(arm_arch_iwmmxt)))
        {
	  return 4;
        }
      else if ((! (((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA12)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1))))) || (((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 6685:  /* *p iwmmxt_wqmulmr */
    case 6683:  /* *p iwmmxt_wqmulm */
    case 6680:  /* *p iwmmxt_wmulwsmr */
    case 6679:  /* *p iwmmxt_wmulumr */
    case 6678:  /* *p iwmmxt_wmulsmr */
    case 6659:  /* *p iwmmxt_wsadhz */
    case 6658:  /* *p iwmmxt_wsadbz */
    case 6657:  /* *p iwmmxt_wsadh */
    case 6656:  /* *p iwmmxt_wsadb */
    case 6545:  /* *p umulv4hi3_highpart */
    case 6544:  /* *p smulv4hi3_highpart */
    case 6543:  /* *p *mulv4hi3_iwmmxt */
    case 694:  /* iwmmxt_wqmulmr */
    case 692:  /* iwmmxt_wqmulm */
    case 689:  /* iwmmxt_wmulwsmr */
    case 688:  /* iwmmxt_wmulumr */
    case 687:  /* iwmmxt_wmulsmr */
    case 668:  /* iwmmxt_wsadhz */
    case 667:  /* iwmmxt_wsadbz */
    case 666:  /* iwmmxt_wsadh */
    case 665:  /* iwmmxt_wsadb */
    case 554:  /* umulv4hi3_highpart */
    case 553:  /* smulv4hi3_highpart */
    case 552:  /* *mulv4hi3_iwmmxt */
      if ((
#line 56 "../../gcc/config/arm/marvell-f-iwmmxt.md"
(arm_arch_iwmmxt)))
        {
	  return 3;
        }
      else if ((! (((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA12)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1))))) || (((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 6688:  /* *p iwmmxt_waddbhusl */
    case 6687:  /* *p iwmmxt_waddbhusm */
    case 6671:  /* *p iwmmxt_avg4r */
    case 6670:  /* *p iwmmxt_avg4 */
    case 6669:  /* *p addcv2si3 */
    case 6668:  /* *p addcv4hi3 */
    case 6667:  /* *p iwmmxt_wsubaddhx */
    case 6666:  /* *p iwmmxt_waddsubhx */
    case 6649:  /* *p iwmmxt_waccw */
    case 6648:  /* *p iwmmxt_wacch */
    case 6647:  /* *p iwmmxt_waccb */
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
    case 6575:  /* *p gtv2si3 */
    case 6574:  /* *p gtv4hi3 */
    case 6573:  /* *p gtv8qi3 */
    case 6572:  /* *p gtuv2si3 */
    case 6571:  /* *p gtuv4hi3 */
    case 6570:  /* *p gtuv8qi3 */
    case 6569:  /* *p eqv2si3 */
    case 6568:  /* *p eqv4hi3 */
    case 6567:  /* *p eqv8qi3 */
    case 6557:  /* *p iwmmxt_uavgv4hi3 */
    case 6556:  /* *p iwmmxt_uavgv8qi3 */
    case 6555:  /* *p iwmmxt_uavgrndv4hi3 */
    case 6554:  /* *p iwmmxt_uavgrndv8qi3 */
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
    case 697:  /* iwmmxt_waddbhusl */
    case 696:  /* iwmmxt_waddbhusm */
    case 680:  /* iwmmxt_avg4r */
    case 679:  /* iwmmxt_avg4 */
    case 678:  /* addcv2si3 */
    case 677:  /* addcv4hi3 */
    case 676:  /* iwmmxt_wsubaddhx */
    case 675:  /* iwmmxt_waddsubhx */
    case 658:  /* iwmmxt_waccw */
    case 657:  /* iwmmxt_wacch */
    case 656:  /* iwmmxt_waccb */
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
    case 584:  /* gtv2si3 */
    case 583:  /* gtv4hi3 */
    case 582:  /* gtv8qi3 */
    case 581:  /* gtuv2si3 */
    case 580:  /* gtuv4hi3 */
    case 579:  /* gtuv8qi3 */
    case 578:  /* eqv2si3 */
    case 577:  /* eqv4hi3 */
    case 576:  /* eqv8qi3 */
    case 566:  /* iwmmxt_uavgv4hi3 */
    case 565:  /* iwmmxt_uavgv8qi3 */
    case 564:  /* iwmmxt_uavgrndv4hi3 */
    case 563:  /* iwmmxt_uavgrndv8qi3 */
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
      if ((
#line 56 "../../gcc/config/arm/marvell-f-iwmmxt.md"
(arm_arch_iwmmxt)))
        {
	  return 2;
        }
      else if ((! (((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA12)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1))))) || (((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 6713:  /* *p iwmmxt_wmerge */
    case 6665:  /* *p iwmmxt_wabsdiffw */
    case 6664:  /* *p iwmmxt_wabsdiffh */
    case 6663:  /* *p iwmmxt_wabsdiffb */
    case 6662:  /* *p iwmmxt_wabsv8qi3 */
    case 6661:  /* *p iwmmxt_wabsv4hi3 */
    case 6660:  /* *p iwmmxt_wabsv2si3 */
    case 6655:  /* *p iwmmxt_walignr3 */
    case 6654:  /* *p iwmmxt_walignr2 */
    case 6653:  /* *p iwmmxt_walignr1 */
    case 6652:  /* *p iwmmxt_walignr0 */
    case 6651:  /* *p iwmmxt_walignr */
    case 6650:  /* *p iwmmxt_waligni */
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
    case 6566:  /* *p iwmmxt_wshufh */
    case 6560:  /* *p iwmmxt_tinsrw */
    case 6559:  /* *p iwmmxt_tinsrh */
    case 6558:  /* *p iwmmxt_tinsrb */
    case 6553:  /* *p iwmmxt_clrv2si */
    case 6552:  /* *p iwmmxt_clrv4hi */
    case 6551:  /* *p iwmmxt_clrv8qi */
    case 6550:  /* *p iwmmxt_clrdi */
    case 6524:  /* *p *xorv8qi3_iwmmxt */
    case 6523:  /* *p *xorv4hi3_iwmmxt */
    case 6522:  /* *p *xorv2si3_iwmmxt */
    case 6521:  /* *p *iorv8qi3_iwmmxt */
    case 6520:  /* *p *iorv4hi3_iwmmxt */
    case 6519:  /* *p *iorv2si3_iwmmxt */
    case 6518:  /* *p *andv8qi3_iwmmxt */
    case 6517:  /* *p *andv4hi3_iwmmxt */
    case 6516:  /* *p *andv2si3_iwmmxt */
    case 6512:  /* *p iwmmxt_nanddi3 */
    case 6511:  /* *p iwmmxt_anddi3 */
    case 6510:  /* *p iwmmxt_xordi3 */
    case 6509:  /* *p iwmmxt_iordi3 */
    case 6508:  /* *p tbcstv2si */
    case 6507:  /* *p tbcstv4hi */
    case 6506:  /* *p tbcstv8qi */
    case 722:  /* iwmmxt_wmerge */
    case 674:  /* iwmmxt_wabsdiffw */
    case 673:  /* iwmmxt_wabsdiffh */
    case 672:  /* iwmmxt_wabsdiffb */
    case 671:  /* iwmmxt_wabsv8qi3 */
    case 670:  /* iwmmxt_wabsv4hi3 */
    case 669:  /* iwmmxt_wabsv2si3 */
    case 664:  /* iwmmxt_walignr3 */
    case 663:  /* iwmmxt_walignr2 */
    case 662:  /* iwmmxt_walignr1 */
    case 661:  /* iwmmxt_walignr0 */
    case 660:  /* iwmmxt_walignr */
    case 659:  /* iwmmxt_waligni */
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
    case 575:  /* iwmmxt_wshufh */
    case 569:  /* iwmmxt_tinsrw */
    case 568:  /* iwmmxt_tinsrh */
    case 567:  /* iwmmxt_tinsrb */
    case 562:  /* iwmmxt_clrv2si */
    case 561:  /* iwmmxt_clrv4hi */
    case 560:  /* iwmmxt_clrv8qi */
    case 559:  /* iwmmxt_clrdi */
    case 533:  /* *xorv8qi3_iwmmxt */
    case 532:  /* *xorv4hi3_iwmmxt */
    case 531:  /* *xorv2si3_iwmmxt */
    case 530:  /* *iorv8qi3_iwmmxt */
    case 529:  /* *iorv4hi3_iwmmxt */
    case 528:  /* *iorv2si3_iwmmxt */
    case 527:  /* *andv8qi3_iwmmxt */
    case 526:  /* *andv4hi3_iwmmxt */
    case 525:  /* *andv2si3_iwmmxt */
    case 518:  /* iwmmxt_nanddi3 */
    case 517:  /* iwmmxt_anddi3 */
    case 516:  /* iwmmxt_xordi3 */
    case 515:  /* iwmmxt_iordi3 */
    case 514:  /* tbcstv2si */
    case 513:  /* tbcstv4hi */
    case 512:  /* tbcstv8qi */
      if (((
#line 56 "../../gcc/config/arm/marvell-f-iwmmxt.md"
(arm_arch_iwmmxt))) || ((! (((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA12)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1))))) || (((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 397:  /* force_register_use */
    case 392:  /* consttable_16 */
    case 391:  /* consttable_8 */
    case 390:  /* consttable_4 */
    case 389:  /* consttable_2 */
    case 388:  /* consttable_1 */
    case 387:  /* consttable_end */
    case 386:  /* align_8 */
    case 385:  /* align_4 */
    case 272:  /* *deleted_compare */
      return 0;

    case 6922:  /* *p mve_sqshll_di */
    case 6921:  /* *p mve_srshrl_di */
    case 6920:  /* *p mve_srshr_si */
    case 6919:  /* *p mve_sqshl_si */
    case 6918:  /* *p mve_urshr_si */
    case 6917:  /* *p mve_uqshl_si */
    case 6916:  /* *p mve_urshrl_di */
    case 6915:  /* *p mve_uqshll_di */
    case 6914:  /* *p mve_sqrshr_si */
    case 6913:  /* *p mve_uqrshl_si */
    case 6912:  /* *p mve_sqrshrl_sat48_di */
    case 6911:  /* *p mve_sqrshrl_sat64_di */
    case 6910:  /* *p mve_uqrshll_sat48_di */
    case 6909:  /* *p mve_uqrshll_sat64_di */
    case 6852:  /* *p arm_store_release_exclusivesi */
    case 6851:  /* *p arm_store_release_exclusivehi */
    case 6850:  /* *p arm_store_release_exclusiveqi */
    case 6849:  /* *p arm_store_release_exclusivedi */
    case 6848:  /* *p arm_store_exclusivedi */
    case 6847:  /* *p arm_store_exclusivesi */
    case 6846:  /* *p arm_store_exclusivehi */
    case 6845:  /* *p arm_store_exclusiveqi */
    case 6844:  /* *p arm_load_acquire_exclusivedi */
    case 6843:  /* *p arm_load_exclusivedi */
    case 6842:  /* *p arm_load_acquire_exclusivesi */
    case 6841:  /* *p arm_load_exclusivesi */
    case 6840:  /* *p arm_load_acquire_exclusivehi */
    case 6839:  /* *p arm_load_acquire_exclusiveqi */
    case 6838:  /* *p arm_load_exclusivehi */
    case 6837:  /* *p arm_load_exclusiveqi */
    case 6836:  /* *p arm_atomic_loaddi2_ldrd */
    case 6835:  /* *p atomic_storesi */
    case 6834:  /* *p atomic_storehi */
    case 6833:  /* *p atomic_storeqi */
    case 6832:  /* *p atomic_loadsi */
    case 6831:  /* *p atomic_loadhi */
    case 6830:  /* *p atomic_loadqi */
    case 6829:  /* *p thumb2_lsrl */
    case 6828:  /* *p thumb2_lsll */
    case 6827:  /* *p thumb2_asrl */
    case 6826:  /* *p *clear_multiple */
    case 6825:  /* *p *clear_apsr */
    case 6505:  /* *p *load_multiple */
    case 6310:  /* *p arm_set_apsr */
    case 6309:  /* *p arm_get_apsr */
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
    case 4934:  /* arm_vcx3qa_p_v16qi */
    case 4933:  /* arm_vcx3q_p_v16qi */
    case 4932:  /* arm_vcx2qa_p_v16qi */
    case 4931:  /* arm_vcx2q_p_v16qi */
    case 4930:  /* arm_vcx1qa_p_v16qi */
    case 4929:  /* arm_vcx1q_p_v16qi */
    case 4928:  /* arm_vcx3qav16qi */
    case 4927:  /* arm_vcx3qv16qi */
    case 4926:  /* arm_vcx2qav16qi */
    case 4925:  /* arm_vcx2qv16qi */
    case 4924:  /* arm_vcx1qav16qi */
    case 4923:  /* arm_vcx1qv16qi */
    case 4922:  /* mve_vshlcq_m_uv4si */
    case 4921:  /* mve_vshlcq_m_sv4si */
    case 4920:  /* mve_vshlcq_m_uv8hi */
    case 4919:  /* mve_vshlcq_m_sv8hi */
    case 4918:  /* mve_vshlcq_m_uv16qi */
    case 4917:  /* mve_vshlcq_m_sv16qi */
    case 4916:  /* mve_sqshll_di */
    case 4915:  /* mve_srshrl_di */
    case 4914:  /* mve_srshr_si */
    case 4913:  /* mve_sqshl_si */
    case 4912:  /* mve_urshr_si */
    case 4911:  /* mve_uqshl_si */
    case 4910:  /* mve_urshrl_di */
    case 4909:  /* mve_uqshll_di */
    case 4908:  /* mve_sqrshr_si */
    case 4907:  /* mve_uqrshl_si */
    case 4906:  /* mve_sqrshrl_sat48_di */
    case 4905:  /* mve_sqrshrl_sat64_di */
    case 4904:  /* mve_uqrshll_sat48_di */
    case 4903:  /* mve_uqrshll_sat64_di */
    case 4902:  /* mve_vec_setv2di_internal */
    case 4901:  /* mve_vec_setv4sf_internal */
    case 4900:  /* mve_vec_setv4si_internal */
    case 4899:  /* mve_vec_setv8hf_internal */
    case 4898:  /* mve_vec_setv8hi_internal */
    case 4897:  /* mve_vec_setv16qi_internal */
    case 4896:  /* *mve_vec_extract_zext_internalv4si */
    case 4895:  /* *mve_vec_extract_zext_internalv8hi */
    case 4894:  /* *mve_vec_extract_zext_internalv16qi */
    case 4893:  /* *mve_vec_extract_sext_internalv4si */
    case 4892:  /* *mve_vec_extract_sext_internalv8hi */
    case 4891:  /* *mve_vec_extract_sext_internalv16qi */
    case 4890:  /* mve_vec_extractv2didi */
    case 4889:  /* mve_vec_extractv4sfsf */
    case 4888:  /* mve_vec_extractv8hfhf */
    case 4887:  /* mve_vec_extractv4sisi */
    case 4886:  /* mve_vec_extractv8hihi */
    case 4885:  /* mve_vec_extractv16qiqi */
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
    case 4869:  /* mve_vsbcq_sv4si */
    case 4868:  /* mve_vsbcq_uv4si */
    case 4867:  /* mve_vsbcq_m_sv4si */
    case 4866:  /* mve_vsbcq_m_uv4si */
    case 4865:  /* mve_vsbciq_sv4si */
    case 4864:  /* mve_vsbciq_uv4si */
    case 4863:  /* mve_vsbciq_m_sv4si */
    case 4862:  /* mve_vsbciq_m_uv4si */
    case 4861:  /* mve_vadcq_sv4si */
    case 4860:  /* mve_vadcq_uv4si */
    case 4859:  /* mve_vadcq_m_sv4si */
    case 4858:  /* mve_vadcq_m_uv4si */
    case 4857:  /* mve_vadciq_sv4si */
    case 4856:  /* mve_vadciq_uv4si */
    case 4855:  /* mve_vadciq_m_sv4si */
    case 4854:  /* mve_vadciq_m_uv4si */
    case 4853:  /* mve_vldrdq_gather_base_wb_z_uv2di_insn */
    case 4852:  /* mve_vldrdq_gather_base_wb_z_sv2di_insn */
    case 4851:  /* set_fpscr_nzcvqc */
    case 4850:  /* get_fpscr_nzcvqc */
    case 4849:  /* mve_vldrdq_gather_base_wb_uv2di_insn */
    case 4848:  /* mve_vldrdq_gather_base_wb_sv2di_insn */
    case 4847:  /* mve_vldrwq_gather_base_wb_z_fv4sf_insn */
    case 4846:  /* mve_vldrwq_gather_base_wb_fv4sf_insn */
    case 4845:  /* mve_vldrwq_gather_base_wb_z_uv4si_insn */
    case 4844:  /* mve_vldrwq_gather_base_wb_z_sv4si_insn */
    case 4843:  /* mve_vldrwq_gather_base_wb_uv4si_insn */
    case 4842:  /* mve_vldrwq_gather_base_wb_sv4si_insn */
    case 4841:  /* mve_vstrdq_scatter_base_wb_p_uv2di */
    case 4840:  /* mve_vstrdq_scatter_base_wb_p_sv2di */
    case 4839:  /* mve_vstrdq_scatter_base_wb_uv2di */
    case 4838:  /* mve_vstrdq_scatter_base_wb_sv2di */
    case 4837:  /* mve_vstrwq_scatter_base_wb_p_fv4sf */
    case 4836:  /* mve_vstrwq_scatter_base_wb_fv4sf */
    case 4835:  /* mve_vstrwq_scatter_base_wb_p_uv4si */
    case 4834:  /* mve_vstrwq_scatter_base_wb_p_sv4si */
    case 4833:  /* mve_vstrwq_scatter_base_wb_uv4si */
    case 4832:  /* mve_vstrwq_scatter_base_wb_sv4si */
    case 4831:  /* mve_viwdupq_m_wb_uv4si_insn */
    case 4830:  /* mve_viwdupq_m_wb_uv8hi_insn */
    case 4829:  /* mve_viwdupq_m_wb_uv16qi_insn */
    case 4828:  /* mve_viwdupq_wb_uv4si_insn */
    case 4827:  /* mve_viwdupq_wb_uv8hi_insn */
    case 4826:  /* mve_viwdupq_wb_uv16qi_insn */
    case 4825:  /* mve_vdwdupq_m_wb_uv4si_insn */
    case 4824:  /* mve_vdwdupq_m_wb_uv8hi_insn */
    case 4823:  /* mve_vdwdupq_m_wb_uv16qi_insn */
    case 4822:  /* mve_vdwdupq_wb_uv4si_insn */
    case 4821:  /* mve_vdwdupq_wb_uv8hi_insn */
    case 4820:  /* mve_vdwdupq_wb_uv16qi_insn */
    case 4819:  /* mve_vddupq_m_wb_uv4si_insn */
    case 4818:  /* mve_vddupq_m_wb_uv8hi_insn */
    case 4817:  /* mve_vddupq_m_wb_uv16qi_insn */
    case 4816:  /* mve_vddupq_uv4si_insn */
    case 4815:  /* mve_vddupq_uv8hi_insn */
    case 4814:  /* mve_vddupq_uv16qi_insn */
    case 4813:  /* mve_vidupq_m_wb_uv4si_insn */
    case 4812:  /* mve_vidupq_m_wb_uv8hi_insn */
    case 4811:  /* mve_vidupq_m_wb_uv16qi_insn */
    case 4810:  /* mve_vidupq_uv4si_insn */
    case 4809:  /* mve_vidupq_uv8hi_insn */
    case 4808:  /* mve_vidupq_uv16qi_insn */
    case 4807:  /* mve_vaddq_fv4sf */
    case 4806:  /* mve_vaddq_fv8hf */
    case 4805:  /* mve_vaddqv4si */
    case 4804:  /* mve_vaddqv8hi */
    case 4803:  /* mve_vaddqv16qi */
    case 4802:  /* mve_vstrwq_scatter_shifted_offset_uv4si_insn */
    case 4801:  /* mve_vstrwq_scatter_shifted_offset_sv4si_insn */
    case 4800:  /* mve_vstrwq_scatter_shifted_offset_p_uv4si_insn */
    case 4799:  /* mve_vstrwq_scatter_shifted_offset_p_sv4si_insn */
    case 4798:  /* mve_vstrwq_scatter_shifted_offset_p_fv4sf_insn */
    case 4797:  /* mve_vstrwq_scatter_shifted_offset_fv4sf_insn */
    case 4796:  /* mve_vstrwq_scatter_offset_uv4si_insn */
    case 4795:  /* mve_vstrwq_scatter_offset_sv4si_insn */
    case 4794:  /* mve_vstrwq_scatter_offset_p_uv4si_insn */
    case 4793:  /* mve_vstrwq_scatter_offset_p_sv4si_insn */
    case 4792:  /* mve_vstrwq_scatter_offset_p_fv4sf_insn */
    case 4791:  /* mve_vstrwq_scatter_offset_fv4sf_insn */
    case 4790:  /* mve_vstrwq_scatter_base_p_fv4sf */
    case 4789:  /* mve_vstrwq_scatter_base_fv4sf */
    case 4788:  /* mve_vstrhq_scatter_shifted_offset_p_fv8hf_insn */
    case 4787:  /* mve_vstrhq_scatter_shifted_offset_fv8hf_insn */
    case 4786:  /* mve_vstrhq_scatter_offset_p_fv8hf_insn */
    case 4785:  /* mve_vstrhq_scatter_offset_fv8hf_insn */
    case 4784:  /* mve_vstrdq_scatter_shifted_offset_uv2di_insn */
    case 4783:  /* mve_vstrdq_scatter_shifted_offset_sv2di_insn */
    case 4782:  /* mve_vstrdq_scatter_shifted_offset_p_uv2di_insn */
    case 4781:  /* mve_vstrdq_scatter_shifted_offset_p_sv2di_insn */
    case 4780:  /* mve_vstrdq_scatter_offset_uv2di_insn */
    case 4779:  /* mve_vstrdq_scatter_offset_sv2di_insn */
    case 4778:  /* mve_vstrdq_scatter_offset_p_uv2di_insn */
    case 4777:  /* mve_vstrdq_scatter_offset_p_sv2di_insn */
    case 4776:  /* mve_vstrdq_scatter_base_uv2di */
    case 4775:  /* mve_vstrdq_scatter_base_sv2di */
    case 4774:  /* mve_vstrdq_scatter_base_p_uv2di */
    case 4773:  /* mve_vstrdq_scatter_base_p_sv2di */
    case 4772:  /* mve_vstrwq_uv4si */
    case 4771:  /* mve_vstrwq_sv4si */
    case 4770:  /* mve_vstrwq_p_uv4si */
    case 4769:  /* mve_vstrwq_p_sv4si */
    case 4768:  /* mve_vstrwq_p_fv4sf */
    case 4767:  /* mve_vstrwq_fv4sf */
    case 4766:  /* mve_vstrhq_uv4si */
    case 4765:  /* mve_vstrhq_sv4si */
    case 4764:  /* mve_vstrhq_uv8hi */
    case 4763:  /* mve_vstrhq_sv8hi */
    case 4762:  /* mve_vstrhq_scatter_shifted_offset_uv4si_insn */
    case 4761:  /* mve_vstrhq_scatter_shifted_offset_sv4si_insn */
    case 4760:  /* mve_vstrhq_scatter_shifted_offset_uv8hi_insn */
    case 4759:  /* mve_vstrhq_scatter_shifted_offset_sv8hi_insn */
    case 4758:  /* mve_vstrhq_scatter_shifted_offset_p_uv4si_insn */
    case 4757:  /* mve_vstrhq_scatter_shifted_offset_p_sv4si_insn */
    case 4756:  /* mve_vstrhq_scatter_shifted_offset_p_uv8hi_insn */
    case 4755:  /* mve_vstrhq_scatter_shifted_offset_p_sv8hi_insn */
    case 4754:  /* mve_vstrhq_scatter_offset_uv4si_insn */
    case 4753:  /* mve_vstrhq_scatter_offset_sv4si_insn */
    case 4752:  /* mve_vstrhq_scatter_offset_uv8hi_insn */
    case 4751:  /* mve_vstrhq_scatter_offset_sv8hi_insn */
    case 4750:  /* mve_vstrhq_scatter_offset_p_uv4si_insn */
    case 4749:  /* mve_vstrhq_scatter_offset_p_sv4si_insn */
    case 4748:  /* mve_vstrhq_scatter_offset_p_uv8hi_insn */
    case 4747:  /* mve_vstrhq_scatter_offset_p_sv8hi_insn */
    case 4746:  /* mve_vstrhq_p_uv4si */
    case 4745:  /* mve_vstrhq_p_sv4si */
    case 4744:  /* mve_vstrhq_p_uv8hi */
    case 4743:  /* mve_vstrhq_p_sv8hi */
    case 4742:  /* mve_vstrhq_p_fv8hf */
    case 4741:  /* mve_vstrhq_fv8hf */
    case 4740:  /* mve_vldrwq_gather_shifted_offset_z_uv4si */
    case 4739:  /* mve_vldrwq_gather_shifted_offset_z_sv4si */
    case 4738:  /* mve_vldrwq_gather_shifted_offset_z_fv4sf */
    case 4737:  /* mve_vldrwq_gather_shifted_offset_uv4si */
    case 4736:  /* mve_vldrwq_gather_shifted_offset_sv4si */
    case 4735:  /* mve_vldrwq_gather_shifted_offset_fv4sf */
    case 4734:  /* mve_vldrwq_gather_offset_z_uv4si */
    case 4733:  /* mve_vldrwq_gather_offset_z_sv4si */
    case 4732:  /* mve_vldrwq_gather_offset_z_fv4sf */
    case 4731:  /* mve_vldrwq_gather_offset_uv4si */
    case 4730:  /* mve_vldrwq_gather_offset_sv4si */
    case 4729:  /* mve_vldrwq_gather_offset_fv4sf */
    case 4728:  /* mve_vldrwq_gather_base_z_fv4sf */
    case 4727:  /* mve_vldrwq_gather_base_fv4sf */
    case 4726:  /* mve_vldrhq_gather_shifted_offset_z_fv8hf */
    case 4725:  /* mve_vldrhq_gather_shifted_offset_fv8hf */
    case 4724:  /* mve_vldrhq_gather_offset_z_fv8hf */
    case 4723:  /* mve_vldrhq_gather_offset_fv8hf */
    case 4722:  /* mve_vldrdq_gather_shifted_offset_z_uv2di */
    case 4721:  /* mve_vldrdq_gather_shifted_offset_z_sv2di */
    case 4720:  /* mve_vldrdq_gather_shifted_offset_uv2di */
    case 4719:  /* mve_vldrdq_gather_shifted_offset_sv2di */
    case 4718:  /* mve_vldrdq_gather_offset_z_uv2di */
    case 4717:  /* mve_vldrdq_gather_offset_z_sv2di */
    case 4716:  /* mve_vldrdq_gather_offset_uv2di */
    case 4715:  /* mve_vldrdq_gather_offset_sv2di */
    case 4714:  /* mve_vldrdq_gather_base_z_uv2di */
    case 4713:  /* mve_vldrdq_gather_base_z_sv2di */
    case 4712:  /* mve_vldrdq_gather_base_uv2di */
    case 4711:  /* mve_vldrdq_gather_base_sv2di */
    case 4710:  /* mve_vldrwq_z_uv4si */
    case 4709:  /* mve_vldrwq_z_sv4si */
    case 4708:  /* mve_vldrwq_z_fv4sf */
    case 4707:  /* mve_vldrwq_uv4si */
    case 4706:  /* mve_vldrwq_sv4si */
    case 4705:  /* mve_vldrwq_fv4sf */
    case 4704:  /* mve_vldrhq_z_uv4si */
    case 4703:  /* mve_vldrhq_z_sv4si */
    case 4702:  /* mve_vldrhq_z_uv8hi */
    case 4701:  /* mve_vldrhq_z_sv8hi */
    case 4700:  /* mve_vldrhq_z_fv8hf */
    case 4699:  /* mve_vldrhq_uv4si */
    case 4698:  /* mve_vldrhq_sv4si */
    case 4697:  /* mve_vldrhq_uv8hi */
    case 4696:  /* mve_vldrhq_sv8hi */
    case 4695:  /* mve_vldrhq_gather_shifted_offset_z_uv4si */
    case 4694:  /* mve_vldrhq_gather_shifted_offset_z_sv4si */
    case 4693:  /* mve_vldrhq_gather_shifted_offset_z_uv8hi */
    case 4692:  /* mve_vldrhq_gather_shifted_offset_z_sv8hi */
    case 4691:  /* mve_vldrhq_gather_shifted_offset_uv4si */
    case 4690:  /* mve_vldrhq_gather_shifted_offset_sv4si */
    case 4689:  /* mve_vldrhq_gather_shifted_offset_uv8hi */
    case 4688:  /* mve_vldrhq_gather_shifted_offset_sv8hi */
    case 4687:  /* mve_vldrhq_gather_offset_z_uv4si */
    case 4686:  /* mve_vldrhq_gather_offset_z_sv4si */
    case 4685:  /* mve_vldrhq_gather_offset_z_uv8hi */
    case 4684:  /* mve_vldrhq_gather_offset_z_sv8hi */
    case 4683:  /* mve_vldrhq_gather_offset_uv4si */
    case 4682:  /* mve_vldrhq_gather_offset_sv4si */
    case 4681:  /* mve_vldrhq_gather_offset_uv8hi */
    case 4680:  /* mve_vldrhq_gather_offset_sv8hi */
    case 4679:  /* mve_vldrhq_fv8hf */
    case 4678:  /* mve_vldrwq_gather_base_z_uv4si */
    case 4677:  /* mve_vldrwq_gather_base_z_sv4si */
    case 4676:  /* mve_vldrbq_z_uv4si */
    case 4675:  /* mve_vldrbq_z_sv4si */
    case 4674:  /* mve_vldrbq_z_uv8hi */
    case 4673:  /* mve_vldrbq_z_sv8hi */
    case 4672:  /* mve_vldrbq_z_uv16qi */
    case 4671:  /* mve_vldrbq_z_sv16qi */
    case 4670:  /* mve_vldrbq_gather_offset_z_uv4si */
    case 4669:  /* mve_vldrbq_gather_offset_z_sv4si */
    case 4668:  /* mve_vldrbq_gather_offset_z_uv8hi */
    case 4667:  /* mve_vldrbq_gather_offset_z_sv8hi */
    case 4666:  /* mve_vldrbq_gather_offset_z_uv16qi */
    case 4665:  /* mve_vldrbq_gather_offset_z_sv16qi */
    case 4664:  /* mve_vstrbq_p_uv4si */
    case 4663:  /* mve_vstrbq_p_sv4si */
    case 4662:  /* mve_vstrbq_p_uv8hi */
    case 4661:  /* mve_vstrbq_p_sv8hi */
    case 4660:  /* mve_vstrbq_p_uv16qi */
    case 4659:  /* mve_vstrbq_p_sv16qi */
    case 4658:  /* mve_vstrwq_scatter_base_p_uv4si */
    case 4657:  /* mve_vstrwq_scatter_base_p_sv4si */
    case 4656:  /* mve_vstrbq_scatter_offset_p_uv4si_insn */
    case 4655:  /* mve_vstrbq_scatter_offset_p_sv4si_insn */
    case 4654:  /* mve_vstrbq_scatter_offset_p_uv8hi_insn */
    case 4653:  /* mve_vstrbq_scatter_offset_p_sv8hi_insn */
    case 4652:  /* mve_vstrbq_scatter_offset_p_uv16qi_insn */
    case 4651:  /* mve_vstrbq_scatter_offset_p_sv16qi_insn */
    case 4650:  /* mve_vldrwq_gather_base_uv4si */
    case 4649:  /* mve_vldrwq_gather_base_sv4si */
    case 4648:  /* mve_vldrbq_uv4si */
    case 4647:  /* mve_vldrbq_sv4si */
    case 4646:  /* mve_vldrbq_uv8hi */
    case 4645:  /* mve_vldrbq_sv8hi */
    case 4644:  /* mve_vldrbq_uv16qi */
    case 4643:  /* mve_vldrbq_sv16qi */
    case 4642:  /* mve_vldrbq_gather_offset_uv4si */
    case 4641:  /* mve_vldrbq_gather_offset_sv4si */
    case 4640:  /* mve_vldrbq_gather_offset_uv8hi */
    case 4639:  /* mve_vldrbq_gather_offset_sv8hi */
    case 4638:  /* mve_vldrbq_gather_offset_uv16qi */
    case 4637:  /* mve_vldrbq_gather_offset_sv16qi */
    case 4636:  /* mve_vstrwq_scatter_base_uv4si */
    case 4635:  /* mve_vstrwq_scatter_base_sv4si */
    case 4634:  /* mve_vstrbq_scatter_offset_uv4si_insn */
    case 4633:  /* mve_vstrbq_scatter_offset_sv4si_insn */
    case 4632:  /* mve_vstrbq_scatter_offset_uv8hi_insn */
    case 4631:  /* mve_vstrbq_scatter_offset_sv8hi_insn */
    case 4630:  /* mve_vstrbq_scatter_offset_uv16qi_insn */
    case 4629:  /* mve_vstrbq_scatter_offset_sv16qi_insn */
    case 4628:  /* mve_vstrbq_uv4si */
    case 4627:  /* mve_vstrbq_sv4si */
    case 4626:  /* mve_vstrbq_uv8hi */
    case 4625:  /* mve_vstrbq_sv8hi */
    case 4624:  /* mve_vstrbq_uv16qi */
    case 4623:  /* mve_vstrbq_sv16qi */
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
    case 4155:  /* mve_vrmlsldavhaq_sv4si */
    case 4154:  /* mve_vrmlaldavhq_p_uv4si */
    case 4153:  /* mve_vrmlaldavhq_p_sv4si */
    case 4152:  /* mve_vcvtq_m_from_f_sv4si */
    case 4151:  /* mve_vcvtq_m_from_f_uv4si */
    case 4150:  /* mve_vcvtq_m_from_f_sv8hi */
    case 4149:  /* mve_vcvtq_m_from_f_uv8hi */
    case 4148:  /* mve_vrev16q_m_uv16qi */
    case 4147:  /* mve_vrev16q_m_sv16qi */
    case 4146:  /* mve_vcvtq_m_n_from_f_uv4si */
    case 4145:  /* mve_vcvtq_m_n_from_f_sv4si */
    case 4144:  /* mve_vcvtq_m_n_from_f_uv8hi */
    case 4143:  /* mve_vcvtq_m_n_from_f_sv8hi */
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
    case 3966:  /* mve_vcmlaq_rot270v4sf */
    case 3965:  /* mve_vcmlaq_rot180v4sf */
    case 3964:  /* mve_vcmlaq_rot90v4sf */
    case 3963:  /* mve_vcmlaqv4sf */
    case 3962:  /* mve_vcmlaq_rot270v8hf */
    case 3961:  /* mve_vcmlaq_rot180v8hf */
    case 3960:  /* mve_vcmlaq_rot90v8hf */
    case 3959:  /* mve_vcmlaqv8hf */
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
    case 3703:  /* mve_vshlcq_uv4si */
    case 3702:  /* mve_vshlcq_sv4si */
    case 3701:  /* mve_vshlcq_uv8hi */
    case 3700:  /* mve_vshlcq_sv8hi */
    case 3699:  /* mve_vshlcq_uv16qi */
    case 3698:  /* mve_vshlcq_sv16qi */
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
    case 3669:  /* mve_vrmlaldavhq_sv4si */
    case 3668:  /* mve_vrmlaldavhq_uv4si */
    case 3667:  /* mve_vmullbq_poly_pv8hi */
    case 3666:  /* mve_vmullbq_poly_pv16qi */
    case 3665:  /* mve_vmulltq_poly_pv8hi */
    case 3664:  /* mve_vmulltq_poly_pv16qi */
    case 3663:  /* mve_vsubq_fv4sf */
    case 3662:  /* mve_vsubq_fv8hf */
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
    case 3626:  /* mve_vorrq_fv4sf */
    case 3625:  /* mve_vorrq_fv8hf */
    case 3624:  /* mve_vornq_fv4sf */
    case 3623:  /* mve_vornq_fv8hf */
    case 3622:  /* mve_vmulq_n_fv4sf */
    case 3621:  /* mve_vmulq_n_fv8hf */
    case 3620:  /* mve_vmulq_fv4sf */
    case 3619:  /* mve_vmulq_fv8hf */
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
    case 3598:  /* mve_vminnmq_fv4sf */
    case 3597:  /* mve_vminnmq_fv8hf */
    case 3596:  /* mve_vminnmavq_fv4sf */
    case 3595:  /* mve_vminnmavq_fv8hf */
    case 3594:  /* mve_vminnmaq_fv4sf */
    case 3593:  /* mve_vminnmaq_fv8hf */
    case 3592:  /* mve_vmaxnmvq_fv4sf */
    case 3591:  /* mve_vmaxnmvq_fv8hf */
    case 3590:  /* mve_vmaxnmq_fv4sf */
    case 3589:  /* mve_vmaxnmq_fv8hf */
    case 3588:  /* mve_vmaxnmavq_fv4sf */
    case 3587:  /* mve_vmaxnmavq_fv8hf */
    case 3586:  /* mve_vmaxnmaq_fv4sf */
    case 3585:  /* mve_vmaxnmaq_fv8hf */
    case 3584:  /* mve_veorq_fv4sf */
    case 3583:  /* mve_veorq_fv8hf */
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
    case 3536:  /* mve_vbicq_fv4sf */
    case 3535:  /* mve_vbicq_fv8hf */
    case 3534:  /* mve_vandq_fv4sf */
    case 3533:  /* mve_vandq_fv8hf */
    case 3532:  /* mve_vaddq_n_fv4sf */
    case 3531:  /* mve_vaddq_n_fv8hf */
    case 3530:  /* mve_vaddlvaq_uv4si */
    case 3529:  /* mve_vaddlvaq_sv4si */
    case 3528:  /* mve_vabdq_fv4sf */
    case 3527:  /* mve_vabdq_fv8hf */
    case 3526:  /* mve_vsubqv4si */
    case 3525:  /* mve_vsubqv8hi */
    case 3524:  /* mve_vsubqv16qi */
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
    case 3400:  /* mve_vorrq_sv4si */
    case 3399:  /* mve_vorrq_sv8hi */
    case 3398:  /* mve_vorrq_sv16qi */
    case 3397:  /* mve_vornq_sv4si */
    case 3396:  /* mve_vornq_sv8hi */
    case 3395:  /* mve_vornq_sv16qi */
    case 3394:  /* mve_vmulqv4si */
    case 3393:  /* mve_vmulqv8hi */
    case 3392:  /* mve_vmulqv16qi */
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
    case 3340:  /* mve_vminq_uv4si */
    case 3339:  /* mve_vminq_uv8hi */
    case 3338:  /* mve_vminq_uv16qi */
    case 3337:  /* mve_vminq_sv4si */
    case 3336:  /* mve_vminq_sv8hi */
    case 3335:  /* mve_vminq_sv16qi */
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
    case 3322:  /* mve_vmaxq_uv4si */
    case 3321:  /* mve_vmaxq_uv8hi */
    case 3320:  /* mve_vmaxq_uv16qi */
    case 3319:  /* mve_vmaxq_sv4si */
    case 3318:  /* mve_vmaxq_sv8hi */
    case 3317:  /* mve_vmaxq_sv16qi */
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
    case 3280:  /* mve_veorq_uv4si */
    case 3279:  /* mve_veorq_uv8hi */
    case 3278:  /* mve_veorq_uv16qi */
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
    case 3211:  /* mve_vbicq_uv4si */
    case 3210:  /* mve_vbicq_uv8hi */
    case 3209:  /* mve_vbicq_uv16qi */
    case 3208:  /* mve_vandq_uv4si */
    case 3207:  /* mve_vandq_uv8hi */
    case 3206:  /* mve_vandq_uv16qi */
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
    case 3169:  /* mve_vshrq_n_uv4si_imm */
    case 3168:  /* mve_vshrq_n_uv8hi_imm */
    case 3167:  /* mve_vshrq_n_uv16qi_imm */
    case 3166:  /* mve_vshrq_n_sv4si_imm */
    case 3165:  /* mve_vshrq_n_sv8hi_imm */
    case 3164:  /* mve_vshrq_n_sv16qi_imm */
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
    case 3074:  /* mve_vmvnq_uv4si */
    case 3073:  /* mve_vmvnq_uv8hi */
    case 3072:  /* mve_vmvnq_uv16qi */
    case 3071:  /* mve_vnegq_sv4si */
    case 3070:  /* mve_vnegq_sv8hi */
    case 3069:  /* mve_vnegq_sv16qi */
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
    case 3041:  /* mve_vnegq_fv4sf */
    case 3040:  /* mve_vnegq_fv8hf */
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
    case 3025:  /* mve_vrndq_m_fv4sf */
    case 3024:  /* mve_vrndq_m_fv8hf */
    case 3023:  /* mve_vst4qv4sf */
    case 3022:  /* mve_vst4qv8hf */
    case 3021:  /* mve_vst4qv4si */
    case 3020:  /* mve_vst4qv8hi */
    case 3019:  /* mve_vst4qv16qi */
    case 3018:  /* *mve_vdupv2df */
    case 3017:  /* *mve_vdupv4sf */
    case 3016:  /* *mve_vdupv8hf */
    case 3015:  /* *mve_vdupv2di */
    case 3014:  /* *mve_vdupv4si */
    case 3013:  /* *mve_vdupv8hi */
    case 3012:  /* *mve_vdupv16qi */
    case 2945:  /* arm_store_release_exclusivesi */
    case 2944:  /* arm_store_release_exclusivehi */
    case 2943:  /* arm_store_release_exclusiveqi */
    case 2942:  /* arm_store_release_exclusivedi */
    case 2941:  /* arm_store_exclusivedi */
    case 2940:  /* arm_store_exclusivesi */
    case 2939:  /* arm_store_exclusivehi */
    case 2938:  /* arm_store_exclusiveqi */
    case 2937:  /* arm_load_acquire_exclusivedi */
    case 2936:  /* arm_load_exclusivedi */
    case 2935:  /* arm_load_acquire_exclusivesi */
    case 2934:  /* arm_load_exclusivesi */
    case 2933:  /* arm_load_acquire_exclusivehi */
    case 2932:  /* arm_load_acquire_exclusiveqi */
    case 2931:  /* arm_load_exclusivehi */
    case 2930:  /* arm_load_exclusiveqi */
    case 2929:  /* atomic_nand_fetchdi */
    case 2928:  /* atomic_nand_fetchsi */
    case 2927:  /* atomic_nand_fetchhi */
    case 2926:  /* atomic_nand_fetchqi */
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
    case 2905:  /* atomic_fetch_nanddi */
    case 2904:  /* atomic_fetch_nandsi */
    case 2903:  /* atomic_fetch_nandhi */
    case 2902:  /* atomic_fetch_nandqi */
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
    case 2881:  /* atomic_nanddi */
    case 2880:  /* atomic_nandsi */
    case 2879:  /* atomic_nandhi */
    case 2878:  /* atomic_nandqi */
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
    case 2857:  /* atomic_exchangedi */
    case 2856:  /* atomic_exchangesi */
    case 2855:  /* atomic_exchangehi */
    case 2854:  /* atomic_exchangeqi */
    case 2853:  /* atomic_compare_and_swapt1di_1 */
    case 2852:  /* atomic_compare_and_swapt1si_1 */
    case 2851:  /* atomic_compare_and_swap32di_1 */
    case 2850:  /* atomic_compare_and_swap32si_1 */
    case 2849:  /* atomic_compare_and_swapt1hi_1 */
    case 2848:  /* atomic_compare_and_swapt1qi_1 */
    case 2847:  /* atomic_compare_and_swap32hi_1 */
    case 2846:  /* atomic_compare_and_swap32qi_1 */
    case 2845:  /* arm_atomic_loaddi2_ldrd */
    case 2844:  /* atomic_storesi */
    case 2843:  /* atomic_storehi */
    case 2842:  /* atomic_storeqi */
    case 2841:  /* atomic_loadsi */
    case 2840:  /* atomic_loadhi */
    case 2839:  /* atomic_loadqi */
    case 2838:  /* *memory_barrier */
    case 2815:  /* neon_vbfcvtbf_cvtmodesf */
    case 2814:  /* neon_vbfcvtbf_cvtmodev2si */
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
    case 1895:  /* neon_vcadd270v4sf */
    case 1894:  /* neon_vcadd90v4sf */
    case 1893:  /* neon_vcadd270v2sf */
    case 1892:  /* neon_vcadd90v2sf */
    case 1891:  /* neon_vcadd270v8hf */
    case 1890:  /* neon_vcadd90v8hf */
    case 1889:  /* neon_vcadd270v4hf */
    case 1888:  /* neon_vcadd90v4hf */
    case 1050:  /* dls_insn */
    case 1048:  /* thumb2_lsrl */
    case 1047:  /* thumb2_lsll */
    case 1046:  /* thumb2_asrl */
    case 1045:  /* *clear_multiple */
    case 1044:  /* *clear_apsr */
    case 1025:  /* thumb2_eh_return */
    case 960:  /* *cstoresi_ne0_thumb1_insn */
    case 914:  /* arm_vcx3adi */
    case 913:  /* arm_vcx3asi */
    case 912:  /* arm_vcx3di */
    case 911:  /* arm_vcx3si */
    case 910:  /* arm_vcx2adi */
    case 909:  /* arm_vcx2asi */
    case 908:  /* arm_vcx2di */
    case 907:  /* arm_vcx2si */
    case 906:  /* arm_vcx1adi */
    case 905:  /* arm_vcx1asi */
    case 904:  /* arm_vcx1di */
    case 903:  /* arm_vcx1si */
    case 902:  /* no_literal_pool_sf_immediate */
    case 901:  /* no_literal_pool_df_immediate */
    case 838:  /* *cmpdf_trap_split_vfp */
    case 837:  /* *cmpdf_split_vfp */
    case 836:  /* *cmpsf_trap_split_vfp */
    case 835:  /* *cmpsf_split_vfp */
    case 498:  /* arm_mrrc2 */
    case 497:  /* arm_mrrc */
    case 496:  /* arm_mcrr2 */
    case 495:  /* arm_mcrr */
    case 494:  /* arm_mrc2 */
    case 493:  /* arm_mrc */
    case 492:  /* arm_mcr2 */
    case 491:  /* arm_mcr */
    case 490:  /* *stc */
    case 489:  /* *stc */
    case 488:  /* *stc */
    case 487:  /* *stc */
    case 486:  /* *ldc */
    case 485:  /* *ldc */
    case 484:  /* *ldc */
    case 483:  /* *ldc */
    case 482:  /* arm_cdp2 */
    case 481:  /* arm_cdp */
    case 480:  /* *load_multiple */
    case 398:  /* arm_eh_return */
    case 395:  /* ctzsi2 */
    case 312:  /* trap */
    case 306:  /* *stack_protect_combined_test_insn */
    case 304:  /* *stack_protect_combined_set_insn */
    case 285:  /* restore_pic_register_after_call */
    case 146:  /* arm_cx3adi */
    case 145:  /* arm_cx3asi */
    case 144:  /* arm_cx3di */
    case 143:  /* arm_cx3si */
    case 142:  /* arm_cx2adi */
    case 141:  /* arm_cx2asi */
    case 140:  /* arm_cx2di */
    case 139:  /* arm_cx2si */
    case 138:  /* arm_cx1adi */
    case 137:  /* arm_cx1asi */
    case 136:  /* arm_cx1di */
    case 135:  /* arm_cx1si */
    case 128:  /* arm_set_apsr */
    case 127:  /* arm_get_apsr */
    case 54:  /* subvsi3_borrow */
    case 52:  /* usubvsi3_borrow */
      if ((! (((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA12)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1))))) || (((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))))))
        {
	  return 32 /* 0x20 */;
        }
      else
        {
	  return 0;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      /* FALLTHRU */
    default:
      extract_constrain_insn_cached (insn);
      if ((cached_type = get_attr_type (insn)) == TYPE_NO_INSN)
        {
	  return 0;
        }
      else if (((
#line 56 "../../gcc/config/arm/marvell-f-iwmmxt.md"
(arm_arch_iwmmxt))) && (get_attr_wmmxt_alu_c1 (insn) == WMMXT_ALU_C1_YES))
        {
	  return 1;
        }
      else if (((
#line 56 "../../gcc/config/arm/marvell-f-iwmmxt.md"
(arm_arch_iwmmxt))) && (get_attr_wmmxt_pack (insn) == WMMXT_PACK_YES))
        {
	  return 1;
        }
      else if (((
#line 56 "../../gcc/config/arm/marvell-f-iwmmxt.md"
(arm_arch_iwmmxt))) && (get_attr_wmmxt_shift (insn) == WMMXT_SHIFT_YES))
        {
	  return 1;
        }
      else if (((
#line 56 "../../gcc/config/arm/marvell-f-iwmmxt.md"
(arm_arch_iwmmxt))) && (get_attr_wmmxt_transfer_c1 (insn) == WMMXT_TRANSFER_C1_YES))
        {
	  return 1;
        }
      else if (((
#line 56 "../../gcc/config/arm/marvell-f-iwmmxt.md"
(arm_arch_iwmmxt))) && (get_attr_wmmxt_transfer_c2 (insn) == WMMXT_TRANSFER_C2_YES))
        {
	  return 5;
        }
      else if (((
#line 56 "../../gcc/config/arm/marvell-f-iwmmxt.md"
(arm_arch_iwmmxt))) && (get_attr_wmmxt_alu_c2 (insn) == WMMXT_ALU_C2_YES))
        {
	  return 2;
        }
      else if (((
#line 56 "../../gcc/config/arm/marvell-f-iwmmxt.md"
(arm_arch_iwmmxt))) && (get_attr_wmmxt_alu_c3 (insn) == WMMXT_ALU_C3_YES))
        {
	  return 3;
        }
      else if (((
#line 56 "../../gcc/config/arm/marvell-f-iwmmxt.md"
(arm_arch_iwmmxt))) && (get_attr_wmmxt_transfer_c3 (insn) == WMMXT_TRANSFER_C3_YES))
        {
	  return 4;
        }
      else if (((
#line 56 "../../gcc/config/arm/marvell-f-iwmmxt.md"
(arm_arch_iwmmxt))) && (get_attr_wmmxt_mult_c1 (insn) == WMMXT_MULT_C1_YES))
        {
	  return 4;
        }
      else if (((
#line 56 "../../gcc/config/arm/marvell-f-iwmmxt.md"
(arm_arch_iwmmxt))) && (get_attr_wmmxt_mult_c2 (insn) == WMMXT_MULT_C2_YES))
        {
	  return 3;
        }
      else if (((
#line 56 "../../gcc/config/arm/marvell-f-iwmmxt.md"
(arm_arch_iwmmxt))) && (cached_type == TYPE_WMMX_WSTR))
        {
	  return 0;
        }
      else if (((
#line 56 "../../gcc/config/arm/marvell-f-iwmmxt.md"
(arm_arch_iwmmxt))) && (cached_type == TYPE_WMMX_WLDR))
        {
	  return 5;
        }
      else if (((! (((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA12)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1))))) || (((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))))) && (((
#line 331 "../../gcc/config/arm/arm.md"
(arm_tune_wbuf)) == (
(MODEL_WBUF_YES)))) && (cached_type == TYPE_STORE_4))
        {
	  return 5;
        }
      else if (((! (((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA12)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1))))) || (((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))))) && (((
#line 331 "../../gcc/config/arm/arm.md"
(arm_tune_wbuf)) == (
(MODEL_WBUF_YES)))) && (cached_type == TYPE_STORE_8))
        {
	  return 7;
        }
      else if (((! (((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA12)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1))))) || (((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))))) && (((
#line 331 "../../gcc/config/arm/arm.md"
(arm_tune_wbuf)) == (
(MODEL_WBUF_YES)))) && (cached_type == TYPE_STORE_12))
        {
	  return 9;
        }
      else if (((! (((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA12)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1))))) || (((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))))) && (((
#line 331 "../../gcc/config/arm/arm.md"
(arm_tune_wbuf)) == (
(MODEL_WBUF_YES)))) && (cached_type == TYPE_STORE_16))
        {
	  return 11 /* 0xb */;
        }
      else if (((! (((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA12)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1))))) || (((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))))) && (((
#line 331 "../../gcc/config/arm/arm.md"
(arm_tune_wbuf)) == (
(MODEL_WBUF_NO)))) && (cached_type == TYPE_STORE_8))
        {
	  return 3;
        }
      else if (((! (((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA12)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1))))) || (((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))))) && (((
#line 331 "../../gcc/config/arm/arm.md"
(arm_tune_wbuf)) == (
(MODEL_WBUF_NO)))) && (cached_type == TYPE_STORE_12))
        {
	  return 4;
        }
      else if (((! (((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA12)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1))))) || (((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))))) && (((
#line 331 "../../gcc/config/arm/arm.md"
(arm_tune_wbuf)) == (
(MODEL_WBUF_NO)))) && (cached_type == TYPE_STORE_16))
        {
	  return 5;
        }
      else if (((! (((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA12)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1))))) || (((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))))) && (((
#line 288 "../../gcc/config/arm/arm.md"
(arm_ld_sched)) == (
(LDSCHED_YES)))) && (cached_type == TYPE_STORE_4))
        {
	  return 1;
        }
      else if (((! (((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA12)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1))))) || (((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))))) && (((
#line 288 "../../gcc/config/arm/arm.md"
(arm_ld_sched)) == (
(LDSCHED_YES)))) && ((cached_type == TYPE_LOAD_BYTE) || (cached_type == TYPE_LOAD_4)) && ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XSCALE)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_IWMMXT)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_IWMMXT2))))))
        {
	  return 3;
        }
      else if (((! (((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA12)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1))))) || (((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))))) && (((
#line 288 "../../gcc/config/arm/arm.md"
(arm_ld_sched)) == (
(LDSCHED_YES)))) && ((cached_type == TYPE_LOAD_BYTE) || (cached_type == TYPE_LOAD_4)) && (! ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XSCALE)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_IWMMXT)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_IWMMXT2)))))))
        {
	  return 2;
        }
      else if (((! (((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA12)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1))))) || (((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))))) && (! (((
#line 288 "../../gcc/config/arm/arm.md"
(arm_ld_sched)) == (
(LDSCHED_YES))))) && ((cached_type == TYPE_LOAD_BYTE) || (cached_type == TYPE_LOAD_4) || (cached_type == TYPE_LOAD_8) || (cached_type == TYPE_LOAD_12) || (cached_type == TYPE_LOAD_16) || (cached_type == TYPE_STORE_4)))
        {
	  return 2;
        }
      else if (((! (((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA12)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1))))) || (((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))))) && (((
#line 288 "../../gcc/config/arm/arm.md"
(arm_ld_sched)) == (
(LDSCHED_NO)))) && (((cached_mul32 = get_attr_mul32 (insn)) == MUL32_YES) || ((cached_widen_mul64 = get_attr_widen_mul64 (insn)) == WIDEN_MUL64_YES)))
        {
	  return 16 /* 0x10 */;
        }
      else if (((! (((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA12)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1))))) || (((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))))) && (((
#line 288 "../../gcc/config/arm/arm.md"
(arm_ld_sched)) == (
(LDSCHED_YES)))) && (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_STRONGARM)))) && (((cached_mul32 = get_attr_mul32 (insn)) == MUL32_YES) || ((cached_widen_mul64 = get_attr_widen_mul64 (insn)) == WIDEN_MUL64_YES)))
        {
	  return 3;
        }
      else if (((! (((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA12)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1))))) || (((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))))) && (((
#line 288 "../../gcc/config/arm/arm.md"
(arm_ld_sched)) == (
(LDSCHED_YES)))) && (! (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_STRONGARM))))) && (((cached_mul32 = get_attr_mul32 (insn)) == MUL32_YES) || ((cached_widen_mul64 = get_attr_widen_mul64 (insn)) == WIDEN_MUL64_YES)))
        {
	  return 4;
        }
      else if (((! (((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA12)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1))))) || (((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))))) && ((cached_core_cycles = get_attr_core_cycles (insn)) == CORE_CYCLES_MULTI) && (! ((cached_type == TYPE_LOAD_BYTE) || (cached_type == TYPE_LOAD_4) || (cached_type == TYPE_LOAD_8) || (cached_type == TYPE_LOAD_12) || (cached_type == TYPE_LOAD_16) || (cached_type == TYPE_STORE_4) || (cached_type == TYPE_STORE_8) || (cached_type == TYPE_STORE_12) || (cached_type == TYPE_STORE_16))) && (! (((cached_mul32 = get_attr_mul32 (insn)) == MUL32_YES) || ((cached_widen_mul64 = get_attr_widen_mul64 (insn)) == WIDEN_MUL64_YES))))
        {
	  return 32 /* 0x20 */;
        }
      else if (((! (((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA12)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1))))) || (((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))))) && ((cached_core_cycles = get_attr_core_cycles (insn)) == CORE_CYCLES_SINGLE))
        {
	  return 1;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && ((cached_type == TYPE_ALU_IMM) || (cached_type == TYPE_ALUS_IMM) || (cached_type == TYPE_LOGIC_IMM) || (cached_type == TYPE_LOGICS_IMM) || (cached_type == TYPE_ALU_SREG) || (cached_type == TYPE_ALUS_SREG) || (cached_type == TYPE_LOGIC_REG) || (cached_type == TYPE_LOGICS_REG) || (cached_type == TYPE_ADC_IMM) || (cached_type == TYPE_ADCS_IMM) || (cached_type == TYPE_ADC_REG) || (cached_type == TYPE_ADCS_REG) || (cached_type == TYPE_ADR) || (cached_type == TYPE_BFM) || (cached_type == TYPE_REV) || (cached_type == TYPE_ALU_SHIFT_IMM_LSL_1TO4) || (cached_type == TYPE_ALU_SHIFT_IMM_OTHER) || (cached_type == TYPE_ALUS_SHIFT_IMM) || (cached_type == TYPE_LOGIC_SHIFT_IMM) || (cached_type == TYPE_LOGICS_SHIFT_IMM) || (cached_type == TYPE_SHIFT_IMM) || (cached_type == TYPE_SHIFT_REG) || (cached_type == TYPE_EXTEND) || (cached_type == TYPE_MOV_IMM) || (cached_type == TYPE_MOV_REG) || (cached_type == TYPE_MOV_SHIFT) || (cached_type == TYPE_MVN_IMM) || (cached_type == TYPE_MVN_REG) || (cached_type == TYPE_MVN_SHIFT) || (cached_type == TYPE_MULTIPLE)))
        {
	  return 1;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && ((cached_type == TYPE_ALU_SHIFT_REG) || (cached_type == TYPE_ALUS_SHIFT_REG) || (cached_type == TYPE_LOGIC_SHIFT_REG) || (cached_type == TYPE_LOGICS_SHIFT_REG) || (cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MVN_SHIFT_REG)))
        {
	  return 2;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && ((cached_type == TYPE_SMLALXY) || (cached_type == TYPE_MUL) || (cached_type == TYPE_MLA)))
        {
	  return 3;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && ((cached_type == TYPE_MULS) || (cached_type == TYPE_MLAS)))
        {
	  return 4;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && ((cached_type == TYPE_UMULL) || (cached_type == TYPE_UMLAL) || (cached_type == TYPE_SMULL) || (cached_type == TYPE_SMLAL)))
        {
	  return 4;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && ((cached_type == TYPE_UMULLS) || (cached_type == TYPE_UMLALS) || (cached_type == TYPE_SMULLS) || (cached_type == TYPE_SMLALS)))
        {
	  return 5;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && ((cached_type == TYPE_SMULXY) || (cached_type == TYPE_SMLAXY) || (cached_type == TYPE_SMLAWX)))
        {
	  return 2;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && (cached_type == TYPE_SMLALXY))
        {
	  return 3;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && ((cached_type == TYPE_LOAD_4) || (cached_type == TYPE_LOAD_BYTE)))
        {
	  return 3;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && (cached_type == TYPE_STORE_4))
        {
	  return 0;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && (cached_type == TYPE_LOAD_8))
        {
	  return 3;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && (cached_type == TYPE_LOAD_12))
        {
	  return 4;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && (cached_type == TYPE_LOAD_16))
        {
	  return 5;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && (cached_type == TYPE_STORE_8))
        {
	  return 0;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && (cached_type == TYPE_STORE_12))
        {
	  return 0;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && (cached_type == TYPE_STORE_16))
        {
	  return 0;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && (cached_type == TYPE_BRANCH))
        {
	  return 0;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM926EJS)))) && (cached_type == TYPE_CALL))
        {
	  return 32 /* 0x20 */;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E)))) && ((cached_type == TYPE_ALU_IMM) || (cached_type == TYPE_ALUS_IMM) || (cached_type == TYPE_LOGIC_IMM) || (cached_type == TYPE_LOGICS_IMM) || (cached_type == TYPE_ALU_SREG) || (cached_type == TYPE_ALUS_SREG) || (cached_type == TYPE_LOGIC_REG) || (cached_type == TYPE_LOGICS_REG) || (cached_type == TYPE_ADC_IMM) || (cached_type == TYPE_ADCS_IMM) || (cached_type == TYPE_ADC_REG) || (cached_type == TYPE_ADCS_REG) || (cached_type == TYPE_ADR) || (cached_type == TYPE_BFM) || (cached_type == TYPE_REV) || (cached_type == TYPE_SHIFT_IMM) || (cached_type == TYPE_SHIFT_REG) || (cached_type == TYPE_MOV_IMM) || (cached_type == TYPE_MOV_REG) || (cached_type == TYPE_MVN_IMM) || (cached_type == TYPE_MVN_REG) || (cached_type == TYPE_MULTIPLE)))
        {
	  return 1;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E)))) && ((cached_type == TYPE_ALU_SHIFT_IMM_LSL_1TO4) || (cached_type == TYPE_ALU_SHIFT_IMM_OTHER) || (cached_type == TYPE_ALUS_SHIFT_IMM) || (cached_type == TYPE_LOGIC_SHIFT_IMM) || (cached_type == TYPE_LOGICS_SHIFT_IMM) || (cached_type == TYPE_EXTEND) || (cached_type == TYPE_MOV_SHIFT) || (cached_type == TYPE_MVN_SHIFT)))
        {
	  return 1;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E)))) && ((cached_type == TYPE_ALU_SHIFT_REG) || (cached_type == TYPE_ALUS_SHIFT_REG) || (cached_type == TYPE_LOGIC_SHIFT_REG) || (cached_type == TYPE_LOGICS_SHIFT_REG) || (cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MVN_SHIFT_REG)))
        {
	  return 2;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E)))) && ((cached_type == TYPE_SMULXY) || (cached_type == TYPE_SMULWY)))
        {
	  return 2;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E)))) && ((cached_type == TYPE_SMLAXY) || (cached_type == TYPE_SMLALXY) || (cached_type == TYPE_SMLAWX)))
        {
	  return 2;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E)))) && ((cached_type == TYPE_SMLALXY) || (cached_type == TYPE_MUL) || (cached_type == TYPE_MLA)))
        {
	  return 3;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E)))) && ((cached_type == TYPE_MULS) || (cached_type == TYPE_MLAS)))
        {
	  return 3;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E)))) && ((cached_type == TYPE_UMULL) || (cached_type == TYPE_UMLAL) || (cached_type == TYPE_SMULL) || (cached_type == TYPE_SMLAL)))
        {
	  return 4;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E)))) && ((cached_type == TYPE_UMULLS) || (cached_type == TYPE_UMLALS) || (cached_type == TYPE_SMULLS) || (cached_type == TYPE_SMLALS)))
        {
	  return 4;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E)))) && ((cached_type == TYPE_LOAD_BYTE) || (cached_type == TYPE_LOAD_4)))
        {
	  return 2;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E)))) && (cached_type == TYPE_STORE_4))
        {
	  return 0;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E)))) && (cached_type == TYPE_LOAD_8))
        {
	  return 2;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E)))) && (cached_type == TYPE_STORE_8))
        {
	  return 0;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E)))) && ((cached_type == TYPE_LOAD_12) || (cached_type == TYPE_LOAD_16)))
        {
	  return 3;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E)))) && ((cached_type == TYPE_STORE_12) || (cached_type == TYPE_STORE_16)))
        {
	  return 0;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E)))) && (cached_type == TYPE_BRANCH))
        {
	  return 0;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E)))) && (cached_type == TYPE_CALL))
        {
	  return 32 /* 0x20 */;
        }
      else if ((((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E)))) && (((
#line 119 "../../gcc/config/arm/arm.md"
(arm_fpu_attr)) == (
(FPU_VFP)))))) && ((cached_type == TYPE_FMOV) || (cached_type == TYPE_FFARITHS) || (cached_type == TYPE_FFARITHD) || (cached_type == TYPE_FCMPS) || (cached_type == TYPE_FCMPD)))
        {
	  return 5;
        }
      else if ((((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E)))) && (((
#line 119 "../../gcc/config/arm/arm.md"
(arm_fpu_attr)) == (
(FPU_VFP)))))) && ((cached_type == TYPE_FADDD) || (cached_type == TYPE_FADDS)))
        {
	  return 5;
        }
      else if ((((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E)))) && (((
#line 119 "../../gcc/config/arm/arm.md"
(arm_fpu_attr)) == (
(FPU_VFP)))))) && ((cached_type == TYPE_F_CVT) || (cached_type == TYPE_F_CVTI2F) || (cached_type == TYPE_F_CVTF2I)))
        {
	  return 5;
        }
      else if ((((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E)))) && (((
#line 119 "../../gcc/config/arm/arm.md"
(arm_fpu_attr)) == (
(FPU_VFP)))))) && ((cached_type == TYPE_FMULS) || (cached_type == TYPE_FMACS) || (cached_type == TYPE_FFMAS) || (cached_type == TYPE_FMULD) || (cached_type == TYPE_FMACD) || (cached_type == TYPE_FFMAD)))
        {
	  return 6;
        }
      else if ((((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E)))) && (((
#line 119 "../../gcc/config/arm/arm.md"
(arm_fpu_attr)) == (
(FPU_VFP)))))) && ((cached_type == TYPE_FDIVS) || (cached_type == TYPE_FSQRTS)))
        {
	  return 18 /* 0x12 */;
        }
      else if ((((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E)))) && (((
#line 119 "../../gcc/config/arm/arm.md"
(arm_fpu_attr)) == (
(FPU_VFP)))))) && ((cached_type == TYPE_FDIVD) || (cached_type == TYPE_FSQRTD)))
        {
	  return 32 /* 0x20 */;
        }
      else if ((((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E)))) && (((
#line 119 "../../gcc/config/arm/arm.md"
(arm_fpu_attr)) == (
(FPU_VFP)))))) && (cached_type == TYPE_F_LOADS))
        {
	  return 4;
        }
      else if ((((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E)))) && (((
#line 119 "../../gcc/config/arm/arm.md"
(arm_fpu_attr)) == (
(FPU_VFP)))))) && (cached_type == TYPE_F_LOADD))
        {
	  return 5;
        }
      else if ((((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E)))) && (((
#line 119 "../../gcc/config/arm/arm.md"
(arm_fpu_attr)) == (
(FPU_VFP)))))) && ((cached_type == TYPE_F_MCR) || (cached_type == TYPE_F_MCRR)))
        {
	  return 4;
        }
      else if ((((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E)))) && (((
#line 119 "../../gcc/config/arm/arm.md"
(arm_fpu_attr)) == (
(FPU_VFP)))))) && (cached_type == TYPE_F_STORES))
        {
	  return 1;
        }
      else if ((((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E)))) && (((
#line 119 "../../gcc/config/arm/arm.md"
(arm_fpu_attr)) == (
(FPU_VFP)))))) && (cached_type == TYPE_F_STORED))
        {
	  return 1;
        }
      else if ((((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E)))) && (((
#line 119 "../../gcc/config/arm/arm.md"
(arm_fpu_attr)) == (
(FPU_VFP)))))) && ((cached_type == TYPE_F_MRC) || (cached_type == TYPE_F_MRRC)))
        {
	  return 1;
        }
      else if ((((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E)))) && (((
#line 119 "../../gcc/config/arm/arm.md"
(arm_fpu_attr)) == (
(FPU_VFP)))))) && (cached_type == TYPE_F_FLAG))
        {
	  return 2;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && ((cached_type == TYPE_ALU_IMM) || (cached_type == TYPE_ALUS_IMM) || (cached_type == TYPE_LOGIC_IMM) || (cached_type == TYPE_LOGICS_IMM) || (cached_type == TYPE_ALU_SREG) || (cached_type == TYPE_ALUS_SREG) || (cached_type == TYPE_LOGIC_REG) || (cached_type == TYPE_LOGICS_REG) || (cached_type == TYPE_ADC_IMM) || (cached_type == TYPE_ADCS_IMM) || (cached_type == TYPE_ADC_REG) || (cached_type == TYPE_ADCS_REG) || (cached_type == TYPE_ADR) || (cached_type == TYPE_BFM) || (cached_type == TYPE_REV) || (cached_type == TYPE_SHIFT_IMM) || (cached_type == TYPE_SHIFT_REG) || (cached_type == TYPE_MOV_IMM) || (cached_type == TYPE_MOV_REG) || (cached_type == TYPE_MVN_IMM) || (cached_type == TYPE_MVN_REG) || (cached_type == TYPE_MULTIPLE)))
        {
	  return 1;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && ((cached_type == TYPE_ALU_SHIFT_IMM_LSL_1TO4) || (cached_type == TYPE_ALU_SHIFT_IMM_OTHER) || (cached_type == TYPE_ALUS_SHIFT_IMM) || (cached_type == TYPE_LOGIC_SHIFT_IMM) || (cached_type == TYPE_LOGICS_SHIFT_IMM) || (cached_type == TYPE_EXTEND) || (cached_type == TYPE_MOV_SHIFT) || (cached_type == TYPE_MVN_SHIFT)))
        {
	  return 1;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && ((cached_type == TYPE_ALU_SHIFT_REG) || (cached_type == TYPE_ALUS_SHIFT_REG) || (cached_type == TYPE_LOGIC_SHIFT_REG) || (cached_type == TYPE_LOGICS_SHIFT_REG) || (cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MVN_SHIFT_REG)))
        {
	  return 2;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && ((cached_type == TYPE_SMULXY) || (cached_type == TYPE_SMULWY)))
        {
	  return 2;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && ((cached_type == TYPE_SMLAXY) || (cached_type == TYPE_SMLALXY) || (cached_type == TYPE_SMLAWX)))
        {
	  return 2;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && ((cached_type == TYPE_SMLALXY) || (cached_type == TYPE_MUL) || (cached_type == TYPE_MLA)))
        {
	  return 3;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && ((cached_type == TYPE_MULS) || (cached_type == TYPE_MLAS)))
        {
	  return 3;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && ((cached_type == TYPE_UMULL) || (cached_type == TYPE_UMLAL) || (cached_type == TYPE_SMULL) || (cached_type == TYPE_SMLAL)))
        {
	  return 4;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && ((cached_type == TYPE_UMULLS) || (cached_type == TYPE_UMLALS) || (cached_type == TYPE_SMULLS) || (cached_type == TYPE_SMLALS)))
        {
	  return 4;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && ((cached_type == TYPE_LOAD_BYTE) || (cached_type == TYPE_LOAD_4)))
        {
	  return 2;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && (cached_type == TYPE_STORE_4))
        {
	  return 0;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && (cached_type == TYPE_LOAD_8))
        {
	  return 2;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && (cached_type == TYPE_STORE_8))
        {
	  return 0;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && ((cached_type == TYPE_LOAD_12) || (cached_type == TYPE_LOAD_16)))
        {
	  return 3;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && ((cached_type == TYPE_STORE_12) || (cached_type == TYPE_STORE_16)))
        {
	  return 0;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && (cached_type == TYPE_BRANCH))
        {
	  return 0;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1026EJS)))) && (cached_type == TYPE_CALL))
        {
	  return 32 /* 0x20 */;
        }
      else if (((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && ((cached_type == TYPE_ALU_IMM) || (cached_type == TYPE_ALUS_IMM) || (cached_type == TYPE_LOGIC_IMM) || (cached_type == TYPE_LOGICS_IMM) || (cached_type == TYPE_ALU_SREG) || (cached_type == TYPE_ALUS_SREG) || (cached_type == TYPE_LOGIC_REG) || (cached_type == TYPE_LOGICS_REG) || (cached_type == TYPE_ADC_IMM) || (cached_type == TYPE_ADCS_IMM) || (cached_type == TYPE_ADC_REG) || (cached_type == TYPE_ADCS_REG) || (cached_type == TYPE_ADR) || (cached_type == TYPE_BFM) || (cached_type == TYPE_REV) || (cached_type == TYPE_SHIFT_IMM) || (cached_type == TYPE_SHIFT_REG) || (cached_type == TYPE_MOV_IMM) || (cached_type == TYPE_MOV_REG) || (cached_type == TYPE_MVN_IMM) || (cached_type == TYPE_MVN_REG) || (cached_type == TYPE_MULTIPLE)))
        {
	  return 2;
        }
      else if (((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && ((cached_type == TYPE_ALU_SHIFT_IMM_LSL_1TO4) || (cached_type == TYPE_ALU_SHIFT_IMM_OTHER) || (cached_type == TYPE_ALUS_SHIFT_IMM) || (cached_type == TYPE_LOGIC_SHIFT_IMM) || (cached_type == TYPE_LOGICS_SHIFT_IMM) || (cached_type == TYPE_EXTEND) || (cached_type == TYPE_MOV_SHIFT) || (cached_type == TYPE_MVN_SHIFT)))
        {
	  return 2;
        }
      else if (((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && ((cached_type == TYPE_ALU_SHIFT_REG) || (cached_type == TYPE_ALUS_SHIFT_REG) || (cached_type == TYPE_LOGIC_SHIFT_REG) || (cached_type == TYPE_LOGICS_SHIFT_REG) || (cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MVN_SHIFT_REG)))
        {
	  return 3;
        }
      else if (((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && ((cached_type == TYPE_MUL) || (cached_type == TYPE_MLA)))
        {
	  return 4;
        }
      else if (((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && ((cached_type == TYPE_MULS) || (cached_type == TYPE_MLAS)))
        {
	  return 4;
        }
      else if (((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && ((cached_type == TYPE_SMULL) || (cached_type == TYPE_UMULL) || (cached_type == TYPE_SMLAL) || (cached_type == TYPE_UMLAL)))
        {
	  return 5;
        }
      else if (((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && ((cached_type == TYPE_SMULLS) || (cached_type == TYPE_UMULLS) || (cached_type == TYPE_SMLALS) || (cached_type == TYPE_UMLALS)))
        {
	  return 5;
        }
      else if (((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && ((cached_type == TYPE_SMULXY) || (cached_type == TYPE_SMLAXY) || (cached_type == TYPE_SMULWY) || (cached_type == TYPE_SMLAWY) || (cached_type == TYPE_SMUAD) || (cached_type == TYPE_SMUADX) || (cached_type == TYPE_SMLAD) || (cached_type == TYPE_SMLADX) || (cached_type == TYPE_SMUSD) || (cached_type == TYPE_SMUSDX) || (cached_type == TYPE_SMLSD) || (cached_type == TYPE_SMLSDX)))
        {
	  return 3;
        }
      else if (((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && (cached_type == TYPE_SMLALXY))
        {
	  return 4;
        }
      else if (((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && ((cached_type == TYPE_SMMUL) || (cached_type == TYPE_SMMULR)))
        {
	  return 4;
        }
      else if (((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && (cached_type == TYPE_BRANCH))
        {
	  return 0;
        }
      else if (((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && (cached_type == TYPE_CALL))
        {
	  return 32 /* 0x20 */;
        }
      else if (((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && (cached_type == TYPE_LOAD_4))
        {
	  return 3;
        }
      else if (((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && (cached_type == TYPE_LOAD_BYTE))
        {
	  return 4;
        }
      else if (((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && (cached_type == TYPE_STORE_4))
        {
	  return 0;
        }
      else if (((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && (cached_type == TYPE_LOAD_8))
        {
	  return 3;
        }
      else if (((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && (cached_type == TYPE_STORE_8))
        {
	  return 0;
        }
      else if (((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && ((cached_type == TYPE_LOAD_12) || (cached_type == TYPE_LOAD_16)))
        {
	  return 4;
        }
      else if (((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JS)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM1136JFS))))) && ((cached_type == TYPE_STORE_12) || (cached_type == TYPE_STORE_16)))
        {
	  return 0;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) && ((cached_type == TYPE_ALU_IMM) || (cached_type == TYPE_ALUS_IMM) || (cached_type == TYPE_LOGIC_IMM) || (cached_type == TYPE_LOGICS_IMM) || (cached_type == TYPE_ALU_SREG) || (cached_type == TYPE_ALUS_SREG) || (cached_type == TYPE_LOGIC_REG) || (cached_type == TYPE_LOGICS_REG) || (cached_type == TYPE_ADC_IMM) || (cached_type == TYPE_ADCS_IMM) || (cached_type == TYPE_ADC_REG) || (cached_type == TYPE_ADCS_REG) || (cached_type == TYPE_ADR) || (cached_type == TYPE_BFM) || (cached_type == TYPE_REV) || (cached_type == TYPE_SHIFT_IMM) || (cached_type == TYPE_SHIFT_REG) || (cached_type == TYPE_MOV_IMM) || (cached_type == TYPE_MOV_REG) || (cached_type == TYPE_MVN_IMM) || (cached_type == TYPE_MVN_REG) || (cached_type == TYPE_MRS) || (cached_type == TYPE_MULTIPLE)))
        {
	  return 1;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) && ((cached_type == TYPE_EXTEND) || (cached_type == TYPE_ALU_SHIFT_IMM_LSL_1TO4) || (cached_type == TYPE_ALU_SHIFT_IMM_OTHER) || (cached_type == TYPE_ALUS_SHIFT_IMM) || (cached_type == TYPE_LOGIC_SHIFT_IMM) || (cached_type == TYPE_LOGICS_SHIFT_IMM) || (cached_type == TYPE_ALU_SHIFT_REG) || (cached_type == TYPE_ALUS_SHIFT_REG) || (cached_type == TYPE_LOGIC_SHIFT_REG) || (cached_type == TYPE_LOGICS_SHIFT_REG) || (cached_type == TYPE_MOV_SHIFT) || (cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MVN_SHIFT) || (cached_type == TYPE_MVN_SHIFT_REG)))
        {
	  return 2;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) && ((cached_type == TYPE_SMLALXY) || (cached_type == TYPE_SMULXY) || (cached_type == TYPE_SMLAXY)))
        {
	  return 2;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) && ((cached_type == TYPE_MUL) || (cached_type == TYPE_MLA) || (cached_type == TYPE_MULS) || (cached_type == TYPE_MLAS) || (cached_type == TYPE_UMULL) || (cached_type == TYPE_UMLAL) || (cached_type == TYPE_SMULL) || (cached_type == TYPE_SMLAL) || (cached_type == TYPE_UMULLS) || (cached_type == TYPE_UMLALS) || (cached_type == TYPE_SMULLS) || (cached_type == TYPE_SMLALS) || (cached_type == TYPE_SMLAWX)))
        {
	  return 5;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) && ((cached_type == TYPE_LOAD_4) || (cached_type == TYPE_LOAD_BYTE)))
        {
	  return 3;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) && (cached_type == TYPE_LOAD_8))
        {
	  return 4;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) && (cached_type == TYPE_LOAD_12))
        {
	  return 5;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) && (cached_type == TYPE_LOAD_16))
        {
	  return 6;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) && (cached_type == TYPE_STORE_4))
        {
	  return 0;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) && (cached_type == TYPE_STORE_8))
        {
	  return 1;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) && (cached_type == TYPE_STORE_12))
        {
	  return 2;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) && (cached_type == TYPE_STORE_16))
        {
	  return 3;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) && (cached_type == TYPE_BRANCH))
        {
	  return 0;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA526)))) && (cached_type == TYPE_CALL))
        {
	  return 1;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) && ((cached_type == TYPE_ALU_IMM) || (cached_type == TYPE_ALUS_IMM) || (cached_type == TYPE_LOGIC_IMM) || (cached_type == TYPE_LOGICS_IMM) || (cached_type == TYPE_ALU_SREG) || (cached_type == TYPE_ALUS_SREG) || (cached_type == TYPE_LOGIC_REG) || (cached_type == TYPE_LOGICS_REG) || (cached_type == TYPE_ADC_IMM) || (cached_type == TYPE_ADCS_IMM) || (cached_type == TYPE_ADC_REG) || (cached_type == TYPE_ADCS_REG) || (cached_type == TYPE_ADR) || (cached_type == TYPE_BFM) || (cached_type == TYPE_REV) || (cached_type == TYPE_SHIFT_IMM) || (cached_type == TYPE_SHIFT_REG) || (cached_type == TYPE_EXTEND) || (cached_type == TYPE_ALU_SHIFT_IMM_LSL_1TO4) || (cached_type == TYPE_ALU_SHIFT_IMM_OTHER) || (cached_type == TYPE_ALUS_SHIFT_IMM) || (cached_type == TYPE_LOGIC_SHIFT_IMM) || (cached_type == TYPE_LOGICS_SHIFT_IMM) || (cached_type == TYPE_ALU_SHIFT_REG) || (cached_type == TYPE_ALUS_SHIFT_REG) || (cached_type == TYPE_LOGIC_SHIFT_REG) || (cached_type == TYPE_LOGICS_SHIFT_REG) || (cached_type == TYPE_MOV_IMM) || (cached_type == TYPE_MOV_REG) || (cached_type == TYPE_MOV_SHIFT) || (cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MVN_IMM) || (cached_type == TYPE_MVN_REG) || (cached_type == TYPE_MVN_SHIFT) || (cached_type == TYPE_MVN_SHIFT_REG) || (cached_type == TYPE_MRS) || (cached_type == TYPE_MULTIPLE)))
        {
	  return 1;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) && (cached_type == TYPE_SMLALXY))
        {
	  return 2;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) && ((cached_type == TYPE_SMLAXY) || (cached_type == TYPE_SMULXY) || (cached_type == TYPE_SMULWY) || (cached_type == TYPE_SMLAWY)))
        {
	  return 3;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) && ((cached_type == TYPE_MUL) || (cached_type == TYPE_MLA) || (cached_type == TYPE_MULS) || (cached_type == TYPE_MLAS)))
        {
	  return 4;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) && ((cached_type == TYPE_UMULL) || (cached_type == TYPE_UMLAL) || (cached_type == TYPE_SMULL) || (cached_type == TYPE_SMLAL) || (cached_type == TYPE_UMULLS) || (cached_type == TYPE_UMLALS) || (cached_type == TYPE_SMULLS) || (cached_type == TYPE_SMLALS)))
        {
	  return 5;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) && ((cached_type == TYPE_LOAD_4) || (cached_type == TYPE_LOAD_BYTE)))
        {
	  return 2;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) && (cached_type == TYPE_LOAD_8))
        {
	  return 3;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) && (cached_type == TYPE_LOAD_12))
        {
	  return 4;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) && (cached_type == TYPE_LOAD_16))
        {
	  return 5;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) && (cached_type == TYPE_STORE_4))
        {
	  return 0;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) && (cached_type == TYPE_STORE_8))
        {
	  return 1;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) && (cached_type == TYPE_STORE_12))
        {
	  return 2;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) && (cached_type == TYPE_STORE_16))
        {
	  return 3;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) && (cached_type == TYPE_BRANCH))
        {
	  return 0;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA606TE)))) && (cached_type == TYPE_CALL))
        {
	  return 1;
        }
      else if (((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE))))) && ((cached_type == TYPE_ALU_IMM) || (cached_type == TYPE_ALUS_IMM) || (cached_type == TYPE_LOGIC_IMM) || (cached_type == TYPE_LOGICS_IMM) || (cached_type == TYPE_ALU_SREG) || (cached_type == TYPE_ALUS_SREG) || (cached_type == TYPE_LOGIC_REG) || (cached_type == TYPE_LOGICS_REG) || (cached_type == TYPE_ADC_IMM) || (cached_type == TYPE_ADCS_IMM) || (cached_type == TYPE_ADC_REG) || (cached_type == TYPE_ADCS_REG) || (cached_type == TYPE_ADR) || (cached_type == TYPE_BFM) || (cached_type == TYPE_REV) || (cached_type == TYPE_SHIFT_IMM) || (cached_type == TYPE_SHIFT_REG) || (cached_type == TYPE_MOV_IMM) || (cached_type == TYPE_MOV_REG) || (cached_type == TYPE_MVN_IMM) || (cached_type == TYPE_MVN_REG) || (cached_type == TYPE_MRS) || (cached_type == TYPE_MULTIPLE)))
        {
	  return 1;
        }
      else if (((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE))))) && ((cached_type == TYPE_EXTEND) || (cached_type == TYPE_ALU_SHIFT_IMM_LSL_1TO4) || (cached_type == TYPE_ALU_SHIFT_IMM_OTHER) || (cached_type == TYPE_ALUS_SHIFT_IMM) || (cached_type == TYPE_LOGIC_SHIFT_IMM) || (cached_type == TYPE_LOGICS_SHIFT_IMM) || (cached_type == TYPE_ALU_SHIFT_REG) || (cached_type == TYPE_ALUS_SHIFT_REG) || (cached_type == TYPE_LOGIC_SHIFT_REG) || (cached_type == TYPE_LOGICS_SHIFT_REG) || (cached_type == TYPE_MOV_SHIFT) || (cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MVN_SHIFT) || (cached_type == TYPE_MVN_SHIFT_REG)))
        {
	  return 2;
        }
      else if (((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE))))) && ((cached_type == TYPE_SMULWY) || (cached_type == TYPE_SMLAWY) || (cached_type == TYPE_SMULXY) || (cached_type == TYPE_SMLAXY)))
        {
	  return 2;
        }
      else if (((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE))))) && ((cached_type == TYPE_MUL) || (cached_type == TYPE_MLA)))
        {
	  return 2;
        }
      else if (((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE))))) && ((cached_type == TYPE_MULS) || (cached_type == TYPE_MLAS) || (cached_type == TYPE_SMULL) || (cached_type == TYPE_SMLAL) || (cached_type == TYPE_UMULL) || (cached_type == TYPE_UMLAL) || (cached_type == TYPE_SMLALXY) || (cached_type == TYPE_SMLAWX)))
        {
	  return 3;
        }
      else if (((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE))))) && ((cached_type == TYPE_SMULLS) || (cached_type == TYPE_SMLALS) || (cached_type == TYPE_UMULLS) || (cached_type == TYPE_UMLALS)))
        {
	  return 4;
        }
      else if (((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE))))) && ((cached_type == TYPE_LOAD_4) || (cached_type == TYPE_LOAD_BYTE)))
        {
	  return 3;
        }
      else if (((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE))))) && ((cached_type == TYPE_LOAD_8) || (cached_type == TYPE_LOAD_12)))
        {
	  return 4;
        }
      else if (((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE))))) && (cached_type == TYPE_LOAD_16))
        {
	  return 5;
        }
      else if (((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE))))) && (cached_type == TYPE_STORE_4))
        {
	  return 0;
        }
      else if (((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE))))) && ((cached_type == TYPE_STORE_8) || (cached_type == TYPE_STORE_12)))
        {
	  return 1;
        }
      else if (((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE))))) && (cached_type == TYPE_STORE_16))
        {
	  return 2;
        }
      else if (((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE))))) && (cached_type == TYPE_BRANCH))
        {
	  return 0;
        }
      else if (((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA626TE))))) && (cached_type == TYPE_CALL))
        {
	  return 1;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) && ((cached_type == TYPE_ALU_IMM) || (cached_type == TYPE_ALUS_IMM) || (cached_type == TYPE_ALU_SREG) || (cached_type == TYPE_ALUS_SREG) || (cached_type == TYPE_LOGIC_IMM) || (cached_type == TYPE_LOGICS_IMM) || (cached_type == TYPE_LOGIC_REG) || (cached_type == TYPE_LOGICS_REG) || (cached_type == TYPE_ADC_IMM) || (cached_type == TYPE_ADCS_IMM) || (cached_type == TYPE_ADC_REG) || (cached_type == TYPE_ADCS_REG) || (cached_type == TYPE_ADR) || (cached_type == TYPE_BFM) || (cached_type == TYPE_REV) || (cached_type == TYPE_SHIFT_IMM) || (cached_type == TYPE_SHIFT_REG) || (cached_type == TYPE_MOV_IMM) || (cached_type == TYPE_MOV_REG) || (cached_type == TYPE_MVN_IMM) || (cached_type == TYPE_MVN_REG)))
        {
	  return 1;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) && ((cached_type == TYPE_ALU_SHIFT_IMM_LSL_1TO4) || (cached_type == TYPE_ALU_SHIFT_IMM_OTHER) || (cached_type == TYPE_LOGIC_SHIFT_IMM) || (cached_type == TYPE_ALUS_SHIFT_IMM) || (cached_type == TYPE_LOGICS_SHIFT_IMM) || (cached_type == TYPE_ALU_SHIFT_REG) || (cached_type == TYPE_LOGIC_SHIFT_REG) || (cached_type == TYPE_ALUS_SHIFT_REG) || (cached_type == TYPE_LOGICS_SHIFT_REG) || (cached_type == TYPE_EXTEND) || (cached_type == TYPE_MOV_SHIFT) || (cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MVN_SHIFT) || (cached_type == TYPE_MVN_SHIFT_REG)))
        {
	  return 2;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) && ((cached_type == TYPE_SMULWY) || (cached_type == TYPE_SMLAWY) || (cached_type == TYPE_SMULXY) || (cached_type == TYPE_SMLAXY)))
        {
	  return 2;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) && ((cached_type == TYPE_MUL) || (cached_type == TYPE_MLA)))
        {
	  return 2;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) && ((cached_type == TYPE_MULS) || (cached_type == TYPE_MLAS) || (cached_type == TYPE_SMULL) || (cached_type == TYPE_SMLAL) || (cached_type == TYPE_UMULL) || (cached_type == TYPE_UMLAL) || (cached_type == TYPE_SMLALXY) || (cached_type == TYPE_SMLAWX)))
        {
	  return 3;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) && ((cached_type == TYPE_SMULLS) || (cached_type == TYPE_SMLALS) || (cached_type == TYPE_UMULLS) || (cached_type == TYPE_UMLALS)))
        {
	  return 4;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) && ((cached_type == TYPE_LOAD_4) || (cached_type == TYPE_LOAD_BYTE)))
        {
	  return 5;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) && ((cached_type == TYPE_LOAD_8) || (cached_type == TYPE_LOAD_12)))
        {
	  return 6;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) && (cached_type == TYPE_LOAD_16))
        {
	  return 7;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) && (cached_type == TYPE_STORE_4))
        {
	  return 0;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) && ((cached_type == TYPE_STORE_8) || (cached_type == TYPE_STORE_12)))
        {
	  return 1;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) && (cached_type == TYPE_STORE_16))
        {
	  return 2;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) && (cached_type == TYPE_BRANCH))
        {
	  return 0;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FMP626)))) && (cached_type == TYPE_CALL))
        {
	  return 1;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) && ((cached_type == TYPE_MOV_IMM) || (cached_type == TYPE_MOV_REG) || (cached_type == TYPE_MOV_SHIFT) || (cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MVN_IMM) || (cached_type == TYPE_MVN_REG) || (cached_type == TYPE_MVN_SHIFT) || (cached_type == TYPE_MVN_SHIFT_REG)))
        {
	  return 1;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) && ((cached_type == TYPE_ALU_IMM) || (cached_type == TYPE_ALUS_IMM) || (cached_type == TYPE_LOGIC_IMM) || (cached_type == TYPE_LOGICS_IMM) || (cached_type == TYPE_ALU_SREG) || (cached_type == TYPE_ALUS_SREG) || (cached_type == TYPE_LOGIC_REG) || (cached_type == TYPE_LOGICS_REG) || (cached_type == TYPE_ADC_IMM) || (cached_type == TYPE_ADCS_IMM) || (cached_type == TYPE_ADC_REG) || (cached_type == TYPE_ADCS_REG) || (cached_type == TYPE_ADR) || (cached_type == TYPE_BFM) || (cached_type == TYPE_REV) || (cached_type == TYPE_SHIFT_IMM) || (cached_type == TYPE_SHIFT_REG) || (cached_type == TYPE_MRS) || (cached_type == TYPE_MULTIPLE)))
        {
	  return 1;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) && ((cached_type == TYPE_EXTEND) || (cached_type == TYPE_ALU_SHIFT_IMM_LSL_1TO4) || (cached_type == TYPE_ALU_SHIFT_IMM_OTHER) || (cached_type == TYPE_ALUS_SHIFT_IMM) || (cached_type == TYPE_LOGIC_SHIFT_IMM) || (cached_type == TYPE_LOGICS_SHIFT_IMM)))
        {
	  return 3;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) && ((cached_type == TYPE_ALU_SHIFT_REG) || (cached_type == TYPE_ALUS_SHIFT_REG) || (cached_type == TYPE_LOGIC_SHIFT_REG) || (cached_type == TYPE_LOGICS_SHIFT_REG)))
        {
	  return 3;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) && ((cached_type == TYPE_SMLALXY) || (cached_type == TYPE_MUL) || (cached_type == TYPE_MLA) || (cached_type == TYPE_MULS) || (cached_type == TYPE_MLAS) || (cached_type == TYPE_UMULL) || (cached_type == TYPE_UMLAL) || (cached_type == TYPE_SMULL) || (cached_type == TYPE_SMLAL) || (cached_type == TYPE_UMULLS) || (cached_type == TYPE_UMLALS) || (cached_type == TYPE_SMULLS) || (cached_type == TYPE_SMLALS) || (cached_type == TYPE_SMLAWX) || (cached_type == TYPE_SMULXY) || (cached_type == TYPE_SMLAXY)))
        {
	  return 3;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) && ((cached_type == TYPE_LOAD_4) || (cached_type == TYPE_LOAD_BYTE)))
        {
	  return 3;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) && (cached_type == TYPE_STORE_4))
        {
	  return 1;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) && ((cached_type == TYPE_LOAD_8) || (cached_type == TYPE_LOAD_12)))
        {
	  return 4;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) && (cached_type == TYPE_LOAD_16))
        {
	  return 5;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) && ((cached_type == TYPE_STORE_8) || (cached_type == TYPE_STORE_12)))
        {
	  return 2;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) && (cached_type == TYPE_STORE_16))
        {
	  return 3;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) && (cached_type == TYPE_BRANCH))
        {
	  return 0;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_FA726TE)))) && (cached_type == TYPE_CALL))
        {
	  return 1;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && ((cached_type == TYPE_ALU_IMM) || (cached_type == TYPE_ALUS_IMM) || (cached_type == TYPE_LOGIC_IMM) || (cached_type == TYPE_LOGICS_IMM) || (cached_type == TYPE_ALU_SREG) || (cached_type == TYPE_ALUS_SREG) || (cached_type == TYPE_LOGIC_REG) || (cached_type == TYPE_LOGICS_REG) || (cached_type == TYPE_ADC_IMM) || (cached_type == TYPE_ADCS_IMM) || (cached_type == TYPE_ADC_REG) || (cached_type == TYPE_ADCS_REG) || (cached_type == TYPE_ADR) || (cached_type == TYPE_BFM) || (cached_type == TYPE_CLZ) || (cached_type == TYPE_RBIT) || (cached_type == TYPE_REV) || (cached_type == TYPE_ALU_DSP_REG) || (cached_type == TYPE_SHIFT_IMM) || (cached_type == TYPE_SHIFT_REG) || (cached_type == TYPE_MOV_IMM) || (cached_type == TYPE_MOV_REG) || (cached_type == TYPE_MVN_IMM) || (cached_type == TYPE_MVN_REG) || (cached_type == TYPE_MRS) || (cached_type == TYPE_MULTIPLE)))
        {
	  return 2;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && ((cached_type == TYPE_EXTEND) || (cached_type == TYPE_ALU_SHIFT_IMM_LSL_1TO4) || (cached_type == TYPE_ALU_SHIFT_IMM_OTHER) || (cached_type == TYPE_ALUS_SHIFT_IMM) || (cached_type == TYPE_LOGIC_SHIFT_IMM) || (cached_type == TYPE_LOGICS_SHIFT_IMM) || (cached_type == TYPE_ALU_SHIFT_REG) || (cached_type == TYPE_ALUS_SHIFT_REG) || (cached_type == TYPE_LOGIC_SHIFT_REG) || (cached_type == TYPE_LOGICS_SHIFT_REG) || (cached_type == TYPE_MOV_SHIFT) || (cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MVN_SHIFT) || (cached_type == TYPE_MVN_SHIFT_REG)))
        {
	  return 2;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && (((cached_mul32 = get_attr_mul32 (insn)) == MUL32_YES) || ((cached_widen_mul64 = get_attr_widen_mul64 (insn)) == WIDEN_MUL64_YES)))
        {
	  return 2;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && ((cached_type == TYPE_LOAD_BYTE) || (cached_type == TYPE_LOAD_4)))
        {
	  return 2;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && (cached_type == TYPE_STORE_4))
        {
	  return 0;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && (cached_type == TYPE_LOAD_8))
        {
	  return 3;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && (cached_type == TYPE_STORE_8))
        {
	  return 0;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && (cached_type == TYPE_LOAD_12))
        {
	  return 4;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && (cached_type == TYPE_STORE_12))
        {
	  return 0;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && (cached_type == TYPE_LOAD_12))
        {
	  return 5;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && (cached_type == TYPE_STORE_12))
        {
	  return 0;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && ((cached_type == TYPE_BRANCH) || (cached_type == TYPE_CALL)))
        {
	  return 3;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && ((cached_type == TYPE_FFARITHS) || (cached_type == TYPE_FADDS) || (cached_type == TYPE_FFARITHD) || (cached_type == TYPE_FADDD) || (cached_type == TYPE_FMOV) || (cached_type == TYPE_FMULS) || (cached_type == TYPE_F_CVT) || (cached_type == TYPE_F_CVTF2I) || (cached_type == TYPE_F_CVTI2F) || (cached_type == TYPE_FCMPS) || (cached_type == TYPE_FCMPD)))
        {
	  return 4;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && ((cached_type == TYPE_FCONSTS) || (cached_type == TYPE_FCONSTD)))
        {
	  return 3;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && (cached_type == TYPE_FMULS))
        {
	  return 4;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && ((cached_type == TYPE_FMACS) || (cached_type == TYPE_FFMAS)))
        {
	  return 8;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && (cached_type == TYPE_FMULD))
        {
	  return 7;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && ((cached_type == TYPE_FMACD) || (cached_type == TYPE_FFMAD)))
        {
	  return 11 /* 0xb */;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && ((cached_type == TYPE_FDIVS) || (cached_type == TYPE_FSQRTS)))
        {
	  return 14 /* 0xe */;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && ((cached_type == TYPE_FDIVD) || (cached_type == TYPE_FSQRTD)))
        {
	  return 29 /* 0x1d */;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && ((cached_type == TYPE_F_MCR) || (cached_type == TYPE_F_MCRR)))
        {
	  return 4;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && ((cached_type == TYPE_F_MRC) || (cached_type == TYPE_F_MRRC)))
        {
	  return 2;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && (cached_type == TYPE_F_FLAG))
        {
	  return 4;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && (cached_type == TYPE_F_LOADS))
        {
	  return 4;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && (cached_type == TYPE_F_LOADD))
        {
	  return 5;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && (cached_type == TYPE_F_STORES))
        {
	  return 0;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5)))) && (cached_type == TYPE_F_STORED))
        {
	  return 0;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (cached_type == TYPE_BRANCH))
        {
	  return 0;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (cached_type == TYPE_CALL))
        {
	  return 1;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (((cached_type == TYPE_ADR) || (cached_type == TYPE_ALU_IMM) || (cached_type == TYPE_ALUS_IMM) || (cached_type == TYPE_LOGIC_IMM) || (cached_type == TYPE_LOGICS_IMM) || (cached_type == TYPE_MOV_IMM) || (cached_type == TYPE_MVN_IMM) || (cached_type == TYPE_EXTEND)) || (((cached_type == TYPE_MOV_REG) || (cached_type == TYPE_MOV_SHIFT) || (cached_type == TYPE_MOV_SHIFT_REG)) && (! (get_attr_length (insn) == 8)))))
        {
	  return 2;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_type == TYPE_ALU_SREG) || (cached_type == TYPE_ALUS_SREG) || (cached_type == TYPE_LOGIC_REG) || (cached_type == TYPE_LOGICS_REG) || (cached_type == TYPE_ADC_IMM) || (cached_type == TYPE_ADCS_IMM) || (cached_type == TYPE_ADC_REG) || (cached_type == TYPE_ADCS_REG) || (cached_type == TYPE_BFM) || (cached_type == TYPE_CLZ) || (cached_type == TYPE_RBIT) || (cached_type == TYPE_REV) || (cached_type == TYPE_ALU_DSP_REG) || (cached_type == TYPE_SHIFT_IMM) || (cached_type == TYPE_SHIFT_REG) || (cached_type == TYPE_MOV_REG) || (cached_type == TYPE_MVN_REG)))
        {
	  return 2;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_type == TYPE_ALU_SHIFT_IMM_LSL_1TO4) || (cached_type == TYPE_ALU_SHIFT_IMM_OTHER) || (cached_type == TYPE_ALUS_SHIFT_IMM) || (cached_type == TYPE_LOGIC_SHIFT_IMM) || (cached_type == TYPE_LOGICS_SHIFT_IMM) || (cached_type == TYPE_ALU_SHIFT_REG) || (cached_type == TYPE_ALUS_SHIFT_REG) || (cached_type == TYPE_LOGIC_SHIFT_REG) || (cached_type == TYPE_LOGICS_SHIFT_REG) || (cached_type == TYPE_MOV_SHIFT) || (cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MVN_SHIFT) || (cached_type == TYPE_MVN_SHIFT_REG) || (cached_type == TYPE_MRS) || (cached_type == TYPE_MULTIPLE)))
        {
	  return 2;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (((cached_mul32 = get_attr_mul32 (insn)) == MUL32_YES) || ((cached_widen_mul64 = get_attr_widen_mul64 (insn)) == WIDEN_MUL64_YES)))
        {
	  return 2;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_type == TYPE_UDIV) || (cached_type == TYPE_SDIV)))
        {
	  return 5;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_type == TYPE_LOAD_BYTE) || (cached_type == TYPE_LOAD_4)))
        {
	  return 2;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (cached_type == TYPE_STORE_4))
        {
	  return 0;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (cached_type == TYPE_LOAD_8))
        {
	  return 2;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (cached_type == TYPE_STORE_8))
        {
	  return 0;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (cached_type == TYPE_LOAD_12))
        {
	  return 3;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (cached_type == TYPE_STORE_16))
        {
	  return 0;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (cached_type == TYPE_LOAD_16))
        {
	  return 3;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (cached_type == TYPE_STORE_12))
        {
	  return 0;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_type == TYPE_FFARITHS) || (cached_type == TYPE_FADDS) || (cached_type == TYPE_FFARITHD) || (cached_type == TYPE_FADDD) || (cached_type == TYPE_FMOV) || (cached_type == TYPE_F_CVT) || (cached_type == TYPE_F_CVTF2I) || (cached_type == TYPE_F_CVTI2F) || (cached_type == TYPE_FCMPS) || (cached_type == TYPE_FCMPD)))
        {
	  return 4;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_type == TYPE_FCONSTS) || (cached_type == TYPE_FCONSTD)))
        {
	  return 3;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (cached_type == TYPE_FMULS))
        {
	  return 4;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_cortex_a7_neon_type = get_attr_cortex_a7_neon_type (insn)) == CORTEX_A7_NEON_TYPE_NEON_MUL))
        {
	  return 4;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_type == TYPE_FMACS) || (cached_type == TYPE_FFMAS)))
        {
	  return 8;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_cortex_a7_neon_type = get_attr_cortex_a7_neon_type (insn)) == CORTEX_A7_NEON_TYPE_NEON_MLA))
        {
	  return 8;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (cached_type == TYPE_FMULD))
        {
	  return 7;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (cached_type == TYPE_FMACD))
        {
	  return 11 /* 0xb */;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (cached_type == TYPE_FFMAD))
        {
	  return 8;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_type == TYPE_FDIVS) || (cached_type == TYPE_FSQRTS)))
        {
	  return 16 /* 0x10 */;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_type == TYPE_FDIVD) || (cached_type == TYPE_FSQRTD)))
        {
	  return 31 /* 0x1f */;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_type == TYPE_F_MCR) || (cached_type == TYPE_F_MCRR)))
        {
	  return 4;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && ((cached_type == TYPE_F_MRC) || (cached_type == TYPE_F_MRRC)))
        {
	  return 2;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (cached_type == TYPE_F_FLAG))
        {
	  return 4;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (cached_type == TYPE_F_LOADS))
        {
	  return 4;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (cached_type == TYPE_F_LOADD))
        {
	  return 4;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (cached_type == TYPE_F_STORES))
        {
	  return 0;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (cached_type == TYPE_F_STORED))
        {
	  return 0;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7)))) && (get_attr_is_neon_type (insn) == IS_NEON_TYPE_YES) && ((cached_cortex_a7_neon_type = get_attr_cortex_a7_neon_type (insn)) == CORTEX_A7_NEON_TYPE_NEON_OTHER))
        {
	  return 4;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_type == TYPE_ALU_IMM) || (cached_type == TYPE_ALUS_IMM) || (cached_type == TYPE_LOGIC_IMM) || (cached_type == TYPE_LOGICS_IMM) || (cached_type == TYPE_ALU_SREG) || (cached_type == TYPE_ALUS_SREG) || (cached_type == TYPE_LOGIC_REG) || (cached_type == TYPE_LOGICS_REG) || (cached_type == TYPE_ADC_IMM) || (cached_type == TYPE_ADCS_IMM) || (cached_type == TYPE_ADC_REG) || (cached_type == TYPE_ADCS_REG) || (cached_type == TYPE_ADR) || (cached_type == TYPE_BFM) || (cached_type == TYPE_CLZ) || (cached_type == TYPE_RBIT) || (cached_type == TYPE_REV) || (cached_type == TYPE_ALU_DSP_REG) || (cached_type == TYPE_SHIFT_IMM) || (cached_type == TYPE_SHIFT_REG) || (cached_type == TYPE_MULTIPLE)))
        {
	  return 2;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_type == TYPE_ALU_SHIFT_IMM_LSL_1TO4) || (cached_type == TYPE_ALU_SHIFT_IMM_OTHER) || (cached_type == TYPE_ALUS_SHIFT_IMM) || (cached_type == TYPE_LOGIC_SHIFT_IMM) || (cached_type == TYPE_LOGICS_SHIFT_IMM) || (cached_type == TYPE_EXTEND)))
        {
	  return 2;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_type == TYPE_ALU_SHIFT_REG) || (cached_type == TYPE_ALUS_SHIFT_REG) || (cached_type == TYPE_LOGIC_SHIFT_REG) || (cached_type == TYPE_LOGICS_SHIFT_REG)))
        {
	  return 2;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_type == TYPE_MOV_IMM) || (cached_type == TYPE_MOV_REG) || (cached_type == TYPE_MOV_SHIFT) || (cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MVN_IMM) || (cached_type == TYPE_MVN_REG) || (cached_type == TYPE_MVN_SHIFT) || (cached_type == TYPE_MVN_SHIFT_REG) || (cached_type == TYPE_MRS)))
        {
	  return 1;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_type == TYPE_MUL) || (cached_type == TYPE_SMULXY) || (cached_type == TYPE_SMMUL)))
        {
	  return 6;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_type == TYPE_MLA) || (cached_type == TYPE_SMLAXY) || (cached_type == TYPE_SMLAWY) || (cached_type == TYPE_SMMLA) || (cached_type == TYPE_SMLAD) || (cached_type == TYPE_SMLSD)))
        {
	  return 6;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_type == TYPE_SMULL) || (cached_type == TYPE_UMULL) || (cached_type == TYPE_SMLAL) || (cached_type == TYPE_UMLAL) || (cached_type == TYPE_UMAAL) || (cached_type == TYPE_SMLALXY)))
        {
	  return 7;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_type == TYPE_SMULWY) || (cached_type == TYPE_SMUAD) || (cached_type == TYPE_SMUSD)))
        {
	  return 5;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_type == TYPE_SMLALD) || (cached_type == TYPE_SMLSLD)))
        {
	  return 6;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_type == TYPE_LOAD_4) || (cached_type == TYPE_LOAD_8) || (cached_type == TYPE_LOAD_BYTE)))
        {
	  return 3;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_type == TYPE_LOAD_12) || (cached_type == TYPE_LOAD_16)))
        {
	  return 5;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_type == TYPE_STORE_4) || (cached_type == TYPE_STORE_8)))
        {
	  return 0;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_type == TYPE_STORE_12) || (cached_type == TYPE_STORE_16)))
        {
	  return 0;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (cached_type == TYPE_BRANCH))
        {
	  return 0;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (cached_type == TYPE_CALL))
        {
	  return 32 /* 0x20 */;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_type == TYPE_FCONSTS) || (cached_type == TYPE_FCONSTD) || (cached_type == TYPE_FADDS) || (cached_type == TYPE_FADDD)))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (cached_type == TYPE_FMULS))
        {
	  return 12 /* 0xc */;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && (cached_type == TYPE_FMULD))
        {
	  return 17 /* 0x11 */;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_type == TYPE_FMACS) || (cached_type == TYPE_FFMAS)))
        {
	  return 21 /* 0x15 */;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_type == TYPE_FMACD) || (cached_type == TYPE_FFMAD)))
        {
	  return 26 /* 0x1a */;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_type == TYPE_FDIVS) || (cached_type == TYPE_FSQRTS)))
        {
	  return 37 /* 0x25 */;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_type == TYPE_FDIVD) || (cached_type == TYPE_FSQRTD)))
        {
	  return 65 /* 0x41 */;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_type == TYPE_FMOV) || (cached_type == TYPE_FFARITHS) || (cached_type == TYPE_FFARITHD) || (cached_type == TYPE_FCONSTS) || (cached_type == TYPE_FCONSTD) || (cached_type == TYPE_FCMPS) || (cached_type == TYPE_FCMPD)))
        {
	  return 4;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_type == TYPE_F_CVT) || (cached_type == TYPE_F_CVTF2I) || (cached_type == TYPE_F_CVTI2F)))
        {
	  return 7;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_MRC))
        {
	  return 20 /* 0x14 */;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_MRRC))
        {
	  return 21 /* 0x15 */;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_INT_1))
        {
	  return 3;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_INT_2))
        {
	  return 3;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_INT_3))
        {
	  return 3;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_INT_4))
        {
	  return 4;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_INT_5))
        {
	  return 4;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VQNEG_VQABS))
        {
	  return 4;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VMOV))
        {
	  return 3;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VABA))
        {
	  return 6;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VABA_QQQ))
        {
	  return 7;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_BIT_OPS_Q))
        {
	  return 4;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_MUL_DDD_8_16_QDD_16_8_LONG_32_16_LONG))
        {
	  return 6;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_MUL_QQQ_8_16_32_DDD_32))
        {
	  return 7;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_MUL_QDD_64_32_LONG_QQD_16_DDD_32_SCALAR_64_32_LONG_SCALAR))
        {
	  return 7;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_MLA_DDD_8_16_QDD_16_8_LONG_32_16_LONG))
        {
	  return 6;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_MLA_QQQ_8_16))
        {
	  return 7;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_MLA_DDD_32_QQD_16_DDD_32_SCALAR_QDD_64_32_LONG_SCALAR_QDD_64_32_LONG))
        {
	  return 7;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_MLA_QQQ_32_QQD_32_SCALAR))
        {
	  return 9;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_MUL_DDD_16_SCALAR_32_16_LONG_SCALAR))
        {
	  return 6;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_MUL_QQD_32_SCALAR))
        {
	  return 9;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_MLA_DDD_16_SCALAR_QDD_32_16_LONG_SCALAR))
        {
	  return 6;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_SHIFT_1))
        {
	  return 3;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_SHIFT_2))
        {
	  return 4;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_SHIFT_3))
        {
	  return 4;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VQSHL_VRSHL_VQRSHL_QQQ))
        {
	  return 5;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VSRA_VRSRA))
        {
	  return 6;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_FP_VADD_DDD_VABS_DD))
        {
	  return 5;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_FP_VADD_QQQ_VABS_QQ))
        {
	  return 6;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_FP_VSUM))
        {
	  return 5;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_FP_VMUL_DDD))
        {
	  return 5;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_FP_VMUL_QQD))
        {
	  return 6;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_FP_VMLA_DDD))
        {
	  return 9;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_FP_VMLA_QQQ))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_FP_VMLA_DDD_SCALAR))
        {
	  return 9;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_FP_VMLA_QQQ_SCALAR))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_FP_VRECPS_VRSQRTS_DDD))
        {
	  return 9;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_type == TYPE_NEON_FP_RECPS_S_Q) || (cached_type == TYPE_NEON_FP_RSQRTS_S_Q)))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_BP_SIMPLE))
        {
	  return 2;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_BP_2CYCLE))
        {
	  return 3;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_BP_3CYCLE))
        {
	  return 4;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_LDR))
        {
	  return 1;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_STR))
        {
	  return 0;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VLD1_1_2_REGS))
        {
	  return 2;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VLD1_3_4_REGS))
        {
	  return 3;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VLD2_2_REGS_VLD1_VLD2_ALL_LANES))
        {
	  return 3;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VLD2_4_REGS))
        {
	  return 4;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VLD3_VLD4))
        {
	  return 5;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VST1_1_2_REGS_VST2_2_REGS))
        {
	  return 0;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VST1_3_4_REGS))
        {
	  return 0;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VST2_4_REGS_VST3_VST4))
        {
	  return 0;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VLD1_VLD2_LANE))
        {
	  return 4;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VLD3_VLD4_LANE))
        {
	  return 6;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VST1_VST2_LANE))
        {
	  return 0;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_VST3_VST4_LANE))
        {
	  return 0;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_MCR))
        {
	  return 2;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8)))) && ((cached_cortex_a8_neon_type = get_attr_cortex_a8_neon_type (insn)) == CORTEX_A8_NEON_TYPE_NEON_MCR_2_MCRR))
        {
	  return 2;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_type == TYPE_ALU_IMM) || (cached_type == TYPE_ALUS_IMM) || (cached_type == TYPE_LOGIC_IMM) || (cached_type == TYPE_LOGICS_IMM) || (cached_type == TYPE_ALU_SREG) || (cached_type == TYPE_ALUS_SREG) || (cached_type == TYPE_LOGIC_REG) || (cached_type == TYPE_LOGICS_REG) || (cached_type == TYPE_ADC_IMM) || (cached_type == TYPE_ADCS_IMM) || (cached_type == TYPE_ADC_REG) || (cached_type == TYPE_ADCS_REG) || (cached_type == TYPE_ADR) || (cached_type == TYPE_BFM) || (cached_type == TYPE_CLZ) || (cached_type == TYPE_RBIT) || (cached_type == TYPE_REV) || (cached_type == TYPE_ALU_DSP_REG) || (cached_type == TYPE_SHIFT_IMM) || (cached_type == TYPE_SHIFT_REG) || (cached_type == TYPE_MOV_IMM) || (cached_type == TYPE_MOV_REG) || (cached_type == TYPE_MVN_IMM) || (cached_type == TYPE_MVN_REG) || (cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MOV_SHIFT) || (cached_type == TYPE_MRS) || (cached_type == TYPE_MULTIPLE)))
        {
	  return 2;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_type == TYPE_ALU_SHIFT_IMM_LSL_1TO4) || (cached_type == TYPE_ALU_SHIFT_IMM_OTHER) || (cached_type == TYPE_ALUS_SHIFT_IMM) || (cached_type == TYPE_LOGIC_SHIFT_IMM) || (cached_type == TYPE_LOGICS_SHIFT_IMM) || (cached_type == TYPE_ALU_SHIFT_REG) || (cached_type == TYPE_ALUS_SHIFT_REG) || (cached_type == TYPE_LOGIC_SHIFT_REG) || (cached_type == TYPE_LOGICS_SHIFT_REG) || (cached_type == TYPE_EXTEND) || (cached_type == TYPE_MVN_SHIFT) || (cached_type == TYPE_MVN_SHIFT_REG)))
        {
	  return 3;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_type == TYPE_LOAD_4) || (cached_type == TYPE_LOAD_8) || (cached_type == TYPE_LOAD_BYTE) || (cached_type == TYPE_F_LOADS) || (cached_type == TYPE_F_LOADD)))
        {
	  return 4;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_type == TYPE_LOAD_12) || (cached_type == TYPE_LOAD_16)))
        {
	  return 5;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_type == TYPE_STORE_4) || (cached_type == TYPE_STORE_8) || (cached_type == TYPE_F_STORES) || (cached_type == TYPE_F_STORED)))
        {
	  return 0;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_type == TYPE_STORE_12) || (cached_type == TYPE_STORE_16)))
        {
	  return 0;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && (cached_type == TYPE_SMULXY))
        {
	  return 3;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && (cached_type == TYPE_SMLAXY))
        {
	  return 3;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_type == TYPE_MUL) || (cached_type == TYPE_SMMUL) || (cached_type == TYPE_SMMULR)))
        {
	  return 4;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_type == TYPE_MLA) || (cached_type == TYPE_SMMLA)))
        {
	  return 4;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_type == TYPE_SMULL) || (cached_type == TYPE_UMULL) || (cached_type == TYPE_SMULLS) || (cached_type == TYPE_UMULLS) || (cached_type == TYPE_SMLAL) || (cached_type == TYPE_SMLALS) || (cached_type == TYPE_UMLAL) || (cached_type == TYPE_UMLALS)))
        {
	  return 5;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && (cached_type == TYPE_BRANCH))
        {
	  return 0;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && (cached_type == TYPE_CALL))
        {
	  return 0;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_type == TYPE_FMOV) || (cached_type == TYPE_FCONSTS) || (cached_type == TYPE_FCONSTD) || (cached_type == TYPE_FFARITHS) || (cached_type == TYPE_FFARITHD) || (cached_type == TYPE_F_MCR) || (cached_type == TYPE_F_MCRR) || (cached_type == TYPE_F_MRC) || (cached_type == TYPE_F_MRRC) || (cached_type == TYPE_F_FLAG)))
        {
	  return 2;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_type == TYPE_FADDS) || (cached_type == TYPE_FADDD) || (cached_type == TYPE_F_CVT) || (cached_type == TYPE_F_CVTF2I) || (cached_type == TYPE_F_CVTI2F)))
        {
	  return 4;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_type == TYPE_FCMPS) || (cached_type == TYPE_FCMPD)))
        {
	  return 1;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && (cached_type == TYPE_FMULS))
        {
	  return 4;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && (cached_type == TYPE_FMULD))
        {
	  return 5;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_type == TYPE_FMACS) || (cached_type == TYPE_FFMAS)))
        {
	  return 8;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_type == TYPE_FMACD) || (cached_type == TYPE_FFMAD)))
        {
	  return 9;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_type == TYPE_FDIVS) || (cached_type == TYPE_FSQRTS)))
        {
	  return 15 /* 0xf */;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_type == TYPE_FDIVD) || (cached_type == TYPE_FSQRTD)))
        {
	  return 25 /* 0x19 */;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_MRC))
        {
	  return 1;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_MRRC))
        {
	  return 1;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_INT_1))
        {
	  return 3;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_INT_2))
        {
	  return 3;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_INT_3))
        {
	  return 3;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_INT_4))
        {
	  return 4;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_INT_5))
        {
	  return 4;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VQNEG_VQABS))
        {
	  return 4;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VMOV))
        {
	  return 3;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VABA))
        {
	  return 6;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VABA_QQQ))
        {
	  return 7;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_BIT_OPS_Q))
        {
	  return 4;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_MUL_DDD_8_16_QDD_16_8_LONG_32_16_LONG))
        {
	  return 6;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_MUL_QQQ_8_16_32_DDD_32))
        {
	  return 7;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_MUL_QDD_64_32_LONG_QQD_16_DDD_32_SCALAR_64_32_LONG_SCALAR))
        {
	  return 7;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_MLA_DDD_8_16_QDD_16_8_LONG_32_16_LONG))
        {
	  return 6;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_MLA_QQQ_8_16))
        {
	  return 7;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_MLA_DDD_32_QQD_16_DDD_32_SCALAR_QDD_64_32_LONG_SCALAR_QDD_64_32_LONG))
        {
	  return 7;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_MLA_QQQ_32_QQD_32_SCALAR))
        {
	  return 9;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_MUL_DDD_16_SCALAR_32_16_LONG_SCALAR))
        {
	  return 6;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_MUL_QQD_32_SCALAR))
        {
	  return 9;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_MLA_DDD_16_SCALAR_QDD_32_16_LONG_SCALAR))
        {
	  return 6;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_SHIFT_1))
        {
	  return 3;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_SHIFT_2))
        {
	  return 4;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_SHIFT_3))
        {
	  return 4;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VQSHL_VRSHL_VQRSHL_QQQ))
        {
	  return 5;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VSRA_VRSRA))
        {
	  return 6;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_FP_VADD_DDD_VABS_DD))
        {
	  return 5;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_FP_VADD_QQQ_VABS_QQ))
        {
	  return 6;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_FP_VSUM))
        {
	  return 5;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_FP_VMUL_DDD))
        {
	  return 5;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_FP_VMUL_QQD))
        {
	  return 6;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_FP_VMLA_DDD))
        {
	  return 9;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_FP_VMLA_QQQ))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_FP_VMLA_DDD_SCALAR))
        {
	  return 9;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_FP_VMLA_QQQ_SCALAR))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_FP_VRECPS_VRSQRTS_DDD))
        {
	  return 9;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_FP_VRECPS_VRSQRTS_QQQ))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_BP_SIMPLE))
        {
	  return 2;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_BP_2CYCLE))
        {
	  return 3;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_BP_3CYCLE))
        {
	  return 4;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_LDR))
        {
	  return 1;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_STR))
        {
	  return 0;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VLD1_1_2_REGS))
        {
	  return 2;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VLD1_3_4_REGS))
        {
	  return 3;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VLD2_2_REGS_VLD1_VLD2_ALL_LANES))
        {
	  return 3;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VLD2_4_REGS))
        {
	  return 4;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VLD3_VLD4))
        {
	  return 5;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VST1_1_2_REGS_VST2_2_REGS))
        {
	  return 0;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VST1_3_4_REGS))
        {
	  return 0;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VST2_4_REGS_VST3_VST4))
        {
	  return 0;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VLD1_VLD2_LANE))
        {
	  return 4;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VLD3_VLD4_LANE))
        {
	  return 6;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VST1_VST2_LANE))
        {
	  return 0;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VST3_VST4_LANE))
        {
	  return 0;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_VLD3_VLD4_ALL_LANES))
        {
	  return 3;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_MCR))
        {
	  return 2;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9)))) && ((cached_cortex_a9_neon_type = get_attr_cortex_a9_neon_type (insn)) == CORTEX_A9_NEON_TYPE_NEON_MCR_2_MCRR))
        {
	  return 2;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_type == TYPE_ALU_IMM) || (cached_type == TYPE_ALUS_IMM) || (cached_type == TYPE_LOGIC_IMM) || (cached_type == TYPE_LOGICS_IMM) || (cached_type == TYPE_ALU_SREG) || (cached_type == TYPE_ALUS_SREG) || (cached_type == TYPE_LOGIC_REG) || (cached_type == TYPE_LOGICS_REG) || (cached_type == TYPE_ADC_IMM) || (cached_type == TYPE_ADCS_IMM) || (cached_type == TYPE_ADC_REG) || (cached_type == TYPE_ADCS_REG) || (cached_type == TYPE_ADR) || (cached_type == TYPE_BFM) || (cached_type == TYPE_CLZ) || (cached_type == TYPE_RBIT) || (cached_type == TYPE_REV) || (cached_type == TYPE_ALU_DSP_REG) || (cached_type == TYPE_SHIFT_IMM) || (cached_type == TYPE_SHIFT_REG) || (cached_type == TYPE_MOV_IMM) || (cached_type == TYPE_MOV_REG) || (cached_type == TYPE_MVN_IMM) || (cached_type == TYPE_MVN_REG) || (cached_type == TYPE_MRS) || (cached_type == TYPE_MULTIPLE)))
        {
	  return 2;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_type == TYPE_EXTEND) || (cached_type == TYPE_ALU_SHIFT_IMM_LSL_1TO4) || (cached_type == TYPE_ALU_SHIFT_IMM_OTHER) || (cached_type == TYPE_ALUS_SHIFT_IMM) || (cached_type == TYPE_CRC) || (cached_type == TYPE_LOGIC_SHIFT_IMM) || (cached_type == TYPE_LOGICS_SHIFT_IMM) || (cached_type == TYPE_MOV_SHIFT) || (cached_type == TYPE_MVN_SHIFT)))
        {
	  return 3;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_type == TYPE_ALU_SHIFT_REG) || (cached_type == TYPE_ALUS_SHIFT_REG) || (cached_type == TYPE_LOGIC_SHIFT_REG) || (cached_type == TYPE_LOGICS_SHIFT_REG) || (cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MVN_SHIFT_REG)))
        {
	  return 3;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_mul32 = get_attr_mul32 (insn)) == MUL32_YES))
        {
	  return 3;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_widen_mul64 = get_attr_widen_mul64 (insn)) == WIDEN_MUL64_YES))
        {
	  return 4;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && (cached_type == TYPE_UDIV))
        {
	  return 9;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && (cached_type == TYPE_SDIV))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && (cached_type == TYPE_BLOCK))
        {
	  return 1;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && (cached_type == TYPE_BRANCH))
        {
	  return 0;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_type == TYPE_LOAD_BYTE) || (cached_type == TYPE_LOAD_4) || (cached_type == TYPE_LOAD_8)))
        {
	  return 4;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_type == TYPE_LOAD_12) || (cached_type == TYPE_LOAD_16)))
        {
	  return 5;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_type == TYPE_STORE_4) || (cached_type == TYPE_STORE_8)))
        {
	  return 0;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_type == TYPE_STORE_12) || (cached_type == TYPE_STORE_16)))
        {
	  return 0;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_ABD))
        {
	  return 5;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_ABD_Q))
        {
	  return 5;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_ARITH_ACC))
        {
	  return 7;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_ARITH_ACC_Q))
        {
	  return 8;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_ARITH_BASIC))
        {
	  return 4;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_ARITH_COMPLEX))
        {
	  return 5;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_MULTIPLY))
        {
	  return 6;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_MULTIPLY_Q))
        {
	  return 7;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_MLA))
        {
	  return 6;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_MLA_Q))
        {
	  return 7;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_SAT_MLA_LONG))
        {
	  return 6;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_SHIFT_ACC))
        {
	  return 7;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_SHIFT_IMM_BASIC))
        {
	  return 4;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_SHIFT_IMM_COMPLEX))
        {
	  return 5;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_SHIFT_REG_BASIC))
        {
	  return 4;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_SHIFT_REG_BASIC_Q))
        {
	  return 5;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_SHIFT_REG_COMPLEX))
        {
	  return 5;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_SHIFT_REG_COMPLEX_Q))
        {
	  return 6;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_FP_NEGABS))
        {
	  return 4;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_FP_ARITH))
        {
	  return 6;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_FP_ARITH_Q))
        {
	  return 6;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_FP_CVT_INT))
        {
	  return 6;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_FP_CVT_INT_Q))
        {
	  return 6;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_FP_CVT16))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_FP_MUL))
        {
	  return 5;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_FP_MUL_Q))
        {
	  return 5;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_FP_MLA))
        {
	  return 9;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_FP_MLA_Q))
        {
	  return 9;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_FP_RECPE_RSQRTE))
        {
	  return 9;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_FP_RECPE_RSQRTE_Q))
        {
	  return 9;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_BITOPS))
        {
	  return 4;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_BITOPS_Q))
        {
	  return 4;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_FROM_GP))
        {
	  return 9;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_FROM_GP_Q))
        {
	  return 9;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_TBL3_TBL4))
        {
	  return 7;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_ZIP_Q))
        {
	  return 7;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_TO_GP))
        {
	  return 7;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_LOAD_A))
        {
	  return 6;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_LOAD_B))
        {
	  return 7;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_LOAD_C))
        {
	  return 9;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_LOAD_D))
        {
	  return 11 /* 0xb */;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_LOAD_E))
        {
	  return 9;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_LOAD_F))
        {
	  return 11 /* 0xb */;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_STORE_A))
        {
	  return 0;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_STORE_B))
        {
	  return 0;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_STORE_C))
        {
	  return 0;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_STORE_D))
        {
	  return 0;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_STORE_E))
        {
	  return 0;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_STORE_F))
        {
	  return 0;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_STORE_G))
        {
	  return 0;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_cortex_a15_neon_type = get_attr_cortex_a15_neon_type (insn)) == CORTEX_A15_NEON_TYPE_NEON_STORE_H))
        {
	  return 0;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_type == TYPE_FCONSTS) || (cached_type == TYPE_FCONSTD)))
        {
	  return 4;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && (cached_type == TYPE_FADDS))
        {
	  return 6;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && (cached_type == TYPE_FADDD))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && (cached_type == TYPE_FMULS))
        {
	  return 7;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && (cached_type == TYPE_FMULD))
        {
	  return 12 /* 0xc */;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_type == TYPE_FMACS) || (cached_type == TYPE_FFMAS)))
        {
	  return 6;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_type == TYPE_FMACD) || (cached_type == TYPE_FFMAD)))
        {
	  return 11 /* 0xb */;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_type == TYPE_F_CVT) || (cached_type == TYPE_F_CVTF2I) || (cached_type == TYPE_F_CVTI2F)))
        {
	  return 6;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && (cached_type == TYPE_FCMPD))
        {
	  return 8;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && (cached_type == TYPE_FCMPS))
        {
	  return 8;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && (cached_type == TYPE_FFARITHD))
        {
	  return 7;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && (cached_type == TYPE_FMOV))
        {
	  return 4;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_type == TYPE_F_MCR) || (cached_type == TYPE_F_MCRR)))
        {
	  return 5;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_type == TYPE_F_MRC) || (cached_type == TYPE_F_MRRC)))
        {
	  return 5;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && (cached_type == TYPE_FFARITHS))
        {
	  return 7;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_type == TYPE_FDIVS) || (cached_type == TYPE_FSQRTS)))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && ((cached_type == TYPE_FDIVD) || (cached_type == TYPE_FSQRTD)))
        {
	  return 18 /* 0x12 */;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA15)))) && (cached_type == TYPE_CALL))
        {
	  return 1;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_type == TYPE_ALU_IMM) || (cached_type == TYPE_ALUS_IMM) || (cached_type == TYPE_LOGIC_IMM) || (cached_type == TYPE_LOGICS_IMM) || (cached_type == TYPE_ALU_SREG) || (cached_type == TYPE_ALUS_SREG) || (cached_type == TYPE_LOGIC_REG) || (cached_type == TYPE_LOGICS_REG) || (cached_type == TYPE_ADC_IMM) || (cached_type == TYPE_ADCS_IMM) || (cached_type == TYPE_ADC_REG) || (cached_type == TYPE_ADCS_REG) || (cached_type == TYPE_ADR) || (cached_type == TYPE_MOV_IMM) || (cached_type == TYPE_MOV_REG) || (cached_type == TYPE_MVN_IMM) || (cached_type == TYPE_MVN_REG) || (cached_type == TYPE_EXTEND) || (cached_type == TYPE_MRS) || (cached_type == TYPE_MULTIPLE)))
        {
	  return 1;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_type == TYPE_BFM) || (cached_type == TYPE_CLZ) || (cached_type == TYPE_REV) || (cached_type == TYPE_RBIT) || (cached_type == TYPE_ALU_SHIFT_IMM_LSL_1TO4) || (cached_type == TYPE_ALU_SHIFT_IMM_OTHER) || (cached_type == TYPE_ALUS_SHIFT_IMM) || (cached_type == TYPE_LOGIC_SHIFT_IMM) || (cached_type == TYPE_ALU_DSP_REG) || (cached_type == TYPE_LOGICS_SHIFT_IMM) || (cached_type == TYPE_SHIFT_IMM) || (cached_type == TYPE_SHIFT_REG) || (cached_type == TYPE_MOV_SHIFT) || (cached_type == TYPE_MVN_SHIFT)))
        {
	  return 2;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_type == TYPE_ALU_SHIFT_REG) || (cached_type == TYPE_ALUS_SHIFT_REG) || (cached_type == TYPE_LOGIC_SHIFT_REG) || (cached_type == TYPE_LOGICS_SHIFT_REG)))
        {
	  return 2;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_type == TYPE_MUL) || (cached_type == TYPE_MULS) || (cached_type == TYPE_SMMUL) || (cached_type == TYPE_SMMULR)))
        {
	  return 4;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_type == TYPE_MLA) || (cached_type == TYPE_MLAS) || (cached_type == TYPE_SMMLA)))
        {
	  return 4;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_type == TYPE_SMLAD) || (cached_type == TYPE_SMLADX) || (cached_type == TYPE_SMLSD) || (cached_type == TYPE_SMLSDX) || (cached_type == TYPE_SMUAD) || (cached_type == TYPE_SMUADX) || (cached_type == TYPE_SMUSD) || (cached_type == TYPE_SMUSDX)))
        {
	  return 3;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_type == TYPE_SMLAL) || (cached_type == TYPE_SMLALS) || (cached_type == TYPE_UMAAL) || (cached_type == TYPE_UMLAL) || (cached_type == TYPE_UMLALS)))
        {
	  return 4;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_type == TYPE_SMLALD) || (cached_type == TYPE_SMLALXY) || (cached_type == TYPE_SMLSLD)))
        {
	  return 3;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_type == TYPE_SMULL) || (cached_type == TYPE_SMULLS) || (cached_type == TYPE_UMULL) || (cached_type == TYPE_UMULLS)))
        {
	  return 4;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && (cached_type == TYPE_UDIV))
        {
	  return 19 /* 0x13 */;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && (cached_type == TYPE_SDIV))
        {
	  return 20 /* 0x14 */;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && (cached_type == TYPE_BRANCH))
        {
	  return 0;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_type == TYPE_LOAD_BYTE) || (cached_type == TYPE_LOAD_4) || (cached_type == TYPE_LOAD_8)))
        {
	  return 4;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && (cached_type == TYPE_LOAD_12))
        {
	  return 4;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && (cached_type == TYPE_LOAD_16))
        {
	  return 4;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_type == TYPE_STORE_4) || (cached_type == TYPE_STORE_8)))
        {
	  return 0;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && (cached_type == TYPE_STORE_12))
        {
	  return 0;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && (cached_type == TYPE_STORE_16))
        {
	  return 0;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && (cached_type == TYPE_CALL))
        {
	  return 0;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_ABD))
        {
	  return 5;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_ABD_Q))
        {
	  return 5;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_ARITH_ACC))
        {
	  return 7;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_ARITH_ACC_Q))
        {
	  return 8;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_ARITH_BASIC))
        {
	  return 4;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_ARITH_COMPLEX))
        {
	  return 5;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_MULTIPLY))
        {
	  return 6;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_MULTIPLY_Q))
        {
	  return 7;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_MLA))
        {
	  return 6;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_MLA_Q))
        {
	  return 7;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_SAT_MLA_LONG))
        {
	  return 6;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_SHIFT_ACC))
        {
	  return 7;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_SHIFT_IMM_BASIC))
        {
	  return 4;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_SHIFT_IMM_COMPLEX))
        {
	  return 5;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_SHIFT_REG_BASIC))
        {
	  return 4;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_SHIFT_REG_BASIC_Q))
        {
	  return 5;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_SHIFT_REG_COMPLEX))
        {
	  return 5;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_SHIFT_REG_COMPLEX_Q))
        {
	  return 6;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_FP_NEGABS))
        {
	  return 4;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_FP_ARITH))
        {
	  return 6;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_FP_ARITH_Q))
        {
	  return 6;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_FP_CVT_INT))
        {
	  return 6;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_FP_CVT_INT_Q))
        {
	  return 6;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_FP_CVT16))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_FP_MUL))
        {
	  return 5;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_FP_MUL_Q))
        {
	  return 5;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_FP_MLA))
        {
	  return 8;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_FP_MLA_Q))
        {
	  return 9;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_FP_RECPE_RSQRTE))
        {
	  return 9;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_FP_RECPE_RSQRTE_Q))
        {
	  return 9;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_BITOPS))
        {
	  return 4;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_BITOPS_Q))
        {
	  return 4;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_FROM_GP))
        {
	  return 2;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_FROM_GP_Q))
        {
	  return 3;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_TBL3_TBL4))
        {
	  return 7;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_ZIP_Q))
        {
	  return 7;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_TO_GP))
        {
	  return 2;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && (cached_type == TYPE_F_FLAG))
        {
	  return 5;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_type == TYPE_F_LOADS) || (cached_type == TYPE_F_LOADD)))
        {
	  return 5;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_LOAD_A))
        {
	  return 6;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_LOAD_B))
        {
	  return 7;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_LOAD_C))
        {
	  return 8;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_LOAD_D))
        {
	  return 9;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_LOAD_E))
        {
	  return 9;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_LOAD_F))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_LOAD_G))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_LOAD_H))
        {
	  return 11 /* 0xb */;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_type == TYPE_F_STORES) || (cached_type == TYPE_F_STORED)))
        {
	  return 0;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_STORE_A))
        {
	  return 0;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_cortex_a17_neon_type = get_attr_cortex_a17_neon_type (insn)) == CORTEX_A17_NEON_TYPE_NEON_STORE_B))
        {
	  return 0;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_type == TYPE_FCONSTS) || (cached_type == TYPE_FCONSTD)))
        {
	  return 4;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && (cached_type == TYPE_FADDS))
        {
	  return 6;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && (cached_type == TYPE_FADDD))
        {
	  return 6;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_type == TYPE_FMULS) || (cached_type == TYPE_FMULD)))
        {
	  return 6;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_type == TYPE_FMACS) || (cached_type == TYPE_FFMAS) || (cached_type == TYPE_FMACD) || (cached_type == TYPE_FFMAD)))
        {
	  return 11 /* 0xb */;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_type == TYPE_F_CVT) || (cached_type == TYPE_F_CVTF2I) || (cached_type == TYPE_F_CVTI2F) || (cached_type == TYPE_F_RINTS) || (cached_type == TYPE_F_RINTD)))
        {
	  return 6;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_type == TYPE_FCMPS) || (cached_type == TYPE_FCMPD)))
        {
	  return 4;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && (cached_type == TYPE_FFARITHD))
        {
	  return 4;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_type == TYPE_FMOV) || (cached_type == TYPE_FCSEL)))
        {
	  return 4;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_type == TYPE_F_MCR) || (cached_type == TYPE_F_MCRR)))
        {
	  return 2;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_type == TYPE_F_MRC) || (cached_type == TYPE_F_MRRC)))
        {
	  return 4;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && (cached_type == TYPE_FFARITHS))
        {
	  return 4;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_type == TYPE_FDIVS) || (cached_type == TYPE_FSQRTS)))
        {
	  return 18 /* 0x12 */;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA17)))) && ((cached_type == TYPE_FDIVD) || (cached_type == TYPE_FSQRTD)))
        {
	  return 32 /* 0x20 */;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_type == TYPE_ADR) || (cached_type == TYPE_SHIFT_IMM) || (cached_type == TYPE_MOV_IMM) || (cached_type == TYPE_MVN_IMM) || (cached_type == TYPE_MOV_SHIFT)))
        {
	  return 2;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_type == TYPE_SHIFT_REG) || (cached_type == TYPE_MOV_SHIFT_REG)))
        {
	  return 2;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_type == TYPE_ALU_IMM) || (cached_type == TYPE_ALUS_IMM) || (cached_type == TYPE_LOGIC_IMM) || (cached_type == TYPE_LOGICS_IMM) || (cached_type == TYPE_ALU_SREG) || (cached_type == TYPE_ALUS_SREG) || (cached_type == TYPE_LOGIC_REG) || (cached_type == TYPE_LOGICS_REG) || (cached_type == TYPE_ADC_IMM) || (cached_type == TYPE_ADCS_IMM) || (cached_type == TYPE_ADC_REG) || (cached_type == TYPE_ADCS_REG) || (cached_type == TYPE_CSEL) || (cached_type == TYPE_CLZ) || (cached_type == TYPE_RBIT) || (cached_type == TYPE_REV) || (cached_type == TYPE_ALU_DSP_REG) || (cached_type == TYPE_MOV_REG) || (cached_type == TYPE_MVN_REG) || (cached_type == TYPE_MRS) || (cached_type == TYPE_MULTIPLE)))
        {
	  return 3;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_type == TYPE_ALU_SHIFT_IMM_LSL_1TO4) || (cached_type == TYPE_ALU_SHIFT_IMM_OTHER) || (cached_type == TYPE_ALUS_SHIFT_IMM) || (cached_type == TYPE_CRC) || (cached_type == TYPE_LOGIC_SHIFT_IMM) || (cached_type == TYPE_LOGICS_SHIFT_IMM) || (cached_type == TYPE_ALU_EXT) || (cached_type == TYPE_ALUS_EXT) || (cached_type == TYPE_BFM) || (cached_type == TYPE_BFX) || (cached_type == TYPE_EXTEND) || (cached_type == TYPE_MVN_SHIFT)))
        {
	  return 3;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_type == TYPE_ALU_SHIFT_REG) || (cached_type == TYPE_ALUS_SHIFT_REG) || (cached_type == TYPE_LOGIC_SHIFT_REG) || (cached_type == TYPE_LOGICS_SHIFT_REG) || (cached_type == TYPE_MVN_SHIFT_REG)))
        {
	  return 3;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (cached_type == TYPE_ROTATE_IMM))
        {
	  return 3;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_mul32 = get_attr_mul32 (insn)) == MUL32_YES) || ((cached_widen_mul64 = get_attr_widen_mul64 (insn)) == WIDEN_MUL64_YES)))
        {
	  return 4;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_type == TYPE_UDIV) || (cached_type == TYPE_SDIV)))
        {
	  return 4;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_type == TYPE_LOAD_BYTE) || (cached_type == TYPE_LOAD_4) || (cached_type == TYPE_LOAD_ACQ)))
        {
	  return 4;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_type == TYPE_STORE_4) || (cached_type == TYPE_STORE_REL)))
        {
	  return 2;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (cached_type == TYPE_LOAD_8))
        {
	  return 4;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (cached_type == TYPE_STORE_8))
        {
	  return 2;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_type == TYPE_LOAD_12) || (cached_type == TYPE_LOAD_16)))
        {
	  return 6;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_type == TYPE_STORE_12) || (cached_type == TYPE_STORE_16)))
        {
	  return 2;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_type == TYPE_BRANCH) || (cached_type == TYPE_CALL)))
        {
	  return 0;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_type == TYPE_FFARITHS) || (cached_type == TYPE_FADDS) || (cached_type == TYPE_FFARITHD) || (cached_type == TYPE_FADDD) || (cached_type == TYPE_FMOV) || (cached_type == TYPE_F_CVT) || (cached_type == TYPE_FCMPS) || (cached_type == TYPE_FCMPD) || (cached_type == TYPE_FCCMPS) || (cached_type == TYPE_FCCMPD) || (cached_type == TYPE_FCSEL) || (cached_type == TYPE_F_RINTS) || (cached_type == TYPE_F_RINTD) || (cached_type == TYPE_F_MINMAXS) || (cached_type == TYPE_F_MINMAXD)))
        {
	  return 4;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_type == TYPE_FCONSTS) || (cached_type == TYPE_FCONSTD)))
        {
	  return 2;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_type == TYPE_FMULS) || (cached_type == TYPE_FMULD)))
        {
	  return 4;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_type == TYPE_FMACS) || (cached_type == TYPE_FMACD) || (cached_type == TYPE_FFMAS) || (cached_type == TYPE_FFMAD)))
        {
	  return 8;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_type == TYPE_F_MCR) || (cached_type == TYPE_F_MCRR)))
        {
	  return 2;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_type == TYPE_F_MRC) || (cached_type == TYPE_F_MRRC)))
        {
	  return 4;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_type == TYPE_F_CVTI2F) || (cached_type == TYPE_NEON_FROM_GP) || (cached_type == TYPE_NEON_FROM_GP_Q)))
        {
	  return 4;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_type == TYPE_F_CVTF2I) || (cached_type == TYPE_NEON_TO_GP) || (cached_type == TYPE_NEON_TO_GP_Q)))
        {
	  return 5;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (cached_type == TYPE_F_FLAG))
        {
	  return 5;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_type == TYPE_F_LOADS) || (cached_type == TYPE_F_LOADD)) || ((cached_cortex_a53_advsimd_type = get_attr_cortex_a53_advsimd_type (insn)) == CORTEX_A53_ADVSIMD_TYPE_ADVSIMD_LOAD_64)))
        {
	  return 3;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_cortex_a53_advsimd_type = get_attr_cortex_a53_advsimd_type (insn)) == CORTEX_A53_ADVSIMD_TYPE_ADVSIMD_LOAD_128) || (cached_cortex_a53_advsimd_type == CORTEX_A53_ADVSIMD_TYPE_ADVSIMD_LOAD_LOTS)))
        {
	  return 4;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_type == TYPE_F_STORES) || (cached_type == TYPE_F_STORED)) || ((cached_cortex_a53_advsimd_type = get_attr_cortex_a53_advsimd_type (insn)) == CORTEX_A53_ADVSIMD_TYPE_ADVSIMD_STORE_64)))
        {
	  return 0;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_cortex_a53_advsimd_type = get_attr_cortex_a53_advsimd_type (insn)) == CORTEX_A53_ADVSIMD_TYPE_ADVSIMD_STORE_128) || (cached_cortex_a53_advsimd_type == CORTEX_A53_ADVSIMD_TYPE_ADVSIMD_STORE_LOTS)))
        {
	  return 0;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_cortex_a53_advsimd_type = get_attr_cortex_a53_advsimd_type (insn)) == CORTEX_A53_ADVSIMD_TYPE_ADVSIMD_ALU))
        {
	  return 4;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_cortex_a53_advsimd_type = get_attr_cortex_a53_advsimd_type (insn)) == CORTEX_A53_ADVSIMD_TYPE_ADVSIMD_ALU_Q))
        {
	  return 4;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_cortex_a53_advsimd_type = get_attr_cortex_a53_advsimd_type (insn)) == CORTEX_A53_ADVSIMD_TYPE_ADVSIMD_MUL))
        {
	  return 4;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_cortex_a53_advsimd_type = get_attr_cortex_a53_advsimd_type (insn)) == CORTEX_A53_ADVSIMD_TYPE_ADVSIMD_MUL_Q))
        {
	  return 4;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_type == TYPE_FDIVS) || (cached_type == TYPE_FSQRTS)) || ((cached_cortex_a53_advsimd_type = get_attr_cortex_a53_advsimd_type (insn)) == CORTEX_A53_ADVSIMD_TYPE_ADVSIMD_DIV_S)))
        {
	  return 14 /* 0xe */;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (((cached_type == TYPE_FDIVD) || (cached_type == TYPE_FSQRTD)) || ((cached_cortex_a53_advsimd_type = get_attr_cortex_a53_advsimd_type (insn)) == CORTEX_A53_ADVSIMD_TYPE_ADVSIMD_DIV_D)))
        {
	  return 29 /* 0x1d */;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_cortex_a53_advsimd_type = get_attr_cortex_a53_advsimd_type (insn)) == CORTEX_A53_ADVSIMD_TYPE_ADVSIMD_DIV_S_Q))
        {
	  return 14 /* 0xe */;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_cortex_a53_advsimd_type = get_attr_cortex_a53_advsimd_type (insn)) == CORTEX_A53_ADVSIMD_TYPE_ADVSIMD_DIV_D_Q))
        {
	  return 29 /* 0x1d */;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (cached_type == TYPE_CRYPTO_AESE))
        {
	  return 3;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (cached_type == TYPE_CRYPTO_AESMC))
        {
	  return 3;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (cached_type == TYPE_CRYPTO_SHA1_FAST))
        {
	  return 3;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (cached_type == TYPE_CRYPTO_SHA256_FAST))
        {
	  return 3;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && (cached_type == TYPE_CRYPTO_SHA1_XOR))
        {
	  return 4;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53)))) && ((cached_type == TYPE_CRYPTO_SHA1_SLOW) || (cached_type == TYPE_CRYPTO_SHA256_SLOW)))
        {
	  return 5;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_type == TYPE_ALU_IMM) || (cached_type == TYPE_ALUS_IMM) || (cached_type == TYPE_LOGIC_IMM) || (cached_type == TYPE_LOGICS_IMM) || (cached_type == TYPE_ALU_SREG) || (cached_type == TYPE_ALUS_SREG) || (cached_type == TYPE_LOGIC_REG) || (cached_type == TYPE_LOGICS_REG) || (cached_type == TYPE_ADC_IMM) || (cached_type == TYPE_ADCS_IMM) || (cached_type == TYPE_ADC_REG) || (cached_type == TYPE_ADCS_REG) || (cached_type == TYPE_ADR) || (cached_type == TYPE_BFX) || (cached_type == TYPE_EXTEND) || (cached_type == TYPE_CLZ) || (cached_type == TYPE_RBIT) || (cached_type == TYPE_REV) || (cached_type == TYPE_ALU_DSP_REG) || (cached_type == TYPE_ROTATE_IMM) || (cached_type == TYPE_SHIFT_IMM) || (cached_type == TYPE_SHIFT_REG) || (cached_type == TYPE_MOV_IMM) || (cached_type == TYPE_MOV_REG) || (cached_type == TYPE_MVN_IMM) || (cached_type == TYPE_MVN_REG) || (cached_type == TYPE_MRS) || (cached_type == TYPE_MULTIPLE)))
        {
	  return 2;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_type == TYPE_BFM) || (cached_type == TYPE_ALU_SHIFT_IMM_LSL_1TO4) || (cached_type == TYPE_ALU_SHIFT_IMM_OTHER) || (cached_type == TYPE_ALUS_SHIFT_IMM) || (cached_type == TYPE_CRC) || (cached_type == TYPE_LOGIC_SHIFT_IMM) || (cached_type == TYPE_LOGICS_SHIFT_IMM) || (cached_type == TYPE_MOV_SHIFT) || (cached_type == TYPE_MVN_SHIFT)))
        {
	  return 3;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_type == TYPE_ALU_SHIFT_REG) || (cached_type == TYPE_ALUS_SHIFT_REG) || (cached_type == TYPE_LOGIC_SHIFT_REG) || (cached_type == TYPE_LOGICS_SHIFT_REG) || (cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MVN_SHIFT_REG)))
        {
	  return 3;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && (((cached_mul32 = get_attr_mul32 (insn)) == MUL32_YES) || ((cached_widen_mul64 = get_attr_widen_mul64 (insn)) == WIDEN_MUL64_YES)))
        {
	  return 3;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_type == TYPE_UDIV) || (cached_type == TYPE_SDIV)))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && (cached_type == TYPE_BLOCK))
        {
	  return 1;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && (cached_type == TYPE_BRANCH))
        {
	  return 0;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_type == TYPE_LOAD_BYTE) || (cached_type == TYPE_LOAD_4) || (cached_type == TYPE_LOAD_8)))
        {
	  return 5;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_type == TYPE_LOAD_12) || (cached_type == TYPE_LOAD_16)))
        {
	  return 5;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_type == TYPE_STORE_4) || (cached_type == TYPE_STORE_8)))
        {
	  return 0;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_type == TYPE_STORE_12) || (cached_type == TYPE_STORE_16)))
        {
	  return 0;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_ABD))
        {
	  return 5;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_ABD_Q))
        {
	  return 5;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_ARITH_ACC))
        {
	  return 7;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_ARITH_ACC_Q))
        {
	  return 8;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_ARITH_BASIC))
        {
	  return 4;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_ARITH_COMPLEX))
        {
	  return 5;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_MULTIPLY))
        {
	  return 6;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_MULTIPLY_Q))
        {
	  return 7;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_MLA))
        {
	  return 6;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_MLA_Q))
        {
	  return 7;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_SAT_MLA_LONG))
        {
	  return 6;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_SHIFT_ACC))
        {
	  return 7;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_SHIFT_IMM_BASIC))
        {
	  return 4;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_SHIFT_IMM_COMPLEX))
        {
	  return 5;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_SHIFT_REG_BASIC))
        {
	  return 4;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_SHIFT_REG_BASIC_Q))
        {
	  return 5;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_SHIFT_REG_COMPLEX))
        {
	  return 5;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_SHIFT_REG_COMPLEX_Q))
        {
	  return 6;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_FP_NEGABS))
        {
	  return 4;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_FP_ARITH))
        {
	  return 6;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_FP_ARITH_Q))
        {
	  return 6;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_FP_REDUCTIONS_Q))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_FP_CVT_INT))
        {
	  return 6;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_FP_CVT_INT_Q))
        {
	  return 6;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_FP_CVT16))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_FP_MUL))
        {
	  return 5;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_FP_MUL_Q))
        {
	  return 5;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_FP_MLA))
        {
	  return 9;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_FP_MLA_Q))
        {
	  return 9;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_FP_RECPE_RSQRTE))
        {
	  return 6;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_FP_RECPE_RSQRTE_Q))
        {
	  return 6;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_FP_RECPS_RSQRTS))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_FP_RECPS_RSQRTS_Q))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_BITOPS))
        {
	  return 4;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_BITOPS_Q))
        {
	  return 4;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_FROM_GP))
        {
	  return 9;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_FROM_GP_Q))
        {
	  return 9;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_TBL3_TBL4))
        {
	  return 7;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_ZIP_Q))
        {
	  return 7;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_TO_GP))
        {
	  return 7;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_LOAD_A))
        {
	  return 6;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_LOAD_B))
        {
	  return 7;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_LOAD_C))
        {
	  return 9;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_LOAD_D))
        {
	  return 11 /* 0xb */;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_LOAD_E))
        {
	  return 9;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_LOAD_F))
        {
	  return 11 /* 0xb */;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_STORE_A))
        {
	  return 0;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_STORE_B))
        {
	  return 0;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_cortex_a57_neon_type = get_attr_cortex_a57_neon_type (insn)) == CORTEX_A57_NEON_TYPE_NEON_STORE_COMPLEX))
        {
	  return 0;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_type == TYPE_FCONSTS) || (cached_type == TYPE_FCONSTD)))
        {
	  return 4;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_type == TYPE_FADDS) || (cached_type == TYPE_FADDD)))
        {
	  return 6;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_type == TYPE_FMULS) || (cached_type == TYPE_FMULD)))
        {
	  return 6;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_type == TYPE_FMACS) || (cached_type == TYPE_FFMAS) || (cached_type == TYPE_FMACD) || (cached_type == TYPE_FFMAD)))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_type == TYPE_F_CVT) || (cached_type == TYPE_F_CVTF2I) || (cached_type == TYPE_F_CVTI2F)))
        {
	  return 6;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_type == TYPE_FCMPS) || (cached_type == TYPE_FCMPD) || (cached_type == TYPE_FCCMPS) || (cached_type == TYPE_FCCMPD)))
        {
	  return 7;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_type == TYPE_FFARITHS) || (cached_type == TYPE_FFARITHD)))
        {
	  return 4;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_type == TYPE_FMOV) || (cached_type == TYPE_FCSEL)))
        {
	  return 4;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_type == TYPE_FDIVS) || (cached_type == TYPE_FSQRTS) || (cached_type == TYPE_NEON_FP_DIV_S) || (cached_type == TYPE_NEON_FP_SQRT_S)))
        {
	  return 12 /* 0xc */;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_type == TYPE_FDIVD) || (cached_type == TYPE_FSQRTD) || (cached_type == TYPE_NEON_FP_DIV_D) || (cached_type == TYPE_NEON_FP_SQRT_D)))
        {
	  return 16 /* 0x10 */;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_type == TYPE_FDIVD) || (cached_type == TYPE_FSQRTD) || (cached_type == TYPE_NEON_FP_DIV_S_Q) || (cached_type == TYPE_NEON_FP_DIV_D_Q) || (cached_type == TYPE_NEON_FP_SQRT_S_Q) || (cached_type == TYPE_NEON_FP_SQRT_D_Q)))
        {
	  return 20 /* 0x14 */;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_type == TYPE_CRYPTO_AESE) || (cached_type == TYPE_CRYPTO_AESMC) || (cached_type == TYPE_CRYPTO_SHA1_FAST) || (cached_type == TYPE_CRYPTO_SHA256_FAST)))
        {
	  return 3;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && ((cached_type == TYPE_CRYPTO_SHA1_SLOW) || (cached_type == TYPE_CRYPTO_SHA256_SLOW)))
        {
	  return 6;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && (cached_type == TYPE_CRYPTO_SHA1_XOR))
        {
	  return 6;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA57)))) && (cached_type == TYPE_CALL))
        {
	  return 1;
        }
      else if ((((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))) && ((cached_type == TYPE_ALU_IMM) || (cached_type == TYPE_ALUS_IMM) || (cached_type == TYPE_LOGIC_IMM) || (cached_type == TYPE_LOGICS_IMM) || (cached_type == TYPE_ALU_SREG) || (cached_type == TYPE_ALUS_SREG) || (cached_type == TYPE_LOGIC_REG) || (cached_type == TYPE_LOGICS_REG) || (cached_type == TYPE_ADC_IMM) || (cached_type == TYPE_ADCS_IMM) || (cached_type == TYPE_ADC_REG) || (cached_type == TYPE_ADCS_REG) || (cached_type == TYPE_ADR) || (cached_type == TYPE_BFM) || (cached_type == TYPE_CLZ) || (cached_type == TYPE_RBIT) || (cached_type == TYPE_REV) || (cached_type == TYPE_SHIFT_IMM) || (cached_type == TYPE_SHIFT_REG) || (cached_type == TYPE_MVN_IMM) || (cached_type == TYPE_MVN_REG)))
        {
	  return 2;
        }
      else if ((((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))) && ((cached_type == TYPE_MOV_IMM) || (cached_type == TYPE_MOV_REG)))
        {
	  return 2;
        }
      else if ((((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))) && ((cached_type == TYPE_ALU_SHIFT_IMM_LSL_1TO4) || (cached_type == TYPE_ALU_SHIFT_IMM_OTHER) || (cached_type == TYPE_ALUS_SHIFT_IMM) || (cached_type == TYPE_LOGIC_SHIFT_IMM) || (cached_type == TYPE_LOGICS_SHIFT_IMM) || (cached_type == TYPE_EXTEND) || (cached_type == TYPE_MOV_SHIFT) || (cached_type == TYPE_MVN_SHIFT)))
        {
	  return 2;
        }
      else if ((((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))) && ((cached_type == TYPE_ALU_SHIFT_REG) || (cached_type == TYPE_ALUS_SHIFT_REG) || (cached_type == TYPE_LOGIC_SHIFT_REG) || (cached_type == TYPE_LOGICS_SHIFT_REG) || (cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MVN_SHIFT_REG) || (cached_type == TYPE_MRS) || (cached_type == TYPE_MULTIPLE)))
        {
	  return 2;
        }
      else if ((((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))) && ((cached_type == TYPE_MUL) || (cached_type == TYPE_SMMUL)))
        {
	  return 4;
        }
      else if ((((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))) && ((cached_type == TYPE_SMULXY) || (cached_type == TYPE_SMULWY) || (cached_type == TYPE_SMUAD) || (cached_type == TYPE_SMUSD)))
        {
	  return 3;
        }
      else if ((((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))) && ((cached_type == TYPE_MLA) || (cached_type == TYPE_SMMLA)))
        {
	  return 4;
        }
      else if ((((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))) && ((cached_type == TYPE_SMLAXY) || (cached_type == TYPE_SMLAWY) || (cached_type == TYPE_SMLAD) || (cached_type == TYPE_SMLSD)))
        {
	  return 3;
        }
      else if ((((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))) && ((cached_type == TYPE_SMLALD) || (cached_type == TYPE_SMLSLD)))
        {
	  return 3;
        }
      else if ((((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))) && ((cached_type == TYPE_SMULL) || (cached_type == TYPE_UMULL) || (cached_type == TYPE_UMLAL) || (cached_type == TYPE_UMAAL)))
        {
	  return 4;
        }
      else if ((((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))) && (cached_type == TYPE_UDIV))
        {
	  return 9;
        }
      else if ((((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))) && (cached_type == TYPE_SDIV))
        {
	  return 10 /* 0xa */;
        }
      else if ((((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))) && (cached_type == TYPE_BRANCH))
        {
	  return 0;
        }
      else if ((((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))) && (cached_type == TYPE_CALL))
        {
	  return 32 /* 0x20 */;
        }
      else if ((((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))) && ((cached_type == TYPE_LOAD_4) || (cached_type == TYPE_LOAD_8)))
        {
	  return 3;
        }
      else if ((((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))) && ((cached_type == TYPE_LOAD_12) || (cached_type == TYPE_LOAD_16)))
        {
	  return 4;
        }
      else if ((((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))) && ((cached_type == TYPE_STORE_4) || (cached_type == TYPE_STORE_8)))
        {
	  return 0;
        }
      else if ((((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))) && ((cached_type == TYPE_STORE_12) || (cached_type == TYPE_STORE_16)))
        {
	  return 0;
        }
      else if ((((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))) && (cached_type == TYPE_FMOV))
        {
	  return 2;
        }
      else if ((((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))) && ((cached_type == TYPE_FFARITHS) || (cached_type == TYPE_FCONSTS) || (cached_type == TYPE_FCMPS)))
        {
	  return 2;
        }
      else if ((((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))) && ((cached_type == TYPE_FADDS) || (cached_type == TYPE_FMULS)))
        {
	  return 3;
        }
      else if ((((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))) && ((cached_type == TYPE_FMACS) || (cached_type == TYPE_FFMAS)))
        {
	  return 6;
        }
      else if ((((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))) && ((cached_type == TYPE_FDIVS) || (cached_type == TYPE_FSQRTS)))
        {
	  return 17 /* 0x11 */;
        }
      else if ((((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))) && (cached_type == TYPE_F_LOADS))
        {
	  return 2;
        }
      else if ((((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))) && (cached_type == TYPE_F_STORES))
        {
	  return 1;
        }
      else if ((((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))) && ((cached_type == TYPE_F_MCR) || (cached_type == TYPE_F_MCRR)))
        {
	  return 2;
        }
      else if ((((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))) && ((cached_type == TYPE_F_MRC) || (cached_type == TYPE_F_MRRC)))
        {
	  return 3;
        }
      else if ((((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))) && ((cached_type == TYPE_FMACD) || (cached_type == TYPE_FFMAD)))
        {
	  return 20 /* 0x14 */;
        }
      else if ((((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))) && ((cached_type == TYPE_FADDD) || (cached_type == TYPE_FMULD)))
        {
	  return 10 /* 0xa */;
        }
      else if ((((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))) && ((cached_type == TYPE_FDIVD) || (cached_type == TYPE_FSQRTD)))
        {
	  return 97 /* 0x61 */;
        }
      else if ((((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))) && ((cached_type == TYPE_FFARITHD) || (cached_type == TYPE_FCONSTD)))
        {
	  return 2;
        }
      else if ((((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))) && (cached_type == TYPE_FCMPD))
        {
	  return 2;
        }
      else if ((((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))) && ((cached_type == TYPE_F_CVT) || (cached_type == TYPE_F_CVTF2I) || (cached_type == TYPE_F_CVTI2F)))
        {
	  return 8;
        }
      else if ((((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))) && ((cached_type == TYPE_F_LOADD) || (cached_type == TYPE_F_STORED)))
        {
	  return 8;
        }
      else if ((((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5)))))) && (cached_type == TYPE_F_STORES))
        {
	  return 1;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && ((cached_type == TYPE_ALU_IMM) || (cached_type == TYPE_ALUS_IMM) || (cached_type == TYPE_LOGIC_IMM) || (cached_type == TYPE_LOGICS_IMM) || (cached_type == TYPE_ALU_SREG) || (cached_type == TYPE_ALUS_SREG) || (cached_type == TYPE_LOGIC_REG) || (cached_type == TYPE_LOGICS_REG) || (cached_type == TYPE_ADC_IMM) || (cached_type == TYPE_ADCS_IMM) || (cached_type == TYPE_ADC_REG) || (cached_type == TYPE_ADCS_REG) || (cached_type == TYPE_ADR) || (cached_type == TYPE_BFM) || (cached_type == TYPE_REV) || (cached_type == TYPE_SHIFT_IMM) || (cached_type == TYPE_SHIFT_REG) || (cached_type == TYPE_MOV_IMM) || (cached_type == TYPE_MOV_REG) || (cached_type == TYPE_MVN_IMM) || (cached_type == TYPE_MVN_REG) || (cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MOV_SHIFT) || (cached_type == TYPE_MVN_SHIFT) || (cached_type == TYPE_MVN_SHIFT_REG) || (cached_type == TYPE_LOGIC_SHIFT_IMM) || (cached_type == TYPE_LOGICS_SHIFT_IMM) || (cached_type == TYPE_ALU_SHIFT_REG) || (cached_type == TYPE_ALUS_SHIFT_REG) || (cached_type == TYPE_LOGIC_SHIFT_REG) || (cached_type == TYPE_LOGICS_SHIFT_REG) || (cached_type == TYPE_MRS) || (cached_type == TYPE_CLZ) || (cached_type == TYPE_F_MCR) || (cached_type == TYPE_F_MRC) || (cached_type == TYPE_MULTIPLE)))
        {
	  return 2;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && ((cached_type == TYPE_ALU_SHIFT_IMM_LSL_1TO4) || (cached_type == TYPE_ALU_SHIFT_IMM_OTHER) || (cached_type == TYPE_ALUS_SHIFT_IMM)))
        {
	  return 2;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && ((cached_type == TYPE_ALU_DSP_REG) || (cached_type == TYPE_SMLAXY) || (cached_type == TYPE_SMLALXY) || (cached_type == TYPE_SMULXY)))
        {
	  return 2;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && ((cached_type == TYPE_MUL) || (cached_type == TYPE_MULS) || (cached_type == TYPE_UMULL) || (cached_type == TYPE_SMULL)))
        {
	  return 2;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && ((cached_type == TYPE_SDIV) || (cached_type == TYPE_UDIV)))
        {
	  return 4;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && (cached_type == TYPE_EXTEND))
        {
	  return 2;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && ((cached_type == TYPE_MLA) || (cached_type == TYPE_MLAS)))
        {
	  return 2;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && ((cached_type == TYPE_BRANCH) || (cached_type == TYPE_CALL)))
        {
	  return 0;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && ((cached_type == TYPE_LOAD_BYTE) || (cached_type == TYPE_LOAD_4)))
        {
	  return 2;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && (cached_type == TYPE_LOAD_8))
        {
	  return 2;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && ((cached_type == TYPE_LOAD_12) || (cached_type == TYPE_LOAD_16)))
        {
	  return 2;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && (cached_type == TYPE_STORE_4))
        {
	  return 0;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && (cached_type == TYPE_STORE_8))
        {
	  return 0;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && ((cached_type == TYPE_STORE_12) || (cached_type == TYPE_STORE_16)))
        {
	  return 0;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && ((cached_type == TYPE_FFARITHS) || (cached_type == TYPE_FFARITHD) || (cached_type == TYPE_FADDS) || (cached_type == TYPE_FADDD) || (cached_type == TYPE_FMOV) || (cached_type == TYPE_FCONSTS) || (cached_type == TYPE_FCONSTD) || (cached_type == TYPE_FCMPD) || (cached_type == TYPE_F_CVT) || (cached_type == TYPE_F_CVTF2I) || (cached_type == TYPE_F_CVTI2F) || (cached_type == TYPE_FCMPS) || (cached_type == TYPE_FMULS) || (cached_type == TYPE_F_FLAG)))
        {
	  return 3;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && ((cached_type == TYPE_FMACS) || (cached_type == TYPE_FFMAS)))
        {
	  return 6;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && ((cached_type == TYPE_FDIVS) || (cached_type == TYPE_FSQRTS)))
        {
	  return 16 /* 0x10 */;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && (cached_type == TYPE_F_LOADS))
        {
	  return 2;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && (cached_type == TYPE_F_STORES))
        {
	  return 0;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && (cached_type == TYPE_FMULD))
        {
	  return 6;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && ((cached_type == TYPE_FMACD) || (cached_type == TYPE_FFMAD)))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && ((cached_type == TYPE_FDIVD) || (cached_type == TYPE_FSQRTD)))
        {
	  return 31 /* 0x1f */;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && (cached_type == TYPE_F_LOADD))
        {
	  return 3;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && (cached_type == TYPE_F_STORED))
        {
	  return 0;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7)))) && ((cached_type == TYPE_F_MCRR) || (cached_type == TYPE_F_MRRC)))
        {
	  return 1;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && (((cached_type == TYPE_ALU_IMM) || (cached_type == TYPE_ALUS_IMM) || (cached_type == TYPE_LOGIC_IMM) || (cached_type == TYPE_LOGICS_IMM) || (cached_type == TYPE_ALU_SREG) || (cached_type == TYPE_ALUS_SREG) || (cached_type == TYPE_LOGIC_REG) || (cached_type == TYPE_LOGICS_REG) || (cached_type == TYPE_ADC_IMM) || (cached_type == TYPE_ADCS_IMM) || (cached_type == TYPE_ADC_REG) || (cached_type == TYPE_ADCS_REG) || (cached_type == TYPE_ADR) || (cached_type == TYPE_BFM) || (cached_type == TYPE_CLZ) || (cached_type == TYPE_RBIT) || (cached_type == TYPE_REV) || (cached_type == TYPE_ALU_DSP_REG) || (cached_type == TYPE_SHIFT_IMM) || (cached_type == TYPE_SHIFT_REG) || (cached_type == TYPE_EXTEND) || (cached_type == TYPE_ALU_SHIFT_IMM_LSL_1TO4) || (cached_type == TYPE_ALU_SHIFT_IMM_OTHER) || (cached_type == TYPE_ALUS_SHIFT_IMM) || (cached_type == TYPE_LOGIC_SHIFT_IMM) || (cached_type == TYPE_LOGICS_SHIFT_IMM) || (cached_type == TYPE_ALU_SHIFT_REG) || (cached_type == TYPE_ALUS_SHIFT_REG) || (cached_type == TYPE_LOGIC_SHIFT_REG) || (cached_type == TYPE_LOGICS_SHIFT_REG) || (cached_type == TYPE_MOV_IMM) || (cached_type == TYPE_MOV_REG) || (cached_type == TYPE_MOV_SHIFT) || (cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MVN_IMM) || (cached_type == TYPE_MVN_REG) || (cached_type == TYPE_MVN_SHIFT) || (cached_type == TYPE_MVN_SHIFT_REG) || (cached_type == TYPE_MRS) || (cached_type == TYPE_MULTIPLE)) || ((cached_mul32 = get_attr_mul32 (insn)) == MUL32_YES) || ((cached_widen_mul64 = get_attr_widen_mul64 (insn)) == WIDEN_MUL64_YES)))
        {
	  return 1;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type == TYPE_LOAD_BYTE) || (cached_type == TYPE_LOAD_4)))
        {
	  return 2;
        }
      else if (((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && (cached_type == TYPE_STORE_4)) && (
#line 60 "../../gcc/config/arm/cortex-m4.md"
(arm_address_offset_is_imm (insn))))
        {
	  return 1;
        }
      else if (((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && (cached_type == TYPE_STORE_4)) && (! (
#line 60 "../../gcc/config/arm/cortex-m4.md"
(arm_address_offset_is_imm (insn)))))
        {
	  return 2;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && (cached_type == TYPE_LOAD_8))
        {
	  return 3;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && (cached_type == TYPE_STORE_8))
        {
	  return 3;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && (cached_type == TYPE_LOAD_12))
        {
	  return 4;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && (cached_type == TYPE_STORE_12))
        {
	  return 4;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && (cached_type == TYPE_LOAD_16))
        {
	  return 5;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && (cached_type == TYPE_STORE_16))
        {
	  return 5;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && (cached_type == TYPE_BRANCH))
        {
	  return 3;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && (cached_type == TYPE_CALL))
        {
	  return 3;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && (cached_type == TYPE_BLOCK))
        {
	  return 1;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type == TYPE_FDIVS) || (cached_type == TYPE_FSQRTS)))
        {
	  return 15 /* 0xf */;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type == TYPE_FMOV) || (cached_type == TYPE_FCONSTS)))
        {
	  return 1;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type == TYPE_F_MRC) || (cached_type == TYPE_F_MRRC) || (cached_type == TYPE_F_MCR) || (cached_type == TYPE_F_MCRR)))
        {
	  return 2;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && (cached_type == TYPE_FMULS))
        {
	  return 2;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type == TYPE_FMACS) || (cached_type == TYPE_FFMAS)))
        {
	  return 4;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && (cached_type == TYPE_FFARITHS))
        {
	  return 1;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && (cached_type == TYPE_FADDS))
        {
	  return 2;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && (cached_type == TYPE_FCMPS))
        {
	  return 1;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && (cached_type == TYPE_F_FLAG))
        {
	  return 1;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && ((cached_type == TYPE_F_CVT) || (cached_type == TYPE_F_CVTF2I) || (cached_type == TYPE_F_CVTI2F)))
        {
	  return 2;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && (cached_type == TYPE_F_LOADS))
        {
	  return 2;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && (cached_type == TYPE_F_STORES))
        {
	  return 1;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && (cached_type == TYPE_F_LOADD))
        {
	  return 3;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4)))) && (cached_type == TYPE_F_STORED))
        {
	  return 3;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && (cached_type == TYPE_BRANCH))
        {
	  return 0;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && (cached_type == TYPE_CALL))
        {
	  return 1;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && (! ((cached_predicated = get_attr_predicated (insn)) == PREDICATED_YES)) && ((cached_type == TYPE_ALU_IMM) || (cached_type == TYPE_ALUS_IMM) || (cached_type == TYPE_LOGIC_IMM) || (cached_type == TYPE_LOGICS_IMM) || (cached_type == TYPE_ALU_SREG) || (cached_type == TYPE_ALUS_SREG) || (cached_type == TYPE_LOGIC_REG) || (cached_type == TYPE_LOGICS_REG) || (cached_type == TYPE_ADC_IMM) || (cached_type == TYPE_ADCS_IMM) || (cached_type == TYPE_ADC_REG) || (cached_type == TYPE_ADCS_REG) || (cached_type == TYPE_ADR) || (cached_type == TYPE_BFM) || (cached_type == TYPE_BFX) || (cached_type == TYPE_CLZ) || (cached_type == TYPE_RBIT) || (cached_type == TYPE_REV) || (cached_type == TYPE_CSEL) || (cached_type == TYPE_ALU_DSP_REG) || (cached_type == TYPE_SHIFT_IMM) || (cached_type == TYPE_SHIFT_REG) || (cached_type == TYPE_ROTATE_IMM) || (cached_type == TYPE_EXTEND) || (cached_type == TYPE_MOV_IMM) || (cached_type == TYPE_MOV_REG) || (cached_type == TYPE_MVN_IMM) || (cached_type == TYPE_MVN_REG) || (cached_type == TYPE_MRS) || (cached_type == TYPE_MULTIPLE)))
        {
	  return 1;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_predicated = get_attr_predicated (insn)) == PREDICATED_YES) && ((cached_type == TYPE_ALU_IMM) || (cached_type == TYPE_ALUS_IMM) || (cached_type == TYPE_LOGIC_IMM) || (cached_type == TYPE_LOGICS_IMM) || (cached_type == TYPE_ALU_SREG) || (cached_type == TYPE_ALUS_SREG) || (cached_type == TYPE_LOGIC_REG) || (cached_type == TYPE_LOGICS_REG) || (cached_type == TYPE_ADC_IMM) || (cached_type == TYPE_ADCS_IMM) || (cached_type == TYPE_ADC_REG) || (cached_type == TYPE_ADCS_REG) || (cached_type == TYPE_ADR) || (cached_type == TYPE_BFM) || (cached_type == TYPE_BFX) || (cached_type == TYPE_CLZ) || (cached_type == TYPE_RBIT) || (cached_type == TYPE_REV) || (cached_type == TYPE_ALU_DSP_REG) || (cached_type == TYPE_SHIFT_IMM) || (cached_type == TYPE_SHIFT_REG) || (cached_type == TYPE_ROTATE_IMM) || (cached_type == TYPE_EXTEND) || (cached_type == TYPE_MOV_IMM) || (cached_type == TYPE_MOV_REG) || (cached_type == TYPE_MVN_IMM) || (cached_type == TYPE_MVN_REG) || (cached_type == TYPE_MRS) || (cached_type == TYPE_MULTIPLE)))
        {
	  return 1;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_type == TYPE_ALU_EXT) || (cached_type == TYPE_ALUS_EXT) || (cached_type == TYPE_ALU_SHIFT_IMM_LSL_1TO4) || (cached_type == TYPE_ALU_SHIFT_IMM_OTHER) || (cached_type == TYPE_ALUS_SHIFT_IMM) || (cached_type == TYPE_LOGIC_SHIFT_IMM) || (cached_type == TYPE_LOGICS_SHIFT_IMM) || (cached_type == TYPE_MOV_SHIFT) || (cached_type == TYPE_MVN_SHIFT)))
        {
	  return 2;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && (! ((cached_predicated = get_attr_predicated (insn)) == PREDICATED_YES)) && ((cached_type == TYPE_ALU_SHIFT_REG) || (cached_type == TYPE_ALUS_SHIFT_REG) || (cached_type == TYPE_LOGIC_SHIFT_REG) || (cached_type == TYPE_LOGICS_SHIFT_REG) || (cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MVN_SHIFT_REG)))
        {
	  return 2;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_predicated = get_attr_predicated (insn)) == PREDICATED_YES) && ((cached_type == TYPE_ALU_SHIFT_REG) || (cached_type == TYPE_ALUS_SHIFT_REG) || (cached_type == TYPE_LOGIC_SHIFT_REG) || (cached_type == TYPE_LOGICS_SHIFT_REG) || (cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MVN_SHIFT_REG)))
        {
	  return 2;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_mul32 = get_attr_mul32 (insn)) == MUL32_YES))
        {
	  return 3;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_widen_mul64 = get_attr_widen_mul64 (insn)) == WIDEN_MUL64_YES))
        {
	  return 4;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_type == TYPE_UDIV) || (cached_type == TYPE_SDIV)))
        {
	  return 13 /* 0xd */;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_type == TYPE_LOAD_BYTE) || (cached_type == TYPE_LOAD_4) || (cached_type == TYPE_LOAD_8)))
        {
	  return 4;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_type == TYPE_LOAD_12) || (cached_type == TYPE_LOAD_16)))
        {
	  return 6;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_type == TYPE_STORE_4) || (cached_type == TYPE_STORE_8)))
        {
	  return 1;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_type == TYPE_STORE_12) || (cached_type == TYPE_STORE_16)))
        {
	  return 3;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_ARITH_SIMPLE))
        {
	  return 1;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_ARITH_BASIC))
        {
	  return 2;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_ARITH_COMPLEX))
        {
	  return 3;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && (((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_MULTIPLY) || (cached_exynos_m1_neon_type == EXYNOS_M1_NEON_TYPE_NEON_MLA) || (cached_exynos_m1_neon_type == EXYNOS_M1_NEON_TYPE_NEON_SAT_MLA_LONG)))
        {
	  return 4;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_SHIFT_ACC))
        {
	  return 4;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && (((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_SHIFT_IMM_BASIC) || (cached_exynos_m1_neon_type == EXYNOS_M1_NEON_TYPE_NEON_SHIFT_REG_BASIC)))
        {
	  return 2;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && (((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_SHIFT_IMM_COMPLEX) || (cached_exynos_m1_neon_type == EXYNOS_M1_NEON_TYPE_NEON_SHIFT_REG_COMPLEX)))
        {
	  return 4;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_FP_UNARY))
        {
	  return 2;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_FP_ADD))
        {
	  return 4;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_FP_ABD))
        {
	  return 3;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_FP_COMPARE))
        {
	  return 1;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_FP_REDUC_MINMAX))
        {
	  return 5;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_FP_REDUC_ADD))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_FP_ROUND))
        {
	  return 4;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_FP_CVT))
        {
	  return 4;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_FP_MUL))
        {
	  return 5;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_FP_MLA))
        {
	  return 6;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_FP_ESTIMATE))
        {
	  return 5;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_FP_ESTIMATEX))
        {
	  return 1;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_FP_STEP))
        {
	  return 6;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_BITOPS))
        {
	  return 2;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_BITOPS_Q))
        {
	  return 3;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_BITINS))
        {
	  return 2;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_TBL))
        {
	  return 2;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_FROM_GP))
        {
	  return 4;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_TO_GP))
        {
	  return 9;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_type == TYPE_F_LOADS) || (cached_type == TYPE_F_LOADD) || (cached_type == TYPE_NEON_LDP)))
        {
	  return 5;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && (cached_type == TYPE_NEON_LDP_Q))
        {
	  return 6;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && (((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_LOAD1_1) || (cached_exynos_m1_neon_type == EXYNOS_M1_NEON_TYPE_NEON_LOAD1_ALL)))
        {
	  return 6;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_LOAD1_2))
        {
	  return 6;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_LOAD1_3))
        {
	  return 7;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_LOAD1_4))
        {
	  return 8;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_LOAD1_ONE))
        {
	  return 7;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_LOAD2_2))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_LOAD2_ONE))
        {
	  return 7;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_LOAD2_ALL))
        {
	  return 6;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_LOAD3_3))
        {
	  return 12 /* 0xc */;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_LOAD3_ONE))
        {
	  return 9;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_LOAD3_ALL))
        {
	  return 7;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_LOAD4_4))
        {
	  return 14 /* 0xe */;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_LOAD4_ONE))
        {
	  return 9;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_LOAD4_ALL))
        {
	  return 8;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_type == TYPE_F_STORES) || (cached_type == TYPE_F_STORED) || (cached_type == TYPE_NEON_STP)))
        {
	  return 1;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && (cached_type == TYPE_NEON_STP_Q))
        {
	  return 3;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_STORE1_1))
        {
	  return 1;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_STORE1_2))
        {
	  return 2;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_STORE1_3))
        {
	  return 3;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_STORE1_4))
        {
	  return 4;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_STORE1_ONE))
        {
	  return 7;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && (((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_STORE2_2) || (cached_exynos_m1_neon_type == EXYNOS_M1_NEON_TYPE_NEON_STORE2_ONE)))
        {
	  return 7;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && (((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_STORE3_3) || (cached_exynos_m1_neon_type == EXYNOS_M1_NEON_TYPE_NEON_STORE3_ONE)))
        {
	  return 16 /* 0x10 */;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && (((cached_exynos_m1_neon_type = get_attr_exynos_m1_neon_type (insn)) == EXYNOS_M1_NEON_TYPE_NEON_STORE4_4) || (cached_exynos_m1_neon_type == EXYNOS_M1_NEON_TYPE_NEON_STORE4_ONE)))
        {
	  return 17 /* 0x11 */;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_type == TYPE_FCONSTS) || (cached_type == TYPE_FCONSTD)))
        {
	  return 2;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_type == TYPE_FADDS) || (cached_type == TYPE_FADDD)))
        {
	  return 4;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_type == TYPE_FMULS) || (cached_type == TYPE_FMULD)))
        {
	  return 5;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_type == TYPE_FMACS) || (cached_type == TYPE_FFMAS) || (cached_type == TYPE_FMACD) || (cached_type == TYPE_FFMAD)))
        {
	  return 6;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_type == TYPE_F_CVT) || (cached_type == TYPE_F_RINTS) || (cached_type == TYPE_F_RINTD)))
        {
	  return 4;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && (cached_type == TYPE_F_CVTF2I))
        {
	  return 13 /* 0xd */;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && (cached_type == TYPE_F_CVTI2F))
        {
	  return 9;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_type == TYPE_FCMPS) || (cached_type == TYPE_FCMPD)))
        {
	  return 4;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_type == TYPE_FCCMPS) || (cached_type == TYPE_FCCMPD)))
        {
	  return 7;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && (cached_type == TYPE_FCSEL))
        {
	  return 4;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_type == TYPE_FFARITHS) || (cached_type == TYPE_FFARITHD)))
        {
	  return 2;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && (cached_type == TYPE_FMOV))
        {
	  return 2;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_type == TYPE_FDIVS) || (cached_type == TYPE_NEON_FP_DIV_S) || (cached_type == TYPE_NEON_FP_DIV_S_Q) || (cached_type == TYPE_FSQRTS) || (cached_type == TYPE_NEON_FP_SQRT_S) || (cached_type == TYPE_NEON_FP_SQRT_S_Q)))
        {
	  return 15 /* 0xf */;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_type == TYPE_FDIVD) || (cached_type == TYPE_NEON_FP_DIV_D) || (cached_type == TYPE_NEON_FP_DIV_D_Q) || (cached_type == TYPE_FSQRTD) || (cached_type == TYPE_NEON_FP_SQRT_D) || (cached_type == TYPE_NEON_FP_SQRT_D_Q)))
        {
	  return 22 /* 0x16 */;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_type == TYPE_F_MINMAXS) || (cached_type == TYPE_F_MINMAXD)))
        {
	  return 2;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_type == TYPE_CRYPTO_AESE) || (cached_type == TYPE_CRYPTO_AESMC) || (cached_type == TYPE_CRYPTO_SHA1_XOR) || (cached_type == TYPE_CRYPTO_SHA1_FAST) || (cached_type == TYPE_CRYPTO_SHA256_FAST)))
        {
	  return 2;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_type == TYPE_CRYPTO_SHA1_SLOW) || (cached_type == TYPE_CRYPTO_SHA256_SLOW)))
        {
	  return 6;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && ((cached_type == TYPE_NEON_MUL_B_LONG) || (cached_type == TYPE_NEON_MUL_H_LONG) || (cached_type == TYPE_NEON_MUL_S_LONG)))
        {
	  return 2;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && (cached_type == TYPE_NEON_MUL_D_LONG))
        {
	  return 4;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_EXYNOSM1)))) && (cached_type == TYPE_CRC))
        {
	  return 2;
        }
      else if ((((((
#line 119 "../../gcc/config/arm/arm.md"
(arm_fpu_attr)) == (
(FPU_VFP)))) && ((! (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E))))) && (! (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5))))) && (! (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7))))) && (! (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8))))) && (! (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9))))) && (! (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53))))) && (! (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4))))) && (! (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7))))) && (! (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4))))) && (! (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))))) && ((! ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))))) && ((cached_type == TYPE_FMOV) || (cached_type == TYPE_FFARITHS) || (cached_type == TYPE_FFARITHD) || (cached_type == TYPE_FCMPS) || (cached_type == TYPE_FCMPD)))
        {
	  return 4;
        }
      else if ((((((
#line 119 "../../gcc/config/arm/arm.md"
(arm_fpu_attr)) == (
(FPU_VFP)))) && ((! (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E))))) && (! (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5))))) && (! (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7))))) && (! (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8))))) && (! (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9))))) && (! (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53))))) && (! (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4))))) && (! (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7))))) && (! (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4))))) && (! (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))))) && ((! ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))))) && ((cached_type == TYPE_FADDS) || (cached_type == TYPE_FADDD) || (cached_type == TYPE_FCONSTS) || (cached_type == TYPE_FCONSTD) || (cached_type == TYPE_F_CVT) || (cached_type == TYPE_F_CVTF2I) || (cached_type == TYPE_F_CVTI2F) || (cached_type == TYPE_FMULS) || (cached_type == TYPE_FMACS) || (cached_type == TYPE_FFMAS)))
        {
	  return 8;
        }
      else if ((((((
#line 119 "../../gcc/config/arm/arm.md"
(arm_fpu_attr)) == (
(FPU_VFP)))) && ((! (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E))))) && (! (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5))))) && (! (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7))))) && (! (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8))))) && (! (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9))))) && (! (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53))))) && (! (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4))))) && (! (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7))))) && (! (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4))))) && (! (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))))) && ((! ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))))) && ((cached_type == TYPE_FMULD) || (cached_type == TYPE_FMACD) || (cached_type == TYPE_FFMAD)))
        {
	  return 9;
        }
      else if ((((((
#line 119 "../../gcc/config/arm/arm.md"
(arm_fpu_attr)) == (
(FPU_VFP)))) && ((! (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E))))) && (! (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5))))) && (! (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7))))) && (! (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8))))) && (! (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9))))) && (! (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53))))) && (! (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4))))) && (! (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7))))) && (! (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4))))) && (! (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))))) && ((! ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))))) && ((cached_type == TYPE_FDIVS) || (cached_type == TYPE_FSQRTS)))
        {
	  return 19 /* 0x13 */;
        }
      else if ((((((
#line 119 "../../gcc/config/arm/arm.md"
(arm_fpu_attr)) == (
(FPU_VFP)))) && ((! (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E))))) && (! (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5))))) && (! (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7))))) && (! (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8))))) && (! (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9))))) && (! (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53))))) && (! (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4))))) && (! (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7))))) && (! (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4))))) && (! (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))))) && ((! ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))))) && ((cached_type == TYPE_FDIVD) || (cached_type == TYPE_FSQRTD)))
        {
	  return 33 /* 0x21 */;
        }
      else if ((((((
#line 119 "../../gcc/config/arm/arm.md"
(arm_fpu_attr)) == (
(FPU_VFP)))) && ((! (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E))))) && (! (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5))))) && (! (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7))))) && (! (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8))))) && (! (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9))))) && (! (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53))))) && (! (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4))))) && (! (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7))))) && (! (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4))))) && (! (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))))) && ((! ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))))) && ((cached_type == TYPE_F_LOADS) || (cached_type == TYPE_F_LOADD) || (cached_type == TYPE_F_MCR) || (cached_type == TYPE_F_MCRR)))
        {
	  return 4;
        }
      else if ((((((
#line 119 "../../gcc/config/arm/arm.md"
(arm_fpu_attr)) == (
(FPU_VFP)))) && ((! (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E))))) && (! (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5))))) && (! (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7))))) && (! (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8))))) && (! (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9))))) && (! (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53))))) && (! (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4))))) && (! (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7))))) && (! (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4))))) && (! (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))))) && ((! ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))))) && ((cached_type == TYPE_F_STORES) || (cached_type == TYPE_F_STORED) || (cached_type == TYPE_F_MRC) || (cached_type == TYPE_F_MRRC)))
        {
	  return 4;
        }
      else if ((((((
#line 119 "../../gcc/config/arm/arm.md"
(arm_fpu_attr)) == (
(FPU_VFP)))) && ((! (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_ARM10E))))) && (! (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA5))))) && (! (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA7))))) && (! (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA8))))) && (! (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA9))))) && (! (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXA53))))) && (! (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM4))))) && (! (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXM7))))) && (! (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4))))) && (! (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))))) && ((! ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR4F)))) || (((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_CORTEXR5))))))))) && (cached_type == TYPE_F_FLAG))
        {
	  return 4;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && ((cached_type == TYPE_MOV_IMM) || (cached_type == TYPE_MOV_REG) || (cached_type == TYPE_MVN_IMM) || (cached_type == TYPE_MVN_REG)) && (! ((cached_conds = get_attr_conds (insn)) == CONDS_SET)))
        {
	  return 1;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && ((cached_type == TYPE_MOV_IMM) || (cached_type == TYPE_MOV_REG) || (cached_type == TYPE_MVN_IMM) || (cached_type == TYPE_MVN_REG)) && ((cached_conds = get_attr_conds (insn)) == CONDS_SET))
        {
	  return 4;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && ((cached_type == TYPE_ALU_IMM) || (cached_type == TYPE_ALUS_IMM) || (cached_type == TYPE_ALU_SREG) || (cached_type == TYPE_ALUS_SREG) || (cached_type == TYPE_LOGIC_IMM) || (cached_type == TYPE_LOGICS_IMM) || (cached_type == TYPE_LOGIC_REG) || (cached_type == TYPE_LOGICS_REG) || (cached_type == TYPE_ADC_IMM) || (cached_type == TYPE_ADCS_IMM) || (cached_type == TYPE_ADC_REG) || (cached_type == TYPE_ADCS_REG) || (cached_type == TYPE_ADR) || (cached_type == TYPE_BFM) || (cached_type == TYPE_REV) || (cached_type == TYPE_ALU_DSP_REG) || (cached_type == TYPE_SHIFT_IMM) || (cached_type == TYPE_SHIFT_REG)) && (! ((cached_conds = get_attr_conds (insn)) == CONDS_SET)))
        {
	  return 1;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && ((cached_type == TYPE_ALU_IMM) || (cached_type == TYPE_ALUS_IMM) || (cached_type == TYPE_ALU_SREG) || (cached_type == TYPE_ALUS_SREG) || (cached_type == TYPE_LOGIC_IMM) || (cached_type == TYPE_LOGICS_IMM) || (cached_type == TYPE_LOGIC_REG) || (cached_type == TYPE_LOGICS_REG) || (cached_type == TYPE_ADC_IMM) || (cached_type == TYPE_ADCS_IMM) || (cached_type == TYPE_ADC_REG) || (cached_type == TYPE_ADCS_REG) || (cached_type == TYPE_ADR) || (cached_type == TYPE_BFM) || (cached_type == TYPE_REV) || (cached_type == TYPE_ALU_DSP_REG) || (cached_type == TYPE_SHIFT_IMM) || (cached_type == TYPE_SHIFT_REG)) && ((cached_conds = get_attr_conds (insn)) == CONDS_SET))
        {
	  return 4;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && ((cached_type == TYPE_ALU_SHIFT_IMM_LSL_1TO4) || (cached_type == TYPE_ALU_SHIFT_IMM_OTHER) || (cached_type == TYPE_LOGIC_SHIFT_IMM) || (cached_type == TYPE_ALUS_SHIFT_IMM) || (cached_type == TYPE_LOGICS_SHIFT_IMM) || (cached_type == TYPE_ALU_SHIFT_REG) || (cached_type == TYPE_LOGIC_SHIFT_REG) || (cached_type == TYPE_ALUS_SHIFT_REG) || (cached_type == TYPE_LOGICS_SHIFT_REG) || (cached_type == TYPE_EXTEND) || (cached_type == TYPE_MOV_SHIFT) || (cached_type == TYPE_MVN_SHIFT) || (cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MVN_SHIFT_REG)) && (! ((cached_conds = get_attr_conds (insn)) == CONDS_SET)) && ((cached_shift = get_attr_shift (insn)) == 1))
        {
	  return 1;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && ((cached_type == TYPE_ALU_SHIFT_IMM_LSL_1TO4) || (cached_type == TYPE_ALU_SHIFT_IMM_OTHER) || (cached_type == TYPE_LOGIC_SHIFT_IMM) || (cached_type == TYPE_ALUS_SHIFT_IMM) || (cached_type == TYPE_LOGICS_SHIFT_IMM) || (cached_type == TYPE_ALU_SHIFT_REG) || (cached_type == TYPE_LOGIC_SHIFT_REG) || (cached_type == TYPE_ALUS_SHIFT_REG) || (cached_type == TYPE_LOGICS_SHIFT_REG) || (cached_type == TYPE_EXTEND) || (cached_type == TYPE_MOV_SHIFT) || (cached_type == TYPE_MVN_SHIFT) || (cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MVN_SHIFT_REG)) && ((cached_conds = get_attr_conds (insn)) == CONDS_SET) && ((cached_shift = get_attr_shift (insn)) == 1))
        {
	  return 4;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (! ((cached_conds = get_attr_conds (insn)) == CONDS_SET)) && ((cached_type == TYPE_ALU_SHIFT_IMM_LSL_1TO4) || (cached_type == TYPE_ALU_SHIFT_IMM_OTHER) || (cached_type == TYPE_LOGIC_SHIFT_IMM) || (cached_type == TYPE_ALUS_SHIFT_IMM) || (cached_type == TYPE_LOGICS_SHIFT_IMM) || (cached_type == TYPE_ALU_SHIFT_REG) || (cached_type == TYPE_LOGIC_SHIFT_REG) || (cached_type == TYPE_ALUS_SHIFT_REG) || (cached_type == TYPE_LOGICS_SHIFT_REG) || (cached_type == TYPE_EXTEND) || (cached_type == TYPE_MOV_SHIFT) || (cached_type == TYPE_MVN_SHIFT) || (cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MVN_SHIFT_REG)))
        {
	  return 1;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && ((cached_conds = get_attr_conds (insn)) == CONDS_SET) && ((cached_type == TYPE_ALU_SHIFT_IMM_LSL_1TO4) || (cached_type == TYPE_ALU_SHIFT_IMM_OTHER) || (cached_type == TYPE_LOGIC_SHIFT_IMM) || (cached_type == TYPE_ALUS_SHIFT_IMM) || (cached_type == TYPE_LOGICS_SHIFT_IMM) || (cached_type == TYPE_ALU_SHIFT_REG) || (cached_type == TYPE_LOGIC_SHIFT_REG) || (cached_type == TYPE_ALUS_SHIFT_REG) || (cached_type == TYPE_LOGICS_SHIFT_REG) || (cached_type == TYPE_EXTEND) || (cached_type == TYPE_MOV_SHIFT) || (cached_type == TYPE_MVN_SHIFT) || (cached_type == TYPE_MOV_SHIFT_REG) || (cached_type == TYPE_MVN_SHIFT_REG)))
        {
	  return 4;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (((cached_mul32 = get_attr_mul32 (insn)) == MUL32_YES) || ((cached_widen_mul64 = get_attr_widen_mul64 (insn)) == WIDEN_MUL64_YES)))
        {
	  return 3;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && ((cached_type == TYPE_UDIV) || (cached_type == TYPE_SDIV)))
        {
	  return 20 /* 0x14 */;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (cached_type == TYPE_BRANCH))
        {
	  return 0;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (cached_type == TYPE_CALL))
        {
	  return 32 /* 0x20 */;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && ((cached_type == TYPE_LOAD_BYTE) || (cached_type == TYPE_LOAD_4)))
        {
	  return 3;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (cached_type == TYPE_LOAD_8))
        {
	  return 3;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (cached_type == TYPE_STORE_4))
        {
	  return 1;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && (cached_type == TYPE_STORE_8))
        {
	  return 1;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && ((cached_type == TYPE_LOAD_12) || (cached_type == TYPE_LOAD_16)))
        {
	  return 4;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && ((cached_type == TYPE_STORE_12) || (cached_type == TYPE_STORE_16)))
        {
	  return 2;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && ((cached_type == TYPE_FADDS) || (cached_type == TYPE_FADDD)))
        {
	  return 5;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && ((cached_type == TYPE_FMULS) || (cached_type == TYPE_FMULD)))
        {
	  return 6;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && ((cached_type == TYPE_FDIVS) || (cached_type == TYPE_FSQRTS)))
        {
	  return 20 /* 0x14 */;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && ((cached_type == TYPE_FDIVD) || (cached_type == TYPE_FSQRTD)))
        {
	  return 34 /* 0x22 */;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && ((cached_type == TYPE_FMACS) || (cached_type == TYPE_FMACD)))
        {
	  return 9;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && ((cached_type == TYPE_FMOV) || (cached_type == TYPE_FFARITHS) || (cached_type == TYPE_FFARITHD) || (cached_type == TYPE_FCONSTS) || (cached_type == TYPE_FCONSTD) || (cached_type == TYPE_FCMPS) || (cached_type == TYPE_FCMPD) || (cached_type == TYPE_F_CVT) || (cached_type == TYPE_F_CVTF2I) || (cached_type == TYPE_F_CVTI2F)))
        {
	  return 4;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && ((cached_type == TYPE_F_LOADS) || (cached_type == TYPE_F_LOADD)))
        {
	  return 4;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && ((cached_type == TYPE_F_STORES) || (cached_type == TYPE_F_STORED)))
        {
	  return 1;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && ((cached_type == TYPE_F_MRC) || (cached_type == TYPE_F_MRRC) || (cached_type == TYPE_F_FLAG)))
        {
	  return 7;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_MARVELL_PJ4)))) && ((cached_type == TYPE_F_MCR) || (cached_type == TYPE_F_MCRR)))
        {
	  return 2;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (cached_type == TYPE_BRANCH))
        {
	  return 1;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (cached_type == TYPE_CALL))
        {
	  return 1;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type == TYPE_F_LOADD) || (cached_type == TYPE_F_LOADS)))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type == TYPE_F_STORED) || (cached_type == TYPE_F_STORES)))
        {
	  return 4;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type == TYPE_FMOV) || (cached_type == TYPE_FCONSTS) || (cached_type == TYPE_FCONSTD)))
        {
	  return 2;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (cached_type == TYPE_F_MCR))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (cached_type == TYPE_F_MRC))
        {
	  return 4;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (cached_type == TYPE_LOAD_16))
        {
	  return 6;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (cached_type == TYPE_STORE_16))
        {
	  return 2;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type == TYPE_LOAD_4) || (cached_type == TYPE_LOAD_8)) && (get_attr_fp (insn) == FP_YES))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type == TYPE_LOAD_4) || (cached_type == TYPE_LOAD_8)))
        {
	  return 5;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type == TYPE_STORE_4) || (cached_type == TYPE_STORE_8)))
        {
	  return 1;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type == TYPE_MOV_REG) || (cached_type == TYPE_MOV_IMM) || (cached_type == TYPE_MRS)))
        {
	  return 1;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (cached_type == TYPE_CSEL))
        {
	  return 1;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type == TYPE_ALU_IMM) || (cached_type == TYPE_ALU_SREG) || (cached_type == TYPE_ALU_SHIFT_IMM_LSL_1TO4) || (cached_type == TYPE_ALU_SHIFT_IMM_OTHER) || (cached_type == TYPE_ALU_EXT) || (cached_type == TYPE_ADC_REG) || (cached_type == TYPE_LOGIC_IMM) || (cached_type == TYPE_LOGIC_REG) || (cached_type == TYPE_LOGIC_SHIFT_IMM) || (cached_type == TYPE_CLZ) || (cached_type == TYPE_RBIT) || (cached_type == TYPE_ADR) || (cached_type == TYPE_MOV_REG) || (cached_type == TYPE_SHIFT_IMM) || (cached_type == TYPE_MOV_IMM) || (cached_type == TYPE_EXTEND) || (cached_type == TYPE_MULTIPLE)))
        {
	  return 1;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (cached_type == TYPE_SHIFT_REG))
        {
	  return 2;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (cached_type == TYPE_REV))
        {
	  return 2;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type == TYPE_ALUS_IMM) || (cached_type == TYPE_ALUS_SREG) || (cached_type == TYPE_ALUS_SHIFT_IMM) || (cached_type == TYPE_ALUS_EXT) || (cached_type == TYPE_LOGICS_IMM) || (cached_type == TYPE_LOGICS_REG) || (cached_type == TYPE_LOGICS_SHIFT_IMM)))
        {
	  return 1;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_mul32 = get_attr_mul32 (insn)) == MUL32_YES))
        {
	  return 4;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_widen_mul64 = get_attr_widen_mul64 (insn)) == WIDEN_MUL64_YES))
        {
	  return 5;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type == TYPE_SDIV) || (cached_type == TYPE_UDIV)))
        {
	  return 34 /* 0x22 */;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type == TYPE_FCMPD) || (cached_type == TYPE_FCMPS) || (cached_type == TYPE_FCCMPD) || (cached_type == TYPE_FCCMPS)))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (cached_type == TYPE_FCSEL))
        {
	  return 3;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (cached_type == TYPE_BFX))
        {
	  return 1;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (cached_type == TYPE_BFM))
        {
	  return 2;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type == TYPE_F_RINTD) || (cached_type == TYPE_F_RINTS)))
        {
	  return 5;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (cached_type == TYPE_F_CVT))
        {
	  return 3;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (cached_type == TYPE_F_CVTF2I))
        {
	  return 11 /* 0xb */;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (cached_type == TYPE_F_CVTI2F))
        {
	  return 14 /* 0xe */;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type == TYPE_FADDD) || (cached_type == TYPE_FADDS) || (cached_type == TYPE_FMULD) || (cached_type == TYPE_FMULS)))
        {
	  return 5;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type == TYPE_FDIVS) || (cached_type == TYPE_FSQRTS)))
        {
	  return 22 /* 0x16 */;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (cached_type == TYPE_FDIVD))
        {
	  return 28 /* 0x1c */;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (cached_type == TYPE_FSQRTD))
        {
	  return 28 /* 0x1c */;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type == TYPE_FFARITHD) || (cached_type == TYPE_FFARITHS)))
        {
	  return 2;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type == TYPE_F_MINMAXD) || (cached_type == TYPE_F_MINMAXS)))
        {
	  return 3;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type == TYPE_NEON_DUP) || (cached_type == TYPE_NEON_DUP_Q)))
        {
	  return 3;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type == TYPE_NEON_LOAD1_1REG) || (cached_type == TYPE_NEON_LOAD1_1REG_Q)))
        {
	  return 11 /* 0xb */;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type == TYPE_NEON_STORE1_1REG) || (cached_type == TYPE_NEON_STORE1_1REG_Q)))
        {
	  return 5;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type == TYPE_NEON_LOGIC) || (cached_type == TYPE_NEON_LOGIC_Q) || (cached_type == TYPE_NEON_BSL) || (cached_type == TYPE_NEON_BSL_Q) || (cached_type == TYPE_NEON_MOVE) || (cached_type == TYPE_NEON_MOVE_Q)))
        {
	  return 2;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type == TYPE_NEON_TO_GP) || (cached_type == TYPE_NEON_TO_GP_Q)))
        {
	  return 7;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type == TYPE_NEON_FROM_GP) || (cached_type == TYPE_NEON_FROM_GP_Q) || (cached_type == TYPE_NEON_INS) || (cached_type == TYPE_NEON_INS_Q)))
        {
	  return 14 /* 0xe */;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type == TYPE_NEON_SHIFT_IMM) || (cached_type == TYPE_NEON_SHIFT_IMM_Q) || (cached_type == TYPE_NEON_SHIFT_REG) || (cached_type == TYPE_NEON_SHIFT_REG_Q) || (cached_type == TYPE_NEON_SHIFT_IMM_LONG) || (cached_type == TYPE_NEON_SAT_SHIFT_IMM) || (cached_type == TYPE_NEON_SAT_SHIFT_IMM_Q) || (cached_type == TYPE_NEON_SAT_SHIFT_IMM_NARROW_Q) || (cached_type == TYPE_NEON_SAT_SHIFT_REG) || (cached_type == TYPE_NEON_SAT_SHIFT_REG_Q) || (cached_type == TYPE_NEON_SHIFT_IMM_NARROW_Q)))
        {
	  return 3;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type == TYPE_NEON_ADD) || (cached_type == TYPE_NEON_ADD_Q) || (cached_type == TYPE_NEON_SUB) || (cached_type == TYPE_NEON_SUB_Q) || (cached_type == TYPE_NEON_NEG) || (cached_type == TYPE_NEON_NEG_Q) || (cached_type == TYPE_NEON_ABS) || (cached_type == TYPE_NEON_ABS_Q) || (cached_type == TYPE_NEON_ABD_Q) || (cached_type == TYPE_NEON_ARITH_ACC) || (cached_type == TYPE_NEON_ARITH_ACC_Q) || (cached_type == TYPE_NEON_REDUC_ADD) || (cached_type == TYPE_NEON_REDUC_ADD_Q) || (cached_type == TYPE_NEON_ADD_HALVE) || (cached_type == TYPE_NEON_ADD_HALVE_Q) || (cached_type == TYPE_NEON_SUB_HALVE) || (cached_type == TYPE_NEON_SUB_HALVE_Q) || (cached_type == TYPE_NEON_QADD) || (cached_type == TYPE_NEON_QADD_Q) || (cached_type == TYPE_NEON_COMPARE) || (cached_type == TYPE_NEON_COMPARE_Q) || (cached_type == TYPE_NEON_COMPARE_ZERO) || (cached_type == TYPE_NEON_COMPARE_ZERO_Q) || (cached_type == TYPE_NEON_TST) || (cached_type == TYPE_NEON_TST_Q) || (cached_type == TYPE_NEON_MINMAX) || (cached_type == TYPE_NEON_MINMAX_Q)))
        {
	  return 3;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type == TYPE_NEON_ARITH_ACC) || (cached_type == TYPE_NEON_ARITH_ACC_Q)))
        {
	  return 6;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type == TYPE_NEON_MUL_B) || (cached_type == TYPE_NEON_MUL_B_Q) || (cached_type == TYPE_NEON_MUL_H) || (cached_type == TYPE_NEON_MUL_H_Q) || (cached_type == TYPE_NEON_MUL_S) || (cached_type == TYPE_NEON_MUL_S_Q) || (cached_type == TYPE_NEON_FP_MUL_S_SCALAR) || (cached_type == TYPE_NEON_FP_MUL_S_SCALAR_Q) || (cached_type == TYPE_NEON_FP_MUL_D_SCALAR_Q) || (cached_type == TYPE_NEON_MLA_B) || (cached_type == TYPE_NEON_MLA_B_Q) || (cached_type == TYPE_NEON_MLA_H) || (cached_type == TYPE_NEON_MLA_H_Q) || (cached_type == TYPE_NEON_MLA_S) || (cached_type == TYPE_NEON_MLA_S_Q) || (cached_type == TYPE_NEON_MLA_H_SCALAR) || (cached_type == TYPE_NEON_MLA_H_SCALAR_Q) || (cached_type == TYPE_NEON_MLA_S_SCALAR) || (cached_type == TYPE_NEON_MLA_S_SCALAR_Q) || (cached_type == TYPE_NEON_MLA_B_LONG) || (cached_type == TYPE_NEON_MLA_H_LONG) || (cached_type == TYPE_NEON_MLA_S_LONG) || (cached_type == TYPE_NEON_FP_MUL_S) || (cached_type == TYPE_NEON_FP_MUL_S_Q) || (cached_type == TYPE_NEON_FP_MUL_D) || (cached_type == TYPE_NEON_FP_MUL_D_Q) || (cached_type == TYPE_NEON_FP_MLA_S) || (cached_type == TYPE_NEON_FP_MLA_S_Q) || (cached_type == TYPE_NEON_FP_MLA_D) || (cached_type == TYPE_NEON_FP_MLA_D_Q) || (cached_type == TYPE_NEON_FP_MLA_S_SCALAR) || (cached_type == TYPE_NEON_FP_MLA_S_SCALAR_Q) || (cached_type == TYPE_NEON_FP_MLA_D_SCALAR_Q) || (cached_type == TYPE_NEON_SAT_MUL_B) || (cached_type == TYPE_NEON_SAT_MUL_B_Q) || (cached_type == TYPE_NEON_SAT_MUL_H) || (cached_type == TYPE_NEON_SAT_MUL_H_Q) || (cached_type == TYPE_NEON_SAT_MUL_S) || (cached_type == TYPE_NEON_SAT_MUL_S_Q) || (cached_type == TYPE_NEON_SAT_MUL_H_SCALAR) || (cached_type == TYPE_NEON_SAT_MUL_H_SCALAR_Q) || (cached_type == TYPE_NEON_SAT_MUL_S_SCALAR) || (cached_type == TYPE_NEON_SAT_MUL_S_SCALAR_Q) || (cached_type == TYPE_NEON_SAT_MUL_H_SCALAR_LONG) || (cached_type == TYPE_NEON_SAT_MUL_S_SCALAR_LONG) || (cached_type == TYPE_NEON_SAT_MLA_B_LONG) || (cached_type == TYPE_NEON_SAT_MLA_H_LONG) || (cached_type == TYPE_NEON_SAT_MLA_S_LONG) || (cached_type == TYPE_NEON_SAT_MLA_H_SCALAR_LONG) || (cached_type == TYPE_NEON_SAT_MLA_S_SCALAR_LONG)))
        {
	  return 5;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type == TYPE_NEON_FP_ABD_S) || (cached_type == TYPE_NEON_FP_ABD_S_Q) || (cached_type == TYPE_NEON_FP_ABD_D) || (cached_type == TYPE_NEON_FP_ABD_D_Q)))
        {
	  return 5;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type == TYPE_NEON_FP_ADDSUB_S) || (cached_type == TYPE_NEON_FP_ADDSUB_S_Q) || (cached_type == TYPE_NEON_FP_ADDSUB_D) || (cached_type == TYPE_NEON_FP_ADDSUB_D_Q)))
        {
	  return 5;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type == TYPE_NEON_FP_DIV_S) || (cached_type == TYPE_NEON_FP_DIV_S_Q) || (cached_type == TYPE_NEON_FP_DIV_D) || (cached_type == TYPE_NEON_FP_DIV_D_Q)))
        {
	  return 2;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type == TYPE_NEON_FP_NEG_S) || (cached_type == TYPE_NEON_FP_NEG_S_Q) || (cached_type == TYPE_NEON_FP_NEG_D) || (cached_type == TYPE_NEON_FP_NEG_D_Q) || (cached_type == TYPE_NEON_FP_ABS_S) || (cached_type == TYPE_NEON_FP_ABS_S_Q) || (cached_type == TYPE_NEON_FP_ABS_D) || (cached_type == TYPE_NEON_FP_ABS_D_Q)))
        {
	  return 2;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type == TYPE_NEON_FP_ROUND_S) || (cached_type == TYPE_NEON_FP_ROUND_S_Q) || (cached_type == TYPE_NEON_FP_ROUND_D) || (cached_type == TYPE_NEON_FP_ROUND_D_Q)))
        {
	  return 5;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type == TYPE_NEON_INT_TO_FP_S) || (cached_type == TYPE_NEON_INT_TO_FP_S_Q) || (cached_type == TYPE_NEON_INT_TO_FP_D) || (cached_type == TYPE_NEON_INT_TO_FP_D_Q) || (cached_type == TYPE_NEON_FP_CVT_WIDEN_S) || (cached_type == TYPE_NEON_FP_CVT_NARROW_S_Q) || (cached_type == TYPE_NEON_FP_CVT_NARROW_D_Q)))
        {
	  return 5;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type == TYPE_NEON_FP_REDUC_ADD_S) || (cached_type == TYPE_NEON_FP_REDUC_ADD_S_Q) || (cached_type == TYPE_NEON_FP_REDUC_ADD_D) || (cached_type == TYPE_NEON_FP_REDUC_ADD_D_Q)))
        {
	  return 5;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type == TYPE_NEON_CLS) || (cached_type == TYPE_NEON_CLS_Q)))
        {
	  return 2;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type == TYPE_NEON_STORE1_ONE_LANE) || (cached_type == TYPE_NEON_STORE1_ONE_LANE_Q) || (cached_type == TYPE_NEON_STP) || (cached_type == TYPE_NEON_STP_Q)))
        {
	  return 4;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type == TYPE_NEON_SUB_HALVE_NARROW_Q) || (cached_type == TYPE_NEON_ADD_HALVE_NARROW_Q)))
        {
	  return 6;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type == TYPE_NEON_SHIFT_ACC) || (cached_type == TYPE_NEON_SHIFT_ACC_Q)))
        {
	  return 6;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type == TYPE_NEON_FP_COMPARE_S) || (cached_type == TYPE_NEON_FP_COMPARE_S_Q) || (cached_type == TYPE_NEON_FP_COMPARE_D) || (cached_type == TYPE_NEON_FP_COMPARE_D_Q)))
        {
	  return 3;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type == TYPE_NEON_FP_SQRT_S) || (cached_type == TYPE_NEON_FP_SQRT_S_Q) || (cached_type == TYPE_NEON_FP_SQRT_D) || (cached_type == TYPE_NEON_FP_SQRT_D_Q)))
        {
	  return 2;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type == TYPE_NEON_TBL1) || (cached_type == TYPE_NEON_TBL1_Q)))
        {
	  return 4;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type == TYPE_NEON_TBL2) || (cached_type == TYPE_NEON_TBL2_Q)))
        {
	  return 8;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type == TYPE_NEON_PERMUTE) || (cached_type == TYPE_NEON_PERMUTE_Q)))
        {
	  return 3;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && (cached_type == TYPE_NEON_LOAD1_ALL_LANES))
        {
	  return 10 /* 0xa */;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type == TYPE_NEON_FP_RECPE_S) || (cached_type == TYPE_NEON_FP_RECPE_S_Q) || (cached_type == TYPE_NEON_FP_RECPE_D) || (cached_type == TYPE_NEON_FP_RECPE_D_Q) || (cached_type == TYPE_NEON_FP_RECPX_S) || (cached_type == TYPE_NEON_FP_RECPX_S_Q) || (cached_type == TYPE_NEON_FP_RECPX_D) || (cached_type == TYPE_NEON_FP_RECPX_D_Q)))
        {
	  return 3;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type == TYPE_NEON_FP_RECPS_S) || (cached_type == TYPE_NEON_FP_RECPS_S_Q) || (cached_type == TYPE_NEON_FP_RECPS_D) || (cached_type == TYPE_NEON_FP_RECPS_D_Q)))
        {
	  return 5;
        }
      else if ((((
#line 53 "../../gcc/config/arm/arm-tune.md"
(((enum attr_tune) arm_tune))) == (
(TUNE_XGENE1)))) && ((cached_type == TYPE_NEON_MUL_D_LONG) || (cached_type == TYPE_CRYPTO_PMULL)))
        {
	  return 5;
        }
      else
        {
	  return 0;
        }

    }
}

