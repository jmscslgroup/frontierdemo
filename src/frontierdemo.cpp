//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: frontierdemo.cpp
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
#include "frontierdemo.h"
#include "rtwtypes.h"
#include "frontierdemo_types.h"

// Block signals (default storage)
B_frontierdemo_T frontierdemo_B;

// Block states (default storage)
DW_frontierdemo_T frontierdemo_DW;

// Real-time model
RT_MODEL_frontierdemo_T frontierdemo_M_ = RT_MODEL_frontierdemo_T();
RT_MODEL_frontierdemo_T *const frontierdemo_M = &frontierdemo_M_;

// Model step function
void frontierdemo_step(void)
{
  SL_Bus_frontierdemo_std_msgs_Float64 rtb_BusAssignment;
  SL_Bus_frontierdemo_std_msgs_Float64 rtb_SourceBlock_o2_f_0;
  real_T b_value;
  real_T rtb_a;
  boolean_T b_varargout_1;

  // Outputs for Atomic SubSystem: '<Root>/Subscribe1'
  // MATLABSystem: '<S4>/SourceBlock'
  b_varargout_1 = Sub_frontierdemo_2.getLatestMessage(&rtb_SourceBlock_o2_f_0);

  // Outputs for Enabled SubSystem: '<S4>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S8>/Enable'

  // Start for MATLABSystem: '<S4>/SourceBlock'
  if (b_varargout_1) {
    // SignalConversion generated from: '<S8>/In1'
    frontierdemo_B.In1_j = rtb_SourceBlock_o2_f_0;
  }

  // End of Start for MATLABSystem: '<S4>/SourceBlock'
  // End of Outputs for SubSystem: '<S4>/Enabled Subsystem'
  // End of Outputs for SubSystem: '<Root>/Subscribe1'

  // Outputs for Atomic SubSystem: '<Root>/Subscribe'
  // MATLABSystem: '<S3>/SourceBlock'
  b_varargout_1 = Sub_frontierdemo_1.getLatestMessage(&rtb_SourceBlock_o2_f_0);

  // Outputs for Enabled SubSystem: '<S3>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S7>/Enable'

  // Start for MATLABSystem: '<S3>/SourceBlock'
  if (b_varargout_1) {
    // SignalConversion generated from: '<S7>/In1'
    frontierdemo_B.In1_m = rtb_SourceBlock_o2_f_0;
  }

  // End of Start for MATLABSystem: '<S3>/SourceBlock'
  // End of Outputs for SubSystem: '<S3>/Enabled Subsystem'
  // End of Outputs for SubSystem: '<Root>/Subscribe'

  // Outputs for Atomic SubSystem: '<Root>/Subscribe2'
  // MATLABSystem: '<S5>/SourceBlock'
  b_varargout_1 = Sub_frontierdemo_37.getLatestMessage(&rtb_SourceBlock_o2_f_0);

  // Outputs for Enabled SubSystem: '<S5>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S9>/Enable'

  // Start for MATLABSystem: '<S5>/SourceBlock'
  if (b_varargout_1) {
    // SignalConversion generated from: '<S9>/In1'
    frontierdemo_B.In1 = rtb_SourceBlock_o2_f_0;
  }

  // End of Start for MATLABSystem: '<S5>/SourceBlock'
  // End of Outputs for SubSystem: '<S5>/Enabled Subsystem'
  // End of Outputs for SubSystem: '<Root>/Subscribe2'

  // MATLABSystem: '<Root>/Get Parameter1'
  ParamGet_frontierdemo_19.get_parameter(&b_value);

  // MATLAB Function: '<S6>/MATLAB Function' incorporates:
  //   MATLABSystem: '<Root>/Get Parameter1'
  //
  rtb_a = ((frontierdemo_B.In1_j.Data - (3.0 * frontierdemo_B.In1_m.Data + 10.0))
           * 0.25 + frontierdemo_B.In1.Data) * 0.33333333333333331;
  if (frontierdemo_B.In1_m.Data >= b_value) {
    rtb_a = -2.23;
  }

  // End of MATLAB Function: '<S6>/MATLAB Function'

  // Saturate: '<S6>/Saturation'
  if (rtb_a > 1.5) {
    // BusAssignment: '<Root>/Bus Assignment'
    rtb_BusAssignment.Data = 1.5;
  } else if (rtb_a < -3.0) {
    // BusAssignment: '<Root>/Bus Assignment'
    rtb_BusAssignment.Data = -3.0;
  } else {
    // BusAssignment: '<Root>/Bus Assignment'
    rtb_BusAssignment.Data = rtb_a;
  }

  // End of Saturate: '<S6>/Saturation'

  // Outputs for Atomic SubSystem: '<Root>/Publish'
  // MATLABSystem: '<S2>/SinkBlock'
  Pub_frontierdemo_9.publish(&rtb_BusAssignment);

  // End of Outputs for SubSystem: '<Root>/Publish'
}

