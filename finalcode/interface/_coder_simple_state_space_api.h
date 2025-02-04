//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// _coder_simple_state_space_api.h
//
// Code generation for function 'simple_state_space'
//

#ifndef _CODER_SIMPLE_STATE_SPACE_API_H
#define _CODER_SIMPLE_STATE_SPACE_API_H

// Include files
#include "emlrt.h"
#include "mex.h"
#include "tmwtypes.h"
#include <algorithm>
#include <cstring>

// Variable Declarations
extern emlrtCTX emlrtRootTLSGlobal;
extern emlrtContext emlrtContextGlobal;

// Function Declarations
void simple_state_space(real_T K, real_T t[101], real_T y[101]);

void simple_state_space_api(const mxArray *const prhs[2], const mxArray **plhs);

void simple_state_space_atexit();

void simple_state_space_initialize();

void simple_state_space_terminate();

void simple_state_space_xil_shutdown();

void simple_state_space_xil_terminate();

#endif
// End of code generation (_coder_simple_state_space_api.h)
