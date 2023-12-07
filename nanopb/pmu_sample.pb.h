/* Automatically generated nanopb header */
/* Generated by nanopb-0.4.9-dev */

#ifndef PB_PMU_SAMPLE_PB_H_INCLUDED
#define PB_PMU_SAMPLE_PB_H_INCLUDED
#include "pb.h"

#if PB_PROTO_HEADER_VERSION != 40
#error Regenerate this file with the current version of nanopb generator.
#endif

/* Struct definitions */
typedef struct _pmu_sample {
    uint64_t ip;
    uint32_t pid;
    uint64_t time;
    uint32_t cpu;
    uint64_t period;
    pb_size_t ips_count;
    uint64_t ips[4];
} pmu_sample;


#ifdef __cplusplus
extern "C" {
#endif

/* Initializer values for message structs */
#define pmu_sample_init_default                  {0, 0, 0, 0, 0, 0, {0, 0, 0, 0}}
#define pmu_sample_init_zero                     {0, 0, 0, 0, 0, 0, {0, 0, 0, 0}}

/* Field tags (for use in manual encoding/decoding) */
#define pmu_sample_ip_tag                        1
#define pmu_sample_pid_tag                       2
#define pmu_sample_time_tag                      3
#define pmu_sample_cpu_tag                       4
#define pmu_sample_period_tag                    5
#define pmu_sample_ips_tag                       6

/* Struct field encoding specification for nanopb */
#define pmu_sample_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, UINT64,   ip,                1) \
X(a, STATIC,   SINGULAR, UINT32,   pid,               2) \
X(a, STATIC,   SINGULAR, UINT64,   time,              3) \
X(a, STATIC,   SINGULAR, UINT32,   cpu,               4) \
X(a, STATIC,   SINGULAR, UINT64,   period,            5) \
X(a, STATIC,   REPEATED, UINT64,   ips,               6)
#define pmu_sample_CALLBACK NULL
#define pmu_sample_DEFAULT NULL

extern const pb_msgdesc_t pmu_sample_msg;

/* Defines for backwards compatibility with code written before nanopb-0.4.0 */
#define pmu_sample_fields &pmu_sample_msg

/* Maximum encoded size of messages (where known) */
#define PMU_SAMPLE_PB_H_MAX_SIZE                 pmu_sample_size
#define pmu_sample_size                          89

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif
