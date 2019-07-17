/* This is a generated file. DO NOT EDIT! */

static const FoldFunc fold_func[] = {
  fold_kfold_numarith,
  fold_kfold_numabsneg,
  fold_kfold_ldexp,
  fold_kfold_fpmath,
  fold_kfold_numpow,
  fold_kfold_numcomp,
  fold_kfold_intarith,
  fold_kfold_intovarith,
  fold_kfold_bnot,
  fold_kfold_bswap,
  fold_kfold_intcomp,
  fold_kfold_intcomp0,
  fold_kfold_int64arith,
  fold_kfold_int64arith2,
  fold_kfold_int64shift,
  fold_kfold_bnot64,
  fold_kfold_bswap64,
  fold_kfold_int64comp,
  fold_kfold_int64comp0,
  fold_kfold_snew_kptr,
  fold_kfold_snew_empty,
  fold_kfold_strref,
  fold_kfold_strref_snew,
  fold_kfold_strcmp,
  fold_bufput_append,
  fold_bufput_kgc,
  fold_bufstr_kfold_cse,
  fold_bufput_kfold_op,
  fold_bufput_kfold_rep,
  fold_bufput_kfold_fmt,
  fold_kfold_add_kgc,
  fold_kfold_add_kptr,
  fold_kfold_add_kright,
  fold_kfold_tobit,
  fold_kfold_conv_kint_num,
  fold_kfold_conv_kintu32_num,
  fold_kfold_conv_kint_ext,
  fold_kfold_conv_kint_i64,
  fold_kfold_conv_kint64_num_i64,
  fold_kfold_conv_kint64_num_u64,
  fold_kfold_conv_kint64_int_i64,
  fold_kfold_conv_knum_int_num,
  fold_kfold_conv_knum_u32_num,
  fold_kfold_conv_knum_i64_num,
  fold_kfold_conv_knum_u64_num,
  fold_kfold_tostr_knum,
  fold_kfold_tostr_kint,
  fold_kfold_strto,
  lj_opt_cse,
  fold_kfold_kref,
  fold_shortcut_round,
  fold_shortcut_left,
  fold_shortcut_dropleft,
  fold_shortcut_leftleft,
  fold_simplify_numadd_negx,
  fold_simplify_numadd_xneg,
  fold_simplify_numsub_k,
  fold_simplify_numsub_negk,
  fold_simplify_numsub_xneg,
  fold_simplify_nummuldiv_k,
  fold_simplify_nummuldiv_negk,
  fold_simplify_nummuldiv_negneg,
  fold_simplify_numpow_xk,
  fold_simplify_numpow_kx,
  fold_shortcut_conv_num_int,
  fold_simplify_conv_int_num,
  fold_simplify_conv_i64_num,
  fold_simplify_conv_int_i64,
  fold_simplify_conv_flt_num,
  fold_simplify_tobit_conv,
  fold_simplify_floor_conv,
  fold_simplify_conv_sext,
  fold_simplify_conv_narrow,
  fold_cse_conv,
  fold_narrow_convert,
  fold_simplify_intadd_k,
  fold_simplify_intmul_k,
  fold_simplify_intsub_k,
  fold_simplify_intsub_kleft,
  fold_simplify_intadd_k64,
  fold_simplify_intsub_k64,
  fold_simplify_intmul_k32,
  fold_simplify_intmul_k64,
  fold_simplify_intmod_k,
  fold_simplify_intmod_kleft,
  fold_simplify_intsub,
  fold_simplify_intsubadd_leftcancel,
  fold_simplify_intsubsub_leftcancel,
  fold_simplify_intsubsub_rightcancel,
  fold_simplify_intsubadd_rightcancel,
  fold_simplify_intsubaddadd_cancel,
  fold_simplify_band_k,
  fold_simplify_bor_k,
  fold_simplify_bxor_k,
  fold_simplify_shift_ik,
  fold_simplify_shift_andk,
  fold_simplify_shift1_ki,
  fold_simplify_shift2_ki,
  fold_simplify_shiftk_andk,
  fold_simplify_andk_shiftk,
  fold_simplify_andor_k,
  fold_simplify_andor_k64,
  fold_reassoc_intarith_k,
  fold_reassoc_intarith_k64,
  fold_reassoc_dup,
  fold_reassoc_bxor,
  fold_reassoc_shift,
  fold_reassoc_minmax_k,
  fold_reassoc_minmax_left,
  fold_reassoc_minmax_right,
  fold_abc_fwd,
  fold_abc_k,
  fold_abc_invar,
  fold_comm_swap,
  fold_comm_equal,
  fold_comm_comp,
  fold_comm_dup,
  fold_comm_bxor,
  fold_merge_eqne_snew_kgc,
  lj_opt_fwd_aload,
  fold_kfold_hload_kkptr,
  lj_opt_fwd_hload,
  lj_opt_fwd_uload,
  lj_opt_fwd_tab_len,
  fold_cse_uref,
  lj_opt_fwd_hrefk,
  fold_fwd_href_tnew,
  fold_fwd_href_tdup,
  fold_fload_tab_tnew_asize,
  fold_fload_tab_tnew_hmask,
  fold_fload_tab_tdup_asize,
  fold_fload_tab_tdup_hmask,
  fold_fload_tab_ah,
  fold_fload_str_len_kgc,
  fold_fload_str_len_snew,
  fold_fload_str_len_tostr,
  fold_fload_cdata_typeid_kgc,
  fold_fload_cdata_int64_kgc,
  fold_fload_cdata_typeid_cnew,
  fold_fload_cdata_ptr_int64_cnew,
  lj_opt_cse,
  lj_opt_fwd_fload,
  fold_fwd_sload,
  fold_xload_kptr,
  lj_opt_fwd_xload,
  fold_barrier_tab,
  fold_barrier_tnew_tdup,
  lj_opt_dse_ahstore,
  lj_opt_dse_ustore,
  lj_opt_dse_fstore,
  lj_opt_dse_xstore,
  lj_ir_emit
};

