#ifndef BENBEN_AUTOSAR_PLATFORM_TYPES_H
#define BENBEN_AUTOSAR_PLATFORM_TYPES_H

#include <types.h>

// [SWS_Platform_00013]-[SWS_Platform_00015]
// [SWS_Platform_00066]
typedef uint8_t         uint8;
typedef uint16_t        uint16;
typedef uint32_t        uint32;
typedef uint64_t        uint64;


// [SWS_Platform_00016]-[SWS_Platform_00018]
// [SWS_Platform_00067]
typedef int8_t          sint8;
typedef int16_t         sint16;
typedef int32_t         sint32;
typedef int64_t         sint64;


// [SWS_Platform_00020]-[SWS_Platform_00022]
typedef uint_least8_t   uint8_least;
typedef uint_least16_t  uint16_least;
typedef uint_least32_t  uint32_least;


// [SWS_Platform_00023]-[SWS_Platform_00025]
typedef int_least8_t    sint8_least;
typedef int_least16_t   sint16_least;
typedef int_least32_t   sint32_least;


// [SWS_Platform_91001]-[SWS_Platform_91002] 
typedef void            *VoidPtr;
typedef const void      *ConstVoidPtr;

#endif // BENBEN_AUTOSAR_PLATFORM_TYPES_H