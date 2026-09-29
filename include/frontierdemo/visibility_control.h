#ifndef FRONTIERDEMO__VISIBILITY_CONTROL_H_
#define FRONTIERDEMO__VISIBILITY_CONTROL_H_
#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define FRONTIERDEMO_EXPORT __attribute__ ((dllexport))
    #define FRONTIERDEMO_IMPORT __attribute__ ((dllimport))
  #else
    #define FRONTIERDEMO_EXPORT __declspec(dllexport)
    #define FRONTIERDEMO_IMPORT __declspec(dllimport)
  #endif
  #ifdef FRONTIERDEMO_BUILDING_LIBRARY
    #define FRONTIERDEMO_PUBLIC FRONTIERDEMO_EXPORT
  #else
    #define FRONTIERDEMO_PUBLIC FRONTIERDEMO_IMPORT
  #endif
  #define FRONTIERDEMO_PUBLIC_TYPE FRONTIERDEMO_PUBLIC
  #define FRONTIERDEMO_LOCAL
#else
  #define FRONTIERDEMO_EXPORT __attribute__ ((visibility("default")))
  #define FRONTIERDEMO_IMPORT
  #if __GNUC__ >= 4
    #define FRONTIERDEMO_PUBLIC __attribute__ ((visibility("default")))
    #define FRONTIERDEMO_LOCAL  __attribute__ ((visibility("hidden")))
  #else
    #define FRONTIERDEMO_PUBLIC
    #define FRONTIERDEMO_LOCAL
  #endif
  #define FRONTIERDEMO_PUBLIC_TYPE
#endif
#endif  // FRONTIERDEMO__VISIBILITY_CONTROL_H_
// Generated 29-Sep-2026 16:51:15
// Copyright 2019-2020 The MathWorks, Inc.