// Model initialize function
void frontierdemo_initialize(void)
{
  {
    int32_T i;
    char_T b_zeroDelimTopic_0[16];
    char_T b_zeroDelimTopic[10];
    char_T b_zeroDelimTopic_1[8];
    char_T b_zeroDelimName[5];
    static const char_T b_zeroDelimTopic_2[10] = "lead_dist";
    static const char_T b_zeroDelimTopic_3[16] = "car/state/vel_x";
    static const char_T b_zeroDelimTopic_4[10] = "cmd_accel";
    static const char_T b_zeroDelimTopic_5[8] = "rel_vel";
    static const char_T b_zeroDelimName_0[5] = "vmax";

    // SystemInitialize for Atomic SubSystem: '<Root>/Subscribe1'
    // Start for MATLABSystem: '<S4>/SourceBlock'
    frontierdemo_DW.obj_g.matlabCodegenIsDeleted = false;
    frontierdemo_DW.obj_g.isInitialized = 1;
    for (i = 0; i < 10; i++) {
      b_zeroDelimTopic[i] = b_zeroDelimTopic_2[i];
    }

    Sub_frontierdemo_2.createSubscriber(&b_zeroDelimTopic[0], 1);
    frontierdemo_DW.obj_g.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S4>/SourceBlock'
    // End of SystemInitialize for SubSystem: '<Root>/Subscribe1'

    // SystemInitialize for Atomic SubSystem: '<Root>/Subscribe'
    // Start for MATLABSystem: '<S3>/SourceBlock'
    frontierdemo_DW.obj_nf.matlabCodegenIsDeleted = false;
    frontierdemo_DW.obj_nf.isInitialized = 1;
    for (i = 0; i < 16; i++) {
      b_zeroDelimTopic_0[i] = b_zeroDelimTopic_3[i];
    }

    Sub_frontierdemo_1.createSubscriber(&b_zeroDelimTopic_0[0], 1);
    frontierdemo_DW.obj_nf.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S3>/SourceBlock'
    // End of SystemInitialize for SubSystem: '<Root>/Subscribe'

    // SystemInitialize for Atomic SubSystem: '<Root>/Publish'
    // Start for MATLABSystem: '<S2>/SinkBlock'
    frontierdemo_DW.obj_n.matlabCodegenIsDeleted = false;
    frontierdemo_DW.obj_n.isInitialized = 1;
    for (i = 0; i < 10; i++) {
      b_zeroDelimTopic[i] = b_zeroDelimTopic_4[i];
    }

    Pub_frontierdemo_9.createPublisher(&b_zeroDelimTopic[0], 1);
    frontierdemo_DW.obj_n.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S2>/SinkBlock'
    // End of SystemInitialize for SubSystem: '<Root>/Publish'

    // SystemInitialize for Atomic SubSystem: '<Root>/Subscribe2'
    // Start for MATLABSystem: '<S5>/SourceBlock'
    frontierdemo_DW.obj_e.matlabCodegenIsDeleted = false;
    frontierdemo_DW.obj_e.isInitialized = 1;
    for (i = 0; i < 8; i++) {
      b_zeroDelimTopic_1[i] = b_zeroDelimTopic_5[i];
    }

    Sub_frontierdemo_37.createSubscriber(&b_zeroDelimTopic_1[0], 1);
    frontierdemo_DW.obj_e.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S5>/SourceBlock'
    // End of SystemInitialize for SubSystem: '<Root>/Subscribe2'

    // Start for MATLABSystem: '<Root>/Get Parameter1'
    frontierdemo_DW.obj.matlabCodegenIsDeleted = false;
    frontierdemo_DW.obj.isInitialized = 1;
    for (i = 0; i < 5; i++) {
      b_zeroDelimName[i] = b_zeroDelimName_0[i];
    }

    ParamGet_frontierdemo_19.initialize(&b_zeroDelimName[0]);
    ParamGet_frontierdemo_19.initialize_error_codes(0, 1, 2, 3);
    ParamGet_frontierdemo_19.set_initial_value(35.0);
    frontierdemo_DW.obj.isSetupComplete = true;

    // End of Start for MATLABSystem: '<Root>/Get Parameter1'
  }
}

// Model terminate function
void frontierdemo_terminate(void)
{
  // Terminate for Atomic SubSystem: '<Root>/Subscribe1'
  // Terminate for MATLABSystem: '<S4>/SourceBlock'
  if (!frontierdemo_DW.obj_g.matlabCodegenIsDeleted) {
    frontierdemo_DW.obj_g.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S4>/SourceBlock'
  // End of Terminate for SubSystem: '<Root>/Subscribe1'

  // Terminate for Atomic SubSystem: '<Root>/Subscribe'
  // Terminate for MATLABSystem: '<S3>/SourceBlock'
  if (!frontierdemo_DW.obj_nf.matlabCodegenIsDeleted) {
    frontierdemo_DW.obj_nf.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S3>/SourceBlock'
  // End of Terminate for SubSystem: '<Root>/Subscribe'

  // Terminate for Atomic SubSystem: '<Root>/Subscribe2'
  // Terminate for MATLABSystem: '<S5>/SourceBlock'
  if (!frontierdemo_DW.obj_e.matlabCodegenIsDeleted) {
    frontierdemo_DW.obj_e.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S5>/SourceBlock'
  // End of Terminate for SubSystem: '<Root>/Subscribe2'

  // Terminate for MATLABSystem: '<Root>/Get Parameter1'
  if (!frontierdemo_DW.obj.matlabCodegenIsDeleted) {
    frontierdemo_DW.obj.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<Root>/Get Parameter1'

  // Terminate for Atomic SubSystem: '<Root>/Publish'
  // Terminate for MATLABSystem: '<S2>/SinkBlock'
  if (!frontierdemo_DW.obj_n.matlabCodegenIsDeleted) {
    frontierdemo_DW.obj_n.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S2>/SinkBlock'
  // End of Terminate for SubSystem: '<Root>/Publish'
}

const char_T* RT_MODEL_frontierdemo_T::getErrorStatus() const
{
  return (errorStatus);
}

void RT_MODEL_frontierdemo_T::setErrorStatus(const char_T* const volatile
  aErrorStatus)
{
  (errorStatus = aErrorStatus);
}

//
// File trailer for generated code.
//
// [EOF]
//
