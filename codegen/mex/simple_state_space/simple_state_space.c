/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * simple_state_space.c
 *
 * Code generation for function 'simple_state_space'
 *
 */

/* Include files */
#include "simple_state_space.h"
#include "rt_nonfinite.h"
#include "simple_state_space_data.h"

/* Function Definitions */
void simple_state_space(const emlrtStack *sp, real_T K, const real_T t[101],
                        real_T y[101])
{
  real_T dt;
  real_T x_idx_0;
  real_T x_idx_1;
  int32_T i;
  /*  Constants for the state-space system */
  /*  State matrix (2x2) */
  /*  Input matrix (2x1) */
  /*  Output matrix (1x2) */
  /*  Direct transmission matrix (1x1) */
  /*  Initial state */
  x_idx_0 = 0.0;
  x_idx_1 = 0.0;
  /*  Initial state [x1(0); x2(0)] */
  /*  Time step for simulation */
  dt = t[1] - t[0];
  /*  Assuming uniform time steps */
  /*  Output initialization */
  /*  Simulate the system using Euler integration (simple demo) */
  for (i = 0; i < 101; i++) {
    real_T d;
    real_T d1;
    real_T d2;
    /*  Feedback control input (constant) */
    /*  State-space update (Euler method) */
    /*  dx = Ax + Bu */
    d = -x_idx_0 - x_idx_1;
    /*  Update state */
    /*  Output equation */
    d1 = x_idx_0 + ((0.0 * x_idx_0 + x_idx_1) + 0.0 * K) * dt;
    x_idx_0 = d1;
    d2 = d1;
    d1 = x_idx_1 + (d + K) * dt;
    x_idx_1 = d1;
    d2 += 0.0 * d1;
    y[i] = d2 + 0.0 * K;
    /*  y = Cx + Du */
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
}

/* End of code generation (simple_state_space.c) */
