/*
 * File: ControlBuild.c
 *
 * Code generated for Simulink model 'ControlBuild'.
 *
 * Model version                  : 1.982
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Wed Apr 21 14:31:48 2021
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Freescale->32-bit PowerPC
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "ControlBuild.h"

/* Named constants for Chart: '<S17>/Chart' */
#define ControlBuild_IN_NO_ACTIVE_CHILD ((uint8_T)0U)
#define ControlBuild_IN_close1         ((uint8_T)1U)
#define ControlBuild_IN_high           ((uint8_T)1U)
#define ControlBuild_IN_low            ((uint8_T)2U)
#define ControlBuild_IN_open1          ((uint8_T)2U)
#define ControlBuild_IN_pause          ((uint8_T)3U)
#define ControlBuild_IN_stop           ((uint8_T)4U)
#define ControlBuild_IN_wash           ((uint8_T)5U)
#ifndef UCHAR_MAX
#include <limits.h>
#endif

#if ( UCHAR_MAX != (0xFFU) ) || ( SCHAR_MAX != (0x7F) )
#error Code was generated for compiler with different sized uchar/char. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

#if ( USHRT_MAX != (0xFFFFU) ) || ( SHRT_MAX != (0x7FFF) )
#error Code was generated for compiler with different sized ushort/short. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

#if ( UINT_MAX != (0xFFFFFFFFU) ) || ( INT_MAX != (0x7FFFFFFF) )
#error Code was generated for compiler with different sized uint/int. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

#if ( ULONG_MAX != (0xFFFFFFFFU) ) || ( LONG_MAX != (0x7FFFFFFF) )
#error Code was generated for compiler with different sized ulong/long. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

const OUTPUTPINS ControlBuild_rtZOUTPUTPINS = {
  0U,                                  /* CON2_1 */
  0U,                                  /* CON2_2 */
  0U,                                  /* CON2_7 */
  0U,                                  /* CON2_8 */
  0U,                                  /* CON2_9 */
  0U,                                  /* CON2_10 */
  0U,                                  /* CON2_11 */
  0U,                                  /* CON2_12 */
  0U,                                  /* CON2_13 */
  0U,                                  /* CON2_14 */
  0U,                                  /* CON2_15 */
  0U,                                  /* CON2_16 */
  0U,                                  /* CON3_1 */
  0U,                                  /* CON3_2 */
  0U,                                  /* CON3_9 */
  0U,                                  /* CON3_10 */
  0U,                                  /* CON3_11 */
  0U,                                  /* CON3_12 */
  0U,                                  /* CON3_13 */
  0U,                                  /* CON3_14 */
  0U,                                  /* CON3_15 */
  0U,                                  /* CON3_16 */
  0U,                                  /* CON3_17 */
  0U,                                  /* CON3_18 */
  0U,                                  /* CON3_19 */
  0U,                                  /* CON3_20 */
  0U,                                  /* CON4_11 */
  0U,                                  /* CON4_12 */
  0U,                                  /* CON4_13 */
  0U,                                  /* CON4_14 */
  0U,                                  /* CON4_15 */
  0U,                                  /* CON4_16 */
  0U,                                  /* CON4_17 */
  0U,                                  /* CON4_18 */
  0U,                                  /* CON4_19 */
  0U,                                  /* CON4_20 */
  0U,                                  /* CON5_1 */
  0U,                                  /* CON5_2 */
  0U,                                  /* CON5_7 */
  0U,                                  /* CON5_8 */
  0U,                                  /* CON5_9 */
  0U,                                  /* CON5_10 */
  0U,                                  /* CON5_11 */
  0U,                                  /* CON5_12 */
  0U,                                  /* CON5_13 */
  0U,                                  /* CON5_14 */
  0U,                                  /* CON5_15 */
  0U,                                  /* CON5_16 */
  0U,                                  /* CON6_1 */
  0U,                                  /* CON6_10 */
  0U,                                  /* CON6_11 */
  0U,                                  /* CON6_12 */
  0U,                                  /* CON6_14 */
  0U,                                  /* CON6_15 */
  0U,                                  /* CON6_17 */
  0U,                                  /* CON6_18 */
  0U,                                  /* CON6_19 */
  0U,                                  /* CON6_20 */
  0U,                                  /* CON7_1 */
  0U,                                  /* CON7_2 */
  0U,                                  /* CON7_3 */
  0U,                                  /* CON7_6 */
  0U,                                  /* CON7_9 */
  0U,                                  /* CON7_12 */
  0U,                                  /* CON7_13 */
  0U,                                  /* CON7_16 */
  0U,                                  /* CON7_17 */
  0U,                                  /* CON7_18 */
  0U,                                  /* CON8_2 */
  0U,                                  /* CON8_3 */
  0U,                                  /* CON8_6 */
  0U,                                  /* CON8_7 */
  0U,                                  /* CON8_8 */
  0U,                                  /* CON8_9 */
  0U,                                  /* CON8_10 */
  0U,                                  /* CON8_11 */
  0U,                                  /* CON8_12 */
  0U,                                  /* CON8_13 */
  0U,                                  /* CON8_14 */
  0U,                                  /* CON9_5 */
  0U,                                  /* CON9_6 */
  0U,                                  /* CON9_7 */
  0U,                                  /* CON9_8 */
  0U,                                  /* CON10_9 */
  0U,                                  /* CON10_12 */
  0U,                                  /* CON10_13 */
  0U,                                  /* CON10_15 */
  0U,                                  /* CON10_17 */
  0U,                                  /* CON10_18 */
  0U,                                  /* CON11_6 */
  0U,                                  /* CON11_7 */
  0U,                                  /* CON11_9 */
  0U,                                  /* CON11_10 */
  0U,                                  /* CON11_12 */
  0U                                   /* CON12_6 */
} ;                                    /* OUTPUTPINS ground */

/* Exported block signals */
INPUT_CAN_BUS InputCanBus;             /* '<Root>/CanSignals' */
INPUTPINS InputPinBus;                 /* '<Root>/PinSignals' */
OUTPUTPINS OutputPinBus;               /* '<S7>/Bus Creator' */
uint32_T Selected_ID2;                 /* '<S9>/Constant1' */
uint32_T Selected_ID3;                 /* '<S9>/Constant2' */
uint32_T Selected_ID8;                 /* '<S9>/Constant27' */
uint32_T Selected_ID9;                 /* '<S9>/Constant28' */
uint32_T Selected_ID10;                /* '<S9>/Constant29' */
uint32_T Selected_ID4;                 /* '<S9>/Constant3' */
uint32_T Selected_ID5;                 /* '<S9>/Constant4' */
uint32_T Selected_ID6;                 /* '<S9>/Constant5' */
uint32_T Selected_ID7;                 /* '<S9>/Constant6' */
uint32_T Selected_ID1;                 /* '<S9>/Constant7' */
uint8_T InputHLSideSelector[66];       /* '<S408>/Data Type Conversion' */

/* Invariant block signals (default storage) */
const ConstB_ControlBuild_T ControlBuild_ConstB = {
  1U,                                  /* '<S5>/Switch1' */
  1,                                   /* '<S407>/Compare' */
  0,                                   /* '<S8>/Compare' */
  0,                                   /* '<S2>/Logical Operator' */
  1,                                   /* '<S406>/Compare' */
  1,                                   /* '<S211>/Compare' */
  1,                                   /* '<S226>/Compare' */
  1,                                   /* '<S247>/Compare' */
  1,                                   /* '<S262>/Compare' */
  0,                                   /* '<S291>/Compare' */
  0,                                   /* '<S336>/Compare' */
  1,                                   /* '<S335>/Compare' */
  0,                                   /* '<S329>/Compare' */
  1,                                   /* '<S328>/Compare' */
  1,                                   /* '<S320>/Compare' */
  0,                                   /* '<S322>/Compare' */
  1,                                   /* '<S317>/Logical Operator13' */
  1,                                   /* '<S362>/Compare' */
  1,                                   /* '<S359>/Compare' */
  0,                                   /* '<S361>/Compare' */
  0,                                   /* '<S366>/Compare' */
  1,                                   /* '<S364>/Compare' */
  0,                                   /* '<S365>/Compare' */
  1,                                   /* '<S413>/Compare' */

  /* Start of '<S380>/Falling Edge' */
  {
    1                                  /* '<S393>/Logical Operator1' */
  }
  ,

  /* End of '<S380>/Falling Edge' */

  /* Start of '<S379>/Falling Edge' */
  {
    1                                  /* '<S391>/Logical Operator1' */
  }
  ,

  /* End of '<S379>/Falling Edge' */

  /* Start of '<S378>/Falling Edge' */
  {
    0                                  /* '<S389>/Logical Operator1' */
  }
  ,

  /* End of '<S378>/Falling Edge' */

  /* Start of '<S377>/Falling Edge' */
  {
    0                                  /* '<S387>/Logical Operator1' */
  }
  ,

  /* End of '<S377>/Falling Edge' */

  /* Start of '<S340>/Falling Edge' */
  {
    1                                  /* '<S352>/Logical Operator1' */
  }
  ,

  /* End of '<S340>/Falling Edge' */

  /* Start of '<S339>/Falling Edge' */
  {
    1                                  /* '<S350>/Logical Operator1' */
  }
  ,

  /* End of '<S339>/Falling Edge' */

  /* Start of '<S338>/Falling Edge' */
  {
    1                                  /* '<S348>/Logical Operator1' */
  }
  ,

  /* End of '<S338>/Falling Edge' */

  /* Start of '<S337>/Falling Edge' */
  {
    1                                  /* '<S346>/Logical Operator1' */
  }
  ,

  /* End of '<S337>/Falling Edge' */

  /* Start of '<S297>/Falling Edge' */
  {
    1                                  /* '<S301>/Logical Operator1' */
  }
  /* End of '<S297>/Falling Edge' */
};

/* Block signals (default storage) */
B_ControlBuild_T ControlBuild_B;

/* Block states (default storage) */
DW_ControlBuild_T ControlBuild_DW;

/* External inputs (root inport signals with default storage) */
ExtU_ControlBuild_T ControlBuild_U;

/* Real-time model */
RT_MODEL_ControlBuild_T ControlBuild_M_;
RT_MODEL_ControlBuild_T *const ControlBuild_M = &ControlBuild_M_;

/* Expression: const
 * Referenced by: '<S24>/Constant'
 */
#define rtCP_Constant_Value            (40.0)

/* Expression: const
 * Referenced by: '<S154>/Constant'
 */
#define rtCP_Constant_Value_og         (1.0)

/* Expression: const
 * Referenced by: '<S155>/Constant'
 */
#define rtCP_Constant_Value_b          (1.0)

/* Expression: const
 * Referenced by: '<S162>/Constant'
 */
#define rtCP_Constant_Value_h          (1.0)

/* Expression: const
 * Referenced by: '<S163>/Constant'
 */
#define rtCP_Constant_Value_gi         (1.0)

/* Computed Parameter: rtCP_Constant1_Value_e
 * Referenced by: '<S9>/Constant1'
 */
#define rtCP_Constant1_Value_e         (419430044U)

/* Computed Parameter: rtCP_Constant2_Value_j
 * Referenced by: '<S9>/Constant2'
 */
#define rtCP_Constant2_Value_j         (518U)

/* Computed Parameter: rtCP_Constant27_Value
 * Referenced by: '<S9>/Constant27'
 */
#define rtCP_Constant27_Value          (518U)

/* Computed Parameter: rtCP_Constant28_Value
 * Referenced by: '<S9>/Constant28'
 */
#define rtCP_Constant28_Value          (518U)

/* Computed Parameter: rtCP_Constant29_Value
 * Referenced by: '<S9>/Constant29'
 */
#define rtCP_Constant29_Value          (518U)

/* Computed Parameter: rtCP_Constant3_Value_g
 * Referenced by: '<S9>/Constant3'
 */
#define rtCP_Constant3_Value_g         (518U)

/* Computed Parameter: rtCP_Constant4_Value_b
 * Referenced by: '<S9>/Constant4'
 */
#define rtCP_Constant4_Value_b         (518U)

/* Computed Parameter: rtCP_Constant5_Value
 * Referenced by: '<S9>/Constant5'
 */
#define rtCP_Constant5_Value           (518U)

/* Computed Parameter: rtCP_Constant6_Value
 * Referenced by: '<S9>/Constant6'
 */
#define rtCP_Constant6_Value           (518U)

/* Computed Parameter: rtCP_Constant7_Value
 * Referenced by: '<S9>/Constant7'
 */
#define rtCP_Constant7_Value           (419369233U)

/* Computed Parameter: rtCP_Constant1_Value_f
 * Referenced by: '<S11>/Constant1'
 */
#define rtCP_Constant1_Value_f         (((uint16_T)300U))

/* Computed Parameter: rtCP_Constant2_Value_a
 * Referenced by: '<S41>/Constant2'
 */
#define rtCP_Constant2_Value_a         (((uint16_T)0U))

/* Computed Parameter: rtCP_Constant_Value_gb
 * Referenced by: '<S31>/Constant'
 */
#define rtCP_Constant_Value_gb         (((uint16_T)0U))

/* Computed Parameter: rtCP_Constant_Value_lk
 * Referenced by: '<S48>/Constant'
 */
#define rtCP_Constant_Value_lk         (((uint16_T)18000U))

/* Computed Parameter: rtCP_Constant2_Value_n
 * Referenced by: '<S66>/Constant2'
 */
#define rtCP_Constant2_Value_n         (((uint16_T)0U))

/* Computed Parameter: rtCP_Constant_Value_j1
 * Referenced by: '<S63>/Constant'
 */
#define rtCP_Constant_Value_j1         (((uint16_T)0U))

/* Computed Parameter: rtCP_Constant1_Value_k
 * Referenced by: '<S50>/Constant1'
 */
#define rtCP_Constant1_Value_k         (((uint16_T)1000U))

/* Computed Parameter: rtCP_Constant2_Value_e
 * Referenced by: '<S86>/Constant2'
 */
#define rtCP_Constant2_Value_e         (((uint16_T)0U))

/* Computed Parameter: rtCP_Constant1_Value_p
 * Referenced by: '<S51>/Constant1'
 */
#define rtCP_Constant1_Value_p         (((uint16_T)1000U))

/* Computed Parameter: rtCP_Constant2_Value_ng
 * Referenced by: '<S99>/Constant2'
 */
#define rtCP_Constant2_Value_ng        (((uint16_T)0U))

/* Computed Parameter: rtCP_Constant31_Value
 * Referenced by: '<S178>/Constant31'
 */
#define rtCP_Constant31_Value          (((uint16_T)50U))

/* Computed Parameter: rtCP_Constant2_Value_l
 * Referenced by: '<S217>/Constant2'
 */
#define rtCP_Constant2_Value_l         (((uint16_T)0U))

/* Computed Parameter: rtCP_Constant31_Value_f
 * Referenced by: '<S179>/Constant31'
 */
#define rtCP_Constant31_Value_f        (((uint16_T)50U))

/* Computed Parameter: rtCP_Constant2_Value_jh
 * Referenced by: '<S232>/Constant2'
 */
#define rtCP_Constant2_Value_jh        (((uint16_T)0U))

/* Computed Parameter: rtCP_Constant31_Value_g
 * Referenced by: '<S183>/Constant31'
 */
#define rtCP_Constant31_Value_g        (((uint16_T)50U))

/* Computed Parameter: rtCP_Constant2_Value_i
 * Referenced by: '<S253>/Constant2'
 */
#define rtCP_Constant2_Value_i         (((uint16_T)0U))

/* Computed Parameter: rtCP_Constant31_Value_n
 * Referenced by: '<S184>/Constant31'
 */
#define rtCP_Constant31_Value_n        (((uint16_T)50U))

/* Computed Parameter: rtCP_Constant2_Value_g
 * Referenced by: '<S268>/Constant2'
 */
#define rtCP_Constant2_Value_g         (((uint16_T)0U))

/* Computed Parameter: rtCP_Constant_Value_ds
 * Referenced by: '<S193>/Constant'
 */
#define rtCP_Constant_Value_ds         (((uint16_T)300U))

/* Computed Parameter: rtCP_Constant2_Value_c
 * Referenced by: '<S299>/Constant2'
 */
#define rtCP_Constant2_Value_c         (((uint16_T)0U))

/* Computed Parameter: rtCP_Constant1_Value_n
 * Referenced by: '<S193>/Constant1'
 */
#define rtCP_Constant1_Value_n         (((uint16_T)300U))

/* Computed Parameter: rtCP_Constant2_Value_eh
 * Referenced by: '<S300>/Constant2'
 */
#define rtCP_Constant2_Value_eh        (((uint16_T)0U))

/* Computed Parameter: rtCP_rising_edge_Value
 * Referenced by: '<S38>/rising_edge'
 */
#define rtCP_rising_edge_Value_EL_0    (true)
#define rtCP_rising_edge_Value_EL_1    (false)

/* Computed Parameter: rtCP_Constant_Value_l5
 * Referenced by: '<S46>/Constant'
 */
#define rtCP_Constant_Value_l5         (false)

/* Computed Parameter: rtCP_rising_edge_Value_a
 * Referenced by: '<S39>/rising_edge'
 */
#define rtCP_rising_edge_Value_a_EL_0  (true)
#define rtCP_rising_edge_Value_a_EL_1  (false)

/* Computed Parameter: rtCP_Constant1_Value_o
 * Referenced by: '<S46>/Constant1'
 */
#define rtCP_Constant1_Value_o         (true)

/* Computed Parameter: rtCP_Constant2_Value_b
 * Referenced by: '<S11>/Constant2'
 */
#define rtCP_Constant2_Value_b         (false)

/* Computed Parameter: rtCP_Constant3_Value_f
 * Referenced by: '<S11>/Constant3'
 */
#define rtCP_Constant3_Value_f         (true)

/* Computed Parameter: rtCP_Constant4_Value_o
 * Referenced by: '<S11>/Constant4'
 */
#define rtCP_Constant4_Value_o         (true)

/* Computed Parameter: rtCP_rising_edge_Value_i
 * Referenced by: '<S65>/rising_edge'
 */
#define rtCP_rising_edge_Value_i_EL_0  (true)
#define rtCP_rising_edge_Value_i_EL_1  (false)

/* Computed Parameter: rtCP_falling_edge_Value
 * Referenced by: '<S85>/falling_edge'
 */
#define rtCP_falling_edge_Value_EL_0   (false)
#define rtCP_falling_edge_Value_EL_1   (true)

/* Computed Parameter: rtCP_falling_edge_Value_o
 * Referenced by: '<S98>/falling_edge'
 */
#define rtCP_falling_edge_Value_o_EL_0 (false)
#define rtCP_falling_edge_Value_o_EL_1 (true)

/* Computed Parameter: rtCP_rising_edge_Value_m
 * Referenced by: '<S215>/rising_edge'
 */
#define rtCP_rising_edge_Value_m_EL_0  (true)
#define rtCP_rising_edge_Value_m_EL_1  (false)

/* Computed Parameter: rtCP_Constant_Value_bj
 * Referenced by: '<S223>/Constant'
 */
#define rtCP_Constant_Value_bj         (false)

/* Computed Parameter: rtCP_rising_edge_Value_b
 * Referenced by: '<S214>/rising_edge'
 */
#define rtCP_rising_edge_Value_b_EL_0  (true)
#define rtCP_rising_edge_Value_b_EL_1  (false)

/* Computed Parameter: rtCP_rising_edge_Value_l
 * Referenced by: '<S230>/rising_edge'
 */
#define rtCP_rising_edge_Value_l_EL_0  (true)
#define rtCP_rising_edge_Value_l_EL_1  (false)

/* Computed Parameter: rtCP_Constant_Value_gaq
 * Referenced by: '<S238>/Constant'
 */
#define rtCP_Constant_Value_gaq        (false)

/* Computed Parameter: rtCP_rising_edge_Value_iw
 * Referenced by: '<S229>/rising_edge'
 */
#define rtCP_rising_edge_Value_iw_EL_0 (true)
#define rtCP_rising_edge_Value_iw_EL_1 (false)

/* Computed Parameter: rtCP_rising_edge_Value_e
 * Referenced by: '<S251>/rising_edge'
 */
#define rtCP_rising_edge_Value_e_EL_0  (true)
#define rtCP_rising_edge_Value_e_EL_1  (false)

/* Computed Parameter: rtCP_Constant_Value_n
 * Referenced by: '<S259>/Constant'
 */
#define rtCP_Constant_Value_n          (false)

/* Computed Parameter: rtCP_rising_edge_Value_c
 * Referenced by: '<S250>/rising_edge'
 */
#define rtCP_rising_edge_Value_c_EL_0  (true)
#define rtCP_rising_edge_Value_c_EL_1  (false)

/* Computed Parameter: rtCP_rising_edge_Value_p
 * Referenced by: '<S266>/rising_edge'
 */
#define rtCP_rising_edge_Value_p_EL_0  (true)
#define rtCP_rising_edge_Value_p_EL_1  (false)

/* Computed Parameter: rtCP_Constant_Value_ju
 * Referenced by: '<S274>/Constant'
 */
#define rtCP_Constant_Value_ju         (false)

/* Computed Parameter: rtCP_rising_edge_Value_n
 * Referenced by: '<S265>/rising_edge'
 */
#define rtCP_rising_edge_Value_n_EL_0  (true)
#define rtCP_rising_edge_Value_n_EL_1  (false)

/* Computed Parameter: rtCP_rising_edge_Value_ni
 * Referenced by: '<S297>/rising_edge'
 */
#define rtCP_rising_edge_Value_ni_EL_0 (true)
#define rtCP_rising_edge_Value_ni_EL_1 (false)

/* Computed Parameter: rtCP_falling_edge_Value_f
 * Referenced by: '<S298>/falling_edge'
 */
#define rtCP_falling_edge_Value_f_EL_0 (false)
#define rtCP_falling_edge_Value_f_EL_1 (true)

/* Computed Parameter: rtCP_Constant_Value_f
 * Referenced by: '<S354>/Constant'
 */
#define rtCP_Constant_Value_f          (false)

/* Computed Parameter: rtCP_falling_edge_Value_j
 * Referenced by: '<S337>/falling_edge'
 */
#define rtCP_falling_edge_Value_j_EL_0 (false)
#define rtCP_falling_edge_Value_j_EL_1 (true)

/* Computed Parameter: rtCP_Constant1_Value_i
 * Referenced by: '<S354>/Constant1'
 */
#define rtCP_Constant1_Value_i         (true)

/* Computed Parameter: rtCP_rising_edge_Value_j
 * Referenced by: '<S338>/rising_edge'
 */
#define rtCP_rising_edge_Value_j_EL_0  (true)
#define rtCP_rising_edge_Value_j_EL_1  (false)

/* Computed Parameter: rtCP_Constant_Value_lu
 * Referenced by: '<S355>/Constant'
 */
#define rtCP_Constant_Value_lu         (false)

/* Computed Parameter: rtCP_falling_edge_Value_a
 * Referenced by: '<S340>/falling_edge'
 */
#define rtCP_falling_edge_Value_a_EL_0 (false)
#define rtCP_falling_edge_Value_a_EL_1 (true)

/* Computed Parameter: rtCP_Constant1_Value_op
 * Referenced by: '<S355>/Constant1'
 */
#define rtCP_Constant1_Value_op        (true)

/* Computed Parameter: rtCP_rising_edge_Value_cw
 * Referenced by: '<S339>/rising_edge'
 */
#define rtCP_rising_edge_Value_cw_EL_0 (true)
#define rtCP_rising_edge_Value_cw_EL_1 (false)

/* Computed Parameter: rtCP_Constant_Value_kv
 * Referenced by: '<S395>/Constant'
 */
#define rtCP_Constant_Value_kv         (false)

/* Computed Parameter: rtCP_falling_edge_Value_l
 * Referenced by: '<S378>/falling_edge'
 */