static const uint32_t fold_hash[992] = {
0xffffffff,
0x28b27295,
0xffffffff,
0x48b2a695,
0xffffffff,
0xffffffff,
0x7f754015,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0x6542801c,
0x730bffff,
0xffffffff,
0x1108701c,
0x0a085816,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0x1e505c16,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0x6740801c,
0x7309ffff,
0x21b46c1b,
0x1106701c,
0x0a065816,
0xffffffff,
0xffffffff,
0x26b271d5,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0x7307ffff,
0xffffffff,
0x1104701c,
0x0a045816,
0xffffffff,
0xffffffff,
0xffffffff,
0x92ad4000,
0x17bb8800,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0x48b2a275,
0x5f4ffc20,
0xffffffff,
0x7305ffff,
0x25b25ad4,
0x1102701c,
0x0a025816,
0xffffffff,
0x9179ffff,
0x18a94c55,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0x5f4dfc20,
0x2051fc17,
0x7303ffff,
0xffffffff,
0x1100701c,
0x0a005816,
0x6b66cc16,
0x4ab4a01b,
0x9777ffff,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0x6a489016,
0xffffffff,
0xffffffff,
0xffffffff,
0x5f4bfc20,
0xffffffff,
0x7301ffff,
0xffffffff,
0xffffffff,
0x91adfc00,
0xffffffff,
0x8475ffff,
0x0e4e7016,
0x015e6c44,
0x120bfc1c,
0x3268d001,
0x5953fc28,
0x41b3666e,
0x3e5bfc16,
0xffffffff,
0xffffffff,
0x5f49fc20,
0xffffffff,
0xffffffff,
0x89885c11,
0x42b366ce,
0xffffffff,
0xffffffff,
0x7d73ffff,
0x0e4c7016,
0x015c6c44,
0xffffffff,
0xffffffff,
0xffffffff,
0x5359fc16,
0xffffffff,
0xffffffff,
0x1dbf880f,
0x5f47fc20,
0x8c89fc01,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0x0e4a7016,
0xffffffff,
0x076e5816,
0xffffffff,
0x44b365ae,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0x69448bff,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0x716fffff,
0x0e487016,
0xffffffff,
0x076c5816,
0xffffffff,
0xffffffff,
0x63409016,
0x5155fc16,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0x87896c00,
0xffffffff,
0x556dffff,
0x0e467016,
0xffffffff,
0x076a5816,
0xffffffff,
0xffffffff,
0x4d53fc16,
0xffffffff,
0x25b25ad3,
0x4ab2a6ae,
0xffffffff,
0x2ab26e8e,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0x43b36676,
0x6744881c,
0x716bffff,
0xffffffff,
0xffffffff,
0x48b2aa76,
0xffffffff,
0x4b51fc16,
0xffffffff,
0x46696400,
0xffffffff,
0xffffffff,
0xffffffff,
0x353c7800,
0xffffffff,
0xffffffff,
0x167f37ff,
0x97a1fc00,
0xffffffff,
0xffffffff,
0xffffffff,
0x06665816,
0x8489fc09,
0x8a89440e,
0x5e4ffc16,
0xffffffff,
0xffffffff,
0x83894009,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0x7467ffff,
0xffffffff,
0xffffffff,
0x06645816,
0xffffffff,
0xffffffff,
0x5e4dfc16,
0xffffffff,
0x89885c10,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0x85885c00,
0xffffffff,
0xffffffff,
0xffffffff,
0x7465ffff,
0xffffffff,
0xffffffff,
0xffffffff,
0x1dbf880e,
0xffffffff,
0x5e4bfc16,
0x093e5800,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0x5e49fc16,
0x083c5800,
0xffffffff,
0x3113fc1a,
0xffffffff,
0x1f506416,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0x5e47fc16,
0xffffffff,
0xffffffff,
0x3111fc1a,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0x8c89fc11,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0x065c5816,
0xffffffff,
0xffffffff,
0x5d45fc16,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0x43b36675,
0xffffffff,
0x6a4c9816,
0xffffffff,
0xffffffff,
0x48b2aa75,
0x02626c16,
0xffffffff,
0x0d5a701c,
0xffffffff,
0xffffffff,
0xffffffff,
0x5c43fc16,
0x7f75401b,
0x48b2a296,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0x1cbf8816,
0x66428416,
0x8489fc08,
0x45b5641b,
0x0d58701c,
0x06585816,
0x82894008,
0x1e505c1c,
0x7bbffc1e,
0x5b41fc16,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0x24b25a72,
0x4e5273ff,
0xffffffff,
0x5752a7ff,
0x64408416,
0xffffffff,
0xffffffff,
0x0d56701c,
0x89885c0f,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0x6866cfff,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0x1dbf880d,
0xffffffff,
0xffffffff,
0x0c54701c,
0x06545816,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0x6c64cfff,
0xffffffff,
0xffffffff,
0x614e73ff,
0x355cbbff,
0xffffffff,
0xffffffff,
0x7155ffff,
0x045a6c16,
0x0c52701c,
0x06525816,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0x3268d000,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0x614c73ff,
0xffffffff,
0xffffffff,
0xffffffff,
0x5553ffff,
0x3d56b82e,
0x0c50701c,
0x06505816,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0x8c89fc10,
0xffffffff,
0xffffffff,
0x614a73ff,
0x23b259d4,
0x8c89fc00,
0xffffffff,
0x7151ffff,
0x3d54b82e,
0xffffffff,
0x064e5816,
0xffffffff,
0x3a53fc2e,
0xffffffff,
0x335ebc44,
0x05126c1b,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0x604873ff,
0xffffffff,
0x7a87fc00,
0x41b3668e,
0xffffffff,
0x5a52a028,
0xffffffff,
0x064c5816,
0x48b2a295,
0x3751fc2e,
0x97c3ffff,
0xffffffff,
0x05106c1b,
0x31125c17,
0x1bbf8815,
0x8489fc07,
0xffffffff,
0x604673ff,
0xffffffff,
0x7985fc00,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0x064a5816,
0xffffffff,
0x97c1ffff,
0xffffffff,
0x24b25a71,
0x050e6c1b,
0x31105c17,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0x7783fc00,
0x88885c0e,
0xffffffff,
0xffffffff,
0x78846400,
0x06485816,
0xffffffff,
0x97bfffff,
0xffffffff,
0x5255fc1c,
0x050c6c1b,
0xffffffff,
0xffffffff,
0x1dbf880c,
0xffffffff,
0x3650bbff,
0x6b64c816,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0x92ad3c00,
0x06465816,
0x7e753fff,
0x6a468c16,
0x97bdffff,
0x5053fc1c,
0x050a6c1b,
0x8b894811,
0x4ab2a66e,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0x0c44701c,
0x06445816,
0x2bb26eae,
0xffffffff,
0xffffffff,
0x4f51fc1c,
0x05086c1b,
0x43b36696,
0xffffffff,
0x6b66cc1b,
0xffffffff,
0xffffffff,
0x48b2aa96,
0xffffffff,
0xffffffff,
0x7545ffff,
0xffffffff,
0x0c42701c,
0x06425816,
0x6650a016,
0x8c89fc0f,
0xffffffff,
0xffffffff,
0x05066c1b,
0x22b259d3,
0xffffffff,
0xffffffff,
0x03686fff,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0x7443ffff,
0xffffffff,
0x0c40701c,
0x06405816,
0xffffffff,
0x63408c16,
0xffffffff,
0xffffffff,
0x05046c1b,
0xffffffff,
0x684287ff,
0xffffffff,
0x86893400,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0x7441ffff,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0x1bbf8814,
0x8489fc06,
0x4ab2a2ae,
0x05026c1b,
0xffffffff,
0xffffffff,
0x149bfc16,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0x3b57fc1b,
0x24b25a70,
0x48b2a676,
0x49b3ffff,
0xffffffff,
0xffffffff,
0x05006c1b,
0xffffffff,
0xffffffff,
0xffffffff,
0x1f50641c,
0xffffffff,
0x3c56b81b,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0x3b55fc1b,
0xffffffff,
0xffffffff,
0xffffffff,
0x1dbf880b,
0xffffffff,
0x81893c09,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0x3c54b81b,
0x624e8016,
0x54585bff,
0xffffffff,
0xffffffff,
0x3853fc1b,
0xffffffff,
0x8b894810,
0x91afffff,
0xffffffff,
0x5d45fc1c,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0x3952b81b,
0x624c8016,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0x43b36695,
0xffffffff,
0xffffffff,
0x5c43fc1c,
0xffffffff,
0x157e5c16,
0x48b2aa95,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0x139a6416,
0x6742841c,
0x8c89fc0e,
0xffffffff,
0xffffffff,
0x6e15fc28,
0x1aabffff,
0x31126bff,
0x5b41fc1c,
0xffffffff,
0xffffffff,
0x1f506016,
0xffffffff,
0x3f5a6fff,
0xffffffff,
0xffffffff,
0x62488016,
0x4e525bff,
0x6540841c,
0xffffffff,
0xffffffff,
0x97b00000,
0xffffffff,
0x19a9ffff,
0x31106bff,
0x47b3feb3,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0x62468016,
0xffffffff,
0x1bbf8813,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0x97a7ffff,
0xffffffff,
0xffffffff,
0xffffffff,
0x6654a816,
0xffffffff,
0xffffffff,
0xffffffff,
0x28b27275,
0x24b25a6f,
0x614e5bff,
0x48b2a675,
0xffffffff,
0x6d65fc33,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0x6a4a9416,
0x00666c1b,
0xffffffff,
0x64428016,
0x614c5bff,
0xffffffff,
0x1dbf880a,
0xffffffff,
0x80893c08,
0xffffffff,
0x97a3ffff,
0x4ab4a41b,
0x6f15fc16,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0x00646c1b,
0x5652a3ff,
0x66408016,
0x614a5bff,
0x8b89480f,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0x6c66cbff,
0xffffffff,
0xffffffff,
0xffffffff,
0x00626c1b,
0xffffffff,
0x60485bff,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0x979fffff,
0xffffffff,
0xffffffff,
0x76133417,
0x25b25ab4,
0x6864cbff,
0xffffffff,
0xffffffff,
0x00606c1b,
0xffffffff,
0x60465bff,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0x979dffff,
0xffffffff,
0xffffffff,
0x76113417,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0x7f754017,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0x6d67fc32,
0x8c89fc04,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0x2eb65bff,
0xffffffff,
0x9699ffff,
0x0b0bfc16,
0x345eb844,
0xffffffff,
0x42b366ae,
0xffffffff,
0xffffffff,
0xffffffff,
0x46696402,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0x353e7c00,
0xffffffff,
0xffffffff,
0xffffffff,
0x9597ffff,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0x1bbf8809,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0x2fb85c00,
0xffffffff,
0xffffffff,
0x6750a01c,
0x9495ffff,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0x8a89480e,
0xffffffff,
0x00566c1b,
0xffffffff,
0xffffffff,
0xffffffff,
0x3013101a,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0x9393ffff,
0xffffffff,
0xffffffff,
0xffffffff,
0x2051fc19,
0xffffffff,
0xffffffff,
0xffffffff,
0x00546c1b,
0xffffffff,
0xffffffff,
0xffffffff,
0x3011101a,
0x2db66fff,
0xffffffff,
0x25b25ab3,
0xffffffff,
0x9391ffff,
0x29b26e6e,
0xffffffff,
0x4ab2a26e,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0x00526c1b,
0xffffffff,
0x2cb26ece,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0x7c7a5fff,
0x66448816,
0x8c8fffff,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0x40b365d3,
0xffffffff,
0x00506c1b,
0x48b2a696,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0x7c785fff,
0xffffffff,
0x8e8dffff,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0x6b64c81b,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0x9717ffff,
0xffffffff,
0x6a4e9c16,
0x0a145816,
0xffffffff,
0x908bffff,
0xffffffff,
0xffffffff,
0x46696401,
0xffffffff,
0xffffffff,
0x27b271d6,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0x7015ffff,
0xffffffff,
0x3112701c,
0x31125816,
0xffffffff,
0x8d89ffff,
0xffffffff,
0xffffffff,
0xffffffff,
0x684083ff,
0x103e7000,
0x4c6ffc16,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0x7213ffff,
0xffffffff,
0x3110701c,
0x48b2a276,
0x31105816,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0x0f3c7000,
0x1f50601c,
0x4b6dfc16,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0x7211ffff,
0xffffffff,
0x110e701c,
0x0a0e5816,
0x2051fc18,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0x4b6bfc16,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0x47b3fed3,
0x730fffff,
0xffffffff,
0x110c701c,
0x0a0c5816,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0xffffffff,
0x6754a81c,
0x8f8a67ff,
0xffffffff,
0x3268d002,
0x5853fc29,
0xffffffff,
0xffffffff,
0x730dffff,
0xffffffff,
0x110a701c,
0x0a0a5816,
0xffffffff,
0xffffffff
};

#define fold_hashkey(k)	(lj_rol(lj_rol((k),26)-(k),25)%991)

