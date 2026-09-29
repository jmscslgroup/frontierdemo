//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: frontierdemo.h
//
// Code generated for Simulink model 'frontierdemo'.
//
// Model version                  : 1.28
// Simulink Coder version         : 25.2 (R2025b) 28-Jul-2025
// C/C++ source code generated on : Tue Sep 29 16:51:10 2026
//
// Target selection: ert.tlc
// Embedded hardware selection: Generic->Unspecified (assume 32-bit Generic)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#ifndef frontierdemo_h_
#define frontierdemo_h_
#include "rtwtypes.h"
#include "slros_initialize.h"
#include "frontierdemo_types.h"
#include <stddef.h>

// Block signals (default storage)
struct B_frontierdemo_T {
  SL_Bus_frontierdemo_std_msgs_Float64 In1;// '<S9>/In1'
  SL_Bus_frontierdemo_std_msgs_Float64 In1_j;// '<S8>/In1'
  SL_Bus_frontierdemo_std_msgs_Float64 In1_m;// '<S7>/In1'
};

// Block states (default storage) for system '<Root>'
struct DW_frontierdemo_T {
  ros_slros_internal_block_GetP_T obj; // '<Root>/Get Parameter1'
  ros_slroscpp_internal_block_P_T obj_n;// '<S2>/SinkBlock'
  ros_slroscpp_internal_block_S_T obj_e;// '<S5>/SourceBlock'
  ros_slroscpp_internal_block_S_T obj_g;// '<S4>/SourceBlock'
  ros_slroscpp_internal_block_S_T obj_nf;// '<S3>/SourceBlock'
};

// Real-time Model Data Structure
struct tag_RTM_frontierdemo_T {
  const char_T * volatile errorStatus;
  const char_T* getErrorStatus() const;
  void setErrorStatus(const char_T* const volatile aErrorStatus);
};

// Block signals (default storage)
#ifdef __cplusplus

extern "C"
{

#endif

  extern struct B_frontierdemo_T frontierdemo_B;

#ifdef __cplusplus

}

#endif

// Block states (default storage)
extern struct DW_frontierdemo_T frontierdemo_DW;

#ifdef __cplusplus

extern "C"
{

#endif

  // Model entry point functions
  extern void frontierdemo_initialize(void);
  extern void frontierdemo_step(void);
  extern void frontierdemo_terminate(void);

#ifdef __cplusplus

}

#endif

// Real-time Model object
#ifdef __cplusplus

extern "C"
{

#endif

  extern RT_MODEL_frontierdemo_T *const frontierdemo_M;

#ifdef __cplusplus

}

#endif

extern volatile boolean_T stopRequested;
extern volatile boolean_T runModel;

//-
//  The generated code includes comments that allow you to trace directly
//  back to the appropriate location in the model.  The basic format
//  is <system>/block_name, where system is the system number (uniquely
//  assigned by Simulink) and block_name is the name of the block.
//
//  Use the MATLAB hilite_system command to trace the generated code back
//  to the model.  For example,
//
//  hilite_system('<S3>')    - opens system 3
//  hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
//
//  Here is the system hierarchy for this model
//
//  '<Root>' : 'frontierdemo'
//  '<S1>'   : 'frontierdemo/Blank Message'
//  '<S2>'   : 'frontierdemo/Publish'
//  '<S3>'   : 'frontierdemo/Subscribe'
//  '<S4>'   : 'frontierdemo/Subscribe1'
//  '<S5>'   : 'frontierdemo/Subscribe2'
//  '<S6>'   : 'frontierdemo/Subsystem Reference'
//  '<S7>'   : 'frontierdemo/Subscribe/Enabled Subsystem'
//  '<S8>'   : 'frontierdemo/Subscribe1/Enabled Subsystem'
//  '<S9>'   : 'frontierdemo/Subscribe2/Enabled Subsystem'
//  '<S10>'  : 'frontierdemo/Subsystem Reference/MATLAB Function'

#endif                                 // frontierdemo_h_

//
// File trailer for generated code.
//
// [EOF]
//
