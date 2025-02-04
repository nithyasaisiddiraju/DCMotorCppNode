//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// simple_state_space.cpp
//
// Code generation for function 'simple_state_space'
//

// Include files
#include "simple_state_space.h"

// Function Definitions
void simple_state_space(double K, const double t[101], double y[101])
{
  double dt;
  double x_idx_0;
  double x_idx_1;
  //  Constants for the state-space system
  //  State matrix (2x2)
  //  Input matrix (2x1)
  //  Output matrix (1x2)
  //  Direct transmission matrix (1x1)
  //  Initial state
  x_idx_0 = 0.0;
  x_idx_1 = 0.0;
  //  Initial state [x1(0); x2(0)]
  //  Time step for simulation
  dt = t[1] - t[0];
  //  Assuming uniform time steps
  //  Output initialization
  //  Simulate the system using Euler integration (simple demo)
  for (int i{0}; i < 101; i++) {
    double d;
    double d1;
    double d2;
    //  Feedback control input (constant)
    //  State-space update (Euler method)
    //  dx = Ax + Bu
    d = -x_idx_0 - x_idx_1;
    //  Update state
    //  Output equation
    d1 = x_idx_0 + ((0.0 * x_idx_0 + x_idx_1) + 0.0 * K) * dt;
    x_idx_0 = d1;
    d2 = d1;
    d1 = x_idx_1 + (d + K) * dt;
    x_idx_1 = d1;
    d2 += 0.0 * d1;
    y[i] = d2 + 0.0 * K;
    //  y = Cx + Du
  }
}

// End of code generation (simple_state_space.cpp)