#define rtCP_falling_edge_Value_l_EL_0 (false)
#define rtCP_falling_edge_Value_l_EL_1 (true)

/* Computed Parameter: rtCP_Constant1_Value_a
 * Referenced by: '<S395>/Constant1'
 */
#define rtCP_Constant1_Value_a         (true)

/* Computed Parameter: rtCP_rising_edge_Value_k
 * Referenced by: '<S377>/rising_edge'
 */
#define rtCP_rising_edge_Value_k_EL_0  (true)
#define rtCP_rising_edge_Value_k_EL_1  (false)

/* Computed Parameter: rtCP_Constant_Value_a
 * Referenced by: '<S396>/Constant'
 */
#define rtCP_Constant_Value_a          (false)

/* Computed Parameter: rtCP_falling_edge_Value_h
 * Referenced by: '<S380>/falling_edge'
 */
#define rtCP_falling_edge_Value_h_EL_0 (false)
#define rtCP_falling_edge_Value_h_EL_1 (true)

/* Computed Parameter: rtCP_Constant1_Value_m
 * Referenced by: '<S396>/Constant1'
 */
#define rtCP_Constant1_Value_m         (true)

/* Computed Parameter: rtCP_rising_edge_Value_ca
 * Referenced by: '<S379>/rising_edge'
 */
#define rtCP_rising_edge_Value_ca_EL_0 (true)
#define rtCP_rising_edge_Value_ca_EL_1 (false)

/* Computed Parameter: rtCP_Constant_Value_cx
 * Referenced by: '<S13>/Constant'
 */
#define rtCP_Constant_Value_cx         (true)

/* Computed Parameter: rtCP_CON1_1_Value
 * Referenced by: '<S6>/CON1_1'
 */
#define rtCP_CON1_1_Value              (((uint8_T)0U))

/* Computed Parameter: rtCP_CON1_2_Value
 * Referenced by: '<S6>/CON1_2'
 */
#define rtCP_CON1_2_Value              (((uint8_T)0U))

/* Computed Parameter: rtCP_CON1_5_Value
 * Referenced by: '<S6>/CON1_5'
 */
#define rtCP_CON1_5_Value              (((uint8_T)0U))

/* Computed Parameter: rtCP_CON1_6_Value
 * Referenced by: '<S6>/CON1_6'
 */
#define rtCP_CON1_6_Value              (((uint8_T)0U))

/* Computed Parameter: rtCP_CON1_8_Value
 * Referenced by: '<S6>/CON1_8'
 */
#define rtCP_CON1_8_Value              (((uint8_T)0U))

/* Computed Parameter: rtCP_CON1_9_Value
 * Referenced by: '<S6>/CON1_9'
 */
#define rtCP_CON1_9_Value              (((uint8_T)0U))

/* Computed Parameter: rtCP_CON2_3_Value
 * Referenced by: '<S6>/CON2_3'
 */
#define rtCP_CON2_3_Value              (((uint8_T)0U))

/* Computed Parameter: rtCP_CON2_4_Value
 * Referenced by: '<S6>/CON2_4'
 */
#define rtCP_CON2_4_Value              (((uint8_T)0U))

/* Computed Parameter: rtCP_CON2_6_Value
 * Referenced by: '<S6>/CON2_6'
 */
#define rtCP_CON2_6_Value              (((uint8_T)0U))

/* Computed Parameter: rtCP_CON3_8_Value
 * Referenced by: '<S6>/CON3_8'
 */
#define rtCP_CON3_8_Value              (((uint8_T)0U))

/* Computed Parameter: rtCP_CON4_3_Value
 * Referenced by: '<S6>/CON4_3'
 */
#define rtCP_CON4_3_Value              (((uint8_T)0U))

/* Computed Parameter: rtCP_CON4_4_Value
 * Referenced by: '<S6>/CON4_4'
 */
#define rtCP_CON4_4_Value              (((uint8_T)0U))

/* Computed Parameter: rtCP_CON4_5_Value
 * Referenced by: '<S6>/CON4_5'
 */
#define rtCP_CON4_5_Value              (((uint8_T)0U))

/* Computed Parameter: rtCP_CON4_6_Value
 * Referenced by: '<S6>/CON4_6'
 */
#define rtCP_CON4_6_Value              (((uint8_T)0U))

/* Computed Parameter: rtCP_CON6_5_Value
 * Referenced by: '<S6>/CON6_5'
 */
#define rtCP_CON6_5_Value              (((uint8_T)0U))

/* Computed Parameter: rtCP_CON6_7_Value
 * Referenced by: '<S6>/CON6_7'
 */
#define rtCP_CON6_7_Value              (((uint8_T)0U))

/* Computed Parameter: rtCP_CON7_10_Value
 * Referenced by: '<S6>/CON7_10'
 */
#define rtCP_CON7_10_Value             (((uint8_T)0U))

/* Computed Parameter: rtCP_CON8_1_Value
 * Referenced by: '<S6>/CON8_1'
 */
#define rtCP_CON8_1_Value              (((uint8_T)0U))

/* Computed Parameter: rtCP_UnselectedPin_Value
 * Referenced by: '<S6>/UnselectedPin'
 */
#define rtCP_UnselectedPin_Value       (((uint8_T)0U))

/* Computed Parameter: rtCP_On_Value
 * Referenced by: '<S6>/On档开关'
 */
#define rtCP_On_Value                  (((uint8_T)1U))

/* Computed Parameter: rtCP_Constant_Value_oz
 * Referenced by: '<S34>/Constant'
 */
#define rtCP_Constant_Value_oz         (((uint8_T)0U))

/* Computed Parameter: rtCP__Value
 * Referenced by: '<S6>/近光灯开关'
 */
#define rtCP__Value                    (((uint8_T)0U))

/* Computed Parameter: rtCP_Constant_Value_jy
 * Referenced by: '<S33>/Constant'
 */
#define rtCP_Constant_Value_jy         (((uint8_T)0U))

/* Computed Parameter: rtCP__Value_m
 * Referenced by: '<S6>/左转向灯开关'
 */
#define rtCP__Value_m                  (((uint8_T)0U))

/* Computed Parameter: rtCP_Constant_Value_ap
 * Referenced by: '<S32>/Constant'
 */
#define rtCP_Constant_Value_ap         (((uint8_T)0U))

/* Computed Parameter: rtCP_Constant1_Value_fb
 * Referenced by: '<S41>/Constant1'
 */
#define rtCP_Constant1_Value_fb        (((uint8_T)1U))

/* Computed Parameter: rtCP__Value_i
 * Referenced by: '<S6>/前雾灯开关'
 */
#define rtCP__Value_i                  (((uint8_T)0U))

/* Computed Parameter: rtCP_Constant_Value_fi
 * Referenced by: '<S27>/Constant'
 */
#define rtCP_Constant_Value_fi         (((uint8_T)0U))

/* Computed Parameter: rtCP__Value_d
 * Referenced by: '<S6>/电源总开关'
 */
#define rtCP__Value_d                  (((uint8_T)1U))

/* Computed Parameter: rtCP_Constant_Value_gbr
 * Referenced by: '<S25>/Constant'
 */
#define rtCP_Constant_Value_gbr        (((uint8_T)0U))

/* Computed Parameter: rtCP__Value_g
 * Referenced by: '<S6>/小灯开关'
 */
#define rtCP__Value_g                  (((uint8_T)0U))

/* Computed Parameter: rtCP_Constant_Value_ht
 * Referenced by: '<S26>/Constant'
 */
#define rtCP_Constant_Value_ht         (((uint8_T)0U))

/* Computed Parameter: rtCP_Constant_Value_f5
 * Referenced by: '<S30>/Constant'
 */
#define rtCP_Constant_Value_f5         (((uint8_T)0U))

/* Computed Parameter: rtCP__Value_f
 * Referenced by: '<S6>/灯光巡检开关'
 */
#define rtCP__Value_f                  (((uint8_T)1U))

/* Computed Parameter: rtCP_Constant_Value_by
 * Referenced by: '<S28>/Constant'
 */
#define rtCP_Constant_Value_by         (((uint8_T)0U))

/* Computed Parameter: rtCP__Value_m1
 * Referenced by: '<S6>/双远光选择开关'
 */
#define rtCP__Value_m1                 (((uint8_T)0U))

/* Computed Parameter: rtCP_Constant_Value_nt
 * Referenced by: '<S29>/Constant'
 */
#define rtCP_Constant_Value_nt         (((uint8_T)0U))

/* Computed Parameter: rtCP_Constant_Value_g3
 * Referenced by: '<S35>/Constant'
 */
#define rtCP_Constant_Value_g3         (((uint8_T)0U))

/* Computed Parameter: rtCP__Value_gj
 * Referenced by: '<S6>/远光灯开关'
 */
#define rtCP__Value_gj                 (((uint8_T)1U))

/* Computed Parameter: rtCP_Constant_Value_nk
 * Referenced by: '<S36>/Constant'
 */
#define rtCP_Constant_Value_nk         (((uint8_T)0U))

/* Computed Parameter: rtCP__Value_b
 * Referenced by: '<S6>/充电舱灯开关'
 */
#define rtCP__Value_b                  (((uint8_T)0U))

/* Computed Parameter: rtCP_Constant_Value_nh
 * Referenced by: '<S62>/Constant'
 */
#define rtCP_Constant_Value_nh         (((uint8_T)0U))

/* Computed Parameter: rtCP_Constant1_Value_j
 * Referenced by: '<S66>/Constant1'
 */
#define rtCP_Constant1_Value_j         (((uint8_T)1U))

/* Computed Parameter: rtCP_Constant_Value_e
 * Referenced by: '<S76>/Constant'
 */
#define rtCP_Constant_Value_e          (((uint8_T)0U))

/* Computed Parameter: rtCP_Constant_Value_du
 * Referenced by: '<S74>/Constant'
 */
#define rtCP_Constant_Value_du         (((uint8_T)1U))

/* Computed Parameter: rtCP__Value_mq
 * Referenced by: '<S6>/总火'
 */
#define rtCP__Value_mq                 (((uint8_T)0U))

/* Computed Parameter: rtCP_Constant_Value_jf
 * Referenced by: '<S82>/Constant'
 */
#define rtCP_Constant_Value_jf         (((uint8_T)0U))

/* Computed Parameter: rtCP_Constant1_Value_d
 * Referenced by: '<S86>/Constant1'
 */
#define rtCP_Constant1_Value_d         (((uint8_T)1U))

/* Computed Parameter: rtCP_Constant_Value_h4
 * Referenced by: '<S91>/Constant'
 */
#define rtCP_Constant_Value_h4         (((uint8_T)0U))

/* Computed Parameter: rtCP_Constant_Value_ey
 * Referenced by: '<S89>/Constant'
 */
#define rtCP_Constant_Value_ey         (((uint8_T)1U))

/* Computed Parameter: rtCP_Constant_Value_ci
 * Referenced by: '<S96>/Constant'
 */
#define rtCP_Constant_Value_ci         (((uint8_T)0U))

/* Computed Parameter: rtCP_Constant1_Value_m2
 * Referenced by: '<S99>/Constant1'
 */
#define rtCP_Constant1_Value_m2        (((uint8_T)1U))

/* Computed Parameter: rtCP_Constant_Value_bv
 * Referenced by: '<S69>/Constant'
 */
#define rtCP_Constant_Value_bv         (((uint8_T)0U))

/* Computed Parameter: rtCP_Constant_Value_b1
 * Referenced by: '<S70>/Constant'
 */
#define rtCP_Constant_Value_b1         (((uint8_T)0U))

/* Computed Parameter: rtCP_Constant_Value_le
 * Referenced by: '<S71>/Constant'
 */
#define rtCP_Constant_Value_le         (((uint8_T)0U))

/* Computed Parameter: rtCP_Constant_Value_od
 * Referenced by: '<S72>/Constant'
 */
#define rtCP_Constant_Value_od         (((uint8_T)0U))

/* Computed Parameter: rtCP_Constant_Value_cb
 * Referenced by: '<S73>/Constant'
 */
#define rtCP_Constant_Value_cb         (((uint8_T)0U))

/* Computed Parameter: rtCP_Constant_Value_pz
 * Referenced by: '<S222>/Constant'
 */
#define rtCP_Constant_Value_pz         (((uint8_T)0U))

/* Computed Parameter: rtCP__Value_j
 * Referenced by: '<S6>/中门关'
 */
#define rtCP__Value_j                  (((uint8_T)0U))

/* Computed Parameter: rtCP_Constant_Value_hj
 * Referenced by: '<S210>/Constant'
 */
#define rtCP_Constant_Value_hj         (((uint8_T)1U))

/* Computed Parameter: rtCP_Constant_Value_dl
 * Referenced by: '<S209>/Constant'
 */
#define rtCP_Constant_Value_dl         (((uint8_T)0U))

/* Computed Parameter: rtCP_Constant1_Value_g
 * Referenced by: '<S217>/Constant1'
 */
#define rtCP_Constant1_Value_g         (((uint8_T)1U))

/* Computed Parameter: rtCP_Constant_Value_nb
 * Referenced by: '<S237>/Constant'
 */
#define rtCP_Constant_Value_nb         (((uint8_T)0U))

/* Computed Parameter: rtCP__Value_l
 * Referenced by: '<S6>/中门开关'
 */
#define rtCP__Value_l                  (((uint8_T)0U))

/* Computed Parameter: rtCP_Constant_Value_l4
 * Referenced by: '<S225>/Constant'
 */
#define rtCP_Constant_Value_l4         (((uint8_T)1U))

/* Computed Parameter: rtCP_Constant_Value_ak
 * Referenced by: '<S224>/Constant'
 */
#define rtCP_Constant_Value_ak         (((uint8_T)0U))

/* Computed Parameter: rtCP_Constant1_Value_du
 * Referenced by: '<S232>/Constant1'
 */
#define rtCP_Constant1_Value_du        (((uint8_T)1U))

/* Computed Parameter: rtCP_Constant_Value_ef
 * Referenced by: '<S258>/Constant'
 */
#define rtCP_Constant_Value_ef         (((uint8_T)0U))

/* Computed Parameter: rtCP__Value_k
 * Referenced by: '<S6>/前门关'
 */
#define rtCP__Value_k                  (((uint8_T)0U))

/* Computed Parameter: rtCP_Constant_Value_oy
 * Referenced by: '<S246>/Constant'
 */
#define rtCP_Constant_Value_oy         (((uint8_T)1U))

/* Computed Parameter: rtCP_Constant_Value_c3
 * Referenced by: '<S245>/Constant'
 */
#define rtCP_Constant_Value_c3         (((uint8_T)0U))

/* Computed Parameter: rtCP_Constant1_Value_np
 * Referenced by: '<S253>/Constant1'
 */
#define rtCP_Constant1_Value_np        (((uint8_T)1U))

/* Computed Parameter: rtCP_Constant_Value_dv
 * Referenced by: '<S273>/Constant'
 */
#define rtCP_Constant_Value_dv         (((uint8_T)0U))

/* Computed Parameter: rtCP__Value_kx
 * Referenced by: '<S6>/前门开关'
 */
#define rtCP__Value_kx                 (((uint8_T)0U))

/* Computed Parameter: rtCP_Constant_Value_hp
 * Referenced by: '<S261>/Constant'
 */
#define rtCP_Constant_Value_hp         (((uint8_T)1U))

/* Computed Parameter: rtCP_Constant_Value_m
 * Referenced by: '<S260>/Constant'
 */
#define rtCP_Constant_Value_m          (((uint8_T)0U))

/* Computed Parameter: rtCP_Constant1_Value_fy
 * Referenced by: '<S268>/Constant1'
 */
#define rtCP_Constant1_Value_fy        (((uint8_T)1U))

/* Computed Parameter: rtCP_Constant1_Value_c
 * Referenced by: '<S299>/Constant1'
 */
#define rtCP_Constant1_Value_c         (((uint8_T)1U))

/* Computed Parameter: rtCP_Constant_Value_nl
 * Referenced by: '<S292>/Constant'
 */
#define rtCP_Constant_Value_nl         (((uint8_T)0U))

/* Computed Parameter: rtCP_Constant1_Value_nu
 * Referenced by: '<S300>/Constant1'
 */
#define rtCP_Constant1_Value_nu        (((uint8_T)1U))

/* Computed Parameter: rtCP_Constant_Value_er
 * Referenced by: '<S18>/Constant'
 */
#define rtCP_Constant_Value_er         (((uint8_T)1U))

/* Computed Parameter: rtCP_Constant_Value_nlt
 * Referenced by: '<S19>/Constant'
 */
#define rtCP_Constant_Value_nlt        (((uint8_T)0U))

/* Computed Parameter: rtCP_Constant_Value_hv
 * Referenced by: '<S20>/Constant'
 */
#define rtCP_Constant_Value_hv         (((uint8_T)1U))

/* Computed Parameter: rtCP_Constant_Value_ar
 * Referenced by: '<S21>/Constant'
 */
#define rtCP_Constant_Value_ar         (((uint8_T)1U))

/* Computed Parameter: rtCP_Constant_Value_dq
 * Referenced by: '<S22>/Constant'
 */
#define rtCP_Constant_Value_dq         (((uint8_T)1U))

/* Computed Parameter: rtCP_Constant_Value_fe
 * Referenced by: '<S23>/Constant'
 */
#define rtCP_Constant_Value_fe         (((uint8_T)1U))

/* Computed Parameter: rtCP_Constant_Value_kr
 * Referenced by: '<S146>/Constant'
 */
#define rtCP_Constant_Value_kr         (((uint8_T)1U))

/* Computed Parameter: rtCP_Constant_Value_lv
 * Referenced by: '<S147>/Constant'
 */
#define rtCP_Constant_Value_lv         (((uint8_T)1U))

/* Computed Parameter: rtCP_Constant_Value_dg
 * Referenced by: '<S148>/Constant'
 */
#define rtCP_Constant_Value_dg         (((uint8_T)1U))

/* Computed Parameter: rtCP_Constant_Value_jj
 * Referenced by: '<S149>/Constant'
 */
#define rtCP_Constant_Value_jj         (((uint8_T)1U))

/* Computed Parameter: rtCP__Value_k5
 * Referenced by: '<S6>/自动灯光开关'
 */
#define rtCP__Value_k5                 (((uint8_T)0U))

/* Computed Parameter: rtCP_Constant_Value_cc
 * Referenced by: '<S150>/Constant'
 */
#define rtCP_Constant_Value_cc         (((uint8_T)1U))

/* Computed Parameter: rtCP_Constant_Value_lp
 * Referenced by: '<S151>/Constant'
 */
#define rtCP_Constant_Value_lp         (((uint8_T)1U))

/* Computed Parameter: rtCP_Constant_Value_dp
 * Referenced by: '<S152>/Constant'
 */
#define rtCP_Constant_Value_dp         (((uint8_T)1U))

/* Computed Parameter: rtCP_Constant_Value_aw
 * Referenced by: '<S153>/Constant'
 */
#define rtCP_Constant_Value_aw         (((uint8_T)1U))

/* Computed Parameter: rtCP_Constant_Value_pl
 * Referenced by: '<S156>/Constant'
 */
#define rtCP_Constant_Value_pl         (((uint8_T)0U))

/* Computed Parameter: rtCP_Constant_Value_gc
 * Referenced by: '<S157>/Constant'
 */
#define rtCP_Constant_Value_gc         (((uint8_T)1U))

/* Computed Parameter: rtCP_Constant_Value_i
 * Referenced by: '<S158>/Constant'
 */
#define rtCP_Constant_Value_i          (((uint8_T)1U))

/* Computed Parameter: rtCP_Constant_Value_ax
 * Referenced by: '<S159>/Constant'
 */
#define rtCP_Constant_Value_ax         (((uint8_T)0U))

/* Computed Parameter: rtCP_Constant_Value_of
 * Referenced by: '<S160>/Constant'
 */
#define rtCP_Constant_Value_of         (((uint8_T)1U))

/* Computed Parameter: rtCP_Constant_Value_gi0
 * Referenced by: '<S161>/Constant'
 */
#define rtCP_Constant_Value_gi0        (((uint8_T)1U))

/* Computed Parameter: rtCP_Constant_Value_nc
 * Referenced by: '<S164>/Constant'
 */
#define rtCP_Constant_Value_nc         (((uint8_T)1U))

/* Computed Parameter: rtCP__Value_o
 * Referenced by: '<S6>/雨刷低速开关'
 */
#define rtCP__Value_o                  (((uint8_T)0U))

/* Computed Parameter: rtCP_Constant_Value_hy
 * Referenced by: '<S402>/Constant'
 */
#define rtCP_Constant_Value_hy         (((uint8_T)0U))

/* Computed Parameter: rtCP__Value_n
 * Referenced by: '<S6>/雨刷高速开关'
 */
#define rtCP__Value_n                  (((uint8_T)0U))

/* Computed Parameter: rtCP_Constant_Value_go
 * Referenced by: '<S403>/Constant'
 */
#define rtCP_Constant_Value_go         (((uint8_T)0U))

/* Computed Parameter: rtCP__Value_lt
 * Referenced by: '<S6>/雨刷洗涤开关'
 */
#define rtCP__Value_lt                 (((uint8_T)0U))

/* Computed Parameter: rtCP_Constant_Value_fq
 * Referenced by: '<S404>/Constant'
 */
#define rtCP_Constant_Value_fq         (((uint8_T)0U))

/* Computed Parameter: rtCP__Value_b3
 * Referenced by: '<S6>/雨刷间歇开关'
 */
#define rtCP__Value_b3                 (((uint8_T)0U))

/* Computed Parameter: rtCP_Constant_Value_ag
 * Referenced by: '<S405>/Constant'
 */
#define rtCP_Constant_Value_ag         (((uint8_T)0U))

/* Computed Parameter: rtCP_Constant_Value_krm
 * Referenced by: '<S17>/Constant'
 */
#define rtCP_Constant_Value_krm        (((uint8_T)0U))

/* Computed Parameter: rtCP_Pin1_Value
 * Referenced by: '<S408>/Pin1'
 */
#define rtCP_Pin1_Value                (((uint8_T)4U))

/* Computed Parameter: rtCP_Pin2_Value
 * Referenced by: '<S408>/Pin2'
 */
#define rtCP_Pin2_Value                (((uint8_T)4U))

/* Computed Parameter: rtCP_Pin3_Value
 * Referenced by: '<S408>/Pin3'
 */
#define rtCP_Pin3_Value                (((uint8_T)4U))

/* Computed Parameter: rtCP_Pin4_Value
 * Referenced by: '<S408>/Pin4'
 */
#define rtCP_Pin4_Value                (((uint8_T)4U))

/* Computed Parameter: rtCP_Pin5_Value
 * Referenced by: '<S408>/Pin5'
 */
#define rtCP_Pin5_Value                (((uint8_T)4U))

/* Computed Parameter: rtCP_Pin6_Value
 * Referenced by: '<S408>/Pin6'
 */
#define rtCP_Pin6_Value                (((uint8_T)4U))

/* Computed Parameter: rtCP_Pin7_Value
 * Referenced by: '<S408>/Pin7'
 */
#define rtCP_Pin7_Value                (((uint8_T)3U))

/* Computed Parameter: rtCP_Pin8_Value
 * Referenced by: '<S408>/Pin8'
 */
#define rtCP_Pin8_Value                (((uint8_T)3U))

/* Computed Parameter: rtCP_Pin9_Value
 * Referenced by: '<S408>/Pin9'
 */
#define rtCP_Pin9_Value                (((uint8_T)3U))

/* Computed Parameter: rtCP_Pin10_Value
 * Referenced by: '<S408>/Pin10'
 */
#define rtCP_Pin10_Value               (((uint8_T)3U))

/* Computed Parameter: rtCP_Pin11_Value
 * Referenced by: '<S408>/Pin11'
 */
#define rtCP_Pin11_Value               (((uint8_T)4U))

