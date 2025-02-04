//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// _coder_simple_state_space_mex.cpp
//
// Code generation for function 'simple_state_space'
//

// Include files
#include "_coder_simple_state_space_mex.h"
#include "_coder_simple_state_space_api.h"

// Function Definitions
void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs,
                 const mxArray *prhs[])
{
  mexAtExit(&simple_state_space_atexit);
  simple_state_space_initialize();
  unsafe_simple_state_space_mexFunction(nlhs, plhs, nrhs, prhs);
  simple_state_space_terminate();
}

emlrtCTX mexFunctionCreateRootTLS()
{
  emlrtCreateRootTLSR2022a(&emlrtRootTLSGlobal, &emlrtContextGlobal, nullptr, 1,
                           nullptr, "UTF-8", true);
  return emlrtRootTLSGlobal;
}

void unsafe_simple_state_space_mexFunction(int32_T nlhs, mxArray *plhs[1],
                                           int32_T nrhs, const mxArray *prhs[2])
{
  emlrtStack st{
      nullptr, // site
      nullptr, // tls
      nullptr  // prev
  };
  const mxArray *b_prhs[2];
  const mxArray *outputs;
  st.tls = emlrtRootTLSGlobal;
  // Check for proper number of arguments.
  if (nrhs != 2) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 2, 4,
                        18, "simple_state_space");
  }
  if (nlhs > 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 18,
                        "simple_state_space");
  }
  // Call the function.
  b_prhs[0] = prhs[0];
  b_prhs[1] = prhs[1];
  simple_state_space_api(b_prhs, &outputs);
  // Copy over outputs to the caller.
  emlrtReturnArrays(1, &plhs[0], &outputs);
}

// End of code generation (_coder_simple_state_space_mex.cpp)
