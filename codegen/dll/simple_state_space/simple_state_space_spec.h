//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// simple_state_space_spec.h
//
// Code generation for function 'simple_state_space'
//

#ifndef SIMPLE_STATE_SPACE_SPEC_H
#define SIMPLE_STATE_SPACE_SPEC_H

// Include files
#if defined(SIMPLE_STATE_SPACE_XIL_BUILD) ||                                   \
    defined(BUILDING_EXE_SIMPLE_STATE_SPACE)
#if defined(_WIN32) || defined(__LCC__)
#define SIMPLE_STATE_SPACE_DLL_EXPORT __declspec(dllimport)
#else
#define SIMPLE_STATE_SPACE_DLL_EXPORT __attribute__((visibility("default")))
#endif
#elif defined(BUILDING_SIMPLE_STATE_SPACE)
#if defined(_WIN32) || defined(__LCC__)
#define SIMPLE_STATE_SPACE_DLL_EXPORT __declspec(dllexport)
#else
#define SIMPLE_STATE_SPACE_DLL_EXPORT __attribute__((visibility("default")))
#endif
#else
#define SIMPLE_STATE_SPACE_DLL_EXPORT
#endif

#endif
// End of code generation (simple_state_space_spec.h)