/* Computed Parameter: rtCP_Pin12_Value
 * Referenced by: '<S408>/Pin12'
 */
#define rtCP_Pin12_Value               (((uint8_T)4U))

/* Computed Parameter: rtCP_Pin13_Value
 * Referenced by: '<S408>/Pin13'
 */
#define rtCP_Pin13_Value               (((uint8_T)4U))

/* Computed Parameter: rtCP_Pin14_Value
 * Referenced by: '<S408>/Pin14'
 */
#define rtCP_Pin14_Value               (((uint8_T)4U))

/* Computed Parameter: rtCP_Pin15_Value
 * Referenced by: '<S408>/Pin15'
 */
#define rtCP_Pin15_Value               (((uint8_T)4U))

/* Computed Parameter: rtCP_Pin16_Value
 * Referenced by: '<S408>/Pin16'
 */
#define rtCP_Pin16_Value               (((uint8_T)4U))

/* Computed Parameter: rtCP_Pin17_Value
 * Referenced by: '<S408>/Pin17'
 */
#define rtCP_Pin17_Value               (((uint8_T)4U))

/* Computed Parameter: rtCP_Pin18_Value
 * Referenced by: '<S408>/Pin18'
 */
#define rtCP_Pin18_Value               (((uint8_T)4U))

/* Computed Parameter: rtCP_Pin19_Value
 * Referenced by: '<S408>/Pin19'
 */
#define rtCP_Pin19_Value               (((uint8_T)4U))

/* Computed Parameter: rtCP_Pin20_Value
 * Referenced by: '<S408>/Pin20'
 */
#define rtCP_Pin20_Value               (((uint8_T)4U))

/* Computed Parameter: rtCP_Pin21_Value
 * Referenced by: '<S408>/Pin21'
 */
#define rtCP_Pin21_Value               (((uint8_T)4U))

/* Computed Parameter: rtCP_Pin22_Value
 * Referenced by: '<S408>/Pin22'
 */
#define rtCP_Pin22_Value               (((uint8_T)4U))

/* Computed Parameter: rtCP_Pin23_Value
 * Referenced by: '<S408>/Pin23'
 */
#define rtCP_Pin23_Value               (((uint8_T)4U))

/* Computed Parameter: rtCP_Pin24_Value
 * Referenced by: '<S408>/Pin24'
 */
#define rtCP_Pin24_Value               (((uint8_T)4U))

/* Computed Parameter: rtCP_Pin25_Value
 * Referenced by: '<S408>/Pin25'
 */
#define rtCP_Pin25_Value               (((uint8_T)4U))

/* Computed Parameter: rtCP_Pin26_Value
 * Referenced by: '<S408>/Pin26'
 */
#define rtCP_Pin26_Value               (((uint8_T)4U))

/* Computed Parameter: rtCP_Pin27_Value
 * Referenced by: '<S408>/Pin27'
 */
#define rtCP_Pin27_Value               (((uint8_T)4U))

/* Computed Parameter: rtCP_Pin28_Value
 * Referenced by: '<S408>/Pin28'
 */
#define rtCP_Pin28_Value               (((uint8_T)4U))

/* Computed Parameter: rtCP_Pin29_Value
 * Referenced by: '<S408>/Pin29'
 */
#define rtCP_Pin29_Value               (((uint8_T)4U))

/* Computed Parameter: rtCP_Pin30_Value
 * Referenced by: '<S408>/Pin30'
 */
#define rtCP_Pin30_Value               (((uint8_T)4U))

/* Computed Parameter: rtCP_Pin31_Value
 * Referenced by: '<S408>/Pin31'
 */
#define rtCP_Pin31_Value               (((uint8_T)4U))

/* Computed Parameter: rtCP_Pin32_Value
 * Referenced by: '<S408>/Pin32'
 */
#define rtCP_Pin32_Value               (((uint8_T)4U))

/* Computed Parameter: rtCP_Pin33_Value
 * Referenced by: '<S408>/Pin33'
 */
#define rtCP_Pin33_Value               (((uint8_T)4U))

/* Computed Parameter: rtCP_Pin34_Value
 * Referenced by: '<S408>/Pin34'
 */
#define rtCP_Pin34_Value               (((uint8_T)4U))

/* Computed Parameter: rtCP_Pin35_Value
 * Referenced by: '<S408>/Pin35'
 */
#define rtCP_Pin35_Value               (((uint8_T)4U))

/* Computed Parameter: rtCP_Pin36_Value
 * Referenced by: '<S408>/Pin36'
 */
#define rtCP_Pin36_Value               (((uint8_T)4U))

/* Computed Parameter: rtCP_Pin37_Value
 * Referenced by: '<S408>/Pin37'
 */
#define rtCP_Pin37_Value               (((uint8_T)4U))

/* Computed Parameter: rtCP_Pin38_Value
 * Referenced by: '<S408>/Pin38'
 */
#define rtCP_Pin38_Value               (((uint8_T)4U))

/* Computed Parameter: rtCP_Pin39_Value
 * Referenced by: '<S408>/Pin39'
 */
#define rtCP_Pin39_Value               (((uint8_T)4U))

/* Computed Parameter: rtCP_Pin40_Value
 * Referenced by: '<S408>/Pin40'
 */
#define rtCP_Pin40_Value               (((uint8_T)4U))

/* Computed Parameter: rtCP_Pin41_Value
 * Referenced by: '<S408>/Pin41'
 */
#define rtCP_Pin41_Value               (((uint8_T)4U))

/* Computed Parameter: rtCP_Pin42_Value
 * Referenced by: '<S408>/Pin42'
 */
#define rtCP_Pin42_Value               (((uint8_T)3U))

/* Computed Parameter: rtCP_Pin43_Value
 * Referenced by: '<S408>/Pin43'
 */
#define rtCP_Pin43_Value               (((uint8_T)3U))

/* Computed Parameter: rtCP_Pin44_Value
 * Referenced by: '<S408>/Pin44'
 */
#define rtCP_Pin44_Value               (((uint8_T)3U))

/* Computed Parameter: rtCP_Pin45_Value
 * Referenced by: '<S408>/Pin45'
 */
#define rtCP_Pin45_Value               (((uint8_T)3U))

/* Computed Parameter: rtCP_Pin46_Value
 * Referenced by: '<S408>/Pin46'
 */
#define rtCP_Pin46_Value               (((uint8_T)3U))

/* Computed Parameter: rtCP_Pin47_Value
 * Referenced by: '<S408>/Pin47'
 */
#define rtCP_Pin47_Value               (((uint8_T)3U))

/* Computed Parameter: rtCP_Pin48_Value
 * Referenced by: '<S408>/Pin48'
 */
#define rtCP_Pin48_Value               (((uint8_T)3U))

/* Computed Parameter: rtCP_Pin49_Value
 * Referenced by: '<S408>/Pin49'
 */
#define rtCP_Pin49_Value               (((uint8_T)3U))

/* Computed Parameter: rtCP_Pin50_Value
 * Referenced by: '<S408>/Pin50'
 */
#define rtCP_Pin50_Value               (((uint8_T)3U))

/* Computed Parameter: rtCP_Pin51_Value
 * Referenced by: '<S408>/Pin51'
 */
#define rtCP_Pin51_Value               (((uint8_T)3U))

/* Computed Parameter: rtCP_Pin52_Value
 * Referenced by: '<S408>/Pin52'
 */
#define rtCP_Pin52_Value               (((uint8_T)3U))

/* Computed Parameter: rtCP_Pin53_Value
 * Referenced by: '<S408>/Pin53'
 */
#define rtCP_Pin53_Value               (((uint8_T)3U))

/* Computed Parameter: rtCP_Pin54_Value
 * Referenced by: '<S408>/Pin54'
 */
#define rtCP_Pin54_Value               (((uint8_T)3U))

/* Computed Parameter: rtCP_Pin55_Value
 * Referenced by: '<S408>/Pin55'
 */
#define rtCP_Pin55_Value               (((uint8_T)3U))

/* Computed Parameter: rtCP_Pin56_Value
 * Referenced by: '<S408>/Pin56'
 */
#define rtCP_Pin56_Value               (((uint8_T)3U))

/* Computed Parameter: rtCP_Pin57_Value
 * Referenced by: '<S408>/Pin57'
 */
#define rtCP_Pin57_Value               (((uint8_T)3U))

/* Computed Parameter: rtCP_Pin58_Value
 * Referenced by: '<S408>/Pin58'
 */
#define rtCP_Pin58_Value               (((uint8_T)3U))

/* Computed Parameter: rtCP_Pin59_Value
 * Referenced by: '<S408>/Pin59'
 */
#define rtCP_Pin59_Value               (((uint8_T)3U))

/* Computed Parameter: rtCP_Pin60_Value
 * Referenced by: '<S408>/Pin60'
 */
#define rtCP_Pin60_Value               (((uint8_T)3U))

/* Computed Parameter: rtCP_Pin61_Value
 * Referenced by: '<S408>/Pin61'
 */
#define rtCP_Pin61_Value               (((uint8_T)3U))

/* Computed Parameter: rtCP_Pin62_Value
 * Referenced by: '<S408>/Pin62'
 */
#define rtCP_Pin62_Value               (((uint8_T)3U))

/* Computed Parameter: rtCP_Pin63_Value
 * Referenced by: '<S408>/Pin63'
 */
#define rtCP_Pin63_Value               (((uint8_T)3U))

/* Computed Parameter: rtCP_Pin64_Value
 * Referenced by: '<S408>/Pin64'
 */
#define rtCP_Pin64_Value               (((uint8_T)3U))

/* Computed Parameter: rtCP_Pin65_Value
 * Referenced by: '<S408>/Pin65'
 */
#define rtCP_Pin65_Value               (((uint8_T)3U))

/* Computed Parameter: rtCP_Pin66_Value
 * Referenced by: '<S408>/Pin66'
 */
#define rtCP_Pin66_Value               (((uint8_T)3U))

/* Computed Parameter: rtCP_Constant2_Value_n3
 * Referenced by: '<S409>/Constant2'
 */
#define rtCP_Constant2_Value_n3        (((uint8_T)3U))

/* Computed Parameter: rtCP_Constant4_Value_c
 * Referenced by: '<S409>/Constant4'
 */
#define rtCP_Constant4_Value_c         (((uint8_T)0U))

/* Computed Parameter: rtCP_Constant2_Value_nk
 * Referenced by: '<S410>/Constant2'
 */
#define rtCP_Constant2_Value_nk        (((uint8_T)3U))

/* Computed Parameter: rtCP_Constant4_Value_k
 * Referenced by: '<S410>/Constant4'
 */
#define rtCP_Constant4_Value_k         (((uint8_T)0U))

/* Computed Parameter: rtCP_Constant2_Value_c0
 * Referenced by: '<S411>/Constant2'
 */
#define rtCP_Constant2_Value_c0        (((uint8_T)3U))

/* Computed Parameter: rtCP_Constant4_Value_n
 * Referenced by: '<S411>/Constant4'
 */
#define rtCP_Constant4_Value_n         (((uint8_T)0U))

/* Computed Parameter: rtCP_Constant2_Value_k
 * Referenced by: '<S412>/Constant2'
 */
#define rtCP_Constant2_Value_k         (((uint8_T)3U))

/* Computed Parameter: rtCP_Constant4_Value_bn
 * Referenced by: '<S412>/Constant4'
 */
#define rtCP_Constant4_Value_bn        (((uint8_T)0U))

static void ControlBuild_FallingEdge(boolean_T rtu_Enable, boolean_T rtu_IN,
  boolean_T rtu_IN_pre, B_FallingEdge_ControlBuild_T *localB);
static void ControlBuild_RisingEdge(boolean_T rtu_Enable, boolean_T rtu_IN,
  boolean_T rtu_IN_pre, B_RisingEdge_ControlBuild_T *localB);
static void ControlBuild_FallingEdge_n(boolean_T rtu_Enable, boolean_T
  rtu_IN_pre, B_FallingEdge_ControlBuild_i_T *localB, const
  ConstB_FallingEdge_ControlB_a_T *localC);

/* Forward declaration for local functions */
static void ControlBuil_enter_internal_wash(const boolean_T *Compare_k, const
  boolean_T *Compare_i, const boolean_T *Delay);
static void rate_scheduler(void);
const FEEDBACK_STATUS_BUS ControlBuild_rtZFEEDBACK_STATUS = { 0U,/* RightFrontDoorStatus */
  0U,                                  /* RightMiddleDoorStatus */
  0U,                                  /* FLTurnLampFault */
  0U,                                  /* FRTurnLampFault */
  0U,                                  /* BLTurnLampFault */
  0U                                   /* BRTurnLampFault */
};

const INPUTPINS ControlBuild_rtZINPUTPINS = { 0U,/* CON1_1 */
  0U,                                  /* CON1_2 */
  0U,                                  /* CON1_5 */
  0U,                                  /* CON1_6 */
  0U,                                  /* CON1_7 */
  0U,                                  /* CON1_8 */
  0U,                                  /* CON1_9 */
  0U,                                  /* CON2_3 */
  0U,                                  /* CON2_4 */
  0U,                                  /* CON2_5 */
  0U,                                  /* CON2_6 */
  0U,                                  /* CON3_3 */
  0U,                                  /* CON3_4 */
  0U,                                  /* CON3_5 */
  0U,                                  /* CON3_6 */
  0U,                                  /* CON3_7 */
  0U,                                  /* CON3_8 */
  0U,                                  /* CON4_2 */
  0U,                                  /* CON4_3 */
  0U,                                  /* CON4_4 */
  0U,                                  /* CON4_5 */
  0U,                                  /* CON4_6 */
  0U,                                  /* CON6_2 */
  0U,                                  /* CON6_3 */
  0U,                                  /* CON6_4 */
  0U,                                  /* CON6_5 */
  0U,                                  /* CON6_6 */
  0U,                                  /* CON6_7 */
  0U,                                  /* CON6_8 */
  0U,                                  /* CON6_9 */
  0U,                                  /* CON6_13 */
  0U,                                  /* CON6_16 */
  0U,                                  /* CON7_4 */
  0U,                                  /* CON7_5 */
  0U,                                  /* CON7_7 */
  0U,                                  /* CON7_10 */
  0U,                                  /* CON8_1 */
  0U,                                  /* CON8_4 */
  0U,                                  /* CON8_5 */
  0U,                                  /* CON9_1 */
  0U,                                  /* CON9_2 */
  0U,                                  /* CON9_3 */
  0U,                                  /* CON9_4 */
  0U,                                  /* CON10_1 */
  0U,                                  /* CON10_2 */
  0U,                                  /* CON10_3 */
  0U,                                  /* CON10_4 */
  0U,                                  /* CON10_5 */
  0U,                                  /* CON10_6 */
  0U,                                  /* CON10_7 */
  0U,                                  /* CON10_8 */
  0U,                                  /* CON10_10 */
  0U,                                  /* CON10_11 */
  0U,                                  /* CON10_14 */
  0U,                                  /* CON10_16 */
  0U,                                  /* CON11_4 */
  0U,                                  /* CON11_5 */
  0U,                                  /* CON11_8 */
  0U,                                  /* CON11_11 */
  0U,                                  /* CON12_5 */
  0U,                                  /* CON12_7 */
  0U,                                  /* CON12_8 */
  0U,                                  /* CON12_9 */
  0U,                                  /* CON12_10 */
  0U,                                  /* CON12_11 */
  0U,                                  /* CON12_12 */
  0U                                   /* UnselectedPin */
};

const INPUT_CAN_BUS ControlBuild_rtZINPUT_CAN_BUS = { { 0U,/* Extended */
    0U,                                /* Length */
    0U,                                /* Remote */
    0U,                                /* Error */
    0U,                                /* ID */
    0.0,                               /* Timestamp */
    { 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U } /* Data */
  },                                   /* ID1 */
  { 0U,                                /* Extended */
    0U,                                /* Length */
    0U,                                /* Remote */
    0U,                                /* Error */
    0U,                                /* ID */
    0.0,                               /* Timestamp */
    { 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U } /* Data */
  },                                   /* ID2 */
  { 0U,                                /* Extended */
    0U,                                /* Length */
    0U,                                /* Remote */
    0U,                                /* Error */
    0U,                                /* ID */
    0.0,                               /* Timestamp */
    { 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U } /* Data */
  },                                   /* ID3 */
  { 0U,                                /* Extended */
    0U,                                /* Length */
    0U,                                /* Remote */
    0U,                                /* Error */
    0U,                                /* ID */
    0.0,                               /* Timestamp */
    { 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U } /* Data */
  },                                   /* ID4 */
  { 0U,                                /* Extended */
    0U,                                /* Length */
    0U,                                /* Remote */
    0U,                                /* Error */
    0U,                                /* ID */
    0.0,                               /* Timestamp */
    { 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U } /* Data */
  },                                   /* ID5 */
  { 0U,                                /* Extended */
    0U,                                /* Length */
    0U,                                /* Remote */
    0U,                                /* Error */
    0U,                                /* ID */
    0.0,                               /* Timestamp */
    { 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U } /* Data */
  },                                   /* ID6 */
  { 0U,                                /* Extended */
    0U,                                /* Length */
    0U,                                /* Remote */
    0U,                                /* Error */
    0U,                                /* ID */
    0.0,                               /* Timestamp */
    { 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U } /* Data */
  },                                   /* ID7 */
  { 0U,                                /* Extended */
    0U,                                /* Length */
    0U,                                /* Remote */
    0U,                                /* Error */
    0U,                                /* ID */
    0.0,                               /* Timestamp */
    { 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U } /* Data */
  },                                   /* ID8 */
  { 0U,                                /* Extended */
    0U,                                /* Length */
    0U,                                /* Remote */
    0U,                                /* Error */
    0U,                                /* ID */
    0.0,                               /* Timestamp */
    { 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U } /* Data */
  },                                   /* ID9 */
  { 0U,                                /* Extended */
    0U,                                /* Length */
    0U,                                /* Remote */
    0U,                                /* Error */
    0U,                                /* ID */
    0.0,                               /* Timestamp */
    { 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U } /* Data */
  }                                    /* ID10 */
};

/*
 *   This function updates active task flag for each subrate.
 * The function is called at model base rate, hence the
 * generated code self-manages all its subrates.
 */
static void rate_scheduler(void)
{
  /* Compute which subrates run during the next base time step.  Subrates
   * are an integer multiple of the base rate counter.  Therefore, the subtask
   * counter is reset when it reaches its limit (zero means run).
   */
  (ControlBuild_M->Timing.TaskCounters.TID[1])++;
  if ((ControlBuild_M->Timing.TaskCounters.TID[1]) > 1) {/* Sample time: [0.16666666666666663s, 0.0s] */
    ControlBuild_M->Timing.TaskCounters.TID[1] = 0;
  }
}

/*
 * Output and update for enable system:
 *    '<S38>/Falling Edge'
 *    '<S39>/Falling Edge'
 *    '<S65>/Falling Edge'
 *    '<S85>/Falling Edge'
 *    '<S98>/Falling Edge'
 *    '<S214>/Falling Edge'
 *    '<S215>/Falling Edge'
 *    '<S229>/Falling Edge'
 *    '<S230>/Falling Edge'
 *    '<S250>/Falling Edge'
 *    ...
 */
static void ControlBuild_FallingEdge(boolean_T rtu_Enable, boolean_T rtu_IN,
  boolean_T rtu_IN_pre, B_FallingEdge_ControlBuild_T *localB)
{
  /* Outputs for Enabled SubSystem: '<S38>/Falling Edge' incorporates:
   *  EnablePort: '<S42>/Enable'
   */
  if (rtu_Enable) {
    /* Logic: '<S42>/Logical Operator' incorporates:
     *  Logic: '<S42>/Logical Operator1'
     */
    localB->LogicalOperator = ((!rtu_IN) && rtu_IN_pre);
  }

  /* End of Outputs for SubSystem: '<S38>/Falling Edge' */
}

/*
 * Output and update for enable system:
 *    '<S38>/Rising Edge'
 *    '<S39>/Rising Edge'
 *    '<S65>/Rising Edge'
 *    '<S85>/Rising Edge'
 *    '<S98>/Rising Edge'
 *    '<S214>/Rising Edge'
 *    '<S215>/Rising Edge'
 *    '<S229>/Rising Edge'
 *    '<S230>/Rising Edge'
 *    '<S250>/Rising Edge'
 *    ...
 */
static void ControlBuild_RisingEdge(boolean_T rtu_Enable, boolean_T rtu_IN,
  boolean_T rtu_IN_pre, B_RisingEdge_ControlBuild_T *localB)
{
  /* Outputs for Enabled SubSystem: '<S38>/Rising Edge' incorporates:
   *  EnablePort: '<S43>/Enable'
   */
  if (rtu_Enable) {
    /* Logic: '<S43>/Logical Operator' incorporates:
     *  Logic: '<S43>/Logical Operator1'
     */
    localB->LogicalOperator = (rtu_IN && (!rtu_IN_pre));
  }

  /* End of Outputs for SubSystem: '<S38>/Rising Edge' */
}

/*
 * Output and update for enable system:
 *    '<S297>/Falling Edge'
 *    '<S337>/Falling Edge'
 *    '<S338>/Falling Edge'
 *    '<S339>/Falling Edge'
 *    '<S340>/Falling Edge'
 *    '<S377>/Falling Edge'
 *    '<S378>/Falling Edge'
 *    '<S379>/Falling Edge'
 *    '<S380>/Falling Edge'
 */
static void ControlBuild_FallingEdge_n(boolean_T rtu_Enable, boolean_T
  rtu_IN_pre, B_FallingEdge_ControlBuild_i_T *localB, const
  ConstB_FallingEdge_ControlB_a_T *localC)
{
  /* Outputs for Enabled SubSystem: '<S297>/Falling Edge' incorporates:
   *  EnablePort: '<S301>/Enable'
   */
  if (rtu_Enable) {
    /* Logic: '<S301>/Logical Operator' */
    localB->LogicalOperator = (localC->LogicalOperator1 && rtu_IN_pre);
  }

  /* End of Outputs for SubSystem: '<S297>/Falling Edge' */
}

/* Function for Chart: '<S17>/Chart' */
static void ControlBuil_enter_internal_wash(const boolean_T *Compare_k, const
  boolean_T *Compare_i, const boolean_T *Delay)
{
  int32_T tmp;

  /* Constant: '<S17>/Constant' */
  /* Entry Internal 'wash': '<S401>:14' */
  /* Transition: '<S401>:118' */
  /* '<S401>:120:1' sf_internal_predicateOutput = washer==1; */
  if ((*Compare_k) && (rtCP_Constant_Value_krm == 0)) {
    /* Transition: '<S401>:120' */
    /* '<S401>:122:1' sf_internal_predicateOutput = highwipper_work_flag==0; */
    /* Transition: '<S401>:122' */
    /* Transition: '<S401>:124' */
    /* '<S401>:124:1' outlowwiper=1; */
    /* '<S401>:124:1' outwasher=1; */
    /* '<S401>:124:1' count=0; */
    ControlBuild_DW.count = 0U;

    /* '<S401>:124:1' wash2stop_flag=0; */
    ControlBuild_DW.wash2stop_flag = 0U;

    /* Transition: '<S401>:170' */
    /* Transition: '<S401>:168' */
  } else {
    /* Transition: '<S401>:126' */
    /* '<S401>:126:1' outwasher=0 */
    /* '<S401>:131:1' sf_internal_predicateOutput = gohome==1&&gohome_last==0; */
    if ((*Compare_i) && (!*Delay)) {
      /* Transition: '<S401>:131' */
      /* Transition: '<S401>:134' */
      /* '<S401>:134:1' count = count + 1; */
      tmp = (int32_T)(ControlBuild_DW.count + 1U);
      if ((uint32_T)tmp > 255U) {
        tmp = 255;
      }

      ControlBuild_DW.count = (uint8_T)tmp;

      /* Transition: '<S401>:160' */
    } else {
      /* Transition: '<S401>:161' */
    }

    /* Transition: '<S401>:163' */
    /* '<S401>:141:1' sf_internal_predicateOutput = count==3; */
    if (ControlBuild_DW.count == 3) {
      /* Transition: '<S401>:141' */
      /* Transition: '<S401>:167' */
      /* '<S401>:167:1' wash2stop_flag=1; */
      ControlBuild_DW.wash2stop_flag = 1U;

      /* Transition: '<S401>:168' */
    } else {
      /* Transition: '<S401>:165' */
    }
  }

  /* End of Constant: '<S17>/Constant' */
}

