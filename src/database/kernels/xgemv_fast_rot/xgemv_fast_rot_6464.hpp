
// =================================================================================================
// This file is part of the CLBlast project. The project is licensed under Apache Version 2.0. It
// is auto-generated by the 'scripts/database/database.py' Python script.
//
// This file populates the database with best-found tuning parameters for the 'Xgemv_Fast_Rot6464' kernels.
//
// =================================================================================================

namespace clblast {
namespace database {

const DatabaseEntry XgemvFastRotComplexDouble = {
  "XgemvFastRot", Precision::kComplexDouble, {"VW3", "WGS3", "WPT3"}, {
    { // AMD GPUs
      kDeviceTypeGPU, "AMD", {
        { "Ellesmere", {
          { Name{"AMD Radeon RX 480                                 "}, Params{ 4, 16, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } },
          { kDeviceNameDefault                                        , Params{ 4, 16, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } },
        } },
        { "Fiji", {
          { Name{"AMD Radeon R9 Fury X                              "}, Params{ 4, 32, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } },
          { Name{"AMD Radeon R9 M370X Compute Engine                "}, Params{ 4, 32, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } },
          { kDeviceNameDefault                                        , Params{ 4, 32, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } },
        } },
        { "Tonga", {
          { Name{"AMD Radeon R9 380                                 "}, Params{ 4, 16, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } },
          { kDeviceNameDefault                                        , Params{ 4, 16, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } },
        } },
        { "default", {
          { Name{"AMD Radeon Pro 580 Compute Engine                 "}, Params{ 8, 16, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } },
          { kDeviceNameDefault                                        , Params{ 4, 16, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } },
        } },
        { "gfx1030", {
          { Name{"AMD Radeon RX 6800 XT                             "}, Params{ 4, 32, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } },
          { kDeviceNameDefault                                        , Params{ 4, 32, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } },
        } },
        { "gfx1034", {
          { Name{"AMD Radeon RX 6500 XT                             "}, Params{ 8, 16, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } },
          { kDeviceNameDefault                                        , Params{ 8, 16, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } },
        } },
      }
    },
    { // ARM GPUs
      kDeviceTypeGPU, "ARM", {
        { "default", {
          { Name{"Mali-T760                                         "}, Params{ 1, 16, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } },
          { kDeviceNameDefault                                        , Params{ 1, 16, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } },
        } },
      }
    },
    { // Intel CPUs
      kDeviceTypeCPU, "Intel", {
        { "default", {
          { Name{"Intel(R) Core(TM) i7-2670QM CPU @ 2.20GHz         "}, Params{ 2, 16, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } },
          { Name{"Intel(R) Core(TM) i5-4570 CPU @ 3.20GHz           "}, Params{ 8, 16, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } },
          { Name{"Intel(R) Core(TM) i5-4590S CPU @ 3.00GHz          "}, Params{ 8, 16, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } },
          { Name{"Intel(R) Core(TM) i7 CPU         920  @ 2.67GHz   "}, Params{ 4, 64, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } },
          { Name{"Intel(R) Core(TM) i7-4790K CPU @ 4.00GHz          "}, Params{ 2, 16, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } },
          { Name{"Intel(R) Core(TM) i7-5930K CPU @ 3.50GHz          "}, Params{ 8, 16, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } },
          { Name{"Intel(R) Core(TM) i7-6770HQ CPU @ 2.60GHz         "}, Params{ 4, 32, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } },
          { Name{"Intel(R) Core(TM) i9-9980HK CPU @ 2.40GHz         "}, Params{ 8, 16, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } },
          { Name{"Intel(R) Xeon(R) CPU E5-2630 v3 @ 2.40GHz         "}, Params{ 4, 16, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } },
          { Name{"Intel(R) Xeon(R) CPU E5-2630 v4 @ 2.20GHz         "}, Params{ 8, 16, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } },
          { kDeviceNameDefault                                        , Params{ 8, 16, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } },
        } },
      }
    },
    { // NVIDIA GPUs
      kDeviceTypeGPU, "NVIDIA", {
        { "SM2.0", {
          { Name{"GeForce GTX 580                                   "}, Params{ 2, 32, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } },
          { kDeviceNameDefault                                        , Params{ 2, 32, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } },
        } },
        { "SM3.0", {
          { Name{"GeForce GTX 760 Ti OEM                            "}, Params{ 1, 64, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } },
          { kDeviceNameDefault                                        , Params{ 1, 64, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } },
        } },
        { "SM6.0", {
          { Name{"Tesla P100-PCIE-16GB                              "}, Params{ 8, 32, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } },
          { kDeviceNameDefault                                        , Params{ 8, 32, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } },
        } },
        { "SM6.1", {
          { Name{"GeForce GTX 1070 Ti                               "}, Params{ 8, 32, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } },
          { Name{"GeForce GTX 1080 Ti                               "}, Params{ 8, 32, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } },
          { kDeviceNameDefault                                        , Params{ 8, 32, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } },
        } },
        { "SM7.0", {
          { Name{"Quadro GV100                                      "}, Params{ 4, 16, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } },
          { Name{"Tesla V100-PCIE-16GB                              "}, Params{ 4, 16, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } },
          { kDeviceNameDefault                                        , Params{ 4, 16, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } },
        } },
        { "SM7.5", {
          { Name{"Quadro T2000                                      "}, Params{ 1, 32, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } },
          { Name{"TITAN RTX                                         "}, Params{ 1, 32, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } },
          { Name{"Tesla T4                                          "}, Params{ 1, 32, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } },
          { kDeviceNameDefault                                        , Params{ 1, 32, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } },
        } },
        { "SM8.0", {
          { Name{"A100-PCIE-40GB                                    "}, Params{ 8, 32, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } },
          { kDeviceNameDefault                                        , Params{ 8, 32, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } },
        } },
        { "SM8.6", {
          { Name{"NVIDIA GeForce RTX 3070                           "}, Params{ 2, 32, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } },
          { kDeviceNameDefault                                        , Params{ 2, 32, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } },
        } },
        { "default", {
          { kDeviceNameDefault                                        , Params{ 4, 32, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } },
        } },
      }
    },
    { // Default
      kDeviceTypeAll, "default", {
        { "default", {
          { kDeviceNameDefault                                        , Params{ 4, 16, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } },
        } },
      }
    },
  }
};

} // namespace database
} // namespace clblast
