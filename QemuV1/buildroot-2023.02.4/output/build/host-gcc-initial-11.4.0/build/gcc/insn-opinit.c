/* Generated automatically by the program `genopinit'
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
#include "varasm.h"
#include "stor-layout.h"
#include "calls.h"
#include "memmodel.h"
#include "tm_p.h"
#include "flags.h"
#include "insn-config.h"
#include "expmed.h"
#include "dojump.h"
#include "explow.h"
#include "emit-rtl.h"
#include "stmt.h"
#include "expr.h"
#include "insn-codes.h"
#include "optabs.h"

struct optab_pat {
  unsigned scode;
  enum insn_code icode;
};

static const struct optab_pat pats[NUM_OPTAB_PATTERNS] = {
  { 0x011a1b, CODE_FOR_extendqihi2 },
  { 0x011a1c, CODE_FOR_extendqisi2 },
  { 0x011a1d, CODE_FOR_extendqidi2 },
  { 0x011b1c, CODE_FOR_extendhisi2 },
  { 0x011b1d, CODE_FOR_extendhidi2 },
  { 0x011c1d, CODE_FOR_extendsidi2 },
  { 0x013537, CODE_FOR_extendhfsf2 },
  { 0x013538, CODE_FOR_extendhfdf2 },
  { 0x013738, CODE_FOR_extendsfdf2 },
  { 0x023735, CODE_FOR_truncsfhf2 },
  { 0x023835, CODE_FOR_truncdfhf2 },
  { 0x023837, CODE_FOR_truncdfsf2 },
  { 0x031a1c, CODE_FOR_zero_extendqisi2 },
  { 0x031a1d, CODE_FOR_zero_extendqidi2 },
  { 0x031b1c, CODE_FOR_zero_extendhisi2 },
  { 0x031b1d, CODE_FOR_zero_extendhidi2 },
  { 0x031c1d, CODE_FOR_zero_extendsidi2 },
  { 0x061c35, CODE_FOR_floatsihf2 },
  { 0x061c37, CODE_FOR_floatsisf2 },
  { 0x061c38, CODE_FOR_floatsidf2 },
  { 0x061d35, CODE_FOR_floatdihf2 },
  { 0x064d5c, CODE_FOR_floatv2siv2sf2 },
  { 0x06505f, CODE_FOR_floatv4siv4sf2 },
  { 0x071c37, CODE_FOR_floatunssisf2 },
  { 0x071c38, CODE_FOR_floatunssidf2 },
  { 0x074d5c, CODE_FOR_floatunsv2siv2sf2 },
  { 0x07505f, CODE_FOR_floatunsv4siv4sf2 },
  { 0x09371c, CODE_FOR_lroundsfsi2 },
  { 0x09381c, CODE_FOR_lrounddfsi2 },
  { 0x0a371c, CODE_FOR_lfloorsfsi2 },
  { 0x0a381c, CODE_FOR_lfloordfsi2 },
  { 0x0b371c, CODE_FOR_lceilsfsi2 },
  { 0x0b381c, CODE_FOR_lceildfsi2 },
  { 0x10351c, CODE_FOR_fix_trunchfsi2 },
  { 0x10351d, CODE_FOR_fix_trunchfdi2 },
  { 0x10371c, CODE_FOR_fix_truncsfsi2 },
  { 0x10381c, CODE_FOR_fix_truncdfsi2 },
  { 0x105c4d, CODE_FOR_fix_truncv2sfv2si2 },
  { 0x105f50, CODE_FOR_fix_truncv4sfv4si2 },
  { 0x11371c, CODE_FOR_fixuns_truncsfsi2 },
  { 0x11381c, CODE_FOR_fixuns_truncdfsi2 },
  { 0x115c4d, CODE_FOR_fixuns_truncv2sfv2si2 },
  { 0x115f50, CODE_FOR_fixuns_truncv4sfv4si2 },
  { 0x121b1c, CODE_FOR_mulhisi3 },
  { 0x121c1d, CODE_FOR_mulsidi3 },
  { 0x131c1d, CODE_FOR_umulsidi3 },
  { 0x151b1c, CODE_FOR_maddhisi4 },
  { 0x151b1d, CODE_FOR_maddhidi4 },
  { 0x151c1d, CODE_FOR_maddsidi4 },
  { 0x161c1d, CODE_FOR_umaddsidi4 },
  { 0x1d1d1d, CODE_FOR_vec_load_lanesdidi },
  { 0x1d1d1e, CODE_FOR_vec_load_lanestidi },
  { 0x1d1d1f, CODE_FOR_vec_load_laneseidi },
  { 0x1d1d20, CODE_FOR_vec_load_lanesoidi },
  { 0x1d4b1e, CODE_FOR_vec_load_lanestiv8qi },
  { 0x1d4b1f, CODE_FOR_vec_load_laneseiv8qi },
  { 0x1d4b20, CODE_FOR_vec_load_lanesoiv8qi },
  { 0x1d4b4b, CODE_FOR_vec_load_lanesv8qiv8qi },
  { 0x1d4c1e, CODE_FOR_vec_load_lanestiv4hi },
  { 0x1d4c1f, CODE_FOR_vec_load_laneseiv4hi },
  { 0x1d4c20, CODE_FOR_vec_load_lanesoiv4hi },
  { 0x1d4c4c, CODE_FOR_vec_load_lanesv4hiv4hi },
  { 0x1d4d1e, CODE_FOR_vec_load_lanestiv2si },
  { 0x1d4d1f, CODE_FOR_vec_load_laneseiv2si },
  { 0x1d4d20, CODE_FOR_vec_load_lanesoiv2si },
  { 0x1d4d4d, CODE_FOR_vec_load_lanesv2siv2si },
  { 0x1d4e20, CODE_FOR_vec_load_lanesoiv16qi },
  { 0x1d4e21, CODE_FOR_vec_load_lanesciv16qi },
  { 0x1d4e22, CODE_FOR_vec_load_lanesxiv16qi },
  { 0x1d4e4e, CODE_FOR_vec_load_lanesv16qiv16qi },
  { 0x1d4f20, CODE_FOR_vec_load_lanesoiv8hi },
  { 0x1d4f21, CODE_FOR_vec_load_lanesciv8hi },
  { 0x1d4f22, CODE_FOR_vec_load_lanesxiv8hi },
  { 0x1d4f4f, CODE_FOR_vec_load_lanesv8hiv8hi },
  { 0x1d5020, CODE_FOR_vec_load_lanesoiv4si },
  { 0x1d5021, CODE_FOR_vec_load_lanesciv4si },
  { 0x1d5022, CODE_FOR_vec_load_lanesxiv4si },
  { 0x1d5050, CODE_FOR_vec_load_lanesv4siv4si },
  { 0x1d5151, CODE_FOR_vec_load_lanesv2div2di },
  { 0x1d5a1e, CODE_FOR_vec_load_lanestiv4hf },
  { 0x1d5a1f, CODE_FOR_vec_load_laneseiv4hf },
  { 0x1d5a20, CODE_FOR_vec_load_lanesoiv4hf },
  { 0x1d5a5a, CODE_FOR_vec_load_lanesv4hfv4hf },
  { 0x1d5b1e, CODE_FOR_vec_load_lanestiv4bf },
  { 0x1d5b1f, CODE_FOR_vec_load_laneseiv4bf },
  { 0x1d5b20, CODE_FOR_vec_load_lanesoiv4bf },
  { 0x1d5b5b, CODE_FOR_vec_load_lanesv4bfv4bf },
  { 0x1d5c1e, CODE_FOR_vec_load_lanestiv2sf },
  { 0x1d5c1f, CODE_FOR_vec_load_laneseiv2sf },
  { 0x1d5c20, CODE_FOR_vec_load_lanesoiv2sf },
  { 0x1d5c5c, CODE_FOR_vec_load_lanesv2sfv2sf },
  { 0x1d5d20, CODE_FOR_vec_load_lanesoiv8hf },
  { 0x1d5d21, CODE_FOR_vec_load_lanesciv8hf },
  { 0x1d5d22, CODE_FOR_vec_load_lanesxiv8hf },
  { 0x1d5d5d, CODE_FOR_vec_load_lanesv8hfv8hf },
  { 0x1d5e5e, CODE_FOR_vec_load_lanesv8bfv8bf },
  { 0x1d5f20, CODE_FOR_vec_load_lanesoiv4sf },
  { 0x1d5f21, CODE_FOR_vec_load_lanesciv4sf },
  { 0x1d5f22, CODE_FOR_vec_load_lanesxiv4sf },
  { 0x1d5f5f, CODE_FOR_vec_load_lanesv4sfv4sf },
  { 0x1e1d1d, CODE_FOR_vec_store_lanesdidi },
  { 0x1e1d1e, CODE_FOR_vec_store_lanestidi },
  { 0x1e1d1f, CODE_FOR_vec_store_laneseidi },
  { 0x1e1d20, CODE_FOR_vec_store_lanesoidi },
  { 0x1e4b1e, CODE_FOR_vec_store_lanestiv8qi },
  { 0x1e4b1f, CODE_FOR_vec_store_laneseiv8qi },
  { 0x1e4b20, CODE_FOR_vec_store_lanesoiv8qi },
  { 0x1e4b4b, CODE_FOR_vec_store_lanesv8qiv8qi },
  { 0x1e4c1e, CODE_FOR_vec_store_lanestiv4hi },
  { 0x1e4c1f, CODE_FOR_vec_store_laneseiv4hi },
  { 0x1e4c20, CODE_FOR_vec_store_lanesoiv4hi },
  { 0x1e4c4c, CODE_FOR_vec_store_lanesv4hiv4hi },
  { 0x1e4d1e, CODE_FOR_vec_store_lanestiv2si },
  { 0x1e4d1f, CODE_FOR_vec_store_laneseiv2si },
  { 0x1e4d20, CODE_FOR_vec_store_lanesoiv2si },
  { 0x1e4d4d, CODE_FOR_vec_store_lanesv2siv2si },
  { 0x1e4e20, CODE_FOR_vec_store_lanesoiv16qi },
  { 0x1e4e21, CODE_FOR_vec_store_lanesciv16qi },
  { 0x1e4e22, CODE_FOR_vec_store_lanesxiv16qi },
  { 0x1e4e4e, CODE_FOR_vec_store_lanesv16qiv16qi },
  { 0x1e4f20, CODE_FOR_vec_store_lanesoiv8hi },
  { 0x1e4f21, CODE_FOR_vec_store_lanesciv8hi },
  { 0x1e4f22, CODE_FOR_vec_store_lanesxiv8hi },
  { 0x1e4f4f, CODE_FOR_vec_store_lanesv8hiv8hi },
  { 0x1e5020, CODE_FOR_vec_store_lanesoiv4si },
  { 0x1e5021, CODE_FOR_vec_store_lanesciv4si },
  { 0x1e5022, CODE_FOR_vec_store_lanesxiv4si },
  { 0x1e5050, CODE_FOR_vec_store_lanesv4siv4si },
  { 0x1e5151, CODE_FOR_vec_store_lanesv2div2di },
  { 0x1e5a1e, CODE_FOR_vec_store_lanestiv4hf },
  { 0x1e5a1f, CODE_FOR_vec_store_laneseiv4hf },
  { 0x1e5a20, CODE_FOR_vec_store_lanesoiv4hf },
  { 0x1e5a5a, CODE_FOR_vec_store_lanesv4hfv4hf },
  { 0x1e5b1e, CODE_FOR_vec_store_lanestiv4bf },
  { 0x1e5b1f, CODE_FOR_vec_store_laneseiv4bf },
  { 0x1e5b20, CODE_FOR_vec_store_lanesoiv4bf },
  { 0x1e5b5b, CODE_FOR_vec_store_lanesv4bfv4bf },
  { 0x1e5c1e, CODE_FOR_vec_store_lanestiv2sf },
  { 0x1e5c1f, CODE_FOR_vec_store_laneseiv2sf },
  { 0x1e5c20, CODE_FOR_vec_store_lanesoiv2sf },
  { 0x1e5c5c, CODE_FOR_vec_store_lanesv2sfv2sf },
  { 0x1e5d20, CODE_FOR_vec_store_lanesoiv8hf },
  { 0x1e5d21, CODE_FOR_vec_store_lanesciv8hf },
  { 0x1e5d22, CODE_FOR_vec_store_lanesxiv8hf },
  { 0x1e5d5d, CODE_FOR_vec_store_lanesv8hfv8hf },
  { 0x1e5e5e, CODE_FOR_vec_store_lanesv8bfv8bf },
  { 0x1e5f20, CODE_FOR_vec_store_lanesoiv4sf },
  { 0x1e5f21, CODE_FOR_vec_store_lanesciv4sf },
  { 0x1e5f22, CODE_FOR_vec_store_lanesxiv4sf },
  { 0x1e5f5f, CODE_FOR_vec_store_lanesv4sfv4sf },
  { 0x214b4b, CODE_FOR_vcondv8qiv8qi },
  { 0x214c4c, CODE_FOR_vcondv4hiv4hi },
  { 0x214d4d, CODE_FOR_vcondv2siv2si },
  { 0x214d5c, CODE_FOR_vcondv2sfv2si },
  { 0x214e4e, CODE_FOR_vcondv16qiv16qi },
  { 0x214f4f, CODE_FOR_vcondv8hiv8hi },
  { 0x215050, CODE_FOR_vcondv4siv4si },
  { 0x21505f, CODE_FOR_vcondv4sfv4si },
  { 0x215c4d, CODE_FOR_vcondv2siv2sf },
  { 0x215c5c, CODE_FOR_vcondv2sfv2sf },
  { 0x215f50, CODE_FOR_vcondv4siv4sf },
  { 0x215f5f, CODE_FOR_vcondv4sfv4sf },
  { 0x224b4b, CODE_FOR_vconduv8qiv8qi },
  { 0x224c4c, CODE_FOR_vconduv4hiv4hi },
  { 0x224d4d, CODE_FOR_vconduv2siv2si },
  { 0x224d5c, CODE_FOR_vconduv2sfv2si },
  { 0x224e4e, CODE_FOR_vconduv16qiv16qi },
  { 0x224f4f, CODE_FOR_vconduv8hiv8hi },
  { 0x225050, CODE_FOR_vconduv4siv4si },
  { 0x22505f, CODE_FOR_vconduv4sfv4si },
  { 0x244b4b, CODE_FOR_vcond_mask_v8qiv8qi },
  { 0x244c4c, CODE_FOR_vcond_mask_v4hiv4hi },
  { 0x244d4d, CODE_FOR_vcond_mask_v2siv2si },
  { 0x244d5c, CODE_FOR_vcond_mask_v2sfv2si },
  { 0x244e4e, CODE_FOR_vcond_mask_v16qiv16qi },
  { 0x244f4f, CODE_FOR_vcond_mask_v8hiv8hi },
  { 0x245050, CODE_FOR_vcond_mask_v4siv4si },
  { 0x24505f, CODE_FOR_vcond_mask_v4sfv4si },
  { 0x254b4b, CODE_FOR_vec_cmpv8qiv8qi },
  { 0x254c4c, CODE_FOR_vec_cmpv4hiv4hi },
  { 0x254d4d, CODE_FOR_vec_cmpv2siv2si },
  { 0x254d5c, CODE_FOR_vec_cmpv2sfv2si },
  { 0x254e4e, CODE_FOR_vec_cmpv16qiv16qi },
  { 0x254f4f, CODE_FOR_vec_cmpv8hiv8hi },
  { 0x255050, CODE_FOR_vec_cmpv4siv4si },
  { 0x25505f, CODE_FOR_vec_cmpv4sfv4si },
  { 0x264b4b, CODE_FOR_vec_cmpuv8qiv8qi },
  { 0x264c4c, CODE_FOR_vec_cmpuv4hiv4hi },
  { 0x264d4d, CODE_FOR_vec_cmpuv2siv2si },
  { 0x264e4e, CODE_FOR_vec_cmpuv16qiv16qi },
  { 0x264f4f, CODE_FOR_vec_cmpuv8hiv8hi },
  { 0x265050, CODE_FOR_vec_cmpuv4siv4si },
  { 0x2e1a4b, CODE_FOR_vec_extractv8qiqi },
  { 0x2e1a4e, CODE_FOR_vec_extractv16qiqi },
  { 0x2e1b4c, CODE_FOR_vec_extractv4hihi },
  { 0x2e1b4f, CODE_FOR_vec_extractv8hihi },
  { 0x2e1c4d, CODE_FOR_vec_extractv2sisi },
  { 0x2e1c50, CODE_FOR_vec_extractv4sisi },
  { 0x2e1d51, CODE_FOR_vec_extractv2didi },
  { 0x2e355a, CODE_FOR_vec_extractv4hfhf },
  { 0x2e355d, CODE_FOR_vec_extractv8hfhf },
  { 0x2e365b, CODE_FOR_vec_extractv4bfbf },
  { 0x2e375c, CODE_FOR_vec_extractv2sfsf },
  { 0x2e375f, CODE_FOR_vec_extractv4sfsf },
  { 0x2f1a4b, CODE_FOR_vec_initv8qiqi },
  { 0x2f1a4e, CODE_FOR_vec_initv16qiqi },
  { 0x2f1b4c, CODE_FOR_vec_initv4hihi },
  { 0x2f1b4f, CODE_FOR_vec_initv8hihi },
  { 0x2f1c4d, CODE_FOR_vec_initv2sisi },
  { 0x2f1c50, CODE_FOR_vec_initv4sisi },
  { 0x2f1d51, CODE_FOR_vec_initv2didi },
  { 0x2f355a, CODE_FOR_vec_initv4hfhf },
  { 0x2f355d, CODE_FOR_vec_initv8hfhf },
  { 0x2f375c, CODE_FOR_vec_initv2sfsf },
  { 0x2f375f, CODE_FOR_vec_initv4sfsf },
  { 0x31001c, CODE_FOR_addsi3 },
  { 0x31001d, CODE_FOR_adddi3 },
  { 0x310023, CODE_FOR_addqq3 },
  { 0x310024, CODE_FOR_addhq3 },
  { 0x310025, CODE_FOR_addsq3 },
  { 0x310028, CODE_FOR_adduqq3 },
  { 0x310029, CODE_FOR_adduhq3 },
  { 0x31002a, CODE_FOR_addusq3 },
  { 0x31002d, CODE_FOR_addha3 },
  { 0x31002e, CODE_FOR_addsa3 },
  { 0x310031, CODE_FOR_adduha3 },
  { 0x310032, CODE_FOR_addusa3 },
  { 0x310035, CODE_FOR_addhf3 },
  { 0x310037, CODE_FOR_addsf3 },
  { 0x310038, CODE_FOR_adddf3 },
  { 0x31004b, CODE_FOR_addv8qi3 },
  { 0x31004c, CODE_FOR_addv4hi3 },
  { 0x31004d, CODE_FOR_addv2si3 },
  { 0x31004e, CODE_FOR_addv16qi3 },
  { 0x31004f, CODE_FOR_addv8hi3 },
  { 0x310050, CODE_FOR_addv4si3 },
  { 0x310051, CODE_FOR_addv2di3 },
  { 0x310052, CODE_FOR_addv4qq3 },
  { 0x310053, CODE_FOR_addv2hq3 },
  { 0x310056, CODE_FOR_addv2ha3 },
  { 0x31005a, CODE_FOR_addv4hf3 },
  { 0x31005c, CODE_FOR_addv2sf3 },
  { 0x31005d, CODE_FOR_addv8hf3 },
  { 0x31005f, CODE_FOR_addv4sf3 },
  { 0x330023, CODE_FOR_ssaddqq3 },
  { 0x330024, CODE_FOR_ssaddhq3 },
  { 0x330025, CODE_FOR_ssaddsq3 },
  { 0x33002d, CODE_FOR_ssaddha3 },
  { 0x33002e, CODE_FOR_ssaddsa3 },
  { 0x330052, CODE_FOR_ssaddv4qq3 },
  { 0x330053, CODE_FOR_ssaddv2hq3 },
  { 0x330056, CODE_FOR_ssaddv2ha3 },
  { 0x340028, CODE_FOR_usadduqq3 },
  { 0x340029, CODE_FOR_usadduhq3 },
  { 0x340031, CODE_FOR_usadduha3 },
  { 0x340054, CODE_FOR_usaddv4uqq3 },
  { 0x340055, CODE_FOR_usaddv2uhq3 },
  { 0x340057, CODE_FOR_usaddv2uha3 },
  { 0x35001c, CODE_FOR_subsi3 },
  { 0x35001d, CODE_FOR_subdi3 },
  { 0x350023, CODE_FOR_subqq3 },
  { 0x350024, CODE_FOR_subhq3 },
  { 0x350025, CODE_FOR_subsq3 },
  { 0x350028, CODE_FOR_subuqq3 },
  { 0x350029, CODE_FOR_subuhq3 },
  { 0x35002a, CODE_FOR_subusq3 },
  { 0x35002d, CODE_FOR_subha3 },
  { 0x35002e, CODE_FOR_subsa3 },
  { 0x350031, CODE_FOR_subuha3 },
  { 0x350032, CODE_FOR_subusa3 },
  { 0x350035, CODE_FOR_subhf3 },
  { 0x350037, CODE_FOR_subsf3 },
  { 0x350038, CODE_FOR_subdf3 },
  { 0x35004b, CODE_FOR_subv8qi3 },
  { 0x35004c, CODE_FOR_subv4hi3 },
  { 0x35004d, CODE_FOR_subv2si3 },
  { 0x35004e, CODE_FOR_subv16qi3 },
  { 0x35004f, CODE_FOR_subv8hi3 },
  { 0x350050, CODE_FOR_subv4si3 },
  { 0x350051, CODE_FOR_subv2di3 },
  { 0x350052, CODE_FOR_subv4qq3 },
  { 0x350053, CODE_FOR_subv2hq3 },
  { 0x350056, CODE_FOR_subv2ha3 },
  { 0x35005a, CODE_FOR_subv4hf3 },
  { 0x35005c, CODE_FOR_subv2sf3 },
  { 0x35005d, CODE_FOR_subv8hf3 },
  { 0x35005f, CODE_FOR_subv4sf3 },
  { 0x36001c, CODE_FOR_subvsi3 },
  { 0x370023, CODE_FOR_sssubqq3 },
  { 0x370024, CODE_FOR_sssubhq3 },
  { 0x370025, CODE_FOR_sssubsq3 },
  { 0x37002d, CODE_FOR_sssubha3 },
  { 0x37002e, CODE_FOR_sssubsa3 },
  { 0x370052, CODE_FOR_sssubv4qq3 },
  { 0x370053, CODE_FOR_sssubv2hq3 },
  { 0x370056, CODE_FOR_sssubv2ha3 },
  { 0x380028, CODE_FOR_ussubuqq3 },
  { 0x380029, CODE_FOR_ussubuhq3 },
  { 0x380031, CODE_FOR_ussubuha3 },
  { 0x380054, CODE_FOR_ussubv4uqq3 },
  { 0x380055, CODE_FOR_ussubv2uhq3 },
  { 0x380057, CODE_FOR_ussubv2uha3 },
  { 0x39001b, CODE_FOR_mulhi3 },
  { 0x39001c, CODE_FOR_mulsi3 },
  { 0x390023, CODE_FOR_mulqq3 },
  { 0x390024, CODE_FOR_mulhq3 },
  { 0x390025, CODE_FOR_mulsq3 },
  { 0x39002d, CODE_FOR_mulha3 },
  { 0x39002e, CODE_FOR_mulsa3 },
  { 0x390031, CODE_FOR_muluha3 },
  { 0x390032, CODE_FOR_mulusa3 },
  { 0x390035, CODE_FOR_mulhf3 },
  { 0x390037, CODE_FOR_mulsf3 },
  { 0x390038, CODE_FOR_muldf3 },
  { 0x39004b, CODE_FOR_mulv8qi3 },
  { 0x39004c, CODE_FOR_mulv4hi3 },
  { 0x39004d, CODE_FOR_mulv2si3 },
  { 0x39004e, CODE_FOR_mulv16qi3 },
  { 0x39004f, CODE_FOR_mulv8hi3 },
  { 0x390050, CODE_FOR_mulv4si3 },
  { 0x39005a, CODE_FOR_mulv4hf3 },
  { 0x39005c, CODE_FOR_mulv2sf3 },
  { 0x39005d, CODE_FOR_mulv8hf3 },
  { 0x39005f, CODE_FOR_mulv4sf3 },
  { 0x3b002d, CODE_FOR_ssmulha3 },
  { 0x3b002e, CODE_FOR_ssmulsa3 },
  { 0x3c0031, CODE_FOR_usmuluha3 },
  { 0x3c0032, CODE_FOR_usmulusa3 },
  { 0x3d001c, CODE_FOR_divsi3 },
  { 0x3d0035, CODE_FOR_divhf3 },
  { 0x3d0037, CODE_FOR_divsf3 },
  { 0x3d0038, CODE_FOR_divdf3 },
  { 0x3d005c, CODE_FOR_divv2sf3 },
  { 0x3d005f, CODE_FOR_divv4sf3 },
  { 0x40001c, CODE_FOR_udivsi3 },
  { 0x44001c, CODE_FOR_modsi3 },
  { 0x47001c, CODE_FOR_andsi3 },
  { 0x47001d, CODE_FOR_anddi3 },
  { 0x47004b, CODE_FOR_andv8qi3 },
  { 0x47004c, CODE_FOR_andv4hi3 },
  { 0x47004d, CODE_FOR_andv2si3 },
  { 0x47004e, CODE_FOR_andv16qi3 },
  { 0x47004f, CODE_FOR_andv8hi3 },
  { 0x470050, CODE_FOR_andv4si3 },
  { 0x470051, CODE_FOR_andv2di3 },
  { 0x47005a, CODE_FOR_andv4hf3 },
  { 0x47005c, CODE_FOR_andv2sf3 },
  { 0x47005d, CODE_FOR_andv8hf3 },
  { 0x47005f, CODE_FOR_andv4sf3 },
  { 0x48001c, CODE_FOR_iorsi3 },
  { 0x48001d, CODE_FOR_iordi3 },
  { 0x48004b, CODE_FOR_iorv8qi3 },
  { 0x48004c, CODE_FOR_iorv4hi3 },
  { 0x48004d, CODE_FOR_iorv2si3 },
  { 0x48004e, CODE_FOR_iorv16qi3 },
  { 0x48004f, CODE_FOR_iorv8hi3 },
  { 0x480050, CODE_FOR_iorv4si3 },
  { 0x480051, CODE_FOR_iorv2di3 },
  { 0x48005a, CODE_FOR_iorv4hf3 },
  { 0x48005c, CODE_FOR_iorv2sf3 },
  { 0x48005d, CODE_FOR_iorv8hf3 },
  { 0x48005f, CODE_FOR_iorv4sf3 },
  { 0x49001c, CODE_FOR_xorsi3 },
  { 0x49001d, CODE_FOR_xordi3 },
  { 0x49004b, CODE_FOR_xorv8qi3 },
  { 0x49004c, CODE_FOR_xorv4hi3 },
  { 0x49004d, CODE_FOR_xorv2si3 },
  { 0x49004e, CODE_FOR_xorv16qi3 },
  { 0x49004f, CODE_FOR_xorv8hi3 },
  { 0x490050, CODE_FOR_xorv4si3 },
  { 0x490051, CODE_FOR_xorv2di3 },
  { 0x49005a, CODE_FOR_xorv4hf3 },
  { 0x49005c, CODE_FOR_xorv2sf3 },
  { 0x49005d, CODE_FOR_xorv8hf3 },
  { 0x49005f, CODE_FOR_xorv4sf3 },
  { 0x4a001c, CODE_FOR_ashlsi3 },
  { 0x4a001d, CODE_FOR_ashldi3 },
  { 0x4d001c, CODE_FOR_ashrsi3 },
  { 0x4d001d, CODE_FOR_ashrdi3 },
  { 0x4e001c, CODE_FOR_lshrsi3 },
  { 0x4e001d, CODE_FOR_lshrdi3 },
  { 0x4f001c, CODE_FOR_rotlsi3 },
  { 0x50001c, CODE_FOR_rotrsi3 },
  { 0x51004b, CODE_FOR_vashlv8qi3 },
  { 0x51004c, CODE_FOR_vashlv4hi3 },
  { 0x51004d, CODE_FOR_vashlv2si3 },
  { 0x51004e, CODE_FOR_vashlv16qi3 },
  { 0x51004f, CODE_FOR_vashlv8hi3 },
  { 0x510050, CODE_FOR_vashlv4si3 },
  { 0x52004b, CODE_FOR_vashrv8qi3 },
  { 0x52004c, CODE_FOR_vashrv4hi3 },
  { 0x52004d, CODE_FOR_vashrv2si3 },
  { 0x52004e, CODE_FOR_vashrv16qi3 },
  { 0x52004f, CODE_FOR_vashrv8hi3 },
  { 0x520050, CODE_FOR_vashrv4si3 },
  { 0x53004b, CODE_FOR_vlshrv8qi3 },
  { 0x53004c, CODE_FOR_vlshrv4hi3 },
  { 0x53004d, CODE_FOR_vlshrv2si3 },
  { 0x53004e, CODE_FOR_vlshrv16qi3 },
  { 0x53004f, CODE_FOR_vlshrv8hi3 },
  { 0x530050, CODE_FOR_vlshrv4si3 },
  { 0x56001c, CODE_FOR_sminsi3 },
  { 0x560037, CODE_FOR_sminsf3 },
  { 0x560038, CODE_FOR_smindf3 },
  { 0x56004b, CODE_FOR_sminv8qi3 },
  { 0x56004c, CODE_FOR_sminv4hi3 },
  { 0x56004d, CODE_FOR_sminv2si3 },
  { 0x56004e, CODE_FOR_sminv16qi3 },
  { 0x56004f, CODE_FOR_sminv8hi3 },
  { 0x560050, CODE_FOR_sminv4si3 },
  { 0x56005c, CODE_FOR_sminv2sf3 },
  { 0x56005f, CODE_FOR_sminv4sf3 },
  { 0x57001c, CODE_FOR_smaxsi3 },
  { 0x570037, CODE_FOR_smaxsf3 },
  { 0x570038, CODE_FOR_smaxdf3 },
  { 0x57004b, CODE_FOR_smaxv8qi3 },
  { 0x57004c, CODE_FOR_smaxv4hi3 },
  { 0x57004d, CODE_FOR_smaxv2si3 },
  { 0x57004e, CODE_FOR_smaxv16qi3 },
  { 0x57004f, CODE_FOR_smaxv8hi3 },
  { 0x570050, CODE_FOR_smaxv4si3 },
  { 0x57005c, CODE_FOR_smaxv2sf3 },
  { 0x57005f, CODE_FOR_smaxv4sf3 },
  { 0x58001c, CODE_FOR_uminsi3 },
  { 0x58004b, CODE_FOR_uminv8qi3 },
  { 0x58004c, CODE_FOR_uminv4hi3 },
  { 0x58004d, CODE_FOR_uminv2si3 },
  { 0x58004e, CODE_FOR_uminv16qi3 },
  { 0x58004f, CODE_FOR_uminv8hi3 },
  { 0x580050, CODE_FOR_uminv4si3 },
  { 0x59001c, CODE_FOR_umaxsi3 },
  { 0x59004b, CODE_FOR_umaxv8qi3 },
  { 0x59004c, CODE_FOR_umaxv4hi3 },
  { 0x59004d, CODE_FOR_umaxv2si3 },
  { 0x59004e, CODE_FOR_umaxv16qi3 },
  { 0x59004f, CODE_FOR_umaxv8hi3 },
  { 0x590050, CODE_FOR_umaxv4si3 },
  { 0x5a001c, CODE_FOR_negsi2 },
  { 0x5a0035, CODE_FOR_neghf2 },
  { 0x5a0037, CODE_FOR_negsf2 },
  { 0x5a0038, CODE_FOR_negdf2 },
  { 0x5a004b, CODE_FOR_negv8qi2 },
  { 0x5a004c, CODE_FOR_negv4hi2 },
  { 0x5a004d, CODE_FOR_negv2si2 },
  { 0x5a004e, CODE_FOR_negv16qi2 },
  { 0x5a004f, CODE_FOR_negv8hi2 },
  { 0x5a0050, CODE_FOR_negv4si2 },
  { 0x5a005a, CODE_FOR_negv4hf2 },
  { 0x5a005c, CODE_FOR_negv2sf2 },
  { 0x5a005d, CODE_FOR_negv8hf2 },
  { 0x5a005f, CODE_FOR_negv4sf2 },
  { 0x5e001c, CODE_FOR_abssi2 },
  { 0x5e0035, CODE_FOR_abshf2 },
  { 0x5e0037, CODE_FOR_abssf2 },
  { 0x5e0038, CODE_FOR_absdf2 },
  { 0x5e004b, CODE_FOR_absv8qi2 },
  { 0x5e004c, CODE_FOR_absv4hi2 },
  { 0x5e004d, CODE_FOR_absv2si2 },
  { 0x5e004e, CODE_FOR_absv16qi2 },
  { 0x5e004f, CODE_FOR_absv8hi2 },
  { 0x5e0050, CODE_FOR_absv4si2 },
  { 0x5e005c, CODE_FOR_absv2sf2 },
  { 0x5e005f, CODE_FOR_absv4sf2 },
  { 0x60001c, CODE_FOR_one_cmplsi2 },
  { 0x60001d, CODE_FOR_one_cmpldi2 },
  { 0x60004b, CODE_FOR_one_cmplv8qi2 },
  { 0x60004c, CODE_FOR_one_cmplv4hi2 },
  { 0x60004d, CODE_FOR_one_cmplv2si2 },
  { 0x60004e, CODE_FOR_one_cmplv16qi2 },
  { 0x60004f, CODE_FOR_one_cmplv8hi2 },
  { 0x600050, CODE_FOR_one_cmplv4si2 },
  { 0x600051, CODE_FOR_one_cmplv2di2 },
  { 0x60005a, CODE_FOR_one_cmplv4hf2 },
  { 0x60005c, CODE_FOR_one_cmplv2sf2 },
  { 0x60005d, CODE_FOR_one_cmplv8hf2 },
  { 0x60005f, CODE_FOR_one_cmplv4sf2 },
  { 0x61001b, CODE_FOR_bswaphi2 },
  { 0x61001c, CODE_FOR_bswapsi2 },
  { 0x63001c, CODE_FOR_clzsi2 },
  { 0x63004b, CODE_FOR_clzv8qi2 },
  { 0x63004c, CODE_FOR_clzv4hi2 },
  { 0x63004d, CODE_FOR_clzv2si2 },
  { 0x63004e, CODE_FOR_clzv16qi2 },
  { 0x63004f, CODE_FOR_clzv8hi2 },
  { 0x630050, CODE_FOR_clzv4si2 },
  { 0x64001c, CODE_FOR_ctzsi2 },
  { 0x66004b, CODE_FOR_popcountv8qi2 },
  { 0x66004e, CODE_FOR_popcountv16qi2 },
  { 0x720037, CODE_FOR_sqrtsf2 },
  { 0x720038, CODE_FOR_sqrtdf2 },
  { 0x81001a, CODE_FOR_movqi },
  { 0x81001b, CODE_FOR_movhi },
  { 0x81001c, CODE_FOR_movsi },
  { 0x81001d, CODE_FOR_movdi },
  { 0x81001e, CODE_FOR_movti },
  { 0x81001f, CODE_FOR_movei },
  { 0x810020, CODE_FOR_movoi },
  { 0x810021, CODE_FOR_movci },
  { 0x810022, CODE_FOR_movxi },
  { 0x810035, CODE_FOR_movhf },
  { 0x810036, CODE_FOR_movbf },
  { 0x810037, CODE_FOR_movsf },
  { 0x810038, CODE_FOR_movdf },
  { 0x81004b, CODE_FOR_movv8qi },
  { 0x81004c, CODE_FOR_movv4hi },
  { 0x81004d, CODE_FOR_movv2si },
  { 0x81004e, CODE_FOR_movv16qi },
  { 0x81004f, CODE_FOR_movv8hi },
  { 0x810050, CODE_FOR_movv4si },
  { 0x810051, CODE_FOR_movv2di },
  { 0x81005a, CODE_FOR_movv4hf },
  { 0x81005b, CODE_FOR_movv4bf },
  { 0x81005c, CODE_FOR_movv2sf },
  { 0x81005d, CODE_FOR_movv8hf },
  { 0x81005e, CODE_FOR_movv8bf },
  { 0x81005f, CODE_FOR_movv4sf },
  { 0x83001b, CODE_FOR_movmisalignhi },
  { 0x83001c, CODE_FOR_movmisalignsi },
  { 0x83001d, CODE_FOR_movmisaligndi },
  { 0x83004b, CODE_FOR_movmisalignv8qi },
  { 0x83004c, CODE_FOR_movmisalignv4hi },
  { 0x83004d, CODE_FOR_movmisalignv2si },
  { 0x83004e, CODE_FOR_movmisalignv16qi },
  { 0x83004f, CODE_FOR_movmisalignv8hi },
  { 0x830050, CODE_FOR_movmisalignv4si },
  { 0x830051, CODE_FOR_movmisalignv2di },
  { 0x83005a, CODE_FOR_movmisalignv4hf },
  { 0x83005b, CODE_FOR_movmisalignv4bf },
  { 0x83005c, CODE_FOR_movmisalignv2sf },
  { 0x83005d, CODE_FOR_movmisalignv8hf },
  { 0x83005e, CODE_FOR_movmisalignv8bf },
  { 0x83005f, CODE_FOR_movmisalignv4sf },
  { 0x8c001b, CODE_FOR_reload_inhi },
  { 0x8d001b, CODE_FOR_reload_outhi },
  { 0x8d0038, CODE_FOR_reload_outdf },
  { 0x8e001a, CODE_FOR_cbranchqi4 },
  { 0x8e001c, CODE_FOR_cbranchsi4 },
  { 0x8e001d, CODE_FOR_cbranchdi4 },
  { 0x8e0037, CODE_FOR_cbranchsf4 },
  { 0x8e0038, CODE_FOR_cbranchdf4 },
  { 0x92001c, CODE_FOR_movsicc },
  { 0x920035, CODE_FOR_movhfcc },
  { 0x920037, CODE_FOR_movsfcc },
  { 0x920038, CODE_FOR_movdfcc },
  { 0xa9001c, CODE_FOR_cstoresi4 },
  { 0xa9001d, CODE_FOR_cstoredi4 },
  { 0xa90035, CODE_FOR_cstorehf4 },
  { 0xa90037, CODE_FOR_cstoresf4 },
  { 0xa90038, CODE_FOR_cstoredf4 },
  { 0xab001c, CODE_FOR_addvsi4 },
  { 0xab001d, CODE_FOR_addvdi4 },
  { 0xac001c, CODE_FOR_subvsi4 },
  { 0xac001d, CODE_FOR_subvdi4 },
  { 0xae001c, CODE_FOR_uaddvsi4 },
  { 0xae001d, CODE_FOR_uaddvdi4 },
  { 0xaf001c, CODE_FOR_usubvsi4 },
  { 0xaf001d, CODE_FOR_usubvdi4 },
  { 0xb1001c, CODE_FOR_negvsi3 },
  { 0xb1001d, CODE_FOR_negvdi3 },
  { 0xb3001c, CODE_FOR_smulsi3_highpart },
  { 0xb3004c, CODE_FOR_smulv4hi3_highpart },
  { 0xb4001c, CODE_FOR_umulsi3_highpart },
  { 0xb4004c, CODE_FOR_umulv4hi3_highpart },
  { 0xb8001a, CODE_FOR_cpymemqi },
  { 0xba001c, CODE_FOR_setmemsi },
  { 0xbc0035, CODE_FOR_fmahf4 },
  { 0xbc0037, CODE_FOR_fmasf4 },
  { 0xbc0038, CODE_FOR_fmadf4 },
  { 0xbc005a, CODE_FOR_fmav4hf4 },
  { 0xbc005c, CODE_FOR_fmav2sf4 },
  { 0xbc005d, CODE_FOR_fmav8hf4 },
  { 0xbc005f, CODE_FOR_fmav4sf4 },
  { 0xc00037, CODE_FOR_rintsf2 },
  { 0xc00038, CODE_FOR_rintdf2 },
  { 0xc10037, CODE_FOR_roundsf2 },
  { 0xc10038, CODE_FOR_rounddf2 },
  { 0xc30037, CODE_FOR_floorsf2 },
  { 0xc30038, CODE_FOR_floordf2 },
  { 0xc40037, CODE_FOR_ceilsf2 },
  { 0xc40038, CODE_FOR_ceildf2 },
  { 0xc50037, CODE_FOR_btruncsf2 },
  { 0xc50038, CODE_FOR_btruncdf2 },
  { 0xc60037, CODE_FOR_nearbyintsf2 },
  { 0xc60038, CODE_FOR_nearbyintdf2 },
  { 0xce0037, CODE_FOR_copysignsf3 },
  { 0xce0038, CODE_FOR_copysigndf3 },
  { 0xd0004e, CODE_FOR_cadd90v16qi3 },
  { 0xd0004f, CODE_FOR_cadd90v8hi3 },
  { 0xd00050, CODE_FOR_cadd90v4si3 },
  { 0xd0005a, CODE_FOR_cadd90v4hf3 },
  { 0xd0005c, CODE_FOR_cadd90v2sf3 },
  { 0xd0005d, CODE_FOR_cadd90v8hf3 },
  { 0xd0005f, CODE_FOR_cadd90v4sf3 },
  { 0xd1004e, CODE_FOR_cadd270v16qi3 },
  { 0xd1004f, CODE_FOR_cadd270v8hi3 },
  { 0xd10050, CODE_FOR_cadd270v4si3 },
  { 0xd1005a, CODE_FOR_cadd270v4hf3 },
  { 0xd1005c, CODE_FOR_cadd270v2sf3 },
  { 0xd1005d, CODE_FOR_cadd270v8hf3 },
  { 0xd1005f, CODE_FOR_cadd270v4sf3 },
  { 0xd2005a, CODE_FOR_cmulv4hf3 },
  { 0xd2005c, CODE_FOR_cmulv2sf3 },
  { 0xd2005d, CODE_FOR_cmulv8hf3 },
  { 0xd2005f, CODE_FOR_cmulv4sf3 },
  { 0xd3005a, CODE_FOR_cmul_conjv4hf3 },
  { 0xd3005c, CODE_FOR_cmul_conjv2sf3 },
  { 0xd3005d, CODE_FOR_cmul_conjv8hf3 },
  { 0xd3005f, CODE_FOR_cmul_conjv4sf3 },
  { 0xd4005a, CODE_FOR_cmlav4hf4 },
  { 0xd4005c, CODE_FOR_cmlav2sf4 },
  { 0xd4005d, CODE_FOR_cmlav8hf4 },
  { 0xd4005f, CODE_FOR_cmlav4sf4 },
  { 0xd5005a, CODE_FOR_cmla_conjv4hf4 },
  { 0xd5005c, CODE_FOR_cmla_conjv2sf4 },
  { 0xd5005d, CODE_FOR_cmla_conjv8hf4 },
  { 0xd5005f, CODE_FOR_cmla_conjv4sf4 },
  { 0xd6005a, CODE_FOR_cmlsv4hf4 },
  { 0xd6005c, CODE_FOR_cmlsv2sf4 },
  { 0xd6005d, CODE_FOR_cmlsv8hf4 },
  { 0xd6005f, CODE_FOR_cmlsv4sf4 },
  { 0xd7005a, CODE_FOR_cmls_conjv4hf4 },
  { 0xd7005c, CODE_FOR_cmls_conjv2sf4 },
  { 0xd7005d, CODE_FOR_cmls_conjv8hf4 },
  { 0xd7005f, CODE_FOR_cmls_conjv4sf4 },
  { 0xf30037, CODE_FOR_fmaxsf3 },
  { 0xf30038, CODE_FOR_fmaxdf3 },
  { 0xf3005c, CODE_FOR_fmaxv2sf3 },
  { 0xf3005f, CODE_FOR_fmaxv4sf3 },
  { 0xf40037, CODE_FOR_fminsf3 },
  { 0xf40038, CODE_FOR_fmindf3 },
  { 0xf4005c, CODE_FOR_fminv2sf3 },
  { 0xf4005f, CODE_FOR_fminv4sf3 },
  { 0xf5004b, CODE_FOR_reduc_smax_scal_v8qi },
  { 0xf5004c, CODE_FOR_reduc_smax_scal_v4hi },
  { 0xf5004d, CODE_FOR_reduc_smax_scal_v2si },
  { 0xf5004e, CODE_FOR_reduc_smax_scal_v16qi },
  { 0xf5004f, CODE_FOR_reduc_smax_scal_v8hi },
  { 0xf50050, CODE_FOR_reduc_smax_scal_v4si },
  { 0xf5005c, CODE_FOR_reduc_smax_scal_v2sf },
  { 0xf5005f, CODE_FOR_reduc_smax_scal_v4sf },
  { 0xf6004b, CODE_FOR_reduc_smin_scal_v8qi },
  { 0xf6004c, CODE_FOR_reduc_smin_scal_v4hi },
  { 0xf6004d, CODE_FOR_reduc_smin_scal_v2si },
  { 0xf6004e, CODE_FOR_reduc_smin_scal_v16qi },
  { 0xf6004f, CODE_FOR_reduc_smin_scal_v8hi },
  { 0xf60050, CODE_FOR_reduc_smin_scal_v4si },
  { 0xf6005c, CODE_FOR_reduc_smin_scal_v2sf },
  { 0xf6005f, CODE_FOR_reduc_smin_scal_v4sf },
  { 0xf7004b, CODE_FOR_reduc_plus_scal_v8qi },
  { 0xf7004c, CODE_FOR_reduc_plus_scal_v4hi },
  { 0xf7004d, CODE_FOR_reduc_plus_scal_v2si },
  { 0xf7004e, CODE_FOR_reduc_plus_scal_v16qi },
  { 0xf7004f, CODE_FOR_reduc_plus_scal_v8hi },
  { 0xf70050, CODE_FOR_reduc_plus_scal_v4si },
  { 0xf70051, CODE_FOR_reduc_plus_scal_v2di },
  { 0xf7005c, CODE_FOR_reduc_plus_scal_v2sf },
  { 0xf7005f, CODE_FOR_reduc_plus_scal_v4sf },
  { 0xf8004b, CODE_FOR_reduc_umax_scal_v8qi },
  { 0xf8004c, CODE_FOR_reduc_umax_scal_v4hi },
  { 0xf8004d, CODE_FOR_reduc_umax_scal_v2si },
  { 0xf8004e, CODE_FOR_reduc_umax_scal_v16qi },
  { 0xf8004f, CODE_FOR_reduc_umax_scal_v8hi },
  { 0xf80050, CODE_FOR_reduc_umax_scal_v4si },
  { 0xf9004b, CODE_FOR_reduc_umin_scal_v8qi },
  { 0xf9004c, CODE_FOR_reduc_umin_scal_v4hi },
  { 0xf9004d, CODE_FOR_reduc_umin_scal_v2si },
  { 0xf9004e, CODE_FOR_reduc_umin_scal_v16qi },
  { 0xf9004f, CODE_FOR_reduc_umin_scal_v8hi },
  { 0xf90050, CODE_FOR_reduc_umin_scal_v4si },
  { 0x105004b, CODE_FOR_sdot_prodv8qi },
  { 0x105004e, CODE_FOR_sdot_prodv16qi },
  { 0x106004b, CODE_FOR_widen_ssumv8qi3 },
  { 0x106004c, CODE_FOR_widen_ssumv4hi3 },
  { 0x106004d, CODE_FOR_widen_ssumv2si3 },
  { 0x106004e, CODE_FOR_widen_ssumv16qi3 },
  { 0x106004f, CODE_FOR_widen_ssumv8hi3 },
  { 0x1060050, CODE_FOR_widen_ssumv4si3 },
  { 0x107004b, CODE_FOR_udot_prodv8qi },
  { 0x107004e, CODE_FOR_udot_prodv16qi },
  { 0x108004b, CODE_FOR_widen_usumv8qi3 },
  { 0x108004c, CODE_FOR_widen_usumv4hi3 },
  { 0x108004d, CODE_FOR_widen_usumv2si3 },
  { 0x108004e, CODE_FOR_widen_usumv16qi3 },
  { 0x108004f, CODE_FOR_widen_usumv8hi3 },
  { 0x1080050, CODE_FOR_widen_usumv4si3 },
  { 0x109004e, CODE_FOR_usadv16qi },
  { 0x10a004e, CODE_FOR_ssadv16qi },
  { 0x112001d, CODE_FOR_vec_pack_trunc_di },
  { 0x112004c, CODE_FOR_vec_pack_trunc_v4hi },
  { 0x112004d, CODE_FOR_vec_pack_trunc_v2si },
  { 0x112004f, CODE_FOR_vec_pack_trunc_v8hi },
  { 0x1120050, CODE_FOR_vec_pack_trunc_v4si },
  { 0x1120051, CODE_FOR_vec_pack_trunc_v2di },
  { 0x118004b, CODE_FOR_vec_permv8qi },
  { 0x118004e, CODE_FOR_vec_permv16qi },
  { 0x11a004e, CODE_FOR_vec_setv16qi },
  { 0x11a004f, CODE_FOR_vec_setv8hi },
  { 0x11a0050, CODE_FOR_vec_setv4si },
  { 0x11a0051, CODE_FOR_vec_setv2di },
  { 0x11a005d, CODE_FOR_vec_setv8hf },
  { 0x11a005f, CODE_FOR_vec_setv4sf },
  { 0x123004b, CODE_FOR_vec_unpacks_hi_v8qi },
  { 0x123004c, CODE_FOR_vec_unpacks_hi_v4hi },
  { 0x123004d, CODE_FOR_vec_unpacks_hi_v2si },
  { 0x123004e, CODE_FOR_vec_unpacks_hi_v16qi },
  { 0x123004f, CODE_FOR_vec_unpacks_hi_v8hi },
  { 0x1230050, CODE_FOR_vec_unpacks_hi_v4si },
  { 0x124004b, CODE_FOR_vec_unpacks_lo_v8qi },
  { 0x124004c, CODE_FOR_vec_unpacks_lo_v4hi },
  { 0x124004d, CODE_FOR_vec_unpacks_lo_v2si },
  { 0x124004e, CODE_FOR_vec_unpacks_lo_v16qi },
  { 0x124004f, CODE_FOR_vec_unpacks_lo_v8hi },
  { 0x1240050, CODE_FOR_vec_unpacks_lo_v4si },
  { 0x129004b, CODE_FOR_vec_unpacku_hi_v8qi },
  { 0x129004c, CODE_FOR_vec_unpacku_hi_v4hi },
  { 0x129004d, CODE_FOR_vec_unpacku_hi_v2si },
  { 0x129004e, CODE_FOR_vec_unpacku_hi_v16qi },
  { 0x129004f, CODE_FOR_vec_unpacku_hi_v8hi },
  { 0x1290050, CODE_FOR_vec_unpacku_hi_v4si },
  { 0x12a004b, CODE_FOR_vec_unpacku_lo_v8qi },
  { 0x12a004c, CODE_FOR_vec_unpacku_lo_v4hi },
  { 0x12a004d, CODE_FOR_vec_unpacku_lo_v2si },
  { 0x12a004e, CODE_FOR_vec_unpacku_lo_v16qi },
  { 0x12a004f, CODE_FOR_vec_unpacku_lo_v8hi },
  { 0x12a0050, CODE_FOR_vec_unpacku_lo_v4si },
  { 0x12c004b, CODE_FOR_vec_widen_smult_hi_v8qi },
  { 0x12c004c, CODE_FOR_vec_widen_smult_hi_v4hi },
  { 0x12c004d, CODE_FOR_vec_widen_smult_hi_v2si },
  { 0x12c004e, CODE_FOR_vec_widen_smult_hi_v16qi },
  { 0x12c004f, CODE_FOR_vec_widen_smult_hi_v8hi },
  { 0x12c0050, CODE_FOR_vec_widen_smult_hi_v4si },
  { 0x12d004b, CODE_FOR_vec_widen_smult_lo_v8qi },
  { 0x12d004c, CODE_FOR_vec_widen_smult_lo_v4hi },
  { 0x12d004d, CODE_FOR_vec_widen_smult_lo_v2si },
  { 0x12d004e, CODE_FOR_vec_widen_smult_lo_v16qi },
  { 0x12d004f, CODE_FOR_vec_widen_smult_lo_v8hi },
  { 0x12d0050, CODE_FOR_vec_widen_smult_lo_v4si },
  { 0x133004b, CODE_FOR_vec_widen_sshiftl_hi_v8qi },
  { 0x133004c, CODE_FOR_vec_widen_sshiftl_hi_v4hi },
  { 0x133004d, CODE_FOR_vec_widen_sshiftl_hi_v2si },
  { 0x133004e, CODE_FOR_vec_widen_sshiftl_hi_v16qi },
  { 0x133004f, CODE_FOR_vec_widen_sshiftl_hi_v8hi },
  { 0x1330050, CODE_FOR_vec_widen_sshiftl_hi_v4si },
  { 0x134004b, CODE_FOR_vec_widen_sshiftl_lo_v8qi },
  { 0x134004c, CODE_FOR_vec_widen_sshiftl_lo_v4hi },
  { 0x134004d, CODE_FOR_vec_widen_sshiftl_lo_v2si },
  { 0x134004e, CODE_FOR_vec_widen_sshiftl_lo_v16qi },
  { 0x134004f, CODE_FOR_vec_widen_sshiftl_lo_v8hi },
  { 0x1340050, CODE_FOR_vec_widen_sshiftl_lo_v4si },
  { 0x136004b, CODE_FOR_vec_widen_umult_hi_v8qi },
  { 0x136004c, CODE_FOR_vec_widen_umult_hi_v4hi },
  { 0x136004d, CODE_FOR_vec_widen_umult_hi_v2si },
  { 0x136004e, CODE_FOR_vec_widen_umult_hi_v16qi },
  { 0x136004f, CODE_FOR_vec_widen_umult_hi_v8hi },
  { 0x1360050, CODE_FOR_vec_widen_umult_hi_v4si },
  { 0x137004b, CODE_FOR_vec_widen_umult_lo_v8qi },
  { 0x137004c, CODE_FOR_vec_widen_umult_lo_v4hi },
  { 0x137004d, CODE_FOR_vec_widen_umult_lo_v2si },
  { 0x137004e, CODE_FOR_vec_widen_umult_lo_v16qi },
  { 0x137004f, CODE_FOR_vec_widen_umult_lo_v8hi },
  { 0x1370050, CODE_FOR_vec_widen_umult_lo_v4si },
  { 0x139004b, CODE_FOR_vec_widen_ushiftl_hi_v8qi },
  { 0x139004c, CODE_FOR_vec_widen_ushiftl_hi_v4hi },
  { 0x139004d, CODE_FOR_vec_widen_ushiftl_hi_v2si },
  { 0x139004e, CODE_FOR_vec_widen_ushiftl_hi_v16qi },
  { 0x139004f, CODE_FOR_vec_widen_ushiftl_hi_v8hi },
  { 0x1390050, CODE_FOR_vec_widen_ushiftl_hi_v4si },
  { 0x13a004b, CODE_FOR_vec_widen_ushiftl_lo_v8qi },
  { 0x13a004c, CODE_FOR_vec_widen_ushiftl_lo_v4hi },
  { 0x13a004d, CODE_FOR_vec_widen_ushiftl_lo_v2si },
  { 0x13a004e, CODE_FOR_vec_widen_ushiftl_lo_v16qi },
  { 0x13a004f, CODE_FOR_vec_widen_ushiftl_lo_v8hi },
  { 0x13a0050, CODE_FOR_vec_widen_ushiftl_lo_v4si },
  { 0x146001a, CODE_FOR_atomic_add_fetchqi },
  { 0x146001b, CODE_FOR_atomic_add_fetchhi },
  { 0x146001c, CODE_FOR_atomic_add_fetchsi },
  { 0x146001d, CODE_FOR_atomic_add_fetchdi },
  { 0x147001a, CODE_FOR_atomic_addqi },
  { 0x147001b, CODE_FOR_atomic_addhi },
  { 0x147001c, CODE_FOR_atomic_addsi },
  { 0x147001d, CODE_FOR_atomic_adddi },
  { 0x148001a, CODE_FOR_atomic_and_fetchqi },
  { 0x148001b, CODE_FOR_atomic_and_fetchhi },
  { 0x148001c, CODE_FOR_atomic_and_fetchsi },
  { 0x148001d, CODE_FOR_atomic_and_fetchdi },
  { 0x149001a, CODE_FOR_atomic_andqi },
  { 0x149001b, CODE_FOR_atomic_andhi },
  { 0x149001c, CODE_FOR_atomic_andsi },
  { 0x149001d, CODE_FOR_atomic_anddi },
  { 0x14d001a, CODE_FOR_atomic_compare_and_swapqi },
  { 0x14d001b, CODE_FOR_atomic_compare_and_swaphi },
  { 0x14d001c, CODE_FOR_atomic_compare_and_swapsi },
  { 0x14d001d, CODE_FOR_atomic_compare_and_swapdi },
  { 0x14e001a, CODE_FOR_atomic_exchangeqi },
  { 0x14e001b, CODE_FOR_atomic_exchangehi },
  { 0x14e001c, CODE_FOR_atomic_exchangesi },
  { 0x14e001d, CODE_FOR_atomic_exchangedi },
  { 0x14f001a, CODE_FOR_atomic_fetch_addqi },
  { 0x14f001b, CODE_FOR_atomic_fetch_addhi },
  { 0x14f001c, CODE_FOR_atomic_fetch_addsi },
  { 0x14f001d, CODE_FOR_atomic_fetch_adddi },
  { 0x150001a, CODE_FOR_atomic_fetch_andqi },
  { 0x150001b, CODE_FOR_atomic_fetch_andhi },
  { 0x150001c, CODE_FOR_atomic_fetch_andsi },
  { 0x150001d, CODE_FOR_atomic_fetch_anddi },
  { 0x151001a, CODE_FOR_atomic_fetch_nandqi },
  { 0x151001b, CODE_FOR_atomic_fetch_nandhi },
  { 0x151001c, CODE_FOR_atomic_fetch_nandsi },
  { 0x151001d, CODE_FOR_atomic_fetch_nanddi },
  { 0x152001a, CODE_FOR_atomic_fetch_orqi },
  { 0x152001b, CODE_FOR_atomic_fetch_orhi },
  { 0x152001c, CODE_FOR_atomic_fetch_orsi },
  { 0x152001d, CODE_FOR_atomic_fetch_ordi },
  { 0x153001a, CODE_FOR_atomic_fetch_subqi },
  { 0x153001b, CODE_FOR_atomic_fetch_subhi },
  { 0x153001c, CODE_FOR_atomic_fetch_subsi },
  { 0x153001d, CODE_FOR_atomic_fetch_subdi },
  { 0x154001a, CODE_FOR_atomic_fetch_xorqi },
  { 0x154001b, CODE_FOR_atomic_fetch_xorhi },
  { 0x154001c, CODE_FOR_atomic_fetch_xorsi },
  { 0x154001d, CODE_FOR_atomic_fetch_xordi },
  { 0x155001a, CODE_FOR_atomic_loadqi },
  { 0x155001b, CODE_FOR_atomic_loadhi },
  { 0x155001c, CODE_FOR_atomic_loadsi },
  { 0x155001d, CODE_FOR_atomic_loaddi },
  { 0x156001a, CODE_FOR_atomic_nand_fetchqi },
  { 0x156001b, CODE_FOR_atomic_nand_fetchhi },
  { 0x156001c, CODE_FOR_atomic_nand_fetchsi },
  { 0x156001d, CODE_FOR_atomic_nand_fetchdi },
  { 0x157001a, CODE_FOR_atomic_nandqi },
  { 0x157001b, CODE_FOR_atomic_nandhi },
  { 0x157001c, CODE_FOR_atomic_nandsi },
  { 0x157001d, CODE_FOR_atomic_nanddi },
  { 0x158001a, CODE_FOR_atomic_or_fetchqi },
  { 0x158001b, CODE_FOR_atomic_or_fetchhi },
  { 0x158001c, CODE_FOR_atomic_or_fetchsi },
  { 0x158001d, CODE_FOR_atomic_or_fetchdi },
  { 0x159001a, CODE_FOR_atomic_orqi },
  { 0x159001b, CODE_FOR_atomic_orhi },
  { 0x159001c, CODE_FOR_atomic_orsi },
  { 0x159001d, CODE_FOR_atomic_ordi },
  { 0x15a001a, CODE_FOR_atomic_storeqi },
  { 0x15a001b, CODE_FOR_atomic_storehi },
  { 0x15a001c, CODE_FOR_atomic_storesi },
  { 0x15b001a, CODE_FOR_atomic_sub_fetchqi },
  { 0x15b001b, CODE_FOR_atomic_sub_fetchhi },
  { 0x15b001c, CODE_FOR_atomic_sub_fetchsi },
  { 0x15b001d, CODE_FOR_atomic_sub_fetchdi },
  { 0x15c001a, CODE_FOR_atomic_subqi },
  { 0x15c001b, CODE_FOR_atomic_subhi },
  { 0x15c001c, CODE_FOR_atomic_subsi },
  { 0x15c001d, CODE_FOR_atomic_subdi },
  { 0x15d001a, CODE_FOR_atomic_xor_fetchqi },
  { 0x15d001b, CODE_FOR_atomic_xor_fetchhi },
  { 0x15d001c, CODE_FOR_atomic_xor_fetchsi },
  { 0x15d001d, CODE_FOR_atomic_xor_fetchdi },
  { 0x15e001a, CODE_FOR_atomic_xorqi },
  { 0x15e001b, CODE_FOR_atomic_xorhi },
  { 0x15e001c, CODE_FOR_atomic_xorsi },
  { 0x15e001d, CODE_FOR_atomic_xordi },
  { 0x15f001c, CODE_FOR_get_thread_pointersi },
};

void
init_all_optabs (struct target_optabs *optabs)
{
  bool *ena = optabs->pat_enable;
  ena[0] = HAVE_extendqihi2;
  ena[1] = HAVE_extendqisi2;
  ena[2] = HAVE_extendqidi2;
  ena[3] = HAVE_extendhisi2;
  ena[4] = HAVE_extendhidi2;
  ena[5] = HAVE_extendsidi2;
  ena[6] = HAVE_extendhfsf2;
  ena[7] = HAVE_extendhfdf2;
  ena[8] = HAVE_extendsfdf2;
  ena[9] = HAVE_truncsfhf2;
  ena[10] = HAVE_truncdfhf2;
  ena[11] = HAVE_truncdfsf2;
  ena[12] = HAVE_zero_extendqisi2;
  ena[13] = HAVE_zero_extendqidi2;
  ena[14] = HAVE_zero_extendhisi2;
  ena[15] = HAVE_zero_extendhidi2;
  ena[16] = HAVE_zero_extendsidi2;
  ena[17] = HAVE_floatsihf2;
  ena[18] = HAVE_floatsisf2;
  ena[19] = HAVE_floatsidf2;
  ena[20] = HAVE_floatdihf2;
  ena[21] = HAVE_floatv2siv2sf2;
  ena[22] = HAVE_floatv4siv4sf2;
  ena[23] = HAVE_floatunssisf2;
  ena[24] = HAVE_floatunssidf2;
  ena[25] = HAVE_floatunsv2siv2sf2;
  ena[26] = HAVE_floatunsv4siv4sf2;
  ena[27] = HAVE_lroundsfsi2;
  ena[28] = HAVE_lrounddfsi2;
  ena[29] = HAVE_lfloorsfsi2;
  ena[30] = HAVE_lfloordfsi2;
  ena[31] = HAVE_lceilsfsi2;
  ena[32] = HAVE_lceildfsi2;
  ena[33] = HAVE_fix_trunchfsi2;
  ena[34] = HAVE_fix_trunchfdi2;
  ena[35] = HAVE_fix_truncsfsi2;
  ena[36] = HAVE_fix_truncdfsi2;
  ena[37] = HAVE_fix_truncv2sfv2si2;
  ena[38] = HAVE_fix_truncv4sfv4si2;
  ena[39] = HAVE_fixuns_truncsfsi2;
  ena[40] = HAVE_fixuns_truncdfsi2;
  ena[41] = HAVE_fixuns_truncv2sfv2si2;
  ena[42] = HAVE_fixuns_truncv4sfv4si2;
  ena[43] = HAVE_mulhisi3;
  ena[44] = HAVE_mulsidi3;
  ena[45] = HAVE_umulsidi3;
  ena[46] = HAVE_maddhisi4;
  ena[47] = HAVE_maddhidi4;
  ena[48] = HAVE_maddsidi4;
  ena[49] = HAVE_umaddsidi4;
  ena[50] = HAVE_vec_load_lanesdidi;
  ena[51] = HAVE_vec_load_lanestidi;
  ena[52] = HAVE_vec_load_laneseidi;
  ena[53] = HAVE_vec_load_lanesoidi;
  ena[54] = HAVE_vec_load_lanestiv8qi;
  ena[55] = HAVE_vec_load_laneseiv8qi;
  ena[56] = HAVE_vec_load_lanesoiv8qi;
  ena[57] = HAVE_vec_load_lanesv8qiv8qi;
  ena[58] = HAVE_vec_load_lanestiv4hi;
  ena[59] = HAVE_vec_load_laneseiv4hi;
  ena[60] = HAVE_vec_load_lanesoiv4hi;
  ena[61] = HAVE_vec_load_lanesv4hiv4hi;
  ena[62] = HAVE_vec_load_lanestiv2si;
  ena[63] = HAVE_vec_load_laneseiv2si;
  ena[64] = HAVE_vec_load_lanesoiv2si;
  ena[65] = HAVE_vec_load_lanesv2siv2si;
  ena[66] = HAVE_vec_load_lanesoiv16qi;
  ena[67] = HAVE_vec_load_lanesciv16qi;
  ena[68] = HAVE_vec_load_lanesxiv16qi;
  ena[69] = HAVE_vec_load_lanesv16qiv16qi;
  ena[70] = HAVE_vec_load_lanesoiv8hi;
  ena[71] = HAVE_vec_load_lanesciv8hi;
  ena[72] = HAVE_vec_load_lanesxiv8hi;
  ena[73] = HAVE_vec_load_lanesv8hiv8hi;
  ena[74] = HAVE_vec_load_lanesoiv4si;
  ena[75] = HAVE_vec_load_lanesciv4si;
  ena[76] = HAVE_vec_load_lanesxiv4si;
  ena[77] = HAVE_vec_load_lanesv4siv4si;
  ena[78] = HAVE_vec_load_lanesv2div2di;
  ena[79] = HAVE_vec_load_lanestiv4hf;
  ena[80] = HAVE_vec_load_laneseiv4hf;
  ena[81] = HAVE_vec_load_lanesoiv4hf;
  ena[82] = HAVE_vec_load_lanesv4hfv4hf;
  ena[83] = HAVE_vec_load_lanestiv4bf;
  ena[84] = HAVE_vec_load_laneseiv4bf;
  ena[85] = HAVE_vec_load_lanesoiv4bf;
  ena[86] = HAVE_vec_load_lanesv4bfv4bf;
  ena[87] = HAVE_vec_load_lanestiv2sf;
  ena[88] = HAVE_vec_load_laneseiv2sf;
  ena[89] = HAVE_vec_load_lanesoiv2sf;
  ena[90] = HAVE_vec_load_lanesv2sfv2sf;
  ena[91] = HAVE_vec_load_lanesoiv8hf;
  ena[92] = HAVE_vec_load_lanesciv8hf;
  ena[93] = HAVE_vec_load_lanesxiv8hf;
  ena[94] = HAVE_vec_load_lanesv8hfv8hf;
  ena[95] = HAVE_vec_load_lanesv8bfv8bf;
  ena[96] = HAVE_vec_load_lanesoiv4sf;
  ena[97] = HAVE_vec_load_lanesciv4sf;
  ena[98] = HAVE_vec_load_lanesxiv4sf;
  ena[99] = HAVE_vec_load_lanesv4sfv4sf;
  ena[100] = HAVE_vec_store_lanesdidi;
  ena[101] = HAVE_vec_store_lanestidi;
  ena[102] = HAVE_vec_store_laneseidi;
  ena[103] = HAVE_vec_store_lanesoidi;
  ena[104] = HAVE_vec_store_lanestiv8qi;
  ena[105] = HAVE_vec_store_laneseiv8qi;
  ena[106] = HAVE_vec_store_lanesoiv8qi;
  ena[107] = HAVE_vec_store_lanesv8qiv8qi;
  ena[108] = HAVE_vec_store_lanestiv4hi;
  ena[109] = HAVE_vec_store_laneseiv4hi;
  ena[110] = HAVE_vec_store_lanesoiv4hi;
  ena[111] = HAVE_vec_store_lanesv4hiv4hi;
  ena[112] = HAVE_vec_store_lanestiv2si;
  ena[113] = HAVE_vec_store_laneseiv2si;
  ena[114] = HAVE_vec_store_lanesoiv2si;
  ena[115] = HAVE_vec_store_lanesv2siv2si;
  ena[116] = HAVE_vec_store_lanesoiv16qi;
  ena[117] = HAVE_vec_store_lanesciv16qi;
  ena[118] = HAVE_vec_store_lanesxiv16qi;
  ena[119] = HAVE_vec_store_lanesv16qiv16qi;
  ena[120] = HAVE_vec_store_lanesoiv8hi;
  ena[121] = HAVE_vec_store_lanesciv8hi;
  ena[122] = HAVE_vec_store_lanesxiv8hi;
  ena[123] = HAVE_vec_store_lanesv8hiv8hi;
  ena[124] = HAVE_vec_store_lanesoiv4si;
  ena[125] = HAVE_vec_store_lanesciv4si;
  ena[126] = HAVE_vec_store_lanesxiv4si;
  ena[127] = HAVE_vec_store_lanesv4siv4si;
  ena[128] = HAVE_vec_store_lanesv2div2di;
  ena[129] = HAVE_vec_store_lanestiv4hf;
  ena[130] = HAVE_vec_store_laneseiv4hf;
  ena[131] = HAVE_vec_store_lanesoiv4hf;
  ena[132] = HAVE_vec_store_lanesv4hfv4hf;
  ena[133] = HAVE_vec_store_lanestiv4bf;
  ena[134] = HAVE_vec_store_laneseiv4bf;
  ena[135] = HAVE_vec_store_lanesoiv4bf;
  ena[136] = HAVE_vec_store_lanesv4bfv4bf;
  ena[137] = HAVE_vec_store_lanestiv2sf;
  ena[138] = HAVE_vec_store_laneseiv2sf;
  ena[139] = HAVE_vec_store_lanesoiv2sf;
  ena[140] = HAVE_vec_store_lanesv2sfv2sf;
  ena[141] = HAVE_vec_store_lanesoiv8hf;
  ena[142] = HAVE_vec_store_lanesciv8hf;
  ena[143] = HAVE_vec_store_lanesxiv8hf;
  ena[144] = HAVE_vec_store_lanesv8hfv8hf;
  ena[145] = HAVE_vec_store_lanesv8bfv8bf;
  ena[146] = HAVE_vec_store_lanesoiv4sf;
  ena[147] = HAVE_vec_store_lanesciv4sf;
  ena[148] = HAVE_vec_store_lanesxiv4sf;
  ena[149] = HAVE_vec_store_lanesv4sfv4sf;
  ena[150] = HAVE_vcondv8qiv8qi;
  ena[151] = HAVE_vcondv4hiv4hi;
  ena[152] = HAVE_vcondv2siv2si;
  ena[153] = HAVE_vcondv2sfv2si;
  ena[154] = HAVE_vcondv16qiv16qi;
  ena[155] = HAVE_vcondv8hiv8hi;
  ena[156] = HAVE_vcondv4siv4si;
  ena[157] = HAVE_vcondv4sfv4si;
  ena[158] = HAVE_vcondv2siv2sf;
  ena[159] = HAVE_vcondv2sfv2sf;
  ena[160] = HAVE_vcondv4siv4sf;
  ena[161] = HAVE_vcondv4sfv4sf;
  ena[162] = HAVE_vconduv8qiv8qi;
  ena[163] = HAVE_vconduv4hiv4hi;
  ena[164] = HAVE_vconduv2siv2si;
  ena[165] = HAVE_vconduv2sfv2si;
  ena[166] = HAVE_vconduv16qiv16qi;
  ena[167] = HAVE_vconduv8hiv8hi;
  ena[168] = HAVE_vconduv4siv4si;
  ena[169] = HAVE_vconduv4sfv4si;
  ena[170] = HAVE_vcond_mask_v8qiv8qi;
  ena[171] = HAVE_vcond_mask_v4hiv4hi;
  ena[172] = HAVE_vcond_mask_v2siv2si;
  ena[173] = HAVE_vcond_mask_v2sfv2si;
  ena[174] = HAVE_vcond_mask_v16qiv16qi;
  ena[175] = HAVE_vcond_mask_v8hiv8hi;
  ena[176] = HAVE_vcond_mask_v4siv4si;
  ena[177] = HAVE_vcond_mask_v4sfv4si;
  ena[178] = HAVE_vec_cmpv8qiv8qi;
  ena[179] = HAVE_vec_cmpv4hiv4hi;
  ena[180] = HAVE_vec_cmpv2siv2si;
  ena[181] = HAVE_vec_cmpv2sfv2si;
  ena[182] = HAVE_vec_cmpv16qiv16qi;
  ena[183] = HAVE_vec_cmpv8hiv8hi;
  ena[184] = HAVE_vec_cmpv4siv4si;
  ena[185] = HAVE_vec_cmpv4sfv4si;
  ena[186] = HAVE_vec_cmpuv8qiv8qi;
  ena[187] = HAVE_vec_cmpuv4hiv4hi;
  ena[188] = HAVE_vec_cmpuv2siv2si;
  ena[189] = HAVE_vec_cmpuv16qiv16qi;
  ena[190] = HAVE_vec_cmpuv8hiv8hi;
  ena[191] = HAVE_vec_cmpuv4siv4si;
  ena[192] = HAVE_vec_extractv8qiqi;
  ena[193] = HAVE_vec_extractv16qiqi;
  ena[194] = HAVE_vec_extractv4hihi;
  ena[195] = HAVE_vec_extractv8hihi;
  ena[196] = HAVE_vec_extractv2sisi;
  ena[197] = HAVE_vec_extractv4sisi;
  ena[198] = HAVE_vec_extractv2didi;
  ena[199] = HAVE_vec_extractv4hfhf;
  ena[200] = HAVE_vec_extractv8hfhf;
  ena[201] = HAVE_vec_extractv4bfbf;
  ena[202] = HAVE_vec_extractv2sfsf;
  ena[203] = HAVE_vec_extractv4sfsf;
  ena[204] = HAVE_vec_initv8qiqi;
  ena[205] = HAVE_vec_initv16qiqi;
  ena[206] = HAVE_vec_initv4hihi;
  ena[207] = HAVE_vec_initv8hihi;
  ena[208] = HAVE_vec_initv2sisi;
  ena[209] = HAVE_vec_initv4sisi;
  ena[210] = HAVE_vec_initv2didi;
  ena[211] = HAVE_vec_initv4hfhf;
  ena[212] = HAVE_vec_initv8hfhf;
  ena[213] = HAVE_vec_initv2sfsf;
  ena[214] = HAVE_vec_initv4sfsf;
  ena[215] = HAVE_addsi3;
  ena[216] = HAVE_adddi3;
  ena[217] = HAVE_addqq3;
  ena[218] = HAVE_addhq3;
  ena[219] = HAVE_addsq3;
  ena[220] = HAVE_adduqq3;
  ena[221] = HAVE_adduhq3;
  ena[222] = HAVE_addusq3;
  ena[223] = HAVE_addha3;
  ena[224] = HAVE_addsa3;
  ena[225] = HAVE_adduha3;
  ena[226] = HAVE_addusa3;
  ena[227] = HAVE_addhf3;
  ena[228] = HAVE_addsf3;
  ena[229] = HAVE_adddf3;
  ena[230] = HAVE_addv8qi3;
  ena[231] = HAVE_addv4hi3;
  ena[232] = HAVE_addv2si3;
  ena[233] = HAVE_addv16qi3;
  ena[234] = HAVE_addv8hi3;
  ena[235] = HAVE_addv4si3;
  ena[236] = HAVE_addv2di3;
  ena[237] = HAVE_addv4qq3;
  ena[238] = HAVE_addv2hq3;
  ena[239] = HAVE_addv2ha3;
  ena[240] = HAVE_addv4hf3;
  ena[241] = HAVE_addv2sf3;
  ena[242] = HAVE_addv8hf3;
  ena[243] = HAVE_addv4sf3;
  ena[244] = HAVE_ssaddqq3;
  ena[245] = HAVE_ssaddhq3;
  ena[246] = HAVE_ssaddsq3;
  ena[247] = HAVE_ssaddha3;
  ena[248] = HAVE_ssaddsa3;
  ena[249] = HAVE_ssaddv4qq3;
  ena[250] = HAVE_ssaddv2hq3;
  ena[251] = HAVE_ssaddv2ha3;
  ena[252] = HAVE_usadduqq3;
  ena[253] = HAVE_usadduhq3;
  ena[254] = HAVE_usadduha3;
  ena[255] = HAVE_usaddv4uqq3;
  ena[256] = HAVE_usaddv2uhq3;
  ena[257] = HAVE_usaddv2uha3;
  ena[258] = HAVE_subsi3;
  ena[259] = HAVE_subdi3;
  ena[260] = HAVE_subqq3;
  ena[261] = HAVE_subhq3;
  ena[262] = HAVE_subsq3;
  ena[263] = HAVE_subuqq3;
  ena[264] = HAVE_subuhq3;
  ena[265] = HAVE_subusq3;
  ena[266] = HAVE_subha3;
  ena[267] = HAVE_subsa3;
  ena[268] = HAVE_subuha3;
  ena[269] = HAVE_subusa3;
  ena[270] = HAVE_subhf3;
  ena[271] = HAVE_subsf3;
  ena[272] = HAVE_subdf3;
  ena[273] = HAVE_subv8qi3;
  ena[274] = HAVE_subv4hi3;
  ena[275] = HAVE_subv2si3;
  ena[276] = HAVE_subv16qi3;
  ena[277] = HAVE_subv8hi3;
  ena[278] = HAVE_subv4si3;
  ena[279] = HAVE_subv2di3;
  ena[280] = HAVE_subv4qq3;
  ena[281] = HAVE_subv2hq3;
  ena[282] = HAVE_subv2ha3;
  ena[283] = HAVE_subv4hf3;
  ena[284] = HAVE_subv2sf3;
  ena[285] = HAVE_subv8hf3;
  ena[286] = HAVE_subv4sf3;
  ena[287] = HAVE_subvsi3;
  ena[288] = HAVE_sssubqq3;
  ena[289] = HAVE_sssubhq3;
  ena[290] = HAVE_sssubsq3;
  ena[291] = HAVE_sssubha3;
  ena[292] = HAVE_sssubsa3;
  ena[293] = HAVE_sssubv4qq3;
  ena[294] = HAVE_sssubv2hq3;
  ena[295] = HAVE_sssubv2ha3;
  ena[296] = HAVE_ussubuqq3;
  ena[297] = HAVE_ussubuhq3;
  ena[298] = HAVE_ussubuha3;
  ena[299] = HAVE_ussubv4uqq3;
  ena[300] = HAVE_ussubv2uhq3;
  ena[301] = HAVE_ussubv2uha3;
  ena[302] = HAVE_mulhi3;
  ena[303] = HAVE_mulsi3;
  ena[304] = HAVE_mulqq3;
  ena[305] = HAVE_mulhq3;
  ena[306] = HAVE_mulsq3;
  ena[307] = HAVE_mulha3;
  ena[308] = HAVE_mulsa3;
  ena[309] = HAVE_muluha3;
  ena[310] = HAVE_mulusa3;
  ena[311] = HAVE_mulhf3;
  ena[312] = HAVE_mulsf3;
  ena[313] = HAVE_muldf3;
  ena[314] = HAVE_mulv8qi3;
  ena[315] = HAVE_mulv4hi3;
  ena[316] = HAVE_mulv2si3;
  ena[317] = HAVE_mulv16qi3;
  ena[318] = HAVE_mulv8hi3;
  ena[319] = HAVE_mulv4si3;
  ena[320] = HAVE_mulv4hf3;
  ena[321] = HAVE_mulv2sf3;
  ena[322] = HAVE_mulv8hf3;
  ena[323] = HAVE_mulv4sf3;
  ena[324] = HAVE_ssmulha3;
  ena[325] = HAVE_ssmulsa3;
  ena[326] = HAVE_usmuluha3;
  ena[327] = HAVE_usmulusa3;
  ena[328] = HAVE_divsi3;
  ena[329] = HAVE_divhf3;
  ena[330] = HAVE_divsf3;
  ena[331] = HAVE_divdf3;
  ena[332] = HAVE_divv2sf3;
  ena[333] = HAVE_divv4sf3;
  ena[334] = HAVE_udivsi3;
  ena[335] = HAVE_modsi3;
  ena[336] = HAVE_andsi3;
  ena[337] = HAVE_anddi3;
  ena[338] = HAVE_andv8qi3;
  ena[339] = HAVE_andv4hi3;
  ena[340] = HAVE_andv2si3;
  ena[341] = HAVE_andv16qi3;
  ena[342] = HAVE_andv8hi3;
  ena[343] = HAVE_andv4si3;
  ena[344] = HAVE_andv2di3;
  ena[345] = HAVE_andv4hf3;
  ena[346] = HAVE_andv2sf3;
  ena[347] = HAVE_andv8hf3;
  ena[348] = HAVE_andv4sf3;
  ena[349] = HAVE_iorsi3;
  ena[350] = HAVE_iordi3;
  ena[351] = HAVE_iorv8qi3;
  ena[352] = HAVE_iorv4hi3;
  ena[353] = HAVE_iorv2si3;
  ena[354] = HAVE_iorv16qi3;
  ena[355] = HAVE_iorv8hi3;
  ena[356] = HAVE_iorv4si3;
  ena[357] = HAVE_iorv2di3;
  ena[358] = HAVE_iorv4hf3;
  ena[359] = HAVE_iorv2sf3;
  ena[360] = HAVE_iorv8hf3;
  ena[361] = HAVE_iorv4sf3;
  ena[362] = HAVE_xorsi3;
  ena[363] = HAVE_xordi3;
  ena[364] = HAVE_xorv8qi3;
  ena[365] = HAVE_xorv4hi3;
  ena[366] = HAVE_xorv2si3;
  ena[367] = HAVE_xorv16qi3;
  ena[368] = HAVE_xorv8hi3;
  ena[369] = HAVE_xorv4si3;
  ena[370] = HAVE_xorv2di3;
  ena[371] = HAVE_xorv4hf3;
  ena[372] = HAVE_xorv2sf3;
  ena[373] = HAVE_xorv8hf3;
  ena[374] = HAVE_xorv4sf3;
  ena[375] = HAVE_ashlsi3;
  ena[376] = HAVE_ashldi3;
  ena[377] = HAVE_ashrsi3;
  ena[378] = HAVE_ashrdi3;
  ena[379] = HAVE_lshrsi3;
  ena[380] = HAVE_lshrdi3;
  ena[381] = HAVE_rotlsi3;
  ena[382] = HAVE_rotrsi3;
  ena[383] = HAVE_vashlv8qi3;
  ena[384] = HAVE_vashlv4hi3;
  ena[385] = HAVE_vashlv2si3;
  ena[386] = HAVE_vashlv16qi3;
  ena[387] = HAVE_vashlv8hi3;
  ena[388] = HAVE_vashlv4si3;
  ena[389] = HAVE_vashrv8qi3;
  ena[390] = HAVE_vashrv4hi3;
  ena[391] = HAVE_vashrv2si3;
  ena[392] = HAVE_vashrv16qi3;
  ena[393] = HAVE_vashrv8hi3;
  ena[394] = HAVE_vashrv4si3;
  ena[395] = HAVE_vlshrv8qi3;
  ena[396] = HAVE_vlshrv4hi3;
  ena[397] = HAVE_vlshrv2si3;
  ena[398] = HAVE_vlshrv16qi3;
  ena[399] = HAVE_vlshrv8hi3;
  ena[400] = HAVE_vlshrv4si3;
  ena[401] = HAVE_sminsi3;
  ena[402] = HAVE_sminsf3;
  ena[403] = HAVE_smindf3;
  ena[404] = HAVE_sminv8qi3;
  ena[405] = HAVE_sminv4hi3;
  ena[406] = HAVE_sminv2si3;
  ena[407] = HAVE_sminv16qi3;
  ena[408] = HAVE_sminv8hi3;
  ena[409] = HAVE_sminv4si3;
  ena[410] = HAVE_sminv2sf3;
  ena[411] = HAVE_sminv4sf3;
  ena[412] = HAVE_smaxsi3;
  ena[413] = HAVE_smaxsf3;
  ena[414] = HAVE_smaxdf3;
  ena[415] = HAVE_smaxv8qi3;
  ena[416] = HAVE_smaxv4hi3;
  ena[417] = HAVE_smaxv2si3;
  ena[418] = HAVE_smaxv16qi3;
  ena[419] = HAVE_smaxv8hi3;
  ena[420] = HAVE_smaxv4si3;
  ena[421] = HAVE_smaxv2sf3;
  ena[422] = HAVE_smaxv4sf3;
  ena[423] = HAVE_uminsi3;
  ena[424] = HAVE_uminv8qi3;
  ena[425] = HAVE_uminv4hi3;
  ena[426] = HAVE_uminv2si3;
  ena[427] = HAVE_uminv16qi3;
  ena[428] = HAVE_uminv8hi3;
  ena[429] = HAVE_uminv4si3;
  ena[430] = HAVE_umaxsi3;
  ena[431] = HAVE_umaxv8qi3;
  ena[432] = HAVE_umaxv4hi3;
  ena[433] = HAVE_umaxv2si3;
  ena[434] = HAVE_umaxv16qi3;
  ena[435] = HAVE_umaxv8hi3;
  ena[436] = HAVE_umaxv4si3;
  ena[437] = HAVE_negsi2;
  ena[438] = HAVE_neghf2;
  ena[439] = HAVE_negsf2;
  ena[440] = HAVE_negdf2;
  ena[441] = HAVE_negv8qi2;
  ena[442] = HAVE_negv4hi2;
  ena[443] = HAVE_negv2si2;
  ena[444] = HAVE_negv16qi2;
  ena[445] = HAVE_negv8hi2;
  ena[446] = HAVE_negv4si2;
  ena[447] = HAVE_negv4hf2;
  ena[448] = HAVE_negv2sf2;
  ena[449] = HAVE_negv8hf2;
  ena[450] = HAVE_negv4sf2;
  ena[451] = HAVE_abssi2;
  ena[452] = HAVE_abshf2;
  ena[453] = HAVE_abssf2;
  ena[454] = HAVE_absdf2;
  ena[455] = HAVE_absv8qi2;
  ena[456] = HAVE_absv4hi2;
  ena[457] = HAVE_absv2si2;
  ena[458] = HAVE_absv16qi2;
  ena[459] = HAVE_absv8hi2;
  ena[460] = HAVE_absv4si2;
  ena[461] = HAVE_absv2sf2;
  ena[462] = HAVE_absv4sf2;
  ena[463] = HAVE_one_cmplsi2;
  ena[464] = HAVE_one_cmpldi2;
  ena[465] = HAVE_one_cmplv8qi2;
  ena[466] = HAVE_one_cmplv4hi2;
  ena[467] = HAVE_one_cmplv2si2;
  ena[468] = HAVE_one_cmplv16qi2;
  ena[469] = HAVE_one_cmplv8hi2;
  ena[470] = HAVE_one_cmplv4si2;
  ena[471] = HAVE_one_cmplv2di2;
  ena[472] = HAVE_one_cmplv4hf2;
  ena[473] = HAVE_one_cmplv2sf2;
  ena[474] = HAVE_one_cmplv8hf2;
  ena[475] = HAVE_one_cmplv4sf2;
  ena[476] = HAVE_bswaphi2;
  ena[477] = HAVE_bswapsi2;
  ena[478] = HAVE_clzsi2;
  ena[479] = HAVE_clzv8qi2;
  ena[480] = HAVE_clzv4hi2;
  ena[481] = HAVE_clzv2si2;
  ena[482] = HAVE_clzv16qi2;
  ena[483] = HAVE_clzv8hi2;
  ena[484] = HAVE_clzv4si2;
  ena[485] = HAVE_ctzsi2;
  ena[486] = HAVE_popcountv8qi2;
  ena[487] = HAVE_popcountv16qi2;
  ena[488] = HAVE_sqrtsf2;
  ena[489] = HAVE_sqrtdf2;
  ena[490] = HAVE_movqi;
  ena[491] = HAVE_movhi;
  ena[492] = HAVE_movsi;
  ena[493] = HAVE_movdi;
  ena[494] = HAVE_movti;
  ena[495] = HAVE_movei;
  ena[496] = HAVE_movoi;
  ena[497] = HAVE_movci;
  ena[498] = HAVE_movxi;
  ena[499] = HAVE_movhf;
  ena[500] = HAVE_movbf;
  ena[501] = HAVE_movsf;
  ena[502] = HAVE_movdf;
  ena[503] = HAVE_movv8qi;
  ena[504] = HAVE_movv4hi;
  ena[505] = HAVE_movv2si;
  ena[506] = HAVE_movv16qi;
  ena[507] = HAVE_movv8hi;
  ena[508] = HAVE_movv4si;
  ena[509] = HAVE_movv2di;
  ena[510] = HAVE_movv4hf;
  ena[511] = HAVE_movv4bf;
  ena[512] = HAVE_movv2sf;
  ena[513] = HAVE_movv8hf;
  ena[514] = HAVE_movv8bf;
  ena[515] = HAVE_movv4sf;
  ena[516] = HAVE_movmisalignhi;
  ena[517] = HAVE_movmisalignsi;
  ena[518] = HAVE_movmisaligndi;
  ena[519] = HAVE_movmisalignv8qi;
  ena[520] = HAVE_movmisalignv4hi;
  ena[521] = HAVE_movmisalignv2si;
  ena[522] = HAVE_movmisalignv16qi;
  ena[523] = HAVE_movmisalignv8hi;
  ena[524] = HAVE_movmisalignv4si;
  ena[525] = HAVE_movmisalignv2di;
  ena[526] = HAVE_movmisalignv4hf;
  ena[527] = HAVE_movmisalignv4bf;
  ena[528] = HAVE_movmisalignv2sf;
  ena[529] = HAVE_movmisalignv8hf;
  ena[530] = HAVE_movmisalignv8bf;
  ena[531] = HAVE_movmisalignv4sf;
  ena[532] = HAVE_reload_inhi;
  ena[533] = HAVE_reload_outhi;
  ena[534] = HAVE_reload_outdf;
  ena[535] = HAVE_cbranchqi4;
  ena[536] = HAVE_cbranchsi4;
  ena[537] = HAVE_cbranchdi4;
  ena[538] = HAVE_cbranchsf4;
  ena[539] = HAVE_cbranchdf4;
  ena[540] = HAVE_movsicc;
  ena[541] = HAVE_movhfcc;
  ena[542] = HAVE_movsfcc;
  ena[543] = HAVE_movdfcc;
  ena[544] = HAVE_cstoresi4;
  ena[545] = HAVE_cstoredi4;
  ena[546] = HAVE_cstorehf4;
  ena[547] = HAVE_cstoresf4;
  ena[548] = HAVE_cstoredf4;
  ena[549] = HAVE_addvsi4;
  ena[550] = HAVE_addvdi4;
  ena[551] = HAVE_subvsi4;
  ena[552] = HAVE_subvdi4;
  ena[553] = HAVE_uaddvsi4;
  ena[554] = HAVE_uaddvdi4;
  ena[555] = HAVE_usubvsi4;
  ena[556] = HAVE_usubvdi4;
  ena[557] = HAVE_negvsi3;
  ena[558] = HAVE_negvdi3;
  ena[559] = HAVE_smulsi3_highpart;
  ena[560] = HAVE_smulv4hi3_highpart;
  ena[561] = HAVE_umulsi3_highpart;
  ena[562] = HAVE_umulv4hi3_highpart;
  ena[563] = HAVE_cpymemqi;
  ena[564] = HAVE_setmemsi;
  ena[565] = HAVE_fmahf4;
  ena[566] = HAVE_fmasf4;
  ena[567] = HAVE_fmadf4;
  ena[568] = HAVE_fmav4hf4;
  ena[569] = HAVE_fmav2sf4;
  ena[570] = HAVE_fmav8hf4;
  ena[571] = HAVE_fmav4sf4;
  ena[572] = HAVE_rintsf2;
  ena[573] = HAVE_rintdf2;
  ena[574] = HAVE_roundsf2;
  ena[575] = HAVE_rounddf2;
  ena[576] = HAVE_floorsf2;
  ena[577] = HAVE_floordf2;
  ena[578] = HAVE_ceilsf2;
  ena[579] = HAVE_ceildf2;
  ena[580] = HAVE_btruncsf2;
  ena[581] = HAVE_btruncdf2;
  ena[582] = HAVE_nearbyintsf2;
  ena[583] = HAVE_nearbyintdf2;
  ena[584] = HAVE_copysignsf3;
  ena[585] = HAVE_copysigndf3;
  ena[586] = HAVE_cadd90v16qi3;
  ena[587] = HAVE_cadd90v8hi3;
  ena[588] = HAVE_cadd90v4si3;
  ena[589] = HAVE_cadd90v4hf3;
  ena[590] = HAVE_cadd90v2sf3;
  ena[591] = HAVE_cadd90v8hf3;
  ena[592] = HAVE_cadd90v4sf3;
  ena[593] = HAVE_cadd270v16qi3;
  ena[594] = HAVE_cadd270v8hi3;
  ena[595] = HAVE_cadd270v4si3;
  ena[596] = HAVE_cadd270v4hf3;
  ena[597] = HAVE_cadd270v2sf3;
  ena[598] = HAVE_cadd270v8hf3;
  ena[599] = HAVE_cadd270v4sf3;
  ena[600] = HAVE_cmulv4hf3;
  ena[601] = HAVE_cmulv2sf3;
  ena[602] = HAVE_cmulv8hf3;
  ena[603] = HAVE_cmulv4sf3;
  ena[604] = HAVE_cmul_conjv4hf3;
  ena[605] = HAVE_cmul_conjv2sf3;
  ena[606] = HAVE_cmul_conjv8hf3;
  ena[607] = HAVE_cmul_conjv4sf3;
  ena[608] = HAVE_cmlav4hf4;
  ena[609] = HAVE_cmlav2sf4;
  ena[610] = HAVE_cmlav8hf4;
  ena[611] = HAVE_cmlav4sf4;
  ena[612] = HAVE_cmla_conjv4hf4;
  ena[613] = HAVE_cmla_conjv2sf4;
  ena[614] = HAVE_cmla_conjv8hf4;
  ena[615] = HAVE_cmla_conjv4sf4;
  ena[616] = HAVE_cmlsv4hf4;
  ena[617] = HAVE_cmlsv2sf4;
  ena[618] = HAVE_cmlsv8hf4;
  ena[619] = HAVE_cmlsv4sf4;
  ena[620] = HAVE_cmls_conjv4hf4;
  ena[621] = HAVE_cmls_conjv2sf4;
  ena[622] = HAVE_cmls_conjv8hf4;
  ena[623] = HAVE_cmls_conjv4sf4;
  ena[624] = HAVE_fmaxsf3;
  ena[625] = HAVE_fmaxdf3;
  ena[626] = HAVE_fmaxv2sf3;
  ena[627] = HAVE_fmaxv4sf3;
  ena[628] = HAVE_fminsf3;
  ena[629] = HAVE_fmindf3;
  ena[630] = HAVE_fminv2sf3;
  ena[631] = HAVE_fminv4sf3;
  ena[632] = HAVE_reduc_smax_scal_v8qi;
  ena[633] = HAVE_reduc_smax_scal_v4hi;
  ena[634] = HAVE_reduc_smax_scal_v2si;
  ena[635] = HAVE_reduc_smax_scal_v16qi;
  ena[636] = HAVE_reduc_smax_scal_v8hi;
  ena[637] = HAVE_reduc_smax_scal_v4si;
  ena[638] = HAVE_reduc_smax_scal_v2sf;
  ena[639] = HAVE_reduc_smax_scal_v4sf;
  ena[640] = HAVE_reduc_smin_scal_v8qi;
  ena[641] = HAVE_reduc_smin_scal_v4hi;
  ena[642] = HAVE_reduc_smin_scal_v2si;
  ena[643] = HAVE_reduc_smin_scal_v16qi;
  ena[644] = HAVE_reduc_smin_scal_v8hi;
  ena[645] = HAVE_reduc_smin_scal_v4si;
  ena[646] = HAVE_reduc_smin_scal_v2sf;
  ena[647] = HAVE_reduc_smin_scal_v4sf;
  ena[648] = HAVE_reduc_plus_scal_v8qi;
  ena[649] = HAVE_reduc_plus_scal_v4hi;
  ena[650] = HAVE_reduc_plus_scal_v2si;
  ena[651] = HAVE_reduc_plus_scal_v16qi;
  ena[652] = HAVE_reduc_plus_scal_v8hi;
  ena[653] = HAVE_reduc_plus_scal_v4si;
  ena[654] = HAVE_reduc_plus_scal_v2di;
  ena[655] = HAVE_reduc_plus_scal_v2sf;
  ena[656] = HAVE_reduc_plus_scal_v4sf;
  ena[657] = HAVE_reduc_umax_scal_v8qi;
  ena[658] = HAVE_reduc_umax_scal_v4hi;
  ena[659] = HAVE_reduc_umax_scal_v2si;
  ena[660] = HAVE_reduc_umax_scal_v16qi;
  ena[661] = HAVE_reduc_umax_scal_v8hi;
  ena[662] = HAVE_reduc_umax_scal_v4si;
  ena[663] = HAVE_reduc_umin_scal_v8qi;
  ena[664] = HAVE_reduc_umin_scal_v4hi;
  ena[665] = HAVE_reduc_umin_scal_v2si;
  ena[666] = HAVE_reduc_umin_scal_v16qi;
  ena[667] = HAVE_reduc_umin_scal_v8hi;
  ena[668] = HAVE_reduc_umin_scal_v4si;
  ena[669] = HAVE_sdot_prodv8qi;
  ena[670] = HAVE_sdot_prodv16qi;
  ena[671] = HAVE_widen_ssumv8qi3;
  ena[672] = HAVE_widen_ssumv4hi3;
  ena[673] = HAVE_widen_ssumv2si3;
  ena[674] = HAVE_widen_ssumv16qi3;
  ena[675] = HAVE_widen_ssumv8hi3;
  ena[676] = HAVE_widen_ssumv4si3;
  ena[677] = HAVE_udot_prodv8qi;
  ena[678] = HAVE_udot_prodv16qi;
  ena[679] = HAVE_widen_usumv8qi3;
  ena[680] = HAVE_widen_usumv4hi3;
  ena[681] = HAVE_widen_usumv2si3;
  ena[682] = HAVE_widen_usumv16qi3;
  ena[683] = HAVE_widen_usumv8hi3;
  ena[684] = HAVE_widen_usumv4si3;
  ena[685] = HAVE_usadv16qi;
  ena[686] = HAVE_ssadv16qi;
  ena[687] = HAVE_vec_pack_trunc_di;
  ena[688] = HAVE_vec_pack_trunc_v4hi;
  ena[689] = HAVE_vec_pack_trunc_v2si;
  ena[690] = HAVE_vec_pack_trunc_v8hi;
  ena[691] = HAVE_vec_pack_trunc_v4si;
  ena[692] = HAVE_vec_pack_trunc_v2di;
  ena[693] = HAVE_vec_permv8qi;
  ena[694] = HAVE_vec_permv16qi;
  ena[695] = HAVE_vec_setv16qi;
  ena[696] = HAVE_vec_setv8hi;
  ena[697] = HAVE_vec_setv4si;
  ena[698] = HAVE_vec_setv2di;
  ena[699] = HAVE_vec_setv8hf;
  ena[700] = HAVE_vec_setv4sf;
  ena[701] = HAVE_vec_unpacks_hi_v8qi;
  ena[702] = HAVE_vec_unpacks_hi_v4hi;
  ena[703] = HAVE_vec_unpacks_hi_v2si;
  ena[704] = HAVE_vec_unpacks_hi_v16qi;
  ena[705] = HAVE_vec_unpacks_hi_v8hi;
  ena[706] = HAVE_vec_unpacks_hi_v4si;
  ena[707] = HAVE_vec_unpacks_lo_v8qi;
  ena[708] = HAVE_vec_unpacks_lo_v4hi;
  ena[709] = HAVE_vec_unpacks_lo_v2si;
  ena[710] = HAVE_vec_unpacks_lo_v16qi;
  ena[711] = HAVE_vec_unpacks_lo_v8hi;
  ena[712] = HAVE_vec_unpacks_lo_v4si;
  ena[713] = HAVE_vec_unpacku_hi_v8qi;
  ena[714] = HAVE_vec_unpacku_hi_v4hi;
  ena[715] = HAVE_vec_unpacku_hi_v2si;
  ena[716] = HAVE_vec_unpacku_hi_v16qi;
  ena[717] = HAVE_vec_unpacku_hi_v8hi;
  ena[718] = HAVE_vec_unpacku_hi_v4si;
  ena[719] = HAVE_vec_unpacku_lo_v8qi;
  ena[720] = HAVE_vec_unpacku_lo_v4hi;
  ena[721] = HAVE_vec_unpacku_lo_v2si;
  ena[722] = HAVE_vec_unpacku_lo_v16qi;
  ena[723] = HAVE_vec_unpacku_lo_v8hi;
  ena[724] = HAVE_vec_unpacku_lo_v4si;
  ena[725] = HAVE_vec_widen_smult_hi_v8qi;
  ena[726] = HAVE_vec_widen_smult_hi_v4hi;
  ena[727] = HAVE_vec_widen_smult_hi_v2si;
  ena[728] = HAVE_vec_widen_smult_hi_v16qi;
  ena[729] = HAVE_vec_widen_smult_hi_v8hi;
  ena[730] = HAVE_vec_widen_smult_hi_v4si;
  ena[731] = HAVE_vec_widen_smult_lo_v8qi;
  ena[732] = HAVE_vec_widen_smult_lo_v4hi;
  ena[733] = HAVE_vec_widen_smult_lo_v2si;
  ena[734] = HAVE_vec_widen_smult_lo_v16qi;
  ena[735] = HAVE_vec_widen_smult_lo_v8hi;
  ena[736] = HAVE_vec_widen_smult_lo_v4si;
  ena[737] = HAVE_vec_widen_sshiftl_hi_v8qi;
  ena[738] = HAVE_vec_widen_sshiftl_hi_v4hi;
  ena[739] = HAVE_vec_widen_sshiftl_hi_v2si;
  ena[740] = HAVE_vec_widen_sshiftl_hi_v16qi;
  ena[741] = HAVE_vec_widen_sshiftl_hi_v8hi;
  ena[742] = HAVE_vec_widen_sshiftl_hi_v4si;
  ena[743] = HAVE_vec_widen_sshiftl_lo_v8qi;
  ena[744] = HAVE_vec_widen_sshiftl_lo_v4hi;
  ena[745] = HAVE_vec_widen_sshiftl_lo_v2si;
  ena[746] = HAVE_vec_widen_sshiftl_lo_v16qi;
  ena[747] = HAVE_vec_widen_sshiftl_lo_v8hi;
  ena[748] = HAVE_vec_widen_sshiftl_lo_v4si;
  ena[749] = HAVE_vec_widen_umult_hi_v8qi;
  ena[750] = HAVE_vec_widen_umult_hi_v4hi;
  ena[751] = HAVE_vec_widen_umult_hi_v2si;
  ena[752] = HAVE_vec_widen_umult_hi_v16qi;
  ena[753] = HAVE_vec_widen_umult_hi_v8hi;
  ena[754] = HAVE_vec_widen_umult_hi_v4si;
  ena[755] = HAVE_vec_widen_umult_lo_v8qi;
  ena[756] = HAVE_vec_widen_umult_lo_v4hi;
  ena[757] = HAVE_vec_widen_umult_lo_v2si;
  ena[758] = HAVE_vec_widen_umult_lo_v16qi;
  ena[759] = HAVE_vec_widen_umult_lo_v8hi;
  ena[760] = HAVE_vec_widen_umult_lo_v4si;
  ena[761] = HAVE_vec_widen_ushiftl_hi_v8qi;
  ena[762] = HAVE_vec_widen_ushiftl_hi_v4hi;
  ena[763] = HAVE_vec_widen_ushiftl_hi_v2si;
  ena[764] = HAVE_vec_widen_ushiftl_hi_v16qi;
  ena[765] = HAVE_vec_widen_ushiftl_hi_v8hi;
  ena[766] = HAVE_vec_widen_ushiftl_hi_v4si;
  ena[767] = HAVE_vec_widen_ushiftl_lo_v8qi;
  ena[768] = HAVE_vec_widen_ushiftl_lo_v4hi;
  ena[769] = HAVE_vec_widen_ushiftl_lo_v2si;
  ena[770] = HAVE_vec_widen_ushiftl_lo_v16qi;
  ena[771] = HAVE_vec_widen_ushiftl_lo_v8hi;
  ena[772] = HAVE_vec_widen_ushiftl_lo_v4si;
  ena[773] = HAVE_atomic_add_fetchqi;
  ena[774] = HAVE_atomic_add_fetchhi;
  ena[775] = HAVE_atomic_add_fetchsi;
  ena[776] = HAVE_atomic_add_fetchdi;
  ena[777] = HAVE_atomic_addqi;
  ena[778] = HAVE_atomic_addhi;
  ena[779] = HAVE_atomic_addsi;
  ena[780] = HAVE_atomic_adddi;
  ena[781] = HAVE_atomic_and_fetchqi;
  ena[782] = HAVE_atomic_and_fetchhi;
  ena[783] = HAVE_atomic_and_fetchsi;
  ena[784] = HAVE_atomic_and_fetchdi;
  ena[785] = HAVE_atomic_andqi;
  ena[786] = HAVE_atomic_andhi;
  ena[787] = HAVE_atomic_andsi;
  ena[788] = HAVE_atomic_anddi;
  ena[789] = HAVE_atomic_compare_and_swapqi;
  ena[790] = HAVE_atomic_compare_and_swaphi;
  ena[791] = HAVE_atomic_compare_and_swapsi;
  ena[792] = HAVE_atomic_compare_and_swapdi;
  ena[793] = HAVE_atomic_exchangeqi;
  ena[794] = HAVE_atomic_exchangehi;
  ena[795] = HAVE_atomic_exchangesi;
  ena[796] = HAVE_atomic_exchangedi;
  ena[797] = HAVE_atomic_fetch_addqi;
  ena[798] = HAVE_atomic_fetch_addhi;
  ena[799] = HAVE_atomic_fetch_addsi;
  ena[800] = HAVE_atomic_fetch_adddi;
  ena[801] = HAVE_atomic_fetch_andqi;
  ena[802] = HAVE_atomic_fetch_andhi;
  ena[803] = HAVE_atomic_fetch_andsi;
  ena[804] = HAVE_atomic_fetch_anddi;
  ena[805] = HAVE_atomic_fetch_nandqi;
  ena[806] = HAVE_atomic_fetch_nandhi;
  ena[807] = HAVE_atomic_fetch_nandsi;
  ena[808] = HAVE_atomic_fetch_nanddi;
  ena[809] = HAVE_atomic_fetch_orqi;
  ena[810] = HAVE_atomic_fetch_orhi;
  ena[811] = HAVE_atomic_fetch_orsi;
  ena[812] = HAVE_atomic_fetch_ordi;
  ena[813] = HAVE_atomic_fetch_subqi;
  ena[814] = HAVE_atomic_fetch_subhi;
  ena[815] = HAVE_atomic_fetch_subsi;
  ena[816] = HAVE_atomic_fetch_subdi;
  ena[817] = HAVE_atomic_fetch_xorqi;
  ena[818] = HAVE_atomic_fetch_xorhi;
  ena[819] = HAVE_atomic_fetch_xorsi;
  ena[820] = HAVE_atomic_fetch_xordi;
  ena[821] = HAVE_atomic_loadqi;
  ena[822] = HAVE_atomic_loadhi;
  ena[823] = HAVE_atomic_loadsi;
  ena[824] = HAVE_atomic_loaddi;
  ena[825] = HAVE_atomic_nand_fetchqi;
  ena[826] = HAVE_atomic_nand_fetchhi;
  ena[827] = HAVE_atomic_nand_fetchsi;
  ena[828] = HAVE_atomic_nand_fetchdi;
  ena[829] = HAVE_atomic_nandqi;
  ena[830] = HAVE_atomic_nandhi;
  ena[831] = HAVE_atomic_nandsi;
  ena[832] = HAVE_atomic_nanddi;
  ena[833] = HAVE_atomic_or_fetchqi;
  ena[834] = HAVE_atomic_or_fetchhi;
  ena[835] = HAVE_atomic_or_fetchsi;
  ena[836] = HAVE_atomic_or_fetchdi;
  ena[837] = HAVE_atomic_orqi;
  ena[838] = HAVE_atomic_orhi;
  ena[839] = HAVE_atomic_orsi;
  ena[840] = HAVE_atomic_ordi;
  ena[841] = HAVE_atomic_storeqi;
  ena[842] = HAVE_atomic_storehi;
  ena[843] = HAVE_atomic_storesi;
  ena[844] = HAVE_atomic_sub_fetchqi;
  ena[845] = HAVE_atomic_sub_fetchhi;
  ena[846] = HAVE_atomic_sub_fetchsi;
  ena[847] = HAVE_atomic_sub_fetchdi;
  ena[848] = HAVE_atomic_subqi;
  ena[849] = HAVE_atomic_subhi;
  ena[850] = HAVE_atomic_subsi;
  ena[851] = HAVE_atomic_subdi;
  ena[852] = HAVE_atomic_xor_fetchqi;
  ena[853] = HAVE_atomic_xor_fetchhi;
  ena[854] = HAVE_atomic_xor_fetchsi;
  ena[855] = HAVE_atomic_xor_fetchdi;
  ena[856] = HAVE_atomic_xorqi;
  ena[857] = HAVE_atomic_xorhi;
  ena[858] = HAVE_atomic_xorsi;
  ena[859] = HAVE_atomic_xordi;
  ena[860] = HAVE_get_thread_pointersi;
}

static int
lookup_handler (unsigned scode)
{
  int l = 0, h = ARRAY_SIZE (pats), m;
  while (h > l)
    {
      m = (h + l) / 2;
      if (scode == pats[m].scode)
        return m;
      else if (scode < pats[m].scode)
        h = m;
      else
        l = m + 1;
    }
  return -1;
}

enum insn_code
raw_optab_handler (unsigned scode)
{
  int i = lookup_handler (scode);
  return (i >= 0 && this_fn_optabs->pat_enable[i]
          ? pats[i].icode : CODE_FOR_nothing);
}

bool
swap_optab_enable (optab op, machine_mode m, bool set)
{
  unsigned scode = (op << 16) | m;
  int i = lookup_handler (scode);
  if (i >= 0)
    {
      bool ret = this_fn_optabs->pat_enable[i];
      this_fn_optabs->pat_enable[i] = set;
      return ret;
    }
  else
    {
      gcc_assert (!set);
      return false;
    }
}

const struct convert_optab_libcall_d convlib_def[NUM_CONVLIB_OPTABS] = {
  { "extend", gen_extend_conv_libfunc },
  { "trunc", gen_trunc_conv_libfunc },
  { NULL, NULL },
  { "fix", gen_fp_to_int_conv_libfunc },
  { "fixuns", gen_fp_to_int_conv_libfunc },
  { "float", gen_int_to_fp_conv_libfunc },
  { NULL, gen_ufloat_conv_libfunc },
  { "lrint", gen_int_to_fp_nondecimal_conv_libfunc },
  { "lround", gen_int_to_fp_nondecimal_conv_libfunc },
  { "lfloor", gen_int_to_fp_nondecimal_conv_libfunc },
  { "lceil", gen_int_to_fp_nondecimal_conv_libfunc },
  { "fract", gen_fract_conv_libfunc },
  { "fractuns", gen_fractuns_conv_libfunc },
  { "satfract", gen_satfract_conv_libfunc },
  { "satfractuns", gen_satfractuns_conv_libfunc },
};

const struct optab_libcall_d normlib_def[NUM_NORMLIB_OPTABS] = {
  { '3', "add", gen_int_fp_fixed_libfunc },
  { '3', "add", gen_intv_fp_libfunc },
  { '3', "ssadd", gen_signed_fixed_libfunc },
  { '3', "usadd", gen_unsigned_fixed_libfunc },
  { '3', "sub", gen_int_fp_fixed_libfunc },
  { '3', "sub", gen_intv_fp_libfunc },
  { '3', "sssub", gen_signed_fixed_libfunc },
  { '3', "ussub", gen_unsigned_fixed_libfunc },
  { '3', "mul", gen_int_fp_fixed_libfunc },
  { '3', "mul", gen_intv_fp_libfunc },
  { '3', "ssmul", gen_signed_fixed_libfunc },
  { '3', "usmul", gen_unsigned_fixed_libfunc },
  { '3', "div", gen_int_fp_signed_fixed_libfunc },
  { '3', "divv", gen_int_libfunc },
  { '3', "ssdiv", gen_signed_fixed_libfunc },
  { '3', "udiv", gen_int_unsigned_fixed_libfunc },
  { '3', "usdiv", gen_unsigned_fixed_libfunc },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '3', "mod", gen_int_libfunc },
  { '3', "umod", gen_int_libfunc },
  { '2', "ftrunc", gen_fp_libfunc },
  { '3', "and", gen_int_libfunc },
  { '3', "ior", gen_int_libfunc },
  { '3', "xor", gen_int_libfunc },
  { '3', "ashl", gen_int_fixed_libfunc },
  { '3', "ssashl", gen_signed_fixed_libfunc },
  { '3', "usashl", gen_unsigned_fixed_libfunc },
  { '3', "ashr", gen_int_signed_fixed_libfunc },
  { '3', "lshr", gen_int_unsigned_fixed_libfunc },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '3', "min", gen_int_fp_libfunc },
  { '3', "max", gen_int_fp_libfunc },
  { '3', "umin", gen_int_libfunc },
  { '3', "umax", gen_int_libfunc },
  { '2', "neg", gen_int_fp_fixed_libfunc },
  { '2', "neg", gen_intv_fp_libfunc },
  { '2', "ssneg", gen_signed_fixed_libfunc },
  { '2', "usneg", gen_unsigned_fixed_libfunc },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '2', "one_cmpl", gen_int_libfunc },
  { '\0', NULL, NULL },
  { '2', "ffs", gen_int_libfunc },
  { '2', "clz", gen_int_libfunc },
  { '2', "ctz", gen_int_libfunc },
  { '2', "clrsb", gen_int_libfunc },
  { '2', "popcount", gen_int_libfunc },
  { '2', "parity", gen_int_libfunc },
  { '2', "cmp", gen_int_fp_fixed_libfunc },
  { '2', "ucmp", gen_int_libfunc },
  { '2', "eq", gen_fp_libfunc },
  { '2', "ne", gen_fp_libfunc },
  { '2', "gt", gen_fp_libfunc },
  { '2', "ge", gen_fp_libfunc },
  { '2', "lt", gen_fp_libfunc },
  { '2', "le", gen_fp_libfunc },
  { '2', "unord", gen_fp_libfunc },
  { '2', "powi", gen_fp_libfunc },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
};

enum rtx_code const optab_to_code_[NUM_OPTABS] = {
  UNKNOWN,
  SIGN_EXTEND,
  TRUNCATE,
  ZERO_EXTEND,
  FIX,
  UNSIGNED_FIX,
  FLOAT,
  UNSIGNED_FLOAT,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  FRACT_CONVERT,
  UNSIGNED_FRACT_CONVERT,
  SAT_FRACT,
  UNSIGNED_SAT_FRACT,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  PLUS,
  PLUS,
  SS_PLUS,
  US_PLUS,
  MINUS,
  MINUS,
  SS_MINUS,
  US_MINUS,
  MULT,
  MULT,
  SS_MULT,
  US_MULT,
  DIV,
  DIV,
  SS_DIV,
  UDIV,
  US_DIV,
  UNKNOWN,
  UNKNOWN,
  MOD,
  UMOD,
  UNKNOWN,
  AND,
  IOR,
  XOR,
  ASHIFT,
  SS_ASHIFT,
  US_ASHIFT,
  ASHIFTRT,
  LSHIFTRT,
  ROTATE,
  ROTATERT,
  ASHIFT,
  ASHIFTRT,
  LSHIFTRT,
  ROTATE,
  ROTATERT,
  SMIN,
  SMAX,
  UMIN,
  UMAX,
  NEG,
  NEG,
  SS_NEG,
  US_NEG,
  ABS,
  ABS,
  NOT,
  BSWAP,
  FFS,
  CLZ,
  CTZ,
  CLRSB,
  POPCOUNT,
  PARITY,
  UNKNOWN,
  UNKNOWN,
  EQ,
  NE,
  GT,
  GE,
  LT,
  LE,
  UNORDERED,
  UNKNOWN,
  SQRT,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  SET,
  STRICT_LOW_PART,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  COMPARE,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  FMA,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  VEC_DUPLICATE,
  VEC_SERIES,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
};

const optab code_to_optab_[NUM_RTX_CODE] = {
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  mov_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  movstrict_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  cbranch_optab,
  add_optab,
  sub_optab,
  neg_optab,
  smul_optab,
  ssmul_optab,
  usmul_optab,
  sdiv_optab,
  ssdiv_optab,
  usdiv_optab,
  smod_optab,
  udiv_optab,
  umod_optab,
  and_optab,
  ior_optab,
  xor_optab,
  one_cmpl_optab,
  ashl_optab,
  rotl_optab,
  ashr_optab,
  lshr_optab,
  rotr_optab,
  smin_optab,
  smax_optab,
  umin_optab,
  umax_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  ne_optab,
  eq_optab,
  ge_optab,
  gt_optab,
  le_optab,
  lt_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unord_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  abs_optab,
  sqrt_optab,
  bswap_optab,
  ffs_optab,
  clrsb_optab,
  clz_optab,
  ctz_optab,
  popcount_optab,
  parity_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  vec_duplicate_optab,
  vec_series_optab,
  ssadd_optab,
  usadd_optab,
  sssub_optab,
  ssneg_optab,
  usneg_optab,
  unknown_optab,
  ssashl_optab,
  usashl_optab,
  ussub_optab,
  unknown_optab,
  unknown_optab,
  fma_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
};

