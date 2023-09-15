# Introduction

This repository demonstrates profiling a simple Ethernet system for the imx8mm_evk board. 

# Dependencies

You will need to build the microkit (formerly known as the seL4CP) sdk. 

## Microkit

You will need to clone the following repository: https://github.com/Kswin01/sel4cp and switch to the `prof-dev` branch.

Additionally you will need to clone the following version of the kernel: https://github.com/Kswin01/seL4 and switch to the `profiler` branch.

Then, follow the build instructions in the microkit repository to build the SDK.

The SDK will exist inside the microkit directory in: `release/sel4cp-sdk-1.2.6/`.

# Building the profiler system

Now that we have built the SDK, we can build the profiler system. Run the following build command:

```
make BUILD_DIR=<path_to_build_dir> SEL4CP_BOARD=imx8mm_evk SEL4CP_SDK=<path_to_sel4cp_sdk> SEL4CP_CONFIG=benchmark
```