/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * simple_state_space_initialize.c
 *
 * Code generation for function 'simple_state_space_initialize'
 *
 */

/* Include files */
#include "simple_state_space_initialize.h"
#include "_coder_simple_state_space_mex.h"
#include "rt_nonfinite.h"
#include "simple_state_space_data.h"

/* Function Declarations */
static void simple_state_space_once(void);

/* Function Definitions */
static void simple_state_space_once(void)
{
  mex_InitInfAndNan();
}

void simple_state_space_initialize(void)
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtBreakCheckR2012bFlagVar = emlrtGetBreakCheckFlagAddressR2022b(&st);
  emlrtClearAllocCountR2012b(&st, false, 0U, NULL);
  emlrtEnterRtStackR2012b(&st);
  if (emlrtFirstTimeR2012b(emlrtRootTLSGlobal)) {
    simple_state_space_once();
  }
}

/* End of code generation (simple_state_space_initialize.c) */
