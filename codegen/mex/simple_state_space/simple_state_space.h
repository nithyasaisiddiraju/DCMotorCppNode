/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * simple_state_space.h
 *
 * Code generation for function 'simple_state_space'
 *
 */

#pragma once

/* Include files */
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
void simple_state_space(const emlrtStack *sp, real_T K, const real_T t[101],
                        real_T y[101]);

/* End of code generation (simple_state_space.h) */
