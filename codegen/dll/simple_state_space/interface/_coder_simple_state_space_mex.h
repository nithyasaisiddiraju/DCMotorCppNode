//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// _coder_simple_state_space_mex.h
//
// Code generation for function 'simple_state_space'
//

#ifndef _CODER_SIMPLE_STATE_SPACE_MEX_H
#define _CODER_SIMPLE_STATE_SPACE_MEX_H

// Include files
#include "emlrt.h"
#include "mex.h"
#include "tmwtypes.h"

// Function Declarations
MEXFUNCTION_LINKAGE void mexFunction(int32_T nlhs, mxArray *plhs[],
                                     int32_T nrhs, const mxArray *prhs[]);

emlrtCTX mexFunctionCreateRootTLS();

void unsafe_simple_state_space_mexFunction(int32_T nlhs, mxArray *plhs[1],
                                           int32_T nrhs,
                                           const mxArray *prhs[2]);

#endif
// End of code generation (_coder_simple_state_space_mex.h)