/* Model step function */
void ControlBuild_step(void)
{
  boolean_T rtb_LogicalOperator3;
  boolean_T rtb_LogicalOperator1;
  boolean_T rtb_Compare_gb;
  boolean_T rtb_LogicalOperator1_ap;
  boolean_T rtb_Compare_e2;
  boolean_T rtb_Compare_md;
  boolean_T rtb_Compare_cs;
  boolean_T rtb_Compare_npu;
  boolean_T rtb_Compare_m;
  boolean_T rtb_Compare_nt;
  boolean_T rtb_Compare_gg;
  boolean_T rtb_Compare_cel;
  boolean_T rtb_Compare_kc;
  boolean_T rtb_Compare_hyg;
  boolean_T rtb_Compare_coj;
  uint16_T rtb_Switch1_l1;
  uint8_T rtb_y[95];
  boolean_T Compare;
  boolean_T Compare_g;
  boolean_T Compare_k;
  boolean_T Compare_i;
  boolean_T Delay;
  uint8_T rtb_Switch_idx_0;
  uint8_T rtb_Switch_idx_1;
  uint8_T rtb_Switch_idx_2;
  uint8_T rtb_Switch_idx_3;
  uint8_T rtb_Switch_idx_5;
  uint8_T rtb_Switch_idx_6;
  uint8_T rtb_Switch_idx_7;
  uint8_T rtb_Switch_idx_8;
  uint8_T rtb_Switch_idx_10;
  uint8_T rtb_Switch_idx_16;
  uint8_T rtb_Switch_idx_18;
  uint8_T rtb_Switch_idx_19;
  uint8_T rtb_Switch_idx_20;
  uint8_T rtb_Switch_idx_21;
  uint8_T rtb_Switch_idx_25;
  uint8_T rtb_Switch_idx_27;
  uint8_T rtb_Switch_idx_35;
  uint8_T rtb_Switch_idx_36;
  uint8_T rtb_Switch_idx_66;
  int32_T tmp;

  /* Switch: '<S5>/Switch' incorporates:
   *  Constant: '<S6>/CON1_1'
   *  Constant: '<S6>/CON1_2'
   *  Constant: '<S6>/CON1_5'
   *  Constant: '<S6>/CON1_6'
   *  Constant: '<S6>/CON1_8'
   *  Constant: '<S6>/CON1_9'
   *  Constant: '<S6>/CON2_3'
   *  Constant: '<S6>/CON2_4'
   *  Constant: '<S6>/CON2_6'
   *  Constant: '<S6>/CON3_8'
   *  Constant: '<S6>/CON4_3'
   *  Constant: '<S6>/CON4_4'
   *  Constant: '<S6>/CON4_5'
   *  Constant: '<S6>/CON4_6'
   *  Constant: '<S6>/CON6_5'
   *  Constant: '<S6>/CON6_7'
   *  Constant: '<S6>/CON7_10'
   *  Constant: '<S6>/CON8_1'
   *  Constant: '<S6>/UnselectedPin'
   *  Inport: '<Root>/PinSignals'
   */
  if (ControlBuild_ConstB.Compare) {
    rtb_Switch_idx_0 = InputPinBus.CON1_1;
    rtb_Switch_idx_1 = InputPinBus.CON1_2;
    rtb_Switch_idx_2 = InputPinBus.CON1_5;
    rtb_Switch_idx_3 = InputPinBus.CON1_6;
    rtb_Switch_idx_5 = InputPinBus.CON1_8;
    rtb_Switch_idx_6 = InputPinBus.CON1_9;
    rtb_Switch_idx_7 = InputPinBus.CON2_3;
    rtb_Switch_idx_8 = InputPinBus.CON2_4;
    rtb_Switch_idx_10 = InputPinBus.CON2_6;
    rtb_Switch_idx_16 = InputPinBus.CON3_8;
    rtb_Switch_idx_18 = InputPinBus.CON4_3;
    rtb_Switch_idx_19 = InputPinBus.CON4_4;
    rtb_Switch_idx_20 = InputPinBus.CON4_5;
    rtb_Switch_idx_21 = InputPinBus.CON4_6;
    rtb_Switch_idx_25 = InputPinBus.CON6_5;
    rtb_Switch_idx_27 = InputPinBus.CON6_7;
    rtb_Switch_idx_35 = InputPinBus.CON7_10;
    rtb_Switch_idx_36 = InputPinBus.CON8_1;
    rtb_Switch_idx_66 = InputPinBus.UnselectedPin;
  } else {
    rtb_Switch_idx_0 = rtCP_CON1_1_Value;
    rtb_Switch_idx_1 = rtCP_CON1_2_Value;
    rtb_Switch_idx_2 = rtCP_CON1_5_Value;
    rtb_Switch_idx_3 = rtCP_CON1_6_Value;
    rtb_Switch_idx_5 = rtCP_CON1_8_Value;
    rtb_Switch_idx_6 = rtCP_CON1_9_Value;
    rtb_Switch_idx_7 = rtCP_CON2_3_Value;
    rtb_Switch_idx_8 = rtCP_CON2_4_Value;
    rtb_Switch_idx_10 = rtCP_CON2_6_Value;
    rtb_Switch_idx_16 = rtCP_CON3_8_Value;
    rtb_Switch_idx_18 = rtCP_CON4_3_Value;
    rtb_Switch_idx_19 = rtCP_CON4_4_Value;
    rtb_Switch_idx_20 = rtCP_CON4_5_Value;
    rtb_Switch_idx_21 = rtCP_CON4_6_Value;
    rtb_Switch_idx_25 = rtCP_CON6_5_Value;
    rtb_Switch_idx_27 = rtCP_CON6_7_Value;
    rtb_Switch_idx_35 = rtCP_CON7_10_Value;
    rtb_Switch_idx_36 = rtCP_CON8_1_Value;
    rtb_Switch_idx_66 = rtCP_UnselectedPin_Value;
  }

  /* End of Switch: '<S5>/Switch' */

  /* Switch: '<S5>/Switch1' incorporates:
   *  Constant: '<S6>/On档开关'
   *  Constant: '<S6>/近光灯开关'
   */
  if (!ControlBuild_ConstB.Compare_g) {
    rtb_Switch_idx_2 = rtCP_On_Value;
    rtb_Switch_idx_3 = rtCP__Value;
  }

  /* S-Function (scanunpack): '<S3>/CANUnpack1' incorporates:
   *  Inport: '<Root>/CanSignals'
   */
  {
    /* S-Function (scanunpack): '<S3>/CANUnpack1' */
    if ((8 == InputCanBus.ID1.Length) && (InputCanBus.ID1.ID != INVALID_CAN_ID) )
    {
      if ((419369233 == InputCanBus.ID1.ID) && (1U == InputCanBus.ID1.Extended) )
      {
        {
          /* --------------- START Unpacking signal 0 ------------------
           *  startBit                = 16
           *  length                  = 2
           *  desiredSignalByteLayout = LITTLEENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          {
            real64_T outValue = 0;

            {
              uint8_T unpackedValue = 0;

              {
                uint8_T tempValue = (uint8_T) (0);

                {
                  tempValue = tempValue | (uint8_T)((uint8_T)
                    (InputCanBus.ID1.Data[2]) & (uint8_T)(0x3U));
                }

                unpackedValue = tempValue;
              }

              outValue = (real64_T) (unpackedValue);
            }

            {
              real64_T result = (real64_T) outValue;
              ControlBuild_B.Light_Option1 = result;
            }
          }

          /* --------------- START Unpacking signal 1 ------------------
           *  startBit                = 19
           *  length                  = 2
           *  desiredSignalByteLayout = LITTLEENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          {
            real64_T outValue = 0;

            {
              uint8_T unpackedValue = 0;

              {
                uint8_T tempValue = (uint8_T) (0);

                {
                  tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                    (InputCanBus.ID1.Data[2]) & (uint8_T)(0x18U)) >> 3);
                }

                unpackedValue = tempValue;
              }

              outValue = (real64_T) (unpackedValue);
            }

            {
              real64_T result = (real64_T) outValue;
              ControlBuild_B.Light_Option2 = result;
            }
          }

          /* --------------- START Unpacking signal 2 ------------------
           *  startBit                = 0
           *  length                  = 8
           *  desiredSignalByteLayout = LITTLEENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          {
            uint8_T outValue = 0;

            {
              uint8_T unpackedValue = 0;

              {
                uint8_T tempValue = (uint8_T) (0);

                {
                  tempValue = tempValue | (uint8_T)(InputCanBus.ID1.Data[0]);
                }

                unpackedValue = tempValue;
              }

              outValue = (uint8_T) (unpackedValue);
            }

            {
              uint8_T result = (uint8_T) outValue;
              ControlBuild_B.OutIndex = result;
            }
          }
        }
      }
    }
  }

  /* Switch: '<S5>/Switch1' incorporates:
   *  Constant: '<S6>/左转向灯开关'
   */
  if (!ControlBuild_ConstB.Compare_g) {
    rtb_Switch_idx_8 = rtCP__Value_m;
  }

  /* Logic: '<S11>/Logical Operator3' incorporates:
   *  Constant: '<S24>/Constant'
   *  Constant: '<S32>/Constant'
   *  Constant: '<S33>/Constant'
   *  Constant: '<S34>/Constant'
   *  RelationalOperator: '<S24>/Compare'
   *  RelationalOperator: '<S32>/Compare'
   *  RelationalOperator: '<S33>/Compare'
   *  RelationalOperator: '<S34>/Compare'
   */
  rtb_LogicalOperator3 = ((rtb_Switch_idx_2 != rtCP_Constant_Value_oz) &&
    (rtb_Switch_idx_3 != rtCP_Constant_Value_jy) && (rtb_Switch_idx_8 !=
    rtCP_Constant_Value_ap) && (ControlBuild_B.Light_Option1 <=
    rtCP_Constant_Value));

  /* Outputs for Enabled SubSystem: '<S38>/Rising Edge' */
  /* Constant: '<S38>/rising_edge' incorporates:
   *  UnitDelay: '<S38>/Unit Delay'
   */
  ControlBuild_RisingEdge(rtCP_rising_edge_Value_EL_0, rtb_LogicalOperator3,
    ControlBuild_DW.UnitDelay_DSTATE, &ControlBuild_B.RisingEdge);

  /* End of Outputs for SubSystem: '<S38>/Rising Edge' */

  /* Outputs for Enabled SubSystem: '<S38>/Falling Edge' */
  ControlBuild_FallingEdge(rtCP_rising_edge_Value_EL_1, rtb_LogicalOperator3,
    ControlBuild_DW.UnitDelay_DSTATE, &ControlBuild_B.FallingEdge);

  /* End of Outputs for SubSystem: '<S38>/Falling Edge' */

  /* Logic: '<S38>/Logical Operator1' */
  rtb_LogicalOperator1 = (ControlBuild_B.RisingEdge.LogicalOperator ||
    ControlBuild_B.FallingEdge.LogicalOperator);

  /* Switch: '<S41>/Switch' incorporates:
   *  Constant: '<S11>/Constant1'
   *  Constant: '<S41>/Constant2'
   *  DataStoreRead: '<S37>/Data Store Read'
   *  DataStoreWrite: '<S37>/Data Store Write'
   *  RelationalOperator: '<S41>/Relational Operator'
   *  Switch: '<S41>/Switch1'
   */
  if (rtb_LogicalOperator1) {
    ControlBuild_DW.A = rtCP_Constant1_Value_f;
  } else {
    if (ControlBuild_DW.A > rtCP_Constant2_Value_a) {
      /* Sum: '<S41>/Subtract' incorporates:
       *  Constant: '<S41>/Constant1'
       *  DataStoreRead: '<S37>/Data Store Read'
       *  Switch: '<S41>/Switch1'
       */
      tmp = ControlBuild_DW.A - rtCP_Constant1_Value_fb;
      if (tmp < 0) {
        tmp = 0;
      }

      /* Switch: '<S41>/Switch1' incorporates:
       *  Sum: '<S41>/Subtract'
       */
      rtb_Switch1_l1 = (uint16_T)tmp;
    } else {
      /* Switch: '<S41>/Switch1' incorporates:
       *  Constant: '<S41>/Constant2'
       */
      rtb_Switch1_l1 = rtCP_Constant2_Value_a;
    }

    ControlBuild_DW.A = rtb_Switch1_l1;
  }

  /* End of Switch: '<S41>/Switch' */

  /* Switch: '<S5>/Switch1' incorporates:
   *  Constant: '<S6>/前雾灯开关'
   */
  if (!ControlBuild_ConstB.Compare_g) {
    rtb_Switch_idx_7 = rtCP__Value_i;
  }

  /* RelationalOperator: '<S27>/Compare' incorporates:
   *  Constant: '<S27>/Constant'
   */
  rtb_Compare_gb = (rtb_Switch_idx_7 != rtCP_Constant_Value_fi);

  /* Outputs for Enabled SubSystem: '<S39>/Rising Edge' */
  /* Constant: '<S39>/rising_edge' incorporates:
   *  UnitDelay: '<S39>/Unit Delay'
   */
  ControlBuild_RisingEdge(rtCP_rising_edge_Value_a_EL_0, rtb_Compare_gb,
    ControlBuild_DW.UnitDelay_DSTATE_n, &ControlBuild_B.RisingEdge_b);

  /* End of Outputs for SubSystem: '<S39>/Rising Edge' */

  /* Outputs for Enabled SubSystem: '<S39>/Falling Edge' */
  ControlBuild_FallingEdge(rtCP_rising_edge_Value_a_EL_1, rtb_Compare_gb,
    ControlBuild_DW.UnitDelay_DSTATE_n, &ControlBuild_B.FallingEdge_l);

  /* End of Outputs for SubSystem: '<S39>/Falling Edge' */

  /* Switch: '<S5>/Switch1' incorporates:
   *  Constant: '<S6>/电源总开关'
   *  Constant: '<S6>/小灯开关'
   */
  if (!ControlBuild_ConstB.Compare_g) {
    rtb_Switch_idx_1 = rtCP__Value_d;
    rtb_Switch_idx_25 = rtCP__Value_g;
  }

  /* Logic: '<S11>/Logical Operator1' incorporates:
   *  Constant: '<S25>/Constant'
   *  Constant: '<S26>/Constant'
   *  Constant: '<S30>/Constant'
   *  RelationalOperator: '<S25>/Compare'
   *  RelationalOperator: '<S26>/Compare'
   *  RelationalOperator: '<S30>/Compare'
   */
  rtb_LogicalOperator1_ap = ((rtb_Switch_idx_1 != rtCP_Constant_Value_gbr) &&
    (rtb_Switch_idx_25 != rtCP_Constant_Value_ht) && (rtb_Switch_idx_7 !=
    rtCP_Constant_Value_f5));

  /* Switch: '<S46>/Switch' incorporates:
   *  Constant: '<S46>/Constant'
   *  DataStoreWrite: '<S40>/Data Store Write'
   *  Logic: '<S11>/Logical Operator4'
   *  Logic: '<S39>/Logical Operator1'
   *  Switch: '<S46>/Switch1'
   */
  if (ControlBuild_B.RisingEdge_b.LogicalOperator ||
      ControlBuild_B.FallingEdge_l.LogicalOperator) {
    ControlBuild_DW.A_a = rtCP_Constant_Value_l5;
  } else {
    if (rtb_LogicalOperator1 && rtb_LogicalOperator1_ap) {
      /* Switch: '<S46>/Switch1' incorporates:
       *  Constant: '<S46>/Constant1'
       *  DataStoreWrite: '<S40>/Data Store Write'
       */
      ControlBuild_DW.A_a = rtCP_Constant1_Value_o;
    }
  }

  /* End of Switch: '<S46>/Switch' */

  /* Switch: '<S5>/Switch1' incorporates:
   *  Constant: '<S6>/充电舱灯开关'
   *  Constant: '<S6>/双远光选择开关'
   *  Constant: '<S6>/远光灯开关'
   */
  if (ControlBuild_ConstB.Compare_g) {
    rtb_Switch_idx_8 = rtb_Switch_idx_66;
  } else {
    rtb_Switch_idx_66 = rtCP__Value_m1;
    rtb_Switch_idx_8 = rtCP__Value_gj;
    rtb_Switch_idx_27 = rtCP__Value_b;
  }

  /* RelationalOperator: '<S62>/Compare' incorporates:
   *  Constant: '<S62>/Constant'
   */
  rtb_LogicalOperator1 = (rtb_Switch_idx_27 != rtCP_Constant_Value_nh);

  /* Outputs for Enabled SubSystem: '<S65>/Rising Edge' */
  /* Constant: '<S65>/rising_edge' incorporates:
   *  UnitDelay: '<S65>/Unit Delay'
   */
  ControlBuild_RisingEdge(rtCP_rising_edge_Value_i_EL_0, rtb_LogicalOperator1,
    ControlBuild_DW.UnitDelay_DSTATE_k, &ControlBuild_B.RisingEdge_p);

  /* End of Outputs for SubSystem: '<S65>/Rising Edge' */

  /* Outputs for Enabled SubSystem: '<S65>/Falling Edge' */
  ControlBuild_FallingEdge(rtCP_rising_edge_Value_i_EL_1, rtb_LogicalOperator1,
    ControlBuild_DW.UnitDelay_DSTATE_k, &ControlBuild_B.FallingEdge_o);

  /* End of Outputs for SubSystem: '<S65>/Falling Edge' */

  /* Switch: '<S66>/Switch' incorporates:
   *  Constant: '<S48>/Constant'
   *  Constant: '<S66>/Constant2'
   *  DataStoreRead: '<S64>/Data Store Read'
   *  DataStoreWrite: '<S64>/Data Store Write'
   *  Logic: '<S65>/Logical Operator1'
   *  RelationalOperator: '<S66>/Relational Operator'
   *  Switch: '<S66>/Switch1'
   */
  if (ControlBuild_B.RisingEdge_p.LogicalOperator ||
      ControlBuild_B.FallingEdge_o.LogicalOperator) {
    ControlBuild_DW.A_k = rtCP_Constant_Value_lk;
  } else {
    if (ControlBuild_DW.A_k > rtCP_Constant2_Value_n) {
      /* Sum: '<S66>/Subtract' incorporates:
       *  Constant: '<S66>/Constant1'
       *  DataStoreRead: '<S64>/Data Store Read'
       *  Switch: '<S66>/Switch1'
       */
      tmp = ControlBuild_DW.A_k - rtCP_Constant1_Value_j;
      if (tmp < 0) {
        tmp = 0;
      }

      /* Switch: '<S66>/Switch1' incorporates:
       *  Sum: '<S66>/Subtract'
       */
      rtb_Switch1_l1 = (uint16_T)tmp;
    } else {
      /* Switch: '<S66>/Switch1' incorporates:
       *  Constant: '<S66>/Constant2'
       */
      rtb_Switch1_l1 = rtCP_Constant2_Value_n;
    }

    ControlBuild_DW.A_k = rtb_Switch1_l1;
  }

  /* End of Switch: '<S66>/Switch' */

  /* RelationalOperator: '<S76>/Compare' incorporates:
   *  Constant: '<S76>/Constant'
   */
  rtb_Compare_e2 = (rtb_Switch_idx_1 != rtCP_Constant_Value_e);

  /* Outputs for Enabled SubSystem: '<S85>/Rising Edge' */
  /* Constant: '<S85>/falling_edge' incorporates:
   *  UnitDelay: '<S85>/Unit Delay'
   */
  ControlBuild_RisingEdge(rtCP_falling_edge_Value_EL_0, rtb_Compare_e2,
    ControlBuild_DW.UnitDelay_DSTATE_b, &ControlBuild_B.RisingEdge_e);

  /* End of Outputs for SubSystem: '<S85>/Rising Edge' */

  /* Outputs for Enabled SubSystem: '<S85>/Falling Edge' */
  ControlBuild_FallingEdge(rtCP_falling_edge_Value_EL_1, rtb_Compare_e2,
    ControlBuild_DW.UnitDelay_DSTATE_b, &ControlBuild_B.FallingEdge_b);

  /* End of Outputs for SubSystem: '<S85>/Falling Edge' */

  /* Switch: '<S5>/Switch1' incorporates:
   *  Constant: '<S6>/总火'
   */
  if (ControlBuild_ConstB.Compare_g) {
    rtb_Switch_idx_7 = rtb_Switch_idx_0;
  } else {
    rtb_Switch_idx_7 = rtCP__Value_mq;
  }

  /* Switch: '<S86>/Switch' incorporates:
   *  Constant: '<S50>/Constant1'
   *  Constant: '<S74>/Constant'
   *  Constant: '<S82>/Constant'
   *  Constant: '<S86>/Constant2'
   *  DataStoreRead: '<S84>/Data Store Read'
   *  DataStoreWrite: '<S84>/Data Store Write'
   *  Inport: '<Root>/PinSignals1'
   *  Logic: '<S50>/Logical Operator2'
   *  Logic: '<S85>/Logical Operator1'
   *  RelationalOperator: '<S74>/Compare'
   *  RelationalOperator: '<S82>/Compare'
   *  RelationalOperator: '<S86>/Relational Operator'
   *  Switch: '<S86>/Switch1'
   */
  if ((ControlBuild_B.RisingEdge_e.LogicalOperator ||
       ControlBuild_B.FallingEdge_b.LogicalOperator) &&
      (ControlBuild_U.Feedback_Status.RightFrontDoorStatus ==
       rtCP_Constant_Value_du) && (rtb_Switch_idx_7 == rtCP_Constant_Value_jf))
  {
    ControlBuild_DW.A_m = rtCP_Constant1_Value_k;
  } else {
    if (ControlBuild_DW.A_m > rtCP_Constant2_Value_e) {
      /* Sum: '<S86>/Subtract' incorporates:
       *  Constant: '<S86>/Constant1'
       *  DataStoreRead: '<S84>/Data Store Read'
       *  Switch: '<S86>/Switch1'
       */
      tmp = ControlBuild_DW.A_m - rtCP_Constant1_Value_d;
      if (tmp < 0) {
        tmp = 0;
      }

      /* Switch: '<S86>/Switch1' incorporates:
       *  Sum: '<S86>/Subtract'
       */
      rtb_Switch1_l1 = (uint16_T)tmp;
    } else {
      /* Switch: '<S86>/Switch1' incorporates:
       *  Constant: '<S86>/Constant2'
       */
      rtb_Switch1_l1 = rtCP_Constant2_Value_e;
    }

    ControlBuild_DW.A_m = rtb_Switch1_l1;
  }

  /* End of Switch: '<S86>/Switch' */

  /* RelationalOperator: '<S91>/Compare' incorporates:
   *  Constant: '<S91>/Constant'
   */
  rtb_Compare_md = (rtb_Switch_idx_1 != rtCP_Constant_Value_h4);

  /* Outputs for Enabled SubSystem: '<S98>/Rising Edge' */
  /* Constant: '<S98>/falling_edge' incorporates:
   *  UnitDelay: '<S98>/Unit Delay'
   */
  ControlBuild_RisingEdge(rtCP_falling_edge_Value_o_EL_0, rtb_Compare_md,
    ControlBuild_DW.UnitDelay_DSTATE_m, &ControlBuild_B.RisingEdge_c);

  /* End of Outputs for SubSystem: '<S98>/Rising Edge' */

  /* Outputs for Enabled SubSystem: '<S98>/Falling Edge' */
  ControlBuild_FallingEdge(rtCP_falling_edge_Value_o_EL_1, rtb_Compare_md,
    ControlBuild_DW.UnitDelay_DSTATE_m, &ControlBuild_B.FallingEdge_h);

  /* End of Outputs for SubSystem: '<S98>/Falling Edge' */

  /* Switch: '<S99>/Switch' incorporates:
   *  Constant: '<S51>/Constant1'
   *  Constant: '<S89>/Constant'
   *  Constant: '<S96>/Constant'
   *  Constant: '<S99>/Constant2'
   *  DataStoreRead: '<S97>/Data Store Read'
   *  DataStoreWrite: '<S97>/Data Store Write'
   *  Inport: '<Root>/PinSignals1'
   *  Logic: '<S51>/Logical Operator2'
   *  Logic: '<S98>/Logical Operator1'
   *  RelationalOperator: '<S89>/Compare'
   *  RelationalOperator: '<S96>/Compare'
   *  RelationalOperator: '<S99>/Relational Operator'
   *  Switch: '<S99>/Switch1'
   */
  if ((ControlBuild_B.RisingEdge_c.LogicalOperator ||
       ControlBuild_B.FallingEdge_h.LogicalOperator) &&
      (ControlBuild_U.Feedback_Status.RightFrontDoorStatus ==
       rtCP_Constant_Value_ey) && (rtb_Switch_idx_7 == rtCP_Constant_Value_ci))
  {
    ControlBuild_DW.A_b = rtCP_Constant1_Value_p;
  } else {
    if (ControlBuild_DW.A_b > rtCP_Constant2_Value_ng) {
      /* Sum: '<S99>/Subtract' incorporates:
       *  Constant: '<S99>/Constant1'
       *  DataStoreRead: '<S97>/Data Store Read'
       *  Switch: '<S99>/Switch1'
       */
      tmp = ControlBuild_DW.A_b - rtCP_Constant1_Value_m2;
      if (tmp < 0) {
        tmp = 0;
      }

      /* Switch: '<S99>/Switch1' incorporates:
       *  Sum: '<S99>/Subtract'
       */
      rtb_Switch1_l1 = (uint16_T)tmp;
    } else {
      /* Switch: '<S99>/Switch1' incorporates:
       *  Constant: '<S99>/Constant2'
       */
      rtb_Switch1_l1 = rtCP_Constant2_Value_ng;
    }

    ControlBuild_DW.A_b = rtb_Switch1_l1;
  }

  /* End of Switch: '<S99>/Switch' */

  /* Switch: '<S5>/Switch1' incorporates:
   *  Constant: '<S6>/中门关'
   */
  if (!ControlBuild_ConstB.Compare_g) {
    rtb_Switch_idx_36 = rtCP__Value_j;
  }

  /* RelationalOperator: '<S210>/Compare' incorporates:
   *  Constant: '<S210>/Constant'
   */
  rtb_Compare_cs = (rtb_Switch_idx_36 == rtCP_Constant_Value_hj);

  /* Outputs for Enabled SubSystem: '<S215>/Rising Edge' */
  /* Constant: '<S215>/rising_edge' incorporates:
   *  UnitDelay: '<S215>/Unit Delay'
   */
  ControlBuild_RisingEdge(rtCP_rising_edge_Value_m_EL_0, rtb_Compare_cs,
    ControlBuild_DW.UnitDelay_DSTATE_p, &ControlBuild_B.RisingEdge_i);

  /* End of Outputs for SubSystem: '<S215>/Rising Edge' */

  /* Outputs for Enabled SubSystem: '<S215>/Falling Edge' */
  ControlBuild_FallingEdge(rtCP_rising_edge_Value_m_EL_1, rtb_Compare_cs,
    ControlBuild_DW.UnitDelay_DSTATE_p, &ControlBuild_B.FallingEdge_a);

  /* End of Outputs for SubSystem: '<S215>/Falling Edge' */

  /* RelationalOperator: '<S209>/Compare' incorporates:
   *  Constant: '<S209>/Constant'
   *  Constant: '<S222>/Constant'
   *  Constant: '<S223>/Constant'
   *  Logic: '<S178>/Logical Operator'
   *  Logic: '<S215>/Logical Operator1'
   *  Logic: '<S216>/Logical Operator'
   *  RelationalOperator: '<S222>/Compare'
   *  RelationalOperator: '<S223>/Compare'
   */
  rtb_Compare_npu = (((rtb_Switch_idx_7 != rtCP_Constant_Value_pz) &&
                      ((ControlBuild_ConstB.Compare_j &&
                        (ControlBuild_B.RisingEdge_i.LogicalOperator ||
    ControlBuild_B.FallingEdge_a.LogicalOperator)) != (int32_T)
                       rtCP_Constant_Value_bj)) != rtCP_Constant_Value_dl);

  /* Outputs for Enabled SubSystem: '<S214>/Rising Edge' */
  /* Constant: '<S214>/rising_edge' incorporates:
   *  UnitDelay: '<S214>/Unit Delay'
   */
  ControlBuild_RisingEdge(rtCP_rising_edge_Value_b_EL_0, rtb_Compare_npu,
    ControlBuild_DW.UnitDelay_DSTATE_e, &ControlBuild_B.RisingEdge_bq);

  /* End of Outputs for SubSystem: '<S214>/Rising Edge' */

  /* Outputs for Enabled SubSystem: '<S214>/Falling Edge' */
  ControlBuild_FallingEdge(rtCP_rising_edge_Value_b_EL_1, rtb_Compare_npu,
    ControlBuild_DW.UnitDelay_DSTATE_e, &ControlBuild_B.FallingEdge_bs);

  /* End of Outputs for SubSystem: '<S214>/Falling Edge' */

  /* Switch: '<S217>/Switch' incorporates:
   *  Constant: '<S178>/Constant31'
   *  Constant: '<S217>/Constant2'
   *  DataStoreRead: '<S213>/Data Store Read'
   *  DataStoreWrite: '<S213>/Data Store Write'
   *  Logic: '<S214>/Logical Operator1'
   *  RelationalOperator: '<S217>/Relational Operator'
   *  Switch: '<S217>/Switch1'
   */
  if (ControlBuild_B.RisingEdge_bq.LogicalOperator ||
      ControlBuild_B.FallingEdge_bs.LogicalOperator) {
    ControlBuild_DW.A_e = rtCP_Constant31_Value;
  } else {
    if (ControlBuild_DW.A_e > rtCP_Constant2_Value_l) {
      /* Sum: '<S217>/Subtract' incorporates:
       *  Constant: '<S217>/Constant1'
       *  DataStoreRead: '<S213>/Data Store Read'
       *  Switch: '<S217>/Switch1'
       */
      tmp = ControlBuild_DW.A_e - rtCP_Constant1_Value_g;
      if (tmp < 0) {
        tmp = 0;
      }

      /* Switch: '<S217>/Switch1' incorporates:
       *  Sum: '<S217>/Subtract'
       */
      rtb_Switch1_l1 = (uint16_T)tmp;
    } else {
      /* Switch: '<S217>/Switch1' incorporates:
       *  Constant: '<S217>/Constant2'
       */
      rtb_Switch1_l1 = rtCP_Constant2_Value_l;
    }

    ControlBuild_DW.A_e = rtb_Switch1_l1;
  }

  /* End of Switch: '<S217>/Switch' */

  /* Switch: '<S5>/Switch1' incorporates:
   *  Constant: '<S6>/中门开关'
   */
  if (!ControlBuild_ConstB.Compare_g) {
    rtb_Switch_idx_21 = rtCP__Value_l;
  }

  /* RelationalOperator: '<S225>/Compare' incorporates:
   *  Constant: '<S225>/Constant'
   */
  rtb_Compare_m = (rtb_Switch_idx_21 == rtCP_Constant_Value_l4);

  /* Outputs for Enabled SubSystem: '<S230>/Rising Edge' */
  /* Constant: '<S230>/rising_edge' incorporates:
   *  UnitDelay: '<S230>/Unit Delay'
   */
  ControlBuild_RisingEdge(rtCP_rising_edge_Value_l_EL_0, rtb_Compare_m,
    ControlBuild_DW.UnitDelay_DSTATE_h, &ControlBuild_B.RisingEdge_f);

  /* End of Outputs for SubSystem: '<S230>/Rising Edge' */

  /* Outputs for Enabled SubSystem: '<S230>/Falling Edge' */
  ControlBuild_FallingEdge(rtCP_rising_edge_Value_l_EL_1, rtb_Compare_m,
    ControlBuild_DW.UnitDelay_DSTATE_h, &ControlBuild_B.FallingEdge_ob);

  /* End of Outputs for SubSystem: '<S230>/Falling Edge' */

  /* RelationalOperator: '<S224>/Compare' incorporates:
   *  Constant: '<S224>/Constant'
   *  Constant: '<S237>/Constant'
   *  Constant: '<S238>/Constant'
   *  Logic: '<S179>/Logical Operator'
   *  Logic: '<S230>/Logical Operator1'
   *  Logic: '<S231>/Logical Operator'
   *  RelationalOperator: '<S237>/Compare'
   *  RelationalOperator: '<S238>/Compare'
   */
  rtb_Compare_nt = (((rtb_Switch_idx_7 != rtCP_Constant_Value_nb) &&
                     ((ControlBuild_ConstB.Compare_c &&
                       (ControlBuild_B.RisingEdge_f.LogicalOperator ||
                        ControlBuild_B.FallingEdge_ob.LogicalOperator)) !=
                      (int32_T)rtCP_Constant_Value_gaq)) !=
                    rtCP_Constant_Value_ak);

  /* Outputs for Enabled SubSystem: '<S229>/Rising Edge' */
  /* Constant: '<S229>/rising_edge' incorporates:
   *  UnitDelay: '<S229>/Unit Delay'
   */
  ControlBuild_RisingEdge(rtCP_rising_edge_Value_iw_EL_0, rtb_Compare_nt,
    ControlBuild_DW.UnitDelay_DSTATE_d, &ControlBuild_B.RisingEdge_h);

  /* End of Outputs for SubSystem: '<S229>/Rising Edge' */

  /* Outputs for Enabled SubSystem: '<S229>/Falling Edge' */
  ControlBuild_FallingEdge(rtCP_rising_edge_Value_iw_EL_1, rtb_Compare_nt,
    ControlBuild_DW.UnitDelay_DSTATE_d, &ControlBuild_B.FallingEdge_m);

  /* End of Outputs for SubSystem: '<S229>/Falling Edge' */

  /* Switch: '<S232>/Switch' incorporates:
   *  Constant: '<S179>/Constant31'
   *  Constant: '<S232>/Constant2'
   *  DataStoreRead: '<S228>/Data Store Read'
   *  DataStoreWrite: '<S228>/Data Store Write'
   *  Logic: '<S229>/Logical Operator1'
   *  RelationalOperator: '<S232>/Relational Operator'
   *  Switch: '<S232>/Switch1'
   */
  if (ControlBuild_B.RisingEdge_h.LogicalOperator ||
      ControlBuild_B.FallingEdge_m.LogicalOperator) {
    ControlBuild_DW.A_c = rtCP_Constant31_Value_f;
  } else {
    if (ControlBuild_DW.A_c > rtCP_Constant2_Value_jh) {
      /* Sum: '<S232>/Subtract' incorporates:
       *  Constant: '<S232>/Constant1'
       *  DataStoreRead: '<S228>/Data Store Read'
       *  Switch: '<S232>/Switch1'
       */
      tmp = ControlBuild_DW.A_c - rtCP_Constant1_Value_du;
      if (tmp < 0) {
        tmp = 0;
      }

      /* Switch: '<S232>/Switch1' incorporates:
       *  Sum: '<S232>/Subtract'
       */
      rtb_Switch1_l1 = (uint16_T)tmp;
    } else {
      /* Switch: '<S232>/Switch1' incorporates:
       *  Constant: '<S232>/Constant2'
       */
      rtb_Switch1_l1 = rtCP_Constant2_Value_jh;
    }

    ControlBuild_DW.A_c = rtb_Switch1_l1;
  }

  /* End of Switch: '<S232>/Switch' */

  /* Switch: '<S5>/Switch1' incorporates:
   *  Constant: '<S6>/前门关'
   */
  if (!ControlBuild_ConstB.Compare_g) {
    rtb_Switch_idx_35 = rtCP__Value_k;
  }

  /* RelationalOperator: '<S246>/Compare' incorporates:
   *  Constant: '<S246>/Constant'
   */
  rtb_Compare_gg = (rtb_Switch_idx_35 == rtCP_Constant_Value_oy);

  /* Outputs for Enabled SubSystem: '<S251>/Rising Edge' */
  /* Constant: '<S251>/rising_edge' incorporates:
   *  UnitDelay: '<S251>/Unit Delay'
   */
  ControlBuild_RisingEdge(rtCP_rising_edge_Value_e_EL_0, rtb_Compare_gg,
    ControlBuild_DW.UnitDelay_DSTATE_i, &ControlBuild_B.RisingEdge_j);

  /* End of Outputs for SubSystem: '<S251>/Rising Edge' */

  /* Outputs for Enabled SubSystem: '<S251>/Falling Edge' */
  ControlBuild_FallingEdge(rtCP_rising_edge_Value_e_EL_1, rtb_Compare_gg,
    ControlBuild_DW.UnitDelay_DSTATE_i, &ControlBuild_B.FallingEdge_i);

  /* End of Outputs for SubSystem: '<S251>/Falling Edge' */

  /* RelationalOperator: '<S245>/Compare' incorporates:
   *  Constant: '<S245>/Constant'
   *  Constant: '<S258>/Constant'
   *  Constant: '<S259>/Constant'
   *  Logic: '<S183>/Logical Operator'
   *  Logic: '<S251>/Logical Operator1'
   *  Logic: '<S252>/Logical Operator'
   *  RelationalOperator: '<S258>/Compare'
   *  RelationalOperator: '<S259>/Compare'
   */
  rtb_Compare_cel = (((rtb_Switch_idx_7 != rtCP_Constant_Value_ef) &&
                      ((ControlBuild_ConstB.Compare_b &&
                        (ControlBuild_B.RisingEdge_j.LogicalOperator ||
    ControlBuild_B.FallingEdge_i.LogicalOperator)) != (int32_T)
                       rtCP_Constant_Value_n)) != rtCP_Constant_Value_c3);

  /* Outputs for Enabled SubSystem: '<S250>/Rising Edge' */
  /* Constant: '<S250>/rising_edge' incorporates:
   *  UnitDelay: '<S250>/Unit Delay'
   */
  ControlBuild_RisingEdge(rtCP_rising_edge_Value_c_EL_0, rtb_Compare_cel,
    ControlBuild_DW.UnitDelay_DSTATE_de, &ControlBuild_B.RisingEdge_g);

  /* End of Outputs for SubSystem: '<S250>/Rising Edge' */

  /* Outputs for Enabled SubSystem: '<S250>/Falling Edge' */
  ControlBuild_FallingEdge(rtCP_rising_edge_Value_c_EL_1, rtb_Compare_cel,
    ControlBuild_DW.UnitDelay_DSTATE_de, &ControlBuild_B.FallingEdge_c);

  /* End of Outputs for SubSystem: '<S250>/Falling Edge' */

  /* Switch: '<S253>/Switch' incorporates:
   *  Constant: '<S183>/Constant31'
   *  Constant: '<S253>/Constant2'
   *  DataStoreRead: '<S249>/Data Store Read'
   *  DataStoreWrite: '<S249>/Data Store Write'
   *  Logic: '<S250>/Logical Operator1'
   *  RelationalOperator: '<S253>/Relational Operator'
   *  Switch: '<S253>/Switch1'
   */
  if (ControlBuild_B.RisingEdge_g.LogicalOperator ||
      ControlBuild_B.FallingEdge_c.LogicalOperator) {
    ControlBuild_DW.A_ci = rtCP_Constant31_Value_g;
  } else {
    if (ControlBuild_DW.A_ci > rtCP_Constant2_Value_i) {
      /* Sum: '<S253>/Subtract' incorporates:
       *  Constant: '<S253>/Constant1'
       *  DataStoreRead: '<S249>/Data Store Read'
       *  Switch: '<S253>/Switch1'
       */
      tmp = ControlBuild_DW.A_ci - rtCP_Constant1_Value_np;
      if (tmp < 0) {
        tmp = 0;
      }

      /* Switch: '<S253>/Switch1' incorporates:
       *  Sum: '<S253>/Subtract'
       */
      rtb_Switch1_l1 = (uint16_T)tmp;
    } else {
      /* Switch: '<S253>/Switch1' incorporates:
       *  Constant: '<S253>/Constant2'
       */
      rtb_Switch1_l1 = rtCP_Constant2_Value_i;
    }

    ControlBuild_DW.A_ci = rtb_Switch1_l1;
  }

  /* End of Switch: '<S253>/Switch' */

  /* Switch: '<S5>/Switch1' incorporates:
   *  Constant: '<S6>/前门开关'
   */
  if (!ControlBuild_ConstB.Compare_g) {
    rtb_Switch_idx_20 = rtCP__Value_kx;
  }

  /* RelationalOperator: '<S261>/Compare' incorporates:
   *  Constant: '<S261>/Constant'
   */
  rtb_Compare_kc = (rtb_Switch_idx_20 == rtCP_Constant_Value_hp);

  /* Outputs for Enabled SubSystem: '<S266>/Rising Edge' */
  /* Constant: '<S266>/rising_edge' incorporates:
   *  UnitDelay: '<S266>/Unit Delay'
   */
  ControlBuild_RisingEdge(rtCP_rising_edge_Value_p_EL_0, rtb_Compare_kc,
    ControlBuild_DW.UnitDelay_DSTATE_pg, &ControlBuild_B.RisingEdge_a);

  /* End of Outputs for SubSystem: '<S266>/Rising Edge' */

  /* Outputs for Enabled SubSystem: '<S266>/Falling Edge' */
  ControlBuild_FallingEdge(rtCP_rising_edge_Value_p_EL_1, rtb_Compare_kc,
    ControlBuild_DW.UnitDelay_DSTATE_pg, &ControlBuild_B.FallingEdge_ld);

  /* End of Outputs for SubSystem: '<S266>/Falling Edge' */

  /* RelationalOperator: '<S260>/Compare' incorporates:
   *  Constant: '<S260>/Constant'
   *  Constant: '<S273>/Constant'
   *  Constant: '<S274>/Constant'
   *  Logic: '<S184>/Logical Operator'
   *  Logic: '<S266>/Logical Operator1'
   *  Logic: '<S267>/Logical Operator'
   *  RelationalOperator: '<S273>/Compare'
   *  RelationalOperator: '<S274>/Compare'
   */
  rtb_Compare_hyg = (((rtb_Switch_idx_7 != rtCP_Constant_Value_dv) &&
                      ((ControlBuild_ConstB.Compare_n5 &&
                        (ControlBuild_B.RisingEdge_a.LogicalOperator ||
    ControlBuild_B.FallingEdge_ld.LogicalOperator)) != (int32_T)
                       rtCP_Constant_Value_ju)) != rtCP_Constant_Value_m);

  /* Outputs for Enabled SubSystem: '<S265>/Rising Edge' */
  /* Constant: '<S265>/rising_edge' incorporates:
   *  UnitDelay: '<S265>/Unit Delay'
   */
  ControlBuild_RisingEdge(rtCP_rising_edge_Value_n_EL_0, rtb_Compare_hyg,
    ControlBuild_DW.UnitDelay_DSTATE_es, &ControlBuild_B.RisingEdge_o);

  /* End of Outputs for SubSystem: '<S265>/Rising Edge' */

  /* Outputs for Enabled SubSystem: '<S265>/Falling Edge' */
  ControlBuild_FallingEdge(rtCP_rising_edge_Value_n_EL_1, rtb_Compare_hyg,
    ControlBuild_DW.UnitDelay_DSTATE_es, &ControlBuild_B.FallingEdge_g);

  /* End of Outputs for SubSystem: '<S265>/Falling Edge' */

  /* Switch: '<S268>/Switch' incorporates:
   *  Constant: '<S184>/Constant31'
   *  Constant: '<S268>/Constant2'
   *  DataStoreRead: '<S264>/Data Store Read'
   *  DataStoreWrite: '<S264>/Data Store Write'
   *  Logic: '<S265>/Logical Operator1'
   *  RelationalOperator: '<S268>/Relational Operator'
   *  Switch: '<S268>/Switch1'
   */
  if (ControlBuild_B.RisingEdge_o.LogicalOperator ||
      ControlBuild_B.FallingEdge_g.LogicalOperator) {
    ControlBuild_DW.A_d = rtCP_Constant31_Value_n;
  } else {
    if (ControlBuild_DW.A_d > rtCP_Constant2_Value_g) {
      /* Sum: '<S268>/Subtract' incorporates:
       *  Constant: '<S268>/Constant1'
       *  DataStoreRead: '<S264>/Data Store Read'
       *  Switch: '<S268>/Switch1'
       */
      tmp = ControlBuild_DW.A_d - rtCP_Constant1_Value_fy;
      if (tmp < 0) {
        tmp = 0;
      }

      /* Switch: '<S268>/Switch1' incorporates:
       *  Sum: '<S268>/Subtract'
       */
      rtb_Switch1_l1 = (uint16_T)tmp;
    } else {
      /* Switch: '<S268>/Switch1' incorporates:
       *  Constant: '<S268>/Constant2'
       */
      rtb_Switch1_l1 = rtCP_Constant2_Value_g;
    }

    ControlBuild_DW.A_d = rtb_Switch1_l1;
  }

  /* End of Switch: '<S268>/Switch' */

  /* Outputs for Enabled SubSystem: '<S297>/Rising Edge' */
  /* Constant: '<S297>/rising_edge' incorporates:
   *  UnitDelay: '<S297>/Unit Delay'
   */
  ControlBuild_RisingEdge(rtCP_rising_edge_Value_ni_EL_0,
    ControlBuild_ConstB.Compare_f, ControlBuild_DW.UnitDelay_DSTATE_ku,
    &ControlBuild_B.RisingEdge_fc);

  /* End of Outputs for SubSystem: '<S297>/Rising Edge' */

  /* Outputs for Enabled SubSystem: '<S297>/Falling Edge' */
  ControlBuild_FallingEdge_n(rtCP_rising_edge_Value_ni_EL_1,
    ControlBuild_DW.UnitDelay_DSTATE_ku, &ControlBuild_B.FallingEdge_n,
    &ControlBuild_ConstB.FallingEdge_n);

  /* End of Outputs for SubSystem: '<S297>/Falling Edge' */

  /* Switch: '<S299>/Switch' incorporates:
   *  Constant: '<S193>/Constant'
   *  Constant: '<S299>/Constant2'
   *  DataStoreRead: '<S295>/Data Store Read'
   *  DataStoreWrite: '<S295>/Data Store Write'
   *  Logic: '<S297>/Logical Operator1'
   *  RelationalOperator: '<S299>/Relational Operator'
   *  Switch: '<S299>/Switch1'
   */
  if (ControlBuild_B.RisingEdge_fc.LogicalOperator ||
      ControlBuild_B.FallingEdge_n.LogicalOperator) {
    ControlBuild_DW.A_h = rtCP_Constant_Value_ds;
  } else {
    if (ControlBuild_DW.A_h > rtCP_Constant2_Value_c) {
      /* Sum: '<S299>/Subtract' incorporates:
       *  Constant: '<S299>/Constant1'
       *  DataStoreRead: '<S295>/Data Store Read'
       *  Switch: '<S299>/Switch1'
       */
      tmp = ControlBuild_DW.A_h - rtCP_Constant1_Value_c;
      if (tmp < 0) {
        tmp = 0;
      }

      /* Switch: '<S299>/Switch1' incorporates:
       *  Sum: '<S299>/Subtract'
       */
      rtb_Switch1_l1 = (uint16_T)tmp;
    } else {
      /* Switch: '<S299>/Switch1' incorporates:
       *  Constant: '<S299>/Constant2'
       */
      rtb_Switch1_l1 = rtCP_Constant2_Value_c;
    }

    ControlBuild_DW.A_h = rtb_Switch1_l1;
  }

  /* End of Switch: '<S299>/Switch' */

  /* RelationalOperator: '<S292>/Compare' incorporates:
   *  Constant: '<S292>/Constant'
   */
  rtb_Compare_coj = (rtb_Switch_idx_8 != rtCP_Constant_Value_nl);

  /* Outputs for Enabled SubSystem: '<S298>/Rising Edge' */
  /* Constant: '<S298>/falling_edge' incorporates:
   *  UnitDelay: '<S298>/Unit Delay'
   */
  ControlBuild_RisingEdge(rtCP_falling_edge_Value_f_EL_0, rtb_Compare_coj,
    ControlBuild_DW.UnitDelay_DSTATE_bc, &ControlBuild_B.RisingEdge_n);

  /* End of Outputs for SubSystem: '<S298>/Rising Edge' */

  /* Outputs for Enabled SubSystem: '<S298>/Falling Edge' */
  ControlBuild_FallingEdge(rtCP_falling_edge_Value_f_EL_1, rtb_Compare_coj,
    ControlBuild_DW.UnitDelay_DSTATE_bc, &ControlBuild_B.FallingEdge_cc);

  /* End of Outputs for SubSystem: '<S298>/Falling Edge' */

  /* Switch: '<S300>/Switch' incorporates:
   *  Constant: '<S193>/Constant1'
   *  Constant: '<S300>/Constant2'
   *  DataStoreRead: '<S296>/Data Store Read'
   *  DataStoreWrite: '<S296>/Data Store Write'
   *  Logic: '<S298>/Logical Operator1'
   *  RelationalOperator: '<S300>/Relational Operator'
   *  Switch: '<S300>/Switch1'
   */
  if (ControlBuild_B.RisingEdge_n.LogicalOperator ||
      ControlBuild_B.FallingEdge_cc.LogicalOperator) {
    ControlBuild_DW.A_g = rtCP_Constant1_Value_n;
  } else {
    if (ControlBuild_DW.A_g > rtCP_Constant2_Value_eh) {
      /* Sum: '<S300>/Subtract' incorporates:
       *  Constant: '<S300>/Constant1'
       *  DataStoreRead: '<S296>/Data Store Read'
       *  Switch: '<S300>/Switch1'
       */
      tmp = ControlBuild_DW.A_g - rtCP_Constant1_Value_nu;
      if (tmp < 0) {
        tmp = 0;
      }

      /* Switch: '<S300>/Switch1' incorporates:
       *  Sum: '<S300>/Subtract'
       */
      rtb_Switch1_l1 = (uint16_T)tmp;
    } else {
      /* Switch: '<S300>/Switch1' incorporates:
       *  Constant: '<S300>/Constant2'
       */
      rtb_Switch1_l1 = rtCP_Constant2_Value_eh;
    }

    ControlBuild_DW.A_g = rtb_Switch1_l1;
  }

  /* End of Switch: '<S300>/Switch' */

  /* Outputs for Enabled SubSystem: '<S337>/Rising Edge' */
  /* Constant: '<S337>/falling_edge' incorporates:
   *  UnitDelay: '<S337>/Unit Delay'
   */
  ControlBuild_RisingEdge(rtCP_falling_edge_Value_j_EL_0,
    ControlBuild_ConstB.Compare_d, ControlBuild_DW.UnitDelay_DSTATE_g,
    &ControlBuild_B.RisingEdge_jc);

  /* End of Outputs for SubSystem: '<S337>/Rising Edge' */

  /* Outputs for Enabled SubSystem: '<S337>/Falling Edge' */
  ControlBuild_FallingEdge_n(rtCP_falling_edge_Value_j_EL_1,
    ControlBuild_DW.UnitDelay_DSTATE_g, &ControlBuild_B.FallingEdge_gp,
    &ControlBuild_ConstB.FallingEdge_gp);

  /* End of Outputs for SubSystem: '<S337>/Falling Edge' */

  /* Outputs for Enabled SubSystem: '<S338>/Rising Edge' */
  /* Constant: '<S338>/rising_edge' incorporates:
   *  UnitDelay: '<S338>/Unit Delay'
   */
  ControlBuild_RisingEdge(rtCP_rising_edge_Value_j_EL_0,
    ControlBuild_ConstB.Compare_d, ControlBuild_DW.UnitDelay_DSTATE_kh,
    &ControlBuild_B.RisingEdge_o4);

  /* End of Outputs for SubSystem: '<S338>/Rising Edge' */

  /* Outputs for Enabled SubSystem: '<S338>/Falling Edge' */
  ControlBuild_FallingEdge_n(rtCP_rising_edge_Value_j_EL_1,
    ControlBuild_DW.UnitDelay_DSTATE_kh, &ControlBuild_B.FallingEdge_f,
    &ControlBuild_ConstB.FallingEdge_f);

  /* End of Outputs for SubSystem: '<S338>/Falling Edge' */

  /* Switch: '<S354>/Switch' incorporates:
   *  Constant: '<S354>/Constant'
   *  DataStoreWrite: '<S341>/Data Store Write'
   *  Logic: '<S317>/Logical Operator2'
   *  Logic: '<S337>/Logical Operator1'
   *  Logic: '<S338>/Logical Operator1'
   *  Switch: '<S354>/Switch1'
   */
  if (ControlBuild_B.RisingEdge_jc.LogicalOperator ||
      ControlBuild_B.FallingEdge_gp.LogicalOperator) {
    ControlBuild_DW.A_ev = rtCP_Constant_Value_f;
  } else {
    if (ControlBuild_ConstB.Compare_jq &&
        (ControlBuild_B.RisingEdge_o4.LogicalOperator ||
         ControlBuild_B.FallingEdge_f.LogicalOperator)) {
      /* Switch: '<S354>/Switch1' incorporates:
       *  Constant: '<S354>/Constant1'
       *  DataStoreWrite: '<S341>/Data Store Write'
       */
      ControlBuild_DW.A_ev = rtCP_Constant1_Value_i;
    }
  }

  /* End of Switch: '<S354>/Switch' */

  /* Outputs for Enabled SubSystem: '<S340>/Rising Edge' */
  /* Constant: '<S340>/falling_edge' incorporates:
   *  UnitDelay: '<S340>/Unit Delay'
   */
  ControlBuild_RisingEdge(rtCP_falling_edge_Value_a_EL_0,
    ControlBuild_ConstB.Compare_dh, ControlBuild_DW.UnitDelay_DSTATE_o,
    &ControlBuild_B.RisingEdge_fx);

  /* End of Outputs for SubSystem: '<S340>/Rising Edge' */

  /* Outputs for Enabled SubSystem: '<S340>/Falling Edge' */
  ControlBuild_FallingEdge_n(rtCP_falling_edge_Value_a_EL_1,
    ControlBuild_DW.UnitDelay_DSTATE_o, &ControlBuild_B.FallingEdge_ch,
    &ControlBuild_ConstB.FallingEdge_ch);

  /* End of Outputs for SubSystem: '<S340>/Falling Edge' */

  /* Outputs for Enabled SubSystem: '<S339>/Rising Edge' */
  /* Constant: '<S339>/rising_edge' incorporates:
   *  UnitDelay: '<S339>/Unit Delay'
   */
  ControlBuild_RisingEdge(rtCP_rising_edge_Value_cw_EL_0,
    ControlBuild_ConstB.Compare_dh, ControlBuild_DW.UnitDelay_DSTATE_c,
    &ControlBuild_B.RisingEdge_k);

  /* End of Outputs for SubSystem: '<S339>/Rising Edge' */

  /* Outputs for Enabled SubSystem: '<S339>/Falling Edge' */
  ControlBuild_FallingEdge_n(rtCP_rising_edge_Value_cw_EL_1,
    ControlBuild_DW.UnitDelay_DSTATE_c, &ControlBuild_B.FallingEdge_fd,
    &ControlBuild_ConstB.FallingEdge_fd);

  /* End of Outputs for SubSystem: '<S339>/Falling Edge' */

  /* Switch: '<S355>/Switch' incorporates:
   *  Constant: '<S355>/Constant'
   *  DataStoreWrite: '<S342>/Data Store Write'
   *  Logic: '<S317>/Logical Operator8'
   *  Logic: '<S339>/Logical Operator1'
   *  Logic: '<S340>/Logical Operator1'
   *  Switch: '<S355>/Switch1'
   */
  if (ControlBuild_B.RisingEdge_fx.LogicalOperator ||
      ControlBuild_B.FallingEdge_ch.LogicalOperator) {
    ControlBuild_DW.A_ke = rtCP_Constant_Value_lu;
  } else {
    if (ControlBuild_ConstB.Compare_dk && ControlBuild_ConstB.LogicalOperator13 &&
        (ControlBuild_B.RisingEdge_k.LogicalOperator ||
         ControlBuild_B.FallingEdge_fd.LogicalOperator)) {
      /* Switch: '<S355>/Switch1' incorporates:
       *  Constant: '<S355>/Constant1'
       *  DataStoreWrite: '<S342>/Data Store Write'
       */
      ControlBuild_DW.A_ke = rtCP_Constant1_Value_op;
    }
  }

  /* End of Switch: '<S355>/Switch' */

  /* Outputs for Enabled SubSystem: '<S378>/Rising Edge' */
  /* Constant: '<S378>/falling_edge' incorporates:
   *  UnitDelay: '<S378>/Unit Delay'
   */
  ControlBuild_RisingEdge(rtCP_falling_edge_Value_l_EL_0,
    ControlBuild_ConstB.Compare_bd, ControlBuild_DW.UnitDelay_DSTATE_dd,
    &ControlBuild_B.RisingEdge_fh);

  /* End of Outputs for SubSystem: '<S378>/Rising Edge' */

  /* Outputs for Enabled SubSystem: '<S378>/Falling Edge' */
  ControlBuild_FallingEdge_n(rtCP_falling_edge_Value_l_EL_1,
    ControlBuild_DW.UnitDelay_DSTATE_dd, &ControlBuild_B.FallingEdge_d,
    &ControlBuild_ConstB.FallingEdge_d);

  /* End of Outputs for SubSystem: '<S378>/Falling Edge' */

  /* Outputs for Enabled SubSystem: '<S377>/Rising Edge' */
  /* Constant: '<S377>/rising_edge' incorporates:
   *  UnitDelay: '<S377>/Unit Delay'
   */
  ControlBuild_RisingEdge(rtCP_rising_edge_Value_k_EL_0,
    ControlBuild_ConstB.Compare_bd, ControlBuild_DW.UnitDelay_DSTATE_ki,
    &ControlBuild_B.RisingEdge_od);

  /* End of Outputs for SubSystem: '<S377>/Rising Edge' */

  /* Outputs for Enabled SubSystem: '<S377>/Falling Edge' */
  ControlBuild_FallingEdge_n(rtCP_rising_edge_Value_k_EL_1,
    ControlBuild_DW.UnitDelay_DSTATE_ki, &ControlBuild_B.FallingEdge_b0,
    &ControlBuild_ConstB.FallingEdge_b0);

  /* End of Outputs for SubSystem: '<S377>/Falling Edge' */

  /* Switch: '<S395>/Switch' incorporates:
   *  Constant: '<S395>/Constant'
   *  DataStoreWrite: '<S381>/Data Store Write'
   *  Logic: '<S318>/Logical Operator3'
   *  Logic: '<S377>/Logical Operator1'
   *  Logic: '<S378>/Logical Operator1'
   *  Switch: '<S395>/Switch1'
   */
  if (ControlBuild_B.RisingEdge_fh.LogicalOperator ||
      ControlBuild_B.FallingEdge_d.LogicalOperator) {
    ControlBuild_DW.A_n = rtCP_Constant_Value_kv;
  } else {
    if (ControlBuild_ConstB.Compare_e && ControlBuild_ConstB.Compare_cj &&
        (ControlBuild_B.RisingEdge_od.LogicalOperator ||
         ControlBuild_B.FallingEdge_b0.LogicalOperator)) {
      /* Switch: '<S395>/Switch1' incorporates:
       *  Constant: '<S395>/Constant1'
       *  DataStoreWrite: '<S381>/Data Store Write'
       */
      ControlBuild_DW.A_n = rtCP_Constant1_Value_a;
    }
  }

  /* End of Switch: '<S395>/Switch' */

  /* Outputs for Enabled SubSystem: '<S380>/Rising Edge' */
  /* Constant: '<S380>/falling_edge' incorporates:
   *  UnitDelay: '<S380>/Unit Delay'
   */
  ControlBuild_RisingEdge(rtCP_falling_edge_Value_h_EL_0,
    ControlBuild_ConstB.Compare_p, ControlBuild_DW.UnitDelay_DSTATE_i3,
    &ControlBuild_B.RisingEdge_gl);

  /* End of Outputs for SubSystem: '<S380>/Rising Edge' */

  /* Outputs for Enabled SubSystem: '<S380>/Falling Edge' */
  ControlBuild_FallingEdge_n(rtCP_falling_edge_Value_h_EL_1,
    ControlBuild_DW.UnitDelay_DSTATE_i3, &ControlBuild_B.FallingEdge_fo,
    &ControlBuild_ConstB.FallingEdge_fo);

  /* End of Outputs for SubSystem: '<S380>/Falling Edge' */

  /* Outputs for Enabled SubSystem: '<S379>/Rising Edge' */
  /* Constant: '<S379>/rising_edge' incorporates:
   *  UnitDelay: '<S379>/Unit Delay'
   */
  ControlBuild_RisingEdge(rtCP_rising_edge_Value_ca_EL_0,
    ControlBuild_ConstB.Compare_p, ControlBuild_DW.UnitDelay_DSTATE_j,
    &ControlBuild_B.RisingEdge_m);

  /* End of Outputs for SubSystem: '<S379>/Rising Edge' */

  /* Outputs for Enabled SubSystem: '<S379>/Falling Edge' */
  ControlBuild_FallingEdge_n(rtCP_rising_edge_Value_ca_EL_1,
    ControlBuild_DW.UnitDelay_DSTATE_j, &ControlBuild_B.FallingEdge_p,
    &ControlBuild_ConstB.FallingEdge_p);

  /* End of Outputs for SubSystem: '<S379>/Falling Edge' */

  /* Switch: '<S396>/Switch' incorporates:
   *  Constant: '<S396>/Constant'
   *  DataStoreWrite: '<S382>/Data Store Write'
   *  Logic: '<S318>/Logical Operator9'
   *  Logic: '<S379>/Logical Operator1'
   *  Logic: '<S380>/Logical Operator1'
   *  Switch: '<S396>/Switch1'
   */
  if (ControlBuild_B.RisingEdge_gl.LogicalOperator ||
      ControlBuild_B.FallingEdge_fo.LogicalOperator) {
    ControlBuild_DW.A_c2 = rtCP_Constant_Value_a;
  } else {
    if (ControlBuild_ConstB.Compare_mf && ControlBuild_ConstB.Compare_a &&
        (ControlBuild_B.RisingEdge_m.LogicalOperator ||
         ControlBuild_B.FallingEdge_p.LogicalOperator)) {
      /* Switch: '<S396>/Switch1' incorporates:
       *  Constant: '<S396>/Constant1'
       *  DataStoreWrite: '<S382>/Data Store Write'
       */
      ControlBuild_DW.A_c2 = rtCP_Constant1_Value_m;
    }
  }

  /* End of Switch: '<S396>/Switch' */

  /* Switch: '<S5>/Switch1' incorporates:
   *  Constant: '<S6>/雨刷低速开关'
   *  Constant: '<S6>/雨刷高速开关'
   */
  if (!ControlBuild_ConstB.Compare_g) {
    rtb_Switch_idx_16 = rtCP__Value_o;
    rtb_Switch_idx_10 = rtCP__Value_n;
  }

  /* RelationalOperator: '<S402>/Compare' incorporates:
   *  Constant: '<S402>/Constant'
   */
  Compare = (rtb_Switch_idx_16 != rtCP_Constant_Value_hy);

  /* RelationalOperator: '<S403>/Compare' incorporates:
   *  Constant: '<S403>/Constant'
   */
  Compare_g = (rtb_Switch_idx_10 != rtCP_Constant_Value_go);

  /* Switch: '<S5>/Switch1' incorporates:
   *  Constant: '<S6>/雨刷间歇开关'
   *  Constant: '<S6>/雨刷洗涤开关'
   */
  if (!ControlBuild_ConstB.Compare_g) {
    rtb_Switch_idx_19 = rtCP__Value_lt;
    rtb_Switch_idx_18 = rtCP__Value_b3;
  }

  /* RelationalOperator: '<S404>/Compare' incorporates:
   *  Constant: '<S404>/Constant'
   */
  Compare_k = (rtb_Switch_idx_19 != rtCP_Constant_Value_fq);

  /* RelationalOperator: '<S405>/Compare' incorporates:
   *  Constant: '<S405>/Constant'
   */
  Compare_i = (rtb_Switch_idx_18 != rtCP_Constant_Value_ag);

  /* Delay: '<S17>/Delay' */
  Delay = ControlBuild_DW.Delay_DSTATE;

  /* Chart: '<S17>/Chart' incorporates:
   *  Constant: '<S17>/Constant'
   */
  /* Gateway: ControlSystem/WiperControl/Chart */
  if (ControlBuild_DW.temporalCounter_i1 < 1023U) {
    ControlBuild_DW.temporalCounter_i1++;
  }

  /* During: ControlSystem/WiperControl/Chart */
  if (ControlBuild_DW.is_active_c1_ControlBuild == 0U) {
    /* Entry: ControlSystem/WiperControl/Chart */
    ControlBuild_DW.is_active_c1_ControlBuild = 1U;

    /* Entry Internal: ControlSystem/WiperControl/Chart */
    /* Transition: '<S401>:2' */
    ControlBuild_DW.is_c1_ControlBuild = ControlBuild_IN_stop;

    /* Entry 'stop': '<S401>:3' */
    /* '<S401>:3:1' wipper_mode=0  */
    /* '<S401>:3:1' outlowwiper=0  */
    /* '<S401>:3:1' outhighwiper=0  */
    /* '<S401>:3:3' outwasher=0  */
  } else {
    switch (ControlBuild_DW.is_c1_ControlBuild) {
     case ControlBuild_IN_high:
      /* During 'high': '<S401>:13' */
      /* '<S401>:29:1' sf_internal_predicateOutput = highwiper==0; */
      if (!Compare_g) {
        /* Transition: '<S401>:29' */
        /* '<S401>:29:1' outhighwiper=0; */
        ControlBuild_DW.is_c1_ControlBuild = ControlBuild_IN_low;

        /* Entry 'low': '<S401>:4' */
        /* '<S401>:4:1' wipper_mode=1; */
      } else {
        /* '<S401>:30:1' sf_internal_predicateOutput = highwiper==0&&pause==1; */
        /* Transition: '<S401>:200' */
        /* Entry Internal 'high': '<S401>:13' */
        /* Transition: '<S401>:100' */
        /* '<S401>:102:1' sf_internal_predicateOutput = highwiper==1; */
      }
      break;

     case ControlBuild_IN_low:
      /* During 'low': '<S401>:4' */
      /* '<S401>:21:1' sf_internal_predicateOutput = (highwiper==1); */
      if (Compare_g) {
        /* Transition: '<S401>:21' */
        /* '<S401>:21:1' outlowwiper=0; */
        ControlBuild_DW.is_c1_ControlBuild = ControlBuild_IN_high;

        /* Entry 'high': '<S401>:13' */
        /* '<S401>:13:1' wipper_mode=2  */
        /* Entry Internal 'high': '<S401>:13' */
        /* Transition: '<S401>:100' */
        /* '<S401>:102:1' sf_internal_predicateOutput = highwiper==1; */
      } else {
        /* '<S401>:27:1' sf_internal_predicateOutput = lowwiper==0&&pause==1; */
        if ((!Compare) && Compare_i) {
          /* Transition: '<S401>:27' */
          ControlBuild_DW.is_c1_ControlBuild = ControlBuild_IN_pause;

          /* Entry 'pause': '<S401>:15' */
          /* '<S401>:15:1' wipper_mode=4  */
          /* Entry Internal 'pause': '<S401>:15' */
          /* Transition: '<S401>:177' */
          ControlBuild_DW.is_pause = ControlBuild_IN_open1;
          ControlBuild_DW.temporalCounter_i1 = 0U;

          /* Entry 'open1': '<S401>:185' */
          /* '<S401>:185:1' outlowwiper=1; */
        } else {
          /* '<S401>:97:1' sf_internal_predicateOutput = highwiper==0&&lowwiper==0&&gohome_last==0&&gohome==1&&pause==0; */
          if ((!Compare) && (!Delay) && Compare_i && (!Compare_i)) {
            /* Transition: '<S401>:97' */
            ControlBuild_DW.is_c1_ControlBuild = ControlBuild_IN_stop;

            /* Entry 'stop': '<S401>:3' */
            /* '<S401>:3:1' wipper_mode=0  */
            /* '<S401>:3:1' outlowwiper=0  */
            /* '<S401>:3:1' outhighwiper=0  */
            /* '<S401>:3:3' outwasher=0  */
          } else {
            /* Transition: '<S401>:199' */
          }
        }
      }
      break;

     case ControlBuild_IN_pause:
      /* During 'pause': '<S401>:15' */
      /* '<S401>:172:1' sf_internal_predicateOutput = ((lowwiper==1)||(highwiper==1))&&pause==0; */
      if ((Compare || Compare_g) && (!Compare_i)) {
        /* Transition: '<S401>:172' */
        /* Exit Internal 'pause': '<S401>:15' */
        ControlBuild_DW.is_pause = ControlBuild_IN_NO_ACTIVE_CHILD;
        ControlBuild_DW.is_c1_ControlBuild = ControlBuild_IN_low;

        /* Entry 'low': '<S401>:4' */
        /* '<S401>:4:1' wipper_mode=1; */
      } else {
        /* '<S401>:173:1' sf_internal_predicateOutput = washer==1; */
        if (Compare_k) {
          /* Transition: '<S401>:173' */
          /* Exit Internal 'pause': '<S401>:15' */
          ControlBuild_DW.is_pause = ControlBuild_IN_NO_ACTIVE_CHILD;
          ControlBuild_DW.is_c1_ControlBuild = ControlBuild_IN_wash;

          /* Entry 'wash': '<S401>:14' */
          /* '<S401>:14:1' wipper_mode=3  */
          ControlBuil_enter_internal_wash(&Compare_k, &Compare_i, &Delay);
        } else {
          /* '<S401>:174:1' sf_internal_predicateOutput = highwiper==0&&lowwiper==0&&gohome==1&&pause==0; */
          if ((!Compare_g) && (!Compare) && Compare_i && (!Compare_i)) {
            /* Transition: '<S401>:174' */
            /* Exit Internal 'pause': '<S401>:15' */
            ControlBuild_DW.is_pause = ControlBuild_IN_NO_ACTIVE_CHILD;
            ControlBuild_DW.is_c1_ControlBuild = ControlBuild_IN_stop;

            /* Entry 'stop': '<S401>:3' */
            /* '<S401>:3:1' wipper_mode=0  */
            /* '<S401>:3:1' outlowwiper=0  */
            /* '<S401>:3:1' outhighwiper=0  */
            /* '<S401>:3:3' outwasher=0  */
          } else if (ControlBuild_DW.is_pause == ControlBuild_IN_close1) {
            /* During 'close1': '<S401>:186' */
            /* '<S401>:188:1' sf_internal_predicateOutput = after(600,tick)&&highwipper_work_flag==0; */
            if ((ControlBuild_DW.temporalCounter_i1 >= 600) &&
                (rtCP_Constant_Value_krm == 0)) {
              /* Transition: '<S401>:188' */
              ControlBuild_DW.is_pause = ControlBuild_IN_open1;
              ControlBuild_DW.temporalCounter_i1 = 0U;

              /* Entry 'open1': '<S401>:185' */
              /* '<S401>:185:1' outlowwiper=1; */
            }
          } else {
            /* During 'open1': '<S401>:185' */
            /* '<S401>:187:1' sf_internal_predicateOutput = after(150,tick)&&gohome==1; */
            if ((ControlBuild_DW.temporalCounter_i1 >= 150) && Compare_i) {
              /* Transition: '<S401>:187' */
              ControlBuild_DW.is_pause = ControlBuild_IN_close1;
              ControlBuild_DW.temporalCounter_i1 = 0U;

              /* Entry 'close1': '<S401>:186' */
              /* '<S401>:186:1' outlowwiper=0; */
            }
          }
        }
      }
      break;

     case ControlBuild_IN_stop:
      /* During 'stop': '<S401>:3' */
      /* '<S401>:18:1' sf_internal_predicateOutput = (lowwiper==1)||(highwiper==1); */
      if (Compare || Compare_g) {
        /* Transition: '<S401>:18' */
        ControlBuild_DW.is_c1_ControlBuild = ControlBuild_IN_low;

        /* Entry 'low': '<S401>:4' */
        /* '<S401>:4:1' wipper_mode=1; */
      } else {
        /* '<S401>:24:1' sf_internal_predicateOutput = washer==1; */
        if (Compare_k) {
          /* Transition: '<S401>:24' */
          ControlBuild_DW.is_c1_ControlBuild = ControlBuild_IN_wash;

          /* Entry 'wash': '<S401>:14' */
          /* '<S401>:14:1' wipper_mode=3  */
          ControlBuil_enter_internal_wash(&Compare_k, &Compare_i, &Delay);
        } else {
          /* '<S401>:25:1' sf_internal_predicateOutput = pause==1; */
          if (Compare_i) {
            /* Transition: '<S401>:25' */
            ControlBuild_DW.is_c1_ControlBuild = ControlBuild_IN_pause;

            /* Entry 'pause': '<S401>:15' */
            /* '<S401>:15:1' wipper_mode=4  */
            /* Entry Internal 'pause': '<S401>:15' */
            /* Transition: '<S401>:177' */
            ControlBuild_DW.is_pause = ControlBuild_IN_open1;
            ControlBuild_DW.temporalCounter_i1 = 0U;

            /* Entry 'open1': '<S401>:185' */
            /* '<S401>:185:1' outlowwiper=1; */
          }
        }
      }
      break;

     default:
      /* During 'wash': '<S401>:14' */
      /* '<S401>:23:1' sf_internal_predicateOutput = washer==0&&pause==1; */
      if ((!Compare_k) && Compare_i) {
        /* Transition: '<S401>:23' */
        /* '<S401>:23:1' outwasher=0 */
        ControlBuild_DW.is_c1_ControlBuild = ControlBuild_IN_pause;

        /* Entry 'pause': '<S401>:15' */
        /* '<S401>:15:1' wipper_mode=4  */
        /* Entry Internal 'pause': '<S401>:15' */
        /* Transition: '<S401>:177' */
        ControlBuild_DW.is_pause = ControlBuild_IN_open1;
        ControlBuild_DW.temporalCounter_i1 = 0U;

        /* Entry 'open1': '<S401>:185' */
        /* '<S401>:185:1' outlowwiper=1; */
      } else {
        /* '<S401>:171:1' sf_internal_predicateOutput = wash2stop_flag==1; */
        if (ControlBuild_DW.wash2stop_flag == 1) {
          /* Transition: '<S401>:171' */
          /* '<S401>:171:1' outlowwiper=0; */
          ControlBuild_DW.is_c1_ControlBuild = ControlBuild_IN_stop;

          /* Entry 'stop': '<S401>:3' */
          /* '<S401>:3:1' wipper_mode=0  */
          /* '<S401>:3:1' outlowwiper=0  */
          /* '<S401>:3:1' outhighwiper=0  */
          /* '<S401>:3:3' outwasher=0  */
        } else {
          /* Transition: '<S401>:201' */
          ControlBuil_enter_internal_wash(&Compare_k, &Compare_i, &Delay);
        }
      }
      break;
    }
  }

  /* End of Chart: '<S17>/Chart' */

  /* MATLAB Function: '<S7>/MATLAB Function' */
  /* MATLAB Function 'OutputPinSettings/MATLAB Function': '<S414>:1' */
  /* '<S414>:1:2' a=zeros(95,1); */
  /* '<S414>:1:3' a=uint8(a); */
  memset(&rtb_y[0], 0, 95U * sizeof(uint8_T));

  /* '<S414>:1:4' if u~=0 */
  if (ControlBuild_B.OutIndex != 0) {
    /* '<S414>:1:5' a(u)=1; */
    rtb_y[ControlBuild_B.OutIndex - 1] = 1U;
  }

  /* End of MATLAB Function: '<S7>/MATLAB Function' */

  /* Switch: '<S7>/Switch' incorporates:
   *  Constant: '<S18>/Constant'
   *  Constant: '<S19>/Constant'
   *  Constant: '<S20>/Constant'
   *  Constant: '<S21>/Constant'
   *  Constant: '<S22>/Constant'
   *  Constant: '<S23>/Constant'
   *  Constant: '<S69>/Constant'
   *  Constant: '<S70>/Constant'
   *  Constant: '<S71>/Constant'
   *  Constant: '<S72>/Constant'
   *  Constant: '<S73>/Constant'
   *  DataTypeConversion: '<S10>/Data Type Conversion1'
   *  DataTypeConversion: '<S13>/Data Type Conversion'
   *  DataTypeConversion: '<S49>/Data Type Conversion'
   *  Logic: '<S10>/Logical Operator'
   *  Logic: '<S10>/Logical Operator1'
   *  Logic: '<S10>/Logical Operator2'
   *  Logic: '<S49>/Logical Operator'
   *  Logic: '<S49>/Logical Operator1'
   *  Logic: '<S49>/Logical Operator2'
   *  RelationalOperator: '<S18>/Compare'
   *  RelationalOperator: '<S19>/Compare'
   *  RelationalOperator: '<S20>/Compare'
   *  RelationalOperator: '<S21>/Compare'
   *  RelationalOperator: '<S22>/Compare'
   *  RelationalOperator: '<S23>/Compare'
   *  RelationalOperator: '<S69>/Compare'
   *  RelationalOperator: '<S70>/Compare'
   *  RelationalOperator: '<S71>/Compare'
   *  RelationalOperator: '<S72>/Compare'
   *  RelationalOperator: '<S73>/Compare'
   */
  /* '<S414>:1:7' y = a; */
  if (ControlBuild_ConstB.Compare_p2) {
    /* Switch: '<S5>/Switch1' incorporates:
     *  Constant: '<S6>/灯光巡检开关'
     */
    if (ControlBuild_ConstB.Compare_g) {
      rtb_Switch_idx_7 = rtb_Switch_idx_5;
    } else {
      rtb_Switch_idx_7 = rtCP__Value_f;
    }

    /* Switch: '<S11>/Switch1' incorporates:
     *  Constant: '<S11>/Constant4'
     *  Constant: '<S28>/Constant'
     *  Constant: '<S29>/Constant'
     *  DataStoreWrite: '<S40>/Data Store Write'
     *  RelationalOperator: '<S28>/Compare'
     *  RelationalOperator: '<S29>/Compare'
     *  Switch: '<S11>/Switch2'
     *  Switch: '<S11>/Switch3'
     */
    if (rtb_Switch_idx_7 != rtCP_Constant_Value_by) {
      rtb_LogicalOperator1_ap = rtCP_Constant4_Value_o;
    } else if (rtb_Switch_idx_66 != rtCP_Constant_Value_nt) {
      /* Switch: '<S11>/Switch2' incorporates:
       *  Constant: '<S35>/Constant'
       *  Constant: '<S36>/Constant'
       *  Logic: '<S11>/Logical Operator2'
       *  RelationalOperator: '<S35>/Compare'
       *  RelationalOperator: '<S36>/Compare'
       */
      rtb_LogicalOperator1_ap = ((rtb_Switch_idx_1 != rtCP_Constant_Value_g3) &&
        (rtb_Switch_idx_8 != rtCP_Constant_Value_nk));
    } else {
      if (ControlBuild_DW.A_a) {
        /* Switch: '<S11>/Switch' incorporates:
         *  Constant: '<S11>/Constant2'
         *  Constant: '<S11>/Constant3'
         *  Constant: '<S31>/Constant'
         *  DataStoreWrite: '<S37>/Data Store Write'
         *  RelationalOperator: '<S31>/Compare'
         *  Switch: '<S11>/Switch2'
         *  Switch: '<S11>/Switch3'
         */
        if (ControlBuild_DW.A == rtCP_Constant_Value_gb) {
          rtb_LogicalOperator1_ap = rtCP_Constant2_Value_b;
        } else {
          rtb_LogicalOperator1_ap = rtCP_Constant3_Value_f;
        }

        /* End of Switch: '<S11>/Switch' */
      }
    }

    /* End of Switch: '<S11>/Switch1' */

    /* DataTypeConversion: '<S11>/Data Type Conversion' */
    rtb_y[2] = rtb_LogicalOperator1_ap;

    /* DataTypeConversion: '<S48>/Data Type Conversion' incorporates:
     *  Constant: '<S63>/Constant'
     *  DataStoreWrite: '<S64>/Data Store Write'
     *  Logic: '<S48>/Logical Operator'
     *  RelationalOperator: '<S63>/Compare'
     */
    rtb_Switch_idx_0 = (uint8_T)((ControlBuild_DW.A_k != rtCP_Constant_Value_j1)
      && rtb_LogicalOperator1);

    /* Switch: '<S13>/Switch1' incorporates:
     *  Constant: '<S13>/Constant'
     *  Constant: '<S156>/Constant'
     *  RelationalOperator: '<S156>/Compare'
     */
    if (rtb_Switch_idx_7 == rtCP_Constant_Value_pl) {
      /* Switch: '<S13>/Switch' incorporates:
       *  Constant: '<S146>/Constant'
       *  Constant: '<S147>/Constant'
       *  Constant: '<S148>/Constant'
       *  Constant: '<S149>/Constant'
       *  Constant: '<S150>/Constant'
       *  Constant: '<S151>/Constant'
       *  Constant: '<S152>/Constant'
       *  Constant: '<S153>/Constant'
       *  Constant: '<S154>/Constant'
       *  Constant: '<S155>/Constant'
       *  Constant: '<S157>/Constant'
       *  Constant: '<S158>/Constant'
       *  Constant: '<S159>/Constant'
       *  Constant: '<S160>/Constant'
       *  Constant: '<S161>/Constant'
       *  Constant: '<S162>/Constant'
       *  Constant: '<S163>/Constant'
       *  Constant: '<S164>/Constant'
       *  Logic: '<S13>/Logical Operator'
       *  Logic: '<S13>/Logical Operator1'
       *  Logic: '<S13>/Logical Operator2'
       *  Logic: '<S13>/Logical Operator3'
       *  Logic: '<S13>/Logical Operator4'
       *  Logic: '<S13>/Logical Operator6'
       *  RelationalOperator: '<S146>/Compare'
       *  RelationalOperator: '<S147>/Compare'
       *  RelationalOperator: '<S148>/Compare'
       *  RelationalOperator: '<S149>/Compare'
       *  RelationalOperator: '<S150>/Compare'
       *  RelationalOperator: '<S151>/Compare'
       *  RelationalOperator: '<S152>/Compare'
       *  RelationalOperator: '<S153>/Compare'
       *  RelationalOperator: '<S154>/Compare'
       *  RelationalOperator: '<S155>/Compare'
       *  RelationalOperator: '<S157>/Compare'
       *  RelationalOperator: '<S158>/Compare'
       *  RelationalOperator: '<S159>/Compare'
       *  RelationalOperator: '<S160>/Compare'
       *  RelationalOperator: '<S161>/Compare'
       *  RelationalOperator: '<S162>/Compare'
       *  RelationalOperator: '<S163>/Compare'
       *  RelationalOperator: '<S164>/Compare'
       *  Switch: '<S5>/Switch1'
       */
      if (rtb_Switch_idx_66 == rtCP_Constant_Value_dp) {
        /* Switch: '<S5>/Switch1' incorporates:
         *  Constant: '<S6>/自动灯光开关'
         */
        if (!ControlBuild_ConstB.Compare_g) {
          rtb_Switch_idx_6 = rtCP__Value_k5;
        }

        rtb_LogicalOperator1_ap = (((rtb_Switch_idx_1 == rtCP_Constant_Value_gi0)
          && (rtb_Switch_idx_8 == rtCP_Constant_Value_kr) && (rtb_Switch_idx_3 ==
          rtCP_Constant_Value_lv)) || ((rtb_Switch_idx_1 ==
          rtCP_Constant_Value_dg) && (rtb_Switch_idx_2 == rtCP_Constant_Value_jj)
          && (rtb_Switch_idx_6 == rtCP_Constant_Value_cc) && (rtb_Switch_idx_8 ==
          rtCP_Constant_Value_ax) && (ControlBuild_B.Light_Option1 ==
          rtCP_Constant_Value_h) && (ControlBuild_B.Light_Option2 ==
          rtCP_Constant_Value_gi)));
      } else {
        if (!ControlBuild_ConstB.Compare_g) {
          /* Switch: '<S5>/Switch1' incorporates:
           *  Constant: '<S6>/自动灯光开关'
           */
          rtb_Switch_idx_6 = rtCP__Value_k5;
        }

        rtb_LogicalOperator1_ap = (((rtb_Switch_idx_1 == rtCP_Constant_Value_aw)
          && (rtb_Switch_idx_8 == rtCP_Constant_Value_gc) && (rtb_Switch_idx_3 ==
          rtCP_Constant_Value_i)) || ((rtb_Switch_idx_1 ==
          rtCP_Constant_Value_of) && (rtb_Switch_idx_2 == rtCP_Constant_Value_nc)
          && (rtb_Switch_idx_6 == rtCP_Constant_Value_lp) &&
          (ControlBuild_B.Light_Option1 == rtCP_Constant_Value_og) &&
          (ControlBuild_B.Light_Option2 == rtCP_Constant_Value_b)));
      }

      /* End of Switch: '<S13>/Switch' */
    } else {
      rtb_LogicalOperator1_ap = rtCP_Constant_Value_cx;
    }

    /* End of Switch: '<S13>/Switch1' */
    rtb_y[0] = ControlBuild_ConstB.Input_NormalFire;
    rtb_y[1] = rtb_LogicalOperator1_ap;
    rtb_y[3] = rtb_Switch_idx_0;
    rtb_y[4] = ControlBuild_ConstB.Input_NormalFire;
    rtb_y[5] = rtb_Switch_idx_2;
    rtb_y[6] = rtb_Switch_idx_2;
    rtb_y[7] = rtb_Switch_idx_2;
    rtb_y[8] = ControlBuild_ConstB.Input_NormalFire;
    rtb_y[9] = (uint8_T)(((rtb_Switch_idx_1 != rtCP_Constant_Value_bv) &&
                          (rtb_Switch_idx_25 != rtCP_Constant_Value_b1)) ||
                         ((rtb_Switch_idx_1 != rtCP_Constant_Value_le) &&
                          (rtb_Switch_idx_2 != rtCP_Constant_Value_od) &&
                          (rtb_Switch_idx_7 != rtCP_Constant_Value_cb)));
    rtb_y[10] = rtb_Switch_idx_2;
    rtb_y[11] = rtb_Switch_idx_2;
    rtb_y[12] = rtb_Switch_idx_0;
    rtb_y[13] = (uint8_T)(((rtb_Switch_idx_1 == rtCP_Constant_Value_hv) &&
      (rtb_Switch_idx_8 == rtCP_Constant_Value_er) && (rtb_Switch_idx_3 ==
      rtCP_Constant_Value_nlt)) || ((rtb_Switch_idx_1 == rtCP_Constant_Value_ar)
      && (rtb_Switch_idx_2 == rtCP_Constant_Value_dq) && (rtb_Switch_idx_7 ==
      rtCP_Constant_Value_fe)));
    rtb_y[14] = rtb_Switch_idx_2;
    rtb_y[15] = rtb_Switch_idx_2;
    rtb_y[16] = rtb_Switch_idx_1;
    rtb_y[17] = rtb_Switch_idx_2;
    rtb_y[18] = rtb_Switch_idx_2;
    rtb_y[19] = rtb_Switch_idx_2;
    rtb_y[20] = rtb_Switch_idx_2;
    rtb_y[21] = rtb_Switch_idx_2;
    rtb_y[22] = rtb_Switch_idx_2;
    rtb_y[23] = rtb_Switch_idx_2;
    rtb_y[24] = rtb_Switch_idx_2;
    rtb_y[25] = rtb_Switch_idx_2;
    rtb_y[26] = rtb_Switch_idx_2;
    rtb_y[27] = rtb_Switch_idx_2;
    rtb_y[28] = rtb_Switch_idx_2;
    rtb_y[29] = rtb_Switch_idx_2;
    rtb_y[30] = rtb_Switch_idx_2;
    rtb_y[31] = rtb_Switch_idx_2;
    rtb_y[32] = rtb_Switch_idx_2;
    rtb_y[33] = rtb_Switch_idx_2;
    rtb_y[34] = rtb_Switch_idx_2;
    rtb_y[35] = rtb_Switch_idx_2;
    rtb_y[36] = rtb_Switch_idx_2;
    rtb_y[37] = rtb_Switch_idx_2;
    rtb_y[38] = rtb_Switch_idx_2;
    rtb_y[39] = rtb_Switch_idx_2;
    rtb_y[40] = rtb_Switch_idx_2;
    rtb_y[41] = rtb_Switch_idx_2;
    rtb_y[42] = rtb_Switch_idx_2;
    rtb_y[43] = rtb_Switch_idx_2;
    rtb_y[44] = rtb_Switch_idx_2;
    rtb_y[45] = rtb_Switch_idx_2;
    rtb_y[46] = rtb_Switch_idx_2;
    rtb_y[47] = rtb_Switch_idx_2;
    rtb_y[48] = rtb_Switch_idx_2;
    rtb_y[49] = rtb_Switch_idx_2;
    rtb_y[50] = rtb_Switch_idx_2;
    rtb_y[51] = rtb_Switch_idx_2;
    rtb_y[52] = rtb_Switch_idx_2;
    rtb_y[53] = rtb_Switch_idx_2;
    rtb_y[54] = rtb_Switch_idx_2;
    rtb_y[55] = rtb_Switch_idx_2;
    rtb_y[56] = rtb_Switch_idx_2;
    rtb_y[57] = rtb_Switch_idx_2;
    rtb_y[58] = rtb_Switch_idx_2;
    rtb_y[59] = rtb_Switch_idx_2;
    rtb_y[60] = rtb_Switch_idx_2;
    rtb_y[61] = rtb_Switch_idx_2;
    rtb_y[62] = rtb_Switch_idx_2;
    rtb_y[63] = rtb_Switch_idx_2;
    rtb_y[64] = rtb_Switch_idx_2;
    rtb_y[65] = rtb_Switch_idx_2;
    rtb_y[66] = rtb_Switch_idx_2;
    rtb_y[67] = rtb_Switch_idx_2;
    rtb_y[68] = rtb_Switch_idx_2;
    rtb_y[69] = rtb_Switch_idx_2;
    rtb_y[70] = rtb_Switch_idx_2;
    rtb_y[71] = rtb_Switch_idx_2;
    rtb_y[72] = rtb_Switch_idx_2;
    rtb_y[73] = rtb_Switch_idx_2;
    rtb_y[74] = rtb_Switch_idx_2;
    rtb_y[75] = rtb_Switch_idx_2;
    rtb_y[76] = rtb_Switch_idx_2;
    rtb_y[77] = rtb_Switch_idx_2;
    rtb_y[78] = rtb_Switch_idx_2;
    rtb_y[79] = rtb_Switch_idx_2;
    rtb_y[80] = rtb_Switch_idx_2;
    rtb_y[81] = rtb_Switch_idx_2;
    rtb_y[82] = rtb_Switch_idx_2;
    rtb_y[83] = rtb_Switch_idx_2;
    rtb_y[84] = rtb_Switch_idx_2;
    rtb_y[85] = rtb_Switch_idx_2;
    rtb_y[86] = rtb_Switch_idx_2;
    rtb_y[87] = rtb_Switch_idx_2;
    rtb_y[88] = rtb_Switch_idx_2;
    rtb_y[89] = rtb_Switch_idx_2;
    rtb_y[90] = rtb_Switch_idx_2;
    rtb_y[91] = rtb_Switch_idx_2;
    rtb_y[92] = rtb_Switch_idx_2;
    rtb_y[93] = rtb_Switch_idx_2;
    rtb_y[94] = rtb_Switch_idx_2;
  }

  /* End of Switch: '<S7>/Switch' */

  /* Switch: '<S411>/Switch' incorporates:
   *  Constant: '<S411>/Constant2'
   *  Constant: '<S411>/Constant4'
   */
  if (rtb_y[81] != 0) {
    OutputPinBus.CON9_7 = rtCP_Constant2_Value_c0;
  } else {
    OutputPinBus.CON9_7 = rtCP_Constant4_Value_n;
  }

  /* End of Switch: '<S411>/Switch' */

  /* Switch: '<S412>/Switch' incorporates:
   *  Constant: '<S412>/Constant2'
   *  Constant: '<S412>/Constant4'
   */
  if (rtb_y[82] != 0) {
    OutputPinBus.CON9_8 = rtCP_Constant2_Value_k;
  } else {
    OutputPinBus.CON9_8 = rtCP_Constant4_Value_bn;
  }

  /* End of Switch: '<S412>/Switch' */

  /* BusCreator: '<S7>/Bus Creator' */
  OutputPinBus.CON2_1 = rtb_y[0];
  OutputPinBus.CON2_2 = rtb_y[1];
  OutputPinBus.CON2_7 = rtb_y[2];
  OutputPinBus.CON2_8 = rtb_y[3];
  OutputPinBus.CON2_9 = rtb_y[4];
  OutputPinBus.CON2_10 = rtb_y[5];
  OutputPinBus.CON2_11 = rtb_y[6];
  OutputPinBus.CON2_12 = rtb_y[7];
  OutputPinBus.CON2_13 = rtb_y[8];
  OutputPinBus.CON2_14 = rtb_y[9];
  OutputPinBus.CON2_15 = rtb_y[10];
  OutputPinBus.CON2_16 = rtb_y[11];
  OutputPinBus.CON3_1 = rtb_y[12];
  OutputPinBus.CON3_2 = rtb_y[13];
  OutputPinBus.CON3_9 = rtb_y[14];
  OutputPinBus.CON3_10 = rtb_y[15];
  OutputPinBus.CON3_11 = rtb_y[16];
  OutputPinBus.CON3_12 = rtb_y[17];
  OutputPinBus.CON3_13 = rtb_y[18];
  OutputPinBus.CON3_14 = rtb_y[19];
  OutputPinBus.CON3_15 = rtb_y[20];
  OutputPinBus.CON3_16 = rtb_y[21];
  OutputPinBus.CON3_17 = rtb_y[22];
  OutputPinBus.CON3_18 = rtb_y[23];
  OutputPinBus.CON3_19 = rtb_y[24];
  OutputPinBus.CON3_20 = rtb_y[25];
  OutputPinBus.CON4_11 = rtb_y[26];
  OutputPinBus.CON4_12 = rtb_y[27];
  OutputPinBus.CON4_13 = rtb_y[28];
  OutputPinBus.CON4_14 = rtb_y[29];
  OutputPinBus.CON4_15 = rtb_y[30];
  OutputPinBus.CON4_16 = rtb_y[31];
  OutputPinBus.CON4_17 = rtb_y[32];
  OutputPinBus.CON4_18 = rtb_y[33];
  OutputPinBus.CON4_19 = rtb_y[34];
  OutputPinBus.CON4_20 = rtb_y[35];
  OutputPinBus.CON5_1 = rtb_y[36];
  OutputPinBus.CON5_2 = rtb_y[37];
  OutputPinBus.CON5_7 = rtb_y[38];
  OutputPinBus.CON5_8 = rtb_y[39];
  OutputPinBus.CON5_9 = rtb_y[40];
  OutputPinBus.CON5_10 = rtb_y[41];
  OutputPinBus.CON5_11 = rtb_y[42];
  OutputPinBus.CON5_12 = rtb_y[43];
  OutputPinBus.CON5_13 = rtb_y[44];
  OutputPinBus.CON5_14 = rtb_y[45];
  OutputPinBus.CON5_15 = rtb_y[46];
  OutputPinBus.CON5_16 = rtb_y[47];
  OutputPinBus.CON6_1 = rtb_y[48];
  OutputPinBus.CON6_10 = rtb_y[49];
  OutputPinBus.CON6_11 = rtb_y[50];
  OutputPinBus.CON6_12 = rtb_y[51];
  OutputPinBus.CON6_14 = rtb_y[52];
  OutputPinBus.CON6_15 = rtb_y[53];
  OutputPinBus.CON6_17 = rtb_y[54];
  OutputPinBus.CON6_18 = rtb_y[55];
  OutputPinBus.CON6_19 = rtb_y[56];
  OutputPinBus.CON6_20 = rtb_y[57];
  OutputPinBus.CON7_1 = rtb_y[58];
  OutputPinBus.CON7_2 = rtb_y[59];
  OutputPinBus.CON7_3 = rtb_y[60];
  OutputPinBus.CON7_6 = rtb_y[61];
  OutputPinBus.CON7_9 = rtb_y[62];
  OutputPinBus.CON7_12 = rtb_y[63];
  OutputPinBus.CON7_13 = rtb_y[64];
  OutputPinBus.CON7_16 = rtb_y[65];
  OutputPinBus.CON7_17 = rtb_y[66];
  OutputPinBus.CON7_18 = rtb_y[67];
  OutputPinBus.CON8_2 = rtb_y[68];
  OutputPinBus.CON8_3 = rtb_y[69];
  OutputPinBus.CON8_6 = rtb_y[70];
  OutputPinBus.CON8_7 = rtb_y[71];
  OutputPinBus.CON8_8 = rtb_y[72];
  OutputPinBus.CON8_9 = rtb_y[73];
  OutputPinBus.CON8_10 = rtb_y[74];
  OutputPinBus.CON8_11 = rtb_y[75];
  OutputPinBus.CON8_12 = rtb_y[76];
  OutputPinBus.CON8_13 = rtb_y[77];
  OutputPinBus.CON8_14 = rtb_y[78];

  /* Switch: '<S409>/Switch' */
  if (rtb_y[79] != 0) {
    /* BusCreator: '<S7>/Bus Creator' incorporates:
     *  Constant: '<S409>/Constant2'
     */
    OutputPinBus.CON9_5 = rtCP_Constant2_Value_n3;
  } else {
    /* BusCreator: '<S7>/Bus Creator' incorporates:
     *  Constant: '<S409>/Constant4'
     */
    OutputPinBus.CON9_5 = rtCP_Constant4_Value_c;
  }

  /* End of Switch: '<S409>/Switch' */

  /* Switch: '<S410>/Switch' */
  if (rtb_y[80] != 0) {
    /* BusCreator: '<S7>/Bus Creator' incorporates:
     *  Constant: '<S410>/Constant2'
     */
    OutputPinBus.CON9_6 = rtCP_Constant2_Value_nk;
  } else {
    /* BusCreator: '<S7>/Bus Creator' incorporates:
     *  Constant: '<S410>/Constant4'
     */
    OutputPinBus.CON9_6 = rtCP_Constant4_Value_k;
  }

  /* End of Switch: '<S410>/Switch' */

  /* BusCreator: '<S7>/Bus Creator' */
  OutputPinBus.CON10_9 = rtb_y[83];
  OutputPinBus.CON10_12 = rtb_y[84];
  OutputPinBus.CON10_13 = rtb_y[85];
  OutputPinBus.CON10_15 = rtb_y[86];
  OutputPinBus.CON10_17 = rtb_y[87];
  OutputPinBus.CON10_18 = rtb_y[88];
  OutputPinBus.CON11_6 = rtb_y[89];
  OutputPinBus.CON11_7 = rtb_y[90];
  OutputPinBus.CON11_9 = rtb_y[91];
  OutputPinBus.CON11_10 = rtb_y[92];
  OutputPinBus.CON11_12 = rtb_y[93];
  OutputPinBus.CON12_6 = rtb_y[94];

  /* Update for UnitDelay: '<S38>/Unit Delay' */
  ControlBuild_DW.UnitDelay_DSTATE = rtb_LogicalOperator3;

  /* Update for UnitDelay: '<S39>/Unit Delay' */
  ControlBuild_DW.UnitDelay_DSTATE_n = rtb_Compare_gb;

  /* Update for UnitDelay: '<S65>/Unit Delay' */
  ControlBuild_DW.UnitDelay_DSTATE_k = rtb_LogicalOperator1;

  /* Update for UnitDelay: '<S85>/Unit Delay' */
  ControlBuild_DW.UnitDelay_DSTATE_b = rtb_Compare_e2;

  /* Update for UnitDelay: '<S98>/Unit Delay' */
  ControlBuild_DW.UnitDelay_DSTATE_m = rtb_Compare_md;

  /* Update for UnitDelay: '<S215>/Unit Delay' */
  ControlBuild_DW.UnitDelay_DSTATE_p = rtb_Compare_cs;

  /* Update for UnitDelay: '<S214>/Unit Delay' */
  ControlBuild_DW.UnitDelay_DSTATE_e = rtb_Compare_npu;

  /* Update for UnitDelay: '<S230>/Unit Delay' */
  ControlBuild_DW.UnitDelay_DSTATE_h = rtb_Compare_m;

  /* Update for UnitDelay: '<S229>/Unit Delay' */
  ControlBuild_DW.UnitDelay_DSTATE_d = rtb_Compare_nt;

  /* Update for UnitDelay: '<S251>/Unit Delay' */
  ControlBuild_DW.UnitDelay_DSTATE_i = rtb_Compare_gg;

  /* Update for UnitDelay: '<S250>/Unit Delay' */
  ControlBuild_DW.UnitDelay_DSTATE_de = rtb_Compare_cel;

  /* Update for UnitDelay: '<S266>/Unit Delay' */
  ControlBuild_DW.UnitDelay_DSTATE_pg = rtb_Compare_kc;

  /* Update for UnitDelay: '<S265>/Unit Delay' */
  ControlBuild_DW.UnitDelay_DSTATE_es = rtb_Compare_hyg;

  /* Update for UnitDelay: '<S297>/Unit Delay' */
  ControlBuild_DW.UnitDelay_DSTATE_ku = ControlBuild_ConstB.Compare_f;

  /* Update for UnitDelay: '<S298>/Unit Delay' */
  ControlBuild_DW.UnitDelay_DSTATE_bc = rtb_Compare_coj;

  /* Update for UnitDelay: '<S337>/Unit Delay' */
  ControlBuild_DW.UnitDelay_DSTATE_g = ControlBuild_ConstB.Compare_d;

  /* Update for UnitDelay: '<S338>/Unit Delay' */
  ControlBuild_DW.UnitDelay_DSTATE_kh = ControlBuild_ConstB.Compare_d;

  /* Update for UnitDelay: '<S340>/Unit Delay' */
  ControlBuild_DW.UnitDelay_DSTATE_o = ControlBuild_ConstB.Compare_dh;

  /* Update for UnitDelay: '<S339>/Unit Delay' */
  ControlBuild_DW.UnitDelay_DSTATE_c = ControlBuild_ConstB.Compare_dh;

  /* Update for UnitDelay: '<S378>/Unit Delay' */
  ControlBuild_DW.UnitDelay_DSTATE_dd = ControlBuild_ConstB.Compare_bd;

  /* Update for UnitDelay: '<S377>/Unit Delay' */
  ControlBuild_DW.UnitDelay_DSTATE_ki = ControlBuild_ConstB.Compare_bd;

  /* Update for UnitDelay: '<S380>/Unit Delay' */
  ControlBuild_DW.UnitDelay_DSTATE_i3 = ControlBuild_ConstB.Compare_p;

  /* Update for UnitDelay: '<S379>/Unit Delay' */
  ControlBuild_DW.UnitDelay_DSTATE_j = ControlBuild_ConstB.Compare_p;

  /* Update for Delay: '<S17>/Delay' */
  ControlBuild_DW.Delay_DSTATE = Compare_i;
  rate_scheduler();
}

/* Model initialize function */
void ControlBuild_initialize(void)
{
  /* Registration code */

  /* initialize real-time model */
  (void) memset((void *)ControlBuild_M, 0,
                sizeof(RT_MODEL_ControlBuild_T));

  /* block I/O */
  (void) memset(((void *) &ControlBuild_B), 0,
                sizeof(B_ControlBuild_T));

  /* exported global signals */
  OutputPinBus = ControlBuild_rtZOUTPUTPINS;
  Selected_ID2 = 419430044U;
  Selected_ID3 = 518U;
  Selected_ID8 = 518U;
  Selected_ID9 = 518U;
  Selected_ID10 = 518U;
  Selected_ID4 = 518U;
  Selected_ID5 = 518U;
  Selected_ID6 = 518U;
  Selected_ID7 = 518U;
  Selected_ID1 = 419369233U;
  InputHLSideSelector[0] = ((uint8_T)4U);
  InputHLSideSelector[1] = ((uint8_T)4U);
  InputHLSideSelector[2] = ((uint8_T)4U);
  InputHLSideSelector[3] = ((uint8_T)4U);
  InputHLSideSelector[4] = ((uint8_T)4U);
  InputHLSideSelector[5] = ((uint8_T)4U);
  InputHLSideSelector[6] = ((uint8_T)3U);
  InputHLSideSelector[7] = ((uint8_T)3U);
  InputHLSideSelector[8] = ((uint8_T)3U);
  InputHLSideSelector[9] = ((uint8_T)3U);
  InputHLSideSelector[10] = ((uint8_T)4U);
  InputHLSideSelector[11] = ((uint8_T)4U);
  InputHLSideSelector[12] = ((uint8_T)4U);
  InputHLSideSelector[13] = ((uint8_T)4U);
  InputHLSideSelector[14] = ((uint8_T)4U);
  InputHLSideSelector[15] = ((uint8_T)4U);
  InputHLSideSelector[16] = ((uint8_T)4U);
  InputHLSideSelector[17] = ((uint8_T)4U);
  InputHLSideSelector[18] = ((uint8_T)4U);
  InputHLSideSelector[19] = ((uint8_T)4U);
  InputHLSideSelector[20] = ((uint8_T)4U);
  InputHLSideSelector[21] = ((uint8_T)4U);
  InputHLSideSelector[22] = ((uint8_T)4U);
  InputHLSideSelector[23] = ((uint8_T)4U);
  InputHLSideSelector[24] = ((uint8_T)4U);
  InputHLSideSelector[25] = ((uint8_T)4U);
  InputHLSideSelector[26] = ((uint8_T)4U);
  InputHLSideSelector[27] = ((uint8_T)4U);
  InputHLSideSelector[28] = ((uint8_T)4U);
  InputHLSideSelector[29] = ((uint8_T)4U);
  InputHLSideSelector[30] = ((uint8_T)4U);
  InputHLSideSelector[31] = ((uint8_T)4U);
  InputHLSideSelector[32] = ((uint8_T)4U);
  InputHLSideSelector[33] = ((uint8_T)4U);
  InputHLSideSelector[34] = ((uint8_T)4U);
  InputHLSideSelector[35] = ((uint8_T)4U);
  InputHLSideSelector[36] = ((uint8_T)4U);
  InputHLSideSelector[37] = ((uint8_T)4U);
  InputHLSideSelector[38] = ((uint8_T)4U);
  InputHLSideSelector[39] = ((uint8_T)4U);
  InputHLSideSelector[40] = ((uint8_T)4U);
  InputHLSideSelector[41] = ((uint8_T)3U);
  InputHLSideSelector[42] = ((uint8_T)3U);
  InputHLSideSelector[43] = ((uint8_T)3U);
  InputHLSideSelector[44] = ((uint8_T)3U);
  InputHLSideSelector[45] = ((uint8_T)3U);
  InputHLSideSelector[46] = ((uint8_T)3U);
  InputHLSideSelector[47] = ((uint8_T)3U);
  InputHLSideSelector[48] = ((uint8_T)3U);
  InputHLSideSelector[49] = ((uint8_T)3U);
  InputHLSideSelector[50] = ((uint8_T)3U);
  InputHLSideSelector[51] = ((uint8_T)3U);
  InputHLSideSelector[52] = ((uint8_T)3U);
  InputHLSideSelector[53] = ((uint8_T)3U);
  InputHLSideSelector[54] = ((uint8_T)3U);
  InputHLSideSelector[55] = ((uint8_T)3U);
  InputHLSideSelector[56] = ((uint8_T)3U);
  InputHLSideSelector[57] = ((uint8_T)3U);
  InputHLSideSelector[58] = ((uint8_T)3U);
  InputHLSideSelector[59] = ((uint8_T)3U);
  InputHLSideSelector[60] = ((uint8_T)3U);
  InputHLSideSelector[61] = ((uint8_T)3U);
  InputHLSideSelector[62] = ((uint8_T)3U);
  InputHLSideSelector[63] = ((uint8_T)3U);
  InputHLSideSelector[64] = ((uint8_T)3U);
  InputHLSideSelector[65] = ((uint8_T)3U);

  /* states (dwork) */
  (void) memset((void *)&ControlBuild_DW, 0,
                sizeof(DW_ControlBuild_T));

  /* external inputs */
  InputCanBus = ControlBuild_rtZINPUT_CAN_BUS;
  InputPinBus = ControlBuild_rtZINPUTPINS;
  ControlBuild_U.Feedback_Status = ControlBuild_rtZFEEDBACK_STATUS;

  /* Start for S-Function (scanunpack): '<S3>/CANUnpack1' incorporates:
   *  Inport: '<Root>/CanSignals'
   */

  /*-----------S-Function Block: <S3>/CANUnpack1 -----------------*/

  /* ConstCode for Constant: '<S9>/Constant1' */
  Selected_ID2 = rtCP_Constant1_Value_e;

  /* ConstCode for Constant: '<S9>/Constant2' */
  Selected_ID3 = rtCP_Constant2_Value_j;

  /* ConstCode for Constant: '<S9>/Constant27' */
  Selected_ID8 = rtCP_Constant27_Value;

  /* ConstCode for Constant: '<S9>/Constant28' */
  Selected_ID9 = rtCP_Constant28_Value;

  /* ConstCode for Constant: '<S9>/Constant29' */
  Selected_ID10 = rtCP_Constant29_Value;

  /* ConstCode for Constant: '<S9>/Constant3' */
  Selected_ID4 = rtCP_Constant3_Value_g;

  /* ConstCode for Constant: '<S9>/Constant4' */
  Selected_ID5 = rtCP_Constant4_Value_b;

  /* ConstCode for Constant: '<S9>/Constant5' */
  Selected_ID6 = rtCP_Constant5_Value;

  /* ConstCode for Constant: '<S9>/Constant6' */
  Selected_ID7 = rtCP_Constant6_Value;

  /* ConstCode for Constant: '<S9>/Constant7' */
  Selected_ID1 = rtCP_Constant7_Value;

  /* ConstCode for DataTypeConversion: '<S408>/Data Type Conversion' incorporates:
   *  Constant: '<S408>/Pin1'
   *  Constant: '<S408>/Pin10'
   *  Constant: '<S408>/Pin11'
   *  Constant: '<S408>/Pin12'
   *  Constant: '<S408>/Pin13'
   *  Constant: '<S408>/Pin14'
   *  Constant: '<S408>/Pin15'
   *  Constant: '<S408>/Pin16'
   *  Constant: '<S408>/Pin17'
   *  Constant: '<S408>/Pin18'
   *  Constant: '<S408>/Pin19'
   *  Constant: '<S408>/Pin2'
   *  Constant: '<S408>/Pin20'
   *  Constant: '<S408>/Pin21'
   *  Constant: '<S408>/Pin22'
   *  Constant: '<S408>/Pin23'
   *  Constant: '<S408>/Pin24'
   *  Constant: '<S408>/Pin25'
   *  Constant: '<S408>/Pin26'
   *  Constant: '<S408>/Pin27'
   *  Constant: '<S408>/Pin28'
   *  Constant: '<S408>/Pin29'
   *  Constant: '<S408>/Pin3'
   *  Constant: '<S408>/Pin30'
   *  Constant: '<S408>/Pin31'
   *  Constant: '<S408>/Pin32'
   *  Constant: '<S408>/Pin33'
   *  Constant: '<S408>/Pin34'
   *  Constant: '<S408>/Pin35'
   *  Constant: '<S408>/Pin36'
   *  Constant: '<S408>/Pin37'
   *  Constant: '<S408>/Pin38'
   *  Constant: '<S408>/Pin39'
   *  Constant: '<S408>/Pin4'
   *  Constant: '<S408>/Pin40'
   *  Constant: '<S408>/Pin41'
   *  Constant: '<S408>/Pin42'
   *  Constant: '<S408>/Pin43'
   *  Constant: '<S408>/Pin44'
   *  Constant: '<S408>/Pin45'
   *  Constant: '<S408>/Pin46'
   *  Constant: '<S408>/Pin47'
   *  Constant: '<S408>/Pin48'
   *  Constant: '<S408>/Pin49'
   *  Constant: '<S408>/Pin5'
   *  Constant: '<S408>/Pin50'
   *  Constant: '<S408>/Pin51'
   *  Constant: '<S408>/Pin52'
   *  Constant: '<S408>/Pin53'
   *  Constant: '<S408>/Pin54'
   *  Constant: '<S408>/Pin55'
   *  Constant: '<S408>/Pin56'
   *  Constant: '<S408>/Pin57'
   *  Constant: '<S408>/Pin58'
   *  Constant: '<S408>/Pin59'
   *  Constant: '<S408>/Pin6'
   *  Constant: '<S408>/Pin60'
   *  Constant: '<S408>/Pin61'
   *  Constant: '<S408>/Pin62'
   *  Constant: '<S408>/Pin63'
   *  Constant: '<S408>/Pin64'
   *  Constant: '<S408>/Pin65'
   *  Constant: '<S408>/Pin66'
   *  Constant: '<S408>/Pin7'
   *  Constant: '<S408>/Pin8'
   *  Constant: '<S408>/Pin9'
   */
  InputHLSideSelector[0] = rtCP_Pin1_Value;
  InputHLSideSelector[1] = rtCP_Pin2_Value;
  InputHLSideSelector[2] = rtCP_Pin3_Value;
  InputHLSideSelector[3] = rtCP_Pin4_Value;
  InputHLSideSelector[4] = rtCP_Pin5_Value;
  InputHLSideSelector[5] = rtCP_Pin6_Value;
  InputHLSideSelector[6] = rtCP_Pin7_Value;
  InputHLSideSelector[7] = rtCP_Pin8_Value;
  InputHLSideSelector[8] = rtCP_Pin9_Value;
  InputHLSideSelector[9] = rtCP_Pin10_Value;
  InputHLSideSelector[10] = rtCP_Pin11_Value;
  InputHLSideSelector[11] = rtCP_Pin12_Value;
  InputHLSideSelector[12] = rtCP_Pin13_Value;
  InputHLSideSelector[13] = rtCP_Pin14_Value;
  InputHLSideSelector[14] = rtCP_Pin15_Value;
  InputHLSideSelector[15] = rtCP_Pin16_Value;
  InputHLSideSelector[16] = rtCP_Pin17_Value;
  InputHLSideSelector[17] = rtCP_Pin18_Value;
  InputHLSideSelector[18] = rtCP_Pin19_Value;
  InputHLSideSelector[19] = rtCP_Pin20_Value;
  InputHLSideSelector[20] = rtCP_Pin21_Value;
  InputHLSideSelector[21] = rtCP_Pin22_Value;
  InputHLSideSelector[22] = rtCP_Pin23_Value;
  InputHLSideSelector[23] = rtCP_Pin24_Value;
  InputHLSideSelector[24] = rtCP_Pin25_Value;
  InputHLSideSelector[25] = rtCP_Pin26_Value;
  InputHLSideSelector[26] = rtCP_Pin27_Value;
  InputHLSideSelector[27] = rtCP_Pin28_Value;
  InputHLSideSelector[28] = rtCP_Pin29_Value;
  InputHLSideSelector[29] = rtCP_Pin30_Value;
  InputHLSideSelector[30] = rtCP_Pin31_Value;
  InputHLSideSelector[31] = rtCP_Pin32_Value;
  InputHLSideSelector[32] = rtCP_Pin33_Value;
  InputHLSideSelector[33] = rtCP_Pin34_Value;
  InputHLSideSelector[34] = rtCP_Pin35_Value;
  InputHLSideSelector[35] = rtCP_Pin36_Value;
  InputHLSideSelector[36] = rtCP_Pin37_Value;
  InputHLSideSelector[37] = rtCP_Pin38_Value;
  InputHLSideSelector[38] = rtCP_Pin39_Value;
  InputHLSideSelector[39] = rtCP_Pin40_Value;
  InputHLSideSelector[40] = rtCP_Pin41_Value;
  InputHLSideSelector[41] = rtCP_Pin42_Value;
  InputHLSideSelector[42] = rtCP_Pin43_Value;
  InputHLSideSelector[43] = rtCP_Pin44_Value;
  InputHLSideSelector[44] = rtCP_Pin45_Value;
  InputHLSideSelector[45] = rtCP_Pin46_Value;
  InputHLSideSelector[46] = rtCP_Pin47_Value;
  InputHLSideSelector[47] = rtCP_Pin48_Value;
  InputHLSideSelector[48] = rtCP_Pin49_Value;
  InputHLSideSelector[49] = rtCP_Pin50_Value;
  InputHLSideSelector[50] = rtCP_Pin51_Value;
  InputHLSideSelector[51] = rtCP_Pin52_Value;
  InputHLSideSelector[52] = rtCP_Pin53_Value;
  InputHLSideSelector[53] = rtCP_Pin54_Value;
  InputHLSideSelector[54] = rtCP_Pin55_Value;
  InputHLSideSelector[55] = rtCP_Pin56_Value;
  InputHLSideSelector[56] = rtCP_Pin57_Value;
  InputHLSideSelector[57] = rtCP_Pin58_Value;
  InputHLSideSelector[58] = rtCP_Pin59_Value;
  InputHLSideSelector[59] = rtCP_Pin60_Value;
  InputHLSideSelector[60] = rtCP_Pin61_Value;
  InputHLSideSelector[61] = rtCP_Pin62_Value;
  InputHLSideSelector[62] = rtCP_Pin63_Value;
  InputHLSideSelector[63] = rtCP_Pin64_Value;
  InputHLSideSelector[64] = rtCP_Pin65_Value;
  InputHLSideSelector[65] = rtCP_Pin66_Value;

  /* SystemInitialize for Chart: '<S17>/Chart' */
  ControlBuild_DW.is_pause = ControlBuild_IN_NO_ACTIVE_CHILD;
  ControlBuild_DW.temporalCounter_i1 = 0U;
  ControlBuild_DW.is_active_c1_ControlBuild = 0U;
  ControlBuild_DW.is_c1_ControlBuild = ControlBuild_IN_NO_ACTIVE_CHILD;
}

/* Model terminate function */
void ControlBuild_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
