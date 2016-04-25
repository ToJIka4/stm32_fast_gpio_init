#ifndef __FAST_GPIO_INIT_H_
#define __FAST_GPIO_INIT_H_

#include "cmsis_device.h"
#include "fgi_config.h"

#if defined(FGI_A_0_ODR_0)
#define FGI_A_0_ODR 0x00000000
#elif defined(FGI_A_0_ODR_1)
#define FGI_A_0_ODR 0x00000001
#else
#define FGI_A_0_ODR 0x00000000
#endif

#if defined(FGI_A_1_ODR_0)
#define FGI_A_1_ODR 0x00000000
#elif defined(FGI_A_1_ODR_1)
#define FGI_A_1_ODR 0x00000002
#else
#define FGI_A_1_ODR 0x00000000
#endif

#if defined(FGI_A_2_ODR_0)
#define FGI_A_2_ODR 0x00000000
#elif defined(FGI_A_2_ODR_1)
#define FGI_A_2_ODR 0x00000004
#else
#define FGI_A_2_ODR 0x00000000
#endif

#if defined(FGI_A_3_ODR_0)
#define FGI_A_3_ODR 0x00000000
#elif defined(FGI_A_3_ODR_1)
#define FGI_A_3_ODR 0x00000008
#else
#define FGI_A_3_ODR 0x00000000
#endif

#if defined(FGI_A_4_ODR_0)
#define FGI_A_4_ODR 0x00000000
#elif defined(FGI_A_4_ODR_1)
#define FGI_A_4_ODR 0x00000010
#else
#define FGI_A_4_ODR 0x00000000
#endif

#if defined(FGI_A_5_ODR_0)
#define FGI_A_5_ODR 0x00000000
#elif defined(FGI_A_5_ODR_1)
#define FGI_A_5_ODR 0x00000020
#else
#define FGI_A_5_ODR 0x00000000
#endif

#if defined(FGI_A_6_ODR_0)
#define FGI_A_6_ODR 0x00000000
#elif defined(FGI_A_6_ODR_1)
#define FGI_A_6_ODR 0x00000040
#else
#define FGI_A_6_ODR 0x00000000
#endif

#if defined(FGI_A_7_ODR_0)
#define FGI_A_7_ODR 0x00000000
#elif defined(FGI_A_7_ODR_1)
#define FGI_A_7_ODR 0x00000080
#else
#define FGI_A_7_ODR 0x00000000
#endif

#if defined(FGI_A_8_ODR_0)
#define FGI_A_8_ODR 0x00000000
#elif defined(FGI_A_8_ODR_1)
#define FGI_A_8_ODR 0x00000100
#else
#define FGI_A_8_ODR 0x00000000
#endif

#if defined(FGI_A_9_ODR_0)
#define FGI_A_9_ODR 0x00000000
#elif defined(FGI_A_9_ODR_1)
#define FGI_A_9_ODR 0x00000200
#else
#define FGI_A_9_ODR 0x00000000
#endif

#if defined(FGI_A_10_ODR_0)
#define FGI_A_10_ODR 0x00000000
#elif defined(FGI_A_10_ODR_1)
#define FGI_A_10_ODR 0x00000400
#else
#define FGI_A_10_ODR 0x00000000
#endif

#if defined(FGI_A_11_ODR_0)
#define FGI_A_11_ODR 0x00000000
#elif defined(FGI_A_11_ODR_1)
#define FGI_A_11_ODR 0x00000800
#else
#define FGI_A_11_ODR 0x00000000
#endif

#if defined(FGI_A_12_ODR_0)
#define FGI_A_12_ODR 0x00000000
#elif defined(FGI_A_12_ODR_1)
#define FGI_A_12_ODR 0x00001000
#else
#define FGI_A_12_ODR 0x00000000
#endif

#if defined(FGI_A_13_ODR_0)
#define FGI_A_13_ODR 0x00000000
#elif defined(FGI_A_13_ODR_1)
#define FGI_A_13_ODR 0x00002000
#else
#define FGI_A_13_ODR 0x00000000
#endif

#if defined(FGI_A_14_ODR_0)
#define FGI_A_14_ODR 0x00000000
#elif defined(FGI_A_14_ODR_1)
#define FGI_A_14_ODR 0x00004000
#else
#define FGI_A_14_ODR 0x00000000
#endif

#if defined(FGI_A_15_ODR_0)
#define FGI_A_15_ODR 0x00000000
#elif defined(FGI_A_15_ODR_1)
#define FGI_A_15_ODR 0x00008000
#else
#define FGI_A_15_ODR 0x00000000
#endif

#if defined(FGI_A_0_MODER_IN)
#define FGI_A_0_MODER 0x00000000
#elif defined(FGI_A_0_MODER_OUT)
#define FGI_A_0_MODER 0x00000001
#elif defined(FGI_A_0_MODER_AF)
#define FGI_A_0_MODER 0x00000002
#elif defined(FGI_A_0_MODER_AN)
#define FGI_A_0_MODER 0x00000003
#else
#define FGI_A_0_MODER 0x00000000
#endif

#if defined(FGI_A_1_MODER_IN)
#define FGI_A_1_MODER 0x00000000
#elif defined(FGI_A_1_MODER_OUT)
#define FGI_A_1_MODER 0x00000004
#elif defined(FGI_A_1_MODER_AF)
#define FGI_A_1_MODER 0x00000008
#elif defined(FGI_A_1_MODER_AN)
#define FGI_A_1_MODER 0x0000000c
#else
#define FGI_A_1_MODER 0x00000000
#endif

#if defined(FGI_A_2_MODER_IN)
#define FGI_A_2_MODER 0x00000000
#elif defined(FGI_A_2_MODER_OUT)
#define FGI_A_2_MODER 0x00000010
#elif defined(FGI_A_2_MODER_AF)
#define FGI_A_2_MODER 0x00000020
#elif defined(FGI_A_2_MODER_AN)
#define FGI_A_2_MODER 0x00000030
#else
#define FGI_A_2_MODER 0x00000000
#endif

#if defined(FGI_A_3_MODER_IN)
#define FGI_A_3_MODER 0x00000000
#elif defined(FGI_A_3_MODER_OUT)
#define FGI_A_3_MODER 0x00000040
#elif defined(FGI_A_3_MODER_AF)
#define FGI_A_3_MODER 0x00000080
#elif defined(FGI_A_3_MODER_AN)
#define FGI_A_3_MODER 0x000000c0
#else
#define FGI_A_3_MODER 0x00000000
#endif

#if defined(FGI_A_4_MODER_IN)
#define FGI_A_4_MODER 0x00000000
#elif defined(FGI_A_4_MODER_OUT)
#define FGI_A_4_MODER 0x00000100
#elif defined(FGI_A_4_MODER_AF)
#define FGI_A_4_MODER 0x00000200
#elif defined(FGI_A_4_MODER_AN)
#define FGI_A_4_MODER 0x00000300
#else
#define FGI_A_4_MODER 0x00000000
#endif

#if defined(FGI_A_5_MODER_IN)
#define FGI_A_5_MODER 0x00000000
#elif defined(FGI_A_5_MODER_OUT)
#define FGI_A_5_MODER 0x00000400
#elif defined(FGI_A_5_MODER_AF)
#define FGI_A_5_MODER 0x00000800
#elif defined(FGI_A_5_MODER_AN)
#define FGI_A_5_MODER 0x00000c00
#else
#define FGI_A_5_MODER 0x00000000
#endif

#if defined(FGI_A_6_MODER_IN)
#define FGI_A_6_MODER 0x00000000
#elif defined(FGI_A_6_MODER_OUT)
#define FGI_A_6_MODER 0x00001000
#elif defined(FGI_A_6_MODER_AF)
#define FGI_A_6_MODER 0x00002000
#elif defined(FGI_A_6_MODER_AN)
#define FGI_A_6_MODER 0x00003000
#else
#define FGI_A_6_MODER 0x00000000
#endif

#if defined(FGI_A_7_MODER_IN)
#define FGI_A_7_MODER 0x00000000
#elif defined(FGI_A_7_MODER_OUT)
#define FGI_A_7_MODER 0x00004000
#elif defined(FGI_A_7_MODER_AF)
#define FGI_A_7_MODER 0x00008000
#elif defined(FGI_A_7_MODER_AN)
#define FGI_A_7_MODER 0x0000c000
#else
#define FGI_A_7_MODER 0x00000000
#endif

#if defined(FGI_A_8_MODER_IN)
#define FGI_A_8_MODER 0x00000000
#elif defined(FGI_A_8_MODER_OUT)
#define FGI_A_8_MODER 0x00010000
#elif defined(FGI_A_8_MODER_AF)
#define FGI_A_8_MODER 0x00020000
#elif defined(FGI_A_8_MODER_AN)
#define FGI_A_8_MODER 0x00030000
#else
#define FGI_A_8_MODER 0x00000000
#endif

#if defined(FGI_A_9_MODER_IN)
#define FGI_A_9_MODER 0x00000000
#elif defined(FGI_A_9_MODER_OUT)
#define FGI_A_9_MODER 0x00040000
#elif defined(FGI_A_9_MODER_AF)
#define FGI_A_9_MODER 0x00080000
#elif defined(FGI_A_9_MODER_AN)
#define FGI_A_9_MODER 0x000c0000
#else
#define FGI_A_9_MODER 0x00000000
#endif

#if defined(FGI_A_10_MODER_IN)
#define FGI_A_10_MODER 0x00000000
#elif defined(FGI_A_10_MODER_OUT)
#define FGI_A_10_MODER 0x00100000
#elif defined(FGI_A_10_MODER_AF)
#define FGI_A_10_MODER 0x00200000
#elif defined(FGI_A_10_MODER_AN)
#define FGI_A_10_MODER 0x00300000
#else
#define FGI_A_10_MODER 0x00000000
#endif

#if defined(FGI_A_11_MODER_IN)
#define FGI_A_11_MODER 0x00000000
#elif defined(FGI_A_11_MODER_OUT)
#define FGI_A_11_MODER 0x00400000
#elif defined(FGI_A_11_MODER_AF)
#define FGI_A_11_MODER 0x00800000
#elif defined(FGI_A_11_MODER_AN)
#define FGI_A_11_MODER 0x00c00000
#else
#define FGI_A_11_MODER 0x00000000
#endif

#if defined(FGI_A_12_MODER_IN)
#define FGI_A_12_MODER 0x00000000
#elif defined(FGI_A_12_MODER_OUT)
#define FGI_A_12_MODER 0x01000000
#elif defined(FGI_A_12_MODER_AF)
#define FGI_A_12_MODER 0x02000000
#elif defined(FGI_A_12_MODER_AN)
#define FGI_A_12_MODER 0x03000000
#else
#define FGI_A_12_MODER 0x00000000
#endif

#if defined(FGI_A_13_MODER_IN)
#define FGI_A_13_MODER 0x00000000
#elif defined(FGI_A_13_MODER_OUT)
#define FGI_A_13_MODER 0x04000000
#elif defined(FGI_A_13_MODER_AF)
#define FGI_A_13_MODER 0x08000000
#elif defined(FGI_A_13_MODER_AN)
#define FGI_A_13_MODER 0x0c000000
#else
#define FGI_A_13_MODER 0x08000000
#endif

#if defined(FGI_A_14_MODER_IN)
#define FGI_A_14_MODER 0x00000000
#elif defined(FGI_A_14_MODER_OUT)
#define FGI_A_14_MODER 0x10000000
#elif defined(FGI_A_14_MODER_AF)
#define FGI_A_14_MODER 0x20000000
#elif defined(FGI_A_14_MODER_AN)
#define FGI_A_14_MODER 0x30000000
#else
#define FGI_A_14_MODER 0x20000000
#endif

#if defined(FGI_A_15_MODER_IN)
#define FGI_A_15_MODER 0x00000000
#elif defined(FGI_A_15_MODER_OUT)
#define FGI_A_15_MODER 0x40000000
#elif defined(FGI_A_15_MODER_AF)
#define FGI_A_15_MODER 0x80000000
#elif defined(FGI_A_15_MODER_AN)
#define FGI_A_15_MODER 0xc0000000
#else
#define FGI_A_15_MODER 0x00000000
#endif

#if defined(FGI_A_0_OTYPER_PP)
#define FGI_A_0_OTYPER 0x00000000
#elif defined(FGI_A_0_OTYPER_OD)
#define FGI_A_0_OTYPER 0x00000001
#else
#define FGI_A_0_OTYPER 0x00000000
#endif

#if defined(FGI_A_1_OTYPER_PP)
#define FGI_A_1_OTYPER 0x00000000
#elif defined(FGI_A_1_OTYPER_OD)
#define FGI_A_1_OTYPER 0x00000002
#else
#define FGI_A_1_OTYPER 0x00000000
#endif

#if defined(FGI_A_2_OTYPER_PP)
#define FGI_A_2_OTYPER 0x00000000
#elif defined(FGI_A_2_OTYPER_OD)
#define FGI_A_2_OTYPER 0x00000004
#else
#define FGI_A_2_OTYPER 0x00000000
#endif

#if defined(FGI_A_3_OTYPER_PP)
#define FGI_A_3_OTYPER 0x00000000
#elif defined(FGI_A_3_OTYPER_OD)
#define FGI_A_3_OTYPER 0x00000008
#else
#define FGI_A_3_OTYPER 0x00000000
#endif

#if defined(FGI_A_4_OTYPER_PP)
#define FGI_A_4_OTYPER 0x00000000
#elif defined(FGI_A_4_OTYPER_OD)
#define FGI_A_4_OTYPER 0x00000010
#else
#define FGI_A_4_OTYPER 0x00000000
#endif

#if defined(FGI_A_5_OTYPER_PP)
#define FGI_A_5_OTYPER 0x00000000
#elif defined(FGI_A_5_OTYPER_OD)
#define FGI_A_5_OTYPER 0x00000020
#else
#define FGI_A_5_OTYPER 0x00000000
#endif

#if defined(FGI_A_6_OTYPER_PP)
#define FGI_A_6_OTYPER 0x00000000
#elif defined(FGI_A_6_OTYPER_OD)
#define FGI_A_6_OTYPER 0x00000040
#else
#define FGI_A_6_OTYPER 0x00000000
#endif

#if defined(FGI_A_7_OTYPER_PP)
#define FGI_A_7_OTYPER 0x00000000
#elif defined(FGI_A_7_OTYPER_OD)
#define FGI_A_7_OTYPER 0x00000080
#else
#define FGI_A_7_OTYPER 0x00000000
#endif

#if defined(FGI_A_8_OTYPER_PP)
#define FGI_A_8_OTYPER 0x00000000
#elif defined(FGI_A_8_OTYPER_OD)
#define FGI_A_8_OTYPER 0x00000100
#else
#define FGI_A_8_OTYPER 0x00000000
#endif

#if defined(FGI_A_9_OTYPER_PP)
#define FGI_A_9_OTYPER 0x00000000
#elif defined(FGI_A_9_OTYPER_OD)
#define FGI_A_9_OTYPER 0x00000200
#else
#define FGI_A_9_OTYPER 0x00000000
#endif

#if defined(FGI_A_10_OTYPER_PP)
#define FGI_A_10_OTYPER 0x00000000
#elif defined(FGI_A_10_OTYPER_OD)
#define FGI_A_10_OTYPER 0x00000400
#else
#define FGI_A_10_OTYPER 0x00000000
#endif

#if defined(FGI_A_11_OTYPER_PP)
#define FGI_A_11_OTYPER 0x00000000
#elif defined(FGI_A_11_OTYPER_OD)
#define FGI_A_11_OTYPER 0x00000800
#else
#define FGI_A_11_OTYPER 0x00000000
#endif

#if defined(FGI_A_12_OTYPER_PP)
#define FGI_A_12_OTYPER 0x00000000
#elif defined(FGI_A_12_OTYPER_OD)
#define FGI_A_12_OTYPER 0x00001000
#else
#define FGI_A_12_OTYPER 0x00000000
#endif

#if defined(FGI_A_13_OTYPER_PP)
#define FGI_A_13_OTYPER 0x00000000
#elif defined(FGI_A_13_OTYPER_OD)
#define FGI_A_13_OTYPER 0x00002000
#else
#define FGI_A_13_OTYPER 0x00000000
#endif

#if defined(FGI_A_14_OTYPER_PP)
#define FGI_A_14_OTYPER 0x00000000
#elif defined(FGI_A_14_OTYPER_OD)
#define FGI_A_14_OTYPER 0x00004000
#else
#define FGI_A_14_OTYPER 0x00000000
#endif

#if defined(FGI_A_15_OTYPER_PP)
#define FGI_A_15_OTYPER 0x00000000
#elif defined(FGI_A_15_OTYPER_OD)
#define FGI_A_15_OTYPER 0x00008000
#else
#define FGI_A_15_OTYPER 0x00000000
#endif

#if defined(FGI_A_0_OSPEEDR_LOW)
#define FGI_A_0_OSPEEDR 0x00000000
#elif defined(FGI_A_0_OSPEEDR_MEDIUM)
#define FGI_A_0_OSPEEDR 0x00000001
#elif defined(FGI_A_0_OSPEEDR_HIGH)
#define FGI_A_0_OSPEEDR 0x00000003
#else
#define FGI_A_0_OSPEEDR 0x00000000
#endif

#if defined(FGI_A_1_OSPEEDR_LOW)
#define FGI_A_1_OSPEEDR 0x00000000
#elif defined(FGI_A_1_OSPEEDR_MEDIUM)
#define FGI_A_1_OSPEEDR 0x00000004
#elif defined(FGI_A_1_OSPEEDR_HIGH)
#define FGI_A_1_OSPEEDR 0x0000000c
#else
#define FGI_A_1_OSPEEDR 0x00000000
#endif

#if defined(FGI_A_2_OSPEEDR_LOW)
#define FGI_A_2_OSPEEDR 0x00000000
#elif defined(FGI_A_2_OSPEEDR_MEDIUM)
#define FGI_A_2_OSPEEDR 0x00000010
#elif defined(FGI_A_2_OSPEEDR_HIGH)
#define FGI_A_2_OSPEEDR 0x00000030
#else
#define FGI_A_2_OSPEEDR 0x00000000
#endif

#if defined(FGI_A_3_OSPEEDR_LOW)
#define FGI_A_3_OSPEEDR 0x00000000
#elif defined(FGI_A_3_OSPEEDR_MEDIUM)
#define FGI_A_3_OSPEEDR 0x00000040
#elif defined(FGI_A_3_OSPEEDR_HIGH)
#define FGI_A_3_OSPEEDR 0x000000c0
#else
#define FGI_A_3_OSPEEDR 0x00000000
#endif

#if defined(FGI_A_4_OSPEEDR_LOW)
#define FGI_A_4_OSPEEDR 0x00000000
#elif defined(FGI_A_4_OSPEEDR_MEDIUM)
#define FGI_A_4_OSPEEDR 0x00000100
#elif defined(FGI_A_4_OSPEEDR_HIGH)
#define FGI_A_4_OSPEEDR 0x00000300
#else
#define FGI_A_4_OSPEEDR 0x00000000
#endif

#if defined(FGI_A_5_OSPEEDR_LOW)
#define FGI_A_5_OSPEEDR 0x00000000
#elif defined(FGI_A_5_OSPEEDR_MEDIUM)
#define FGI_A_5_OSPEEDR 0x00000400
#elif defined(FGI_A_5_OSPEEDR_HIGH)
#define FGI_A_5_OSPEEDR 0x00000c00
#else
#define FGI_A_5_OSPEEDR 0x00000000
#endif

#if defined(FGI_A_6_OSPEEDR_LOW)
#define FGI_A_6_OSPEEDR 0x00000000
#elif defined(FGI_A_6_OSPEEDR_MEDIUM)
#define FGI_A_6_OSPEEDR 0x00001000
#elif defined(FGI_A_6_OSPEEDR_HIGH)
#define FGI_A_6_OSPEEDR 0x00003000
#else
#define FGI_A_6_OSPEEDR 0x00000000
#endif

#if defined(FGI_A_7_OSPEEDR_LOW)
#define FGI_A_7_OSPEEDR 0x00000000
#elif defined(FGI_A_7_OSPEEDR_MEDIUM)
#define FGI_A_7_OSPEEDR 0x00004000
#elif defined(FGI_A_7_OSPEEDR_HIGH)
#define FGI_A_7_OSPEEDR 0x0000c000
#else
#define FGI_A_7_OSPEEDR 0x00000000
#endif

#if defined(FGI_A_8_OSPEEDR_LOW)
#define FGI_A_8_OSPEEDR 0x00000000
#elif defined(FGI_A_8_OSPEEDR_MEDIUM)
#define FGI_A_8_OSPEEDR 0x00010000
#elif defined(FGI_A_8_OSPEEDR_HIGH)
#define FGI_A_8_OSPEEDR 0x00030000
#else
#define FGI_A_8_OSPEEDR 0x00000000
#endif

#if defined(FGI_A_9_OSPEEDR_LOW)
#define FGI_A_9_OSPEEDR 0x00000000
#elif defined(FGI_A_9_OSPEEDR_MEDIUM)
#define FGI_A_9_OSPEEDR 0x00040000
#elif defined(FGI_A_9_OSPEEDR_HIGH)
#define FGI_A_9_OSPEEDR 0x000c0000
#else
#define FGI_A_9_OSPEEDR 0x00000000
#endif

#if defined(FGI_A_10_OSPEEDR_LOW)
#define FGI_A_10_OSPEEDR 0x00000000
#elif defined(FGI_A_10_OSPEEDR_MEDIUM)
#define FGI_A_10_OSPEEDR 0x00100000
#elif defined(FGI_A_10_OSPEEDR_HIGH)
#define FGI_A_10_OSPEEDR 0x00300000
#else
#define FGI_A_10_OSPEEDR 0x00000000
#endif

#if defined(FGI_A_11_OSPEEDR_LOW)
#define FGI_A_11_OSPEEDR 0x00000000
#elif defined(FGI_A_11_OSPEEDR_MEDIUM)
#define FGI_A_11_OSPEEDR 0x00400000
#elif defined(FGI_A_11_OSPEEDR_HIGH)
#define FGI_A_11_OSPEEDR 0x00c00000
#else
#define FGI_A_11_OSPEEDR 0x00000000
#endif

#if defined(FGI_A_12_OSPEEDR_LOW)
#define FGI_A_12_OSPEEDR 0x00000000
#elif defined(FGI_A_12_OSPEEDR_MEDIUM)
#define FGI_A_12_OSPEEDR 0x01000000
#elif defined(FGI_A_12_OSPEEDR_HIGH)
#define FGI_A_12_OSPEEDR 0x03000000
#else
#define FGI_A_12_OSPEEDR 0x00000000
#endif

#if defined(FGI_A_13_OSPEEDR_LOW)
#define FGI_A_13_OSPEEDR 0x00000000
#elif defined(FGI_A_13_OSPEEDR_MEDIUM)
#define FGI_A_13_OSPEEDR 0x04000000
#elif defined(FGI_A_13_OSPEEDR_HIGH)
#define FGI_A_13_OSPEEDR 0x0c000000
#else
#define FGI_A_13_OSPEEDR 0x0c000000
#endif

#if defined(FGI_A_14_OSPEEDR_LOW)
#define FGI_A_14_OSPEEDR 0x00000000
#elif defined(FGI_A_14_OSPEEDR_MEDIUM)
#define FGI_A_14_OSPEEDR 0x10000000
#elif defined(FGI_A_14_OSPEEDR_HIGH)
#define FGI_A_14_OSPEEDR 0x30000000
#else
#define FGI_A_14_OSPEEDR 0x00000000
#endif

#if defined(FGI_A_15_OSPEEDR_LOW)
#define FGI_A_15_OSPEEDR 0x00000000
#elif defined(FGI_A_15_OSPEEDR_MEDIUM)
#define FGI_A_15_OSPEEDR 0x40000000
#elif defined(FGI_A_15_OSPEEDR_HIGH)
#define FGI_A_15_OSPEEDR 0xc0000000
#else
#define FGI_A_15_OSPEEDR 0x00000000
#endif

#if defined(FGI_A_0_PUPDR_NOPULL)
#define FGI_A_0_PUPDR 0x00000000
#elif defined(FGI_A_0_PUPDR_PULL_UP)
#define FGI_A_0_PUPDR 0x00000001
#elif defined(FGI_A_0_PUPDR_PULL_DOWN)
#define FGI_A_0_PUPDR 0x00000003
#else
#define FGI_A_0_PUPDR 0x00000000
#endif

#if defined(FGI_A_1_PUPDR_NOPULL)
#define FGI_A_1_PUPDR 0x00000000
#elif defined(FGI_A_1_PUPDR_PULL_UP)
#define FGI_A_1_PUPDR 0x00000004
#elif defined(FGI_A_1_PUPDR_PULL_DOWN)
#define FGI_A_1_PUPDR 0x0000000c
#else
#define FGI_A_1_PUPDR 0x00000000
#endif

#if defined(FGI_A_2_PUPDR_NOPULL)
#define FGI_A_2_PUPDR 0x00000000
#elif defined(FGI_A_2_PUPDR_PULL_UP)
#define FGI_A_2_PUPDR 0x00000010
#elif defined(FGI_A_2_PUPDR_PULL_DOWN)
#define FGI_A_2_PUPDR 0x00000030
#else
#define FGI_A_2_PUPDR 0x00000000
#endif

#if defined(FGI_A_3_PUPDR_NOPULL)
#define FGI_A_3_PUPDR 0x00000000
#elif defined(FGI_A_3_PUPDR_PULL_UP)
#define FGI_A_3_PUPDR 0x00000040
#elif defined(FGI_A_3_PUPDR_PULL_DOWN)
#define FGI_A_3_PUPDR 0x000000c0
#else
#define FGI_A_3_PUPDR 0x00000000
#endif

#if defined(FGI_A_4_PUPDR_NOPULL)
#define FGI_A_4_PUPDR 0x00000000
#elif defined(FGI_A_4_PUPDR_PULL_UP)
#define FGI_A_4_PUPDR 0x00000100
#elif defined(FGI_A_4_PUPDR_PULL_DOWN)
#define FGI_A_4_PUPDR 0x00000300
#else
#define FGI_A_4_PUPDR 0x00000000
#endif

#if defined(FGI_A_5_PUPDR_NOPULL)
#define FGI_A_5_PUPDR 0x00000000
#elif defined(FGI_A_5_PUPDR_PULL_UP)
#define FGI_A_5_PUPDR 0x00000400
#elif defined(FGI_A_5_PUPDR_PULL_DOWN)
#define FGI_A_5_PUPDR 0x00000c00
#else
#define FGI_A_5_PUPDR 0x00000000
#endif

#if defined(FGI_A_6_PUPDR_NOPULL)
#define FGI_A_6_PUPDR 0x00000000
#elif defined(FGI_A_6_PUPDR_PULL_UP)
#define FGI_A_6_PUPDR 0x00001000
#elif defined(FGI_A_6_PUPDR_PULL_DOWN)
#define FGI_A_6_PUPDR 0x00003000
#else
#define FGI_A_6_PUPDR 0x00000000
#endif

#if defined(FGI_A_7_PUPDR_NOPULL)
#define FGI_A_7_PUPDR 0x00000000
#elif defined(FGI_A_7_PUPDR_PULL_UP)
#define FGI_A_7_PUPDR 0x00004000
#elif defined(FGI_A_7_PUPDR_PULL_DOWN)
#define FGI_A_7_PUPDR 0x0000c000
#else
#define FGI_A_7_PUPDR 0x00000000
#endif

#if defined(FGI_A_8_PUPDR_NOPULL)
#define FGI_A_8_PUPDR 0x00000000
#elif defined(FGI_A_8_PUPDR_PULL_UP)
#define FGI_A_8_PUPDR 0x00010000
#elif defined(FGI_A_8_PUPDR_PULL_DOWN)
#define FGI_A_8_PUPDR 0x00030000
#else
#define FGI_A_8_PUPDR 0x00000000
#endif

#if defined(FGI_A_9_PUPDR_NOPULL)
#define FGI_A_9_PUPDR 0x00000000
#elif defined(FGI_A_9_PUPDR_PULL_UP)
#define FGI_A_9_PUPDR 0x00040000
#elif defined(FGI_A_9_PUPDR_PULL_DOWN)
#define FGI_A_9_PUPDR 0x000c0000
#else
#define FGI_A_9_PUPDR 0x00000000
#endif

#if defined(FGI_A_10_PUPDR_NOPULL)
#define FGI_A_10_PUPDR 0x00000000
#elif defined(FGI_A_10_PUPDR_PULL_UP)
#define FGI_A_10_PUPDR 0x00100000
#elif defined(FGI_A_10_PUPDR_PULL_DOWN)
#define FGI_A_10_PUPDR 0x00300000
#else
#define FGI_A_10_PUPDR 0x00000000
#endif

#if defined(FGI_A_11_PUPDR_NOPULL)
#define FGI_A_11_PUPDR 0x00000000
#elif defined(FGI_A_11_PUPDR_PULL_UP)
#define FGI_A_11_PUPDR 0x00400000
#elif defined(FGI_A_11_PUPDR_PULL_DOWN)
#define FGI_A_11_PUPDR 0x00c00000
#else
#define FGI_A_11_PUPDR 0x00000000
#endif

#if defined(FGI_A_12_PUPDR_NOPULL)
#define FGI_A_12_PUPDR 0x00000000
#elif defined(FGI_A_12_PUPDR_PULL_UP)
#define FGI_A_12_PUPDR 0x01000000
#elif defined(FGI_A_12_PUPDR_PULL_DOWN)
#define FGI_A_12_PUPDR 0x03000000
#else
#define FGI_A_12_PUPDR 0x00000000
#endif

#if defined(FGI_A_13_PUPDR_NOPULL)
#define FGI_A_13_PUPDR 0x00000000
#elif defined(FGI_A_13_PUPDR_PULL_UP)
#define FGI_A_13_PUPDR 0x04000000
#elif defined(FGI_A_13_PUPDR_PULL_DOWN)
#define FGI_A_13_PUPDR 0x0c000000
#else
#define FGI_A_13_PUPDR 0x04000000
#endif

#if defined(FGI_A_14_PUPDR_NOPULL)
#define FGI_A_14_PUPDR 0x00000000
#elif defined(FGI_A_14_PUPDR_PULL_UP)
#define FGI_A_14_PUPDR 0x10000000
#elif defined(FGI_A_14_PUPDR_PULL_DOWN)
#define FGI_A_14_PUPDR 0x30000000
#else
#define FGI_A_14_PUPDR 0x20000000
#endif

#if defined(FGI_A_15_PUPDR_NOPULL)
#define FGI_A_15_PUPDR 0x00000000
#elif defined(FGI_A_15_PUPDR_PULL_UP)
#define FGI_A_15_PUPDR 0x40000000
#elif defined(FGI_A_15_PUPDR_PULL_DOWN)
#define FGI_A_15_PUPDR 0xc0000000
#else
#define FGI_A_15_PUPDR 0x00000000
#endif

#if defined(FGI_A_0_AFR_AF0)
#define FGI_A_0_AFR 0x00000000
#elif defined(FGI_A_0_AFR_AF1)
#define FGI_A_0_AFR 0x00000001
#elif defined(FGI_A_0_AFR_AF2)
#define FGI_A_0_AFR 0x00000002
#elif defined(FGI_A_0_AFR_AF3)
#define FGI_A_0_AFR 0x00000003
#elif defined(FGI_A_0_AFR_AF4)
#define FGI_A_0_AFR 0x00000004
#elif defined(FGI_A_0_AFR_AF5)
#define FGI_A_0_AFR 0x00000005
#elif defined(FGI_A_0_AFR_AF6)
#define FGI_A_0_AFR 0x00000006
#elif defined(FGI_A_0_AFR_AF7)
#define FGI_A_0_AFR 0x00000007
#else
#define FGI_A_0_AFR 0x00000000
#endif

#if defined(FGI_A_1_AFR_AF0)
#define FGI_A_1_AFR 0x00000000
#elif defined(FGI_A_1_AFR_AF1)
#define FGI_A_1_AFR 0x00000010
#elif defined(FGI_A_1_AFR_AF2)
#define FGI_A_1_AFR 0x00000020
#elif defined(FGI_A_1_AFR_AF3)
#define FGI_A_1_AFR 0x00000030
#elif defined(FGI_A_1_AFR_AF4)
#define FGI_A_1_AFR 0x00000040
#elif defined(FGI_A_1_AFR_AF5)
#define FGI_A_1_AFR 0x00000050
#elif defined(FGI_A_1_AFR_AF6)
#define FGI_A_1_AFR 0x00000060
#elif defined(FGI_A_1_AFR_AF7)
#define FGI_A_1_AFR 0x00000070
#else
#define FGI_A_1_AFR 0x00000000
#endif

#if defined(FGI_A_2_AFR_AF0)
#define FGI_A_2_AFR 0x00000000
#elif defined(FGI_A_2_AFR_AF1)
#define FGI_A_2_AFR 0x00000100
#elif defined(FGI_A_2_AFR_AF2)
#define FGI_A_2_AFR 0x00000200
#elif defined(FGI_A_2_AFR_AF3)
#define FGI_A_2_AFR 0x00000300
#elif defined(FGI_A_2_AFR_AF4)
#define FGI_A_2_AFR 0x00000400
#elif defined(FGI_A_2_AFR_AF5)
#define FGI_A_2_AFR 0x00000500
#elif defined(FGI_A_2_AFR_AF6)
#define FGI_A_2_AFR 0x00000600
#elif defined(FGI_A_2_AFR_AF7)
#define FGI_A_2_AFR 0x00000700
#else
#define FGI_A_2_AFR 0x00000000
#endif

#if defined(FGI_A_3_AFR_AF0)
#define FGI_A_3_AFR 0x00000000
#elif defined(FGI_A_3_AFR_AF1)
#define FGI_A_3_AFR 0x00001000
#elif defined(FGI_A_3_AFR_AF2)
#define FGI_A_3_AFR 0x00002000
#elif defined(FGI_A_3_AFR_AF3)
#define FGI_A_3_AFR 0x00003000
#elif defined(FGI_A_3_AFR_AF4)
#define FGI_A_3_AFR 0x00004000
#elif defined(FGI_A_3_AFR_AF5)
#define FGI_A_3_AFR 0x00005000
#elif defined(FGI_A_3_AFR_AF6)
#define FGI_A_3_AFR 0x00006000
#elif defined(FGI_A_3_AFR_AF7)
#define FGI_A_3_AFR 0x00007000
#else
#define FGI_A_3_AFR 0x00000000
#endif

#if defined(FGI_A_4_AFR_AF0)
#define FGI_A_4_AFR 0x00000000
#elif defined(FGI_A_4_AFR_AF1)
#define FGI_A_4_AFR 0x00010000
#elif defined(FGI_A_4_AFR_AF2)
#define FGI_A_4_AFR 0x00020000
#elif defined(FGI_A_4_AFR_AF3)
#define FGI_A_4_AFR 0x00030000
#elif defined(FGI_A_4_AFR_AF4)
#define FGI_A_4_AFR 0x00040000
#elif defined(FGI_A_4_AFR_AF5)
#define FGI_A_4_AFR 0x00050000
#elif defined(FGI_A_4_AFR_AF6)
#define FGI_A_4_AFR 0x00060000
#elif defined(FGI_A_4_AFR_AF7)
#define FGI_A_4_AFR 0x00070000
#else
#define FGI_A_4_AFR 0x00000000
#endif

#if defined(FGI_A_5_AFR_AF0)
#define FGI_A_5_AFR 0x00000000
#elif defined(FGI_A_5_AFR_AF1)
#define FGI_A_5_AFR 0x00100000
#elif defined(FGI_A_5_AFR_AF2)
#define FGI_A_5_AFR 0x00200000
#elif defined(FGI_A_5_AFR_AF3)
#define FGI_A_5_AFR 0x00300000
#elif defined(FGI_A_5_AFR_AF4)
#define FGI_A_5_AFR 0x00400000
#elif defined(FGI_A_5_AFR_AF5)
#define FGI_A_5_AFR 0x00500000
#elif defined(FGI_A_5_AFR_AF6)
#define FGI_A_5_AFR 0x00600000
#elif defined(FGI_A_5_AFR_AF7)
#define FGI_A_5_AFR 0x00700000
#else
#define FGI_A_5_AFR 0x00000000
#endif

#if defined(FGI_A_6_AFR_AF0)
#define FGI_A_6_AFR 0x00000000
#elif defined(FGI_A_6_AFR_AF1)
#define FGI_A_6_AFR 0x01000000
#elif defined(FGI_A_6_AFR_AF2)
#define FGI_A_6_AFR 0x02000000
#elif defined(FGI_A_6_AFR_AF3)
#define FGI_A_6_AFR 0x03000000
#elif defined(FGI_A_6_AFR_AF4)
#define FGI_A_6_AFR 0x04000000
#elif defined(FGI_A_6_AFR_AF5)
#define FGI_A_6_AFR 0x05000000
#elif defined(FGI_A_6_AFR_AF6)
#define FGI_A_6_AFR 0x06000000
#elif defined(FGI_A_6_AFR_AF7)
#define FGI_A_6_AFR 0x07000000
#else
#define FGI_A_6_AFR 0x00000000
#endif

#if defined(FGI_A_7_AFR_AF0)
#define FGI_A_7_AFR 0x00000000
#elif defined(FGI_A_7_AFR_AF1)
#define FGI_A_7_AFR 0x10000000
#elif defined(FGI_A_7_AFR_AF2)
#define FGI_A_7_AFR 0x20000000
#elif defined(FGI_A_7_AFR_AF3)
#define FGI_A_7_AFR 0x30000000
#elif defined(FGI_A_7_AFR_AF4)
#define FGI_A_7_AFR 0x40000000
#elif defined(FGI_A_7_AFR_AF5)
#define FGI_A_7_AFR 0x50000000
#elif defined(FGI_A_7_AFR_AF6)
#define FGI_A_7_AFR 0x60000000
#elif defined(FGI_A_7_AFR_AF7)
#define FGI_A_7_AFR 0x70000000
#else
#define FGI_A_7_AFR 0x00000000
#endif

#if defined(FGI_A_8_AFR_AF0)
#define FGI_A_8_AFR 0x00000000
#elif defined(FGI_A_8_AFR_AF1)
#define FGI_A_8_AFR 0x00000001
#elif defined(FGI_A_8_AFR_AF2)
#define FGI_A_8_AFR 0x00000002
#elif defined(FGI_A_8_AFR_AF3)
#define FGI_A_8_AFR 0x00000003
#elif defined(FGI_A_8_AFR_AF4)
#define FGI_A_8_AFR 0x00000004
#elif defined(FGI_A_8_AFR_AF5)
#define FGI_A_8_AFR 0x00000005
#elif defined(FGI_A_8_AFR_AF6)
#define FGI_A_8_AFR 0x00000006
#elif defined(FGI_A_8_AFR_AF7)
#define FGI_A_8_AFR 0x00000007
#else
#define FGI_A_8_AFR 0x00000000
#endif

#if defined(FGI_A_9_AFR_AF0)
#define FGI_A_9_AFR 0x00000000
#elif defined(FGI_A_9_AFR_AF1)
#define FGI_A_9_AFR 0x00000010
#elif defined(FGI_A_9_AFR_AF2)
#define FGI_A_9_AFR 0x00000020
#elif defined(FGI_A_9_AFR_AF3)
#define FGI_A_9_AFR 0x00000030
#elif defined(FGI_A_9_AFR_AF4)
#define FGI_A_9_AFR 0x00000040
#elif defined(FGI_A_9_AFR_AF5)
#define FGI_A_9_AFR 0x00000050
#elif defined(FGI_A_9_AFR_AF6)
#define FGI_A_9_AFR 0x00000060
#elif defined(FGI_A_9_AFR_AF7)
#define FGI_A_9_AFR 0x00000070
#else
#define FGI_A_9_AFR 0x00000000
#endif

#if defined(FGI_A_10_AFR_AF0)
#define FGI_A_10_AFR 0x00000000
#elif defined(FGI_A_10_AFR_AF1)
#define FGI_A_10_AFR 0x00000100
#elif defined(FGI_A_10_AFR_AF2)
#define FGI_A_10_AFR 0x00000200
#elif defined(FGI_A_10_AFR_AF3)
#define FGI_A_10_AFR 0x00000300
#elif defined(FGI_A_10_AFR_AF4)
#define FGI_A_10_AFR 0x00000400
#elif defined(FGI_A_10_AFR_AF5)
#define FGI_A_10_AFR 0x00000500
#elif defined(FGI_A_10_AFR_AF6)
#define FGI_A_10_AFR 0x00000600
#elif defined(FGI_A_10_AFR_AF7)
#define FGI_A_10_AFR 0x00000700
#else
#define FGI_A_10_AFR 0x00000000
#endif

#if defined(FGI_A_11_AFR_AF0)
#define FGI_A_11_AFR 0x00000000
#elif defined(FGI_A_11_AFR_AF1)
#define FGI_A_11_AFR 0x00001000
#elif defined(FGI_A_11_AFR_AF2)
#define FGI_A_11_AFR 0x00002000
#elif defined(FGI_A_11_AFR_AF3)
#define FGI_A_11_AFR 0x00003000
#elif defined(FGI_A_11_AFR_AF4)
#define FGI_A_11_AFR 0x00004000
#elif defined(FGI_A_11_AFR_AF5)
#define FGI_A_11_AFR 0x00005000
#elif defined(FGI_A_11_AFR_AF6)
#define FGI_A_11_AFR 0x00006000
#elif defined(FGI_A_11_AFR_AF7)
#define FGI_A_11_AFR 0x00007000
#else
#define FGI_A_11_AFR 0x00000000
#endif

#if defined(FGI_A_12_AFR_AF0)
#define FGI_A_12_AFR 0x00000000
#elif defined(FGI_A_12_AFR_AF1)
#define FGI_A_12_AFR 0x00010000
#elif defined(FGI_A_12_AFR_AF2)
#define FGI_A_12_AFR 0x00020000
#elif defined(FGI_A_12_AFR_AF3)
#define FGI_A_12_AFR 0x00030000
#elif defined(FGI_A_12_AFR_AF4)
#define FGI_A_12_AFR 0x00040000
#elif defined(FGI_A_12_AFR_AF5)
#define FGI_A_12_AFR 0x00050000
#elif defined(FGI_A_12_AFR_AF6)
#define FGI_A_12_AFR 0x00060000
#elif defined(FGI_A_12_AFR_AF7)
#define FGI_A_12_AFR 0x00070000
#else
#define FGI_A_12_AFR 0x00000000
#endif

#if defined(FGI_A_13_AFR_AF0)
#define FGI_A_13_AFR 0x00000000
#elif defined(FGI_A_13_AFR_AF1)
#define FGI_A_13_AFR 0x00100000
#elif defined(FGI_A_13_AFR_AF2)
#define FGI_A_13_AFR 0x00200000
#elif defined(FGI_A_13_AFR_AF3)
#define FGI_A_13_AFR 0x00300000
#elif defined(FGI_A_13_AFR_AF4)
#define FGI_A_13_AFR 0x00400000
#elif defined(FGI_A_13_AFR_AF5)
#define FGI_A_13_AFR 0x00500000
#elif defined(FGI_A_13_AFR_AF6)
#define FGI_A_13_AFR 0x00600000
#elif defined(FGI_A_13_AFR_AF7)
#define FGI_A_13_AFR 0x00700000
#else
#define FGI_A_13_AFR 0x00000000
#endif

#if defined(FGI_A_14_AFR_AF0)
#define FGI_A_14_AFR 0x00000000
#elif defined(FGI_A_14_AFR_AF1)
#define FGI_A_14_AFR 0x01000000
#elif defined(FGI_A_14_AFR_AF2)
#define FGI_A_14_AFR 0x02000000
#elif defined(FGI_A_14_AFR_AF3)
#define FGI_A_14_AFR 0x03000000
#elif defined(FGI_A_14_AFR_AF4)
#define FGI_A_14_AFR 0x04000000
#elif defined(FGI_A_14_AFR_AF5)
#define FGI_A_14_AFR 0x05000000
#elif defined(FGI_A_14_AFR_AF6)
#define FGI_A_14_AFR 0x06000000
#elif defined(FGI_A_14_AFR_AF7)
#define FGI_A_14_AFR 0x07000000
#else
#define FGI_A_14_AFR 0x00000000
#endif

#if defined(FGI_A_15_AFR_AF0)
#define FGI_A_15_AFR 0x00000000
#elif defined(FGI_A_15_AFR_AF1)
#define FGI_A_15_AFR 0x10000000
#elif defined(FGI_A_15_AFR_AF2)
#define FGI_A_15_AFR 0x20000000
#elif defined(FGI_A_15_AFR_AF3)
#define FGI_A_15_AFR 0x30000000
#elif defined(FGI_A_15_AFR_AF4)
#define FGI_A_15_AFR 0x40000000
#elif defined(FGI_A_15_AFR_AF5)
#define FGI_A_15_AFR 0x50000000
#elif defined(FGI_A_15_AFR_AF6)
#define FGI_A_15_AFR 0x60000000
#elif defined(FGI_A_15_AFR_AF7)
#define FGI_A_15_AFR 0x70000000
#else
#define FGI_A_15_AFR 0x00000000
#endif

#if defined(FGI_B_0_ODR_0)
#define FGI_B_0_ODR 0x00000000
#elif defined(FGI_B_0_ODR_1)
#define FGI_B_0_ODR 0x00000001
#else
#define FGI_B_0_ODR 0x00000000
#endif

#if defined(FGI_B_1_ODR_0)
#define FGI_B_1_ODR 0x00000000
#elif defined(FGI_B_1_ODR_1)
#define FGI_B_1_ODR 0x00000002
#else
#define FGI_B_1_ODR 0x00000000
#endif

#if defined(FGI_B_2_ODR_0)
#define FGI_B_2_ODR 0x00000000
#elif defined(FGI_B_2_ODR_1)
#define FGI_B_2_ODR 0x00000004
#else
#define FGI_B_2_ODR 0x00000000
#endif

#if defined(FGI_B_3_ODR_0)
#define FGI_B_3_ODR 0x00000000
#elif defined(FGI_B_3_ODR_1)
#define FGI_B_3_ODR 0x00000008
#else
#define FGI_B_3_ODR 0x00000000
#endif

#if defined(FGI_B_4_ODR_0)
#define FGI_B_4_ODR 0x00000000
#elif defined(FGI_B_4_ODR_1)
#define FGI_B_4_ODR 0x00000010
#else
#define FGI_B_4_ODR 0x00000000
#endif

#if defined(FGI_B_5_ODR_0)
#define FGI_B_5_ODR 0x00000000
#elif defined(FGI_B_5_ODR_1)
#define FGI_B_5_ODR 0x00000020
#else
#define FGI_B_5_ODR 0x00000000
#endif

#if defined(FGI_B_6_ODR_0)
#define FGI_B_6_ODR 0x00000000
#elif defined(FGI_B_6_ODR_1)
#define FGI_B_6_ODR 0x00000040
#else
#define FGI_B_6_ODR 0x00000000
#endif

#if defined(FGI_B_7_ODR_0)
#define FGI_B_7_ODR 0x00000000
#elif defined(FGI_B_7_ODR_1)
#define FGI_B_7_ODR 0x00000080
#else
#define FGI_B_7_ODR 0x00000000
#endif

#if defined(FGI_B_8_ODR_0)
#define FGI_B_8_ODR 0x00000000
#elif defined(FGI_B_8_ODR_1)
#define FGI_B_8_ODR 0x00000100
#else
#define FGI_B_8_ODR 0x00000000
#endif

#if defined(FGI_B_9_ODR_0)
#define FGI_B_9_ODR 0x00000000
#elif defined(FGI_B_9_ODR_1)
#define FGI_B_9_ODR 0x00000200
#else
#define FGI_B_9_ODR 0x00000000
#endif

#if defined(FGI_B_10_ODR_0)
#define FGI_B_10_ODR 0x00000000
#elif defined(FGI_B_10_ODR_1)
#define FGI_B_10_ODR 0x00000400
#else
#define FGI_B_10_ODR 0x00000000
#endif

#if defined(FGI_B_11_ODR_0)
#define FGI_B_11_ODR 0x00000000
#elif defined(FGI_B_11_ODR_1)
#define FGI_B_11_ODR 0x00000800
#else
#define FGI_B_11_ODR 0x00000000
#endif

#if defined(FGI_B_12_ODR_0)
#define FGI_B_12_ODR 0x00000000
#elif defined(FGI_B_12_ODR_1)
#define FGI_B_12_ODR 0x00001000
#else
#define FGI_B_12_ODR 0x00000000
#endif

#if defined(FGI_B_13_ODR_0)
#define FGI_B_13_ODR 0x00000000
#elif defined(FGI_B_13_ODR_1)
#define FGI_B_13_ODR 0x00002000
#else
#define FGI_B_13_ODR 0x00000000
#endif

#if defined(FGI_B_14_ODR_0)
#define FGI_B_14_ODR 0x00000000
#elif defined(FGI_B_14_ODR_1)
#define FGI_B_14_ODR 0x00004000
#else
#define FGI_B_14_ODR 0x00000000
#endif

#if defined(FGI_B_15_ODR_0)
#define FGI_B_15_ODR 0x00000000
#elif defined(FGI_B_15_ODR_1)
#define FGI_B_15_ODR 0x00008000
#else
#define FGI_B_15_ODR 0x00000000
#endif

#if defined(FGI_B_0_MODER_IN)
#define FGI_B_0_MODER 0x00000000
#elif defined(FGI_B_0_MODER_OUT)
#define FGI_B_0_MODER 0x00000001
#elif defined(FGI_B_0_MODER_AF)
#define FGI_B_0_MODER 0x00000002
#elif defined(FGI_B_0_MODER_AN)
#define FGI_B_0_MODER 0x00000003
#else
#define FGI_B_0_MODER 0x00000000
#endif

#if defined(FGI_B_1_MODER_IN)
#define FGI_B_1_MODER 0x00000000
#elif defined(FGI_B_1_MODER_OUT)
#define FGI_B_1_MODER 0x00000004
#elif defined(FGI_B_1_MODER_AF)
#define FGI_B_1_MODER 0x00000008
#elif defined(FGI_B_1_MODER_AN)
#define FGI_B_1_MODER 0x0000000c
#else
#define FGI_B_1_MODER 0x00000000
#endif

#if defined(FGI_B_2_MODER_IN)
#define FGI_B_2_MODER 0x00000000
#elif defined(FGI_B_2_MODER_OUT)
#define FGI_B_2_MODER 0x00000010
#elif defined(FGI_B_2_MODER_AF)
#define FGI_B_2_MODER 0x00000020
#elif defined(FGI_B_2_MODER_AN)
#define FGI_B_2_MODER 0x00000030
#else
#define FGI_B_2_MODER 0x00000000
#endif

#if defined(FGI_B_3_MODER_IN)
#define FGI_B_3_MODER 0x00000000
#elif defined(FGI_B_3_MODER_OUT)
#define FGI_B_3_MODER 0x00000040
#elif defined(FGI_B_3_MODER_AF)
#define FGI_B_3_MODER 0x00000080
#elif defined(FGI_B_3_MODER_AN)
#define FGI_B_3_MODER 0x000000c0
#else
#define FGI_B_3_MODER 0x00000000
#endif

#if defined(FGI_B_4_MODER_IN)
#define FGI_B_4_MODER 0x00000000
#elif defined(FGI_B_4_MODER_OUT)
#define FGI_B_4_MODER 0x00000100
#elif defined(FGI_B_4_MODER_AF)
#define FGI_B_4_MODER 0x00000200
#elif defined(FGI_B_4_MODER_AN)
#define FGI_B_4_MODER 0x00000300
#else
#define FGI_B_4_MODER 0x00000000
#endif

#if defined(FGI_B_5_MODER_IN)
#define FGI_B_5_MODER 0x00000000
#elif defined(FGI_B_5_MODER_OUT)
#define FGI_B_5_MODER 0x00000400
#elif defined(FGI_B_5_MODER_AF)
#define FGI_B_5_MODER 0x00000800
#elif defined(FGI_B_5_MODER_AN)
#define FGI_B_5_MODER 0x00000c00
#else
#define FGI_B_5_MODER 0x00000000
#endif

#if defined(FGI_B_6_MODER_IN)
#define FGI_B_6_MODER 0x00000000
#elif defined(FGI_B_6_MODER_OUT)
#define FGI_B_6_MODER 0x00001000
#elif defined(FGI_B_6_MODER_AF)
#define FGI_B_6_MODER 0x00002000
#elif defined(FGI_B_6_MODER_AN)
#define FGI_B_6_MODER 0x00003000
#else
#define FGI_B_6_MODER 0x00000000
#endif

#if defined(FGI_B_7_MODER_IN)
#define FGI_B_7_MODER 0x00000000
#elif defined(FGI_B_7_MODER_OUT)
#define FGI_B_7_MODER 0x00004000
#elif defined(FGI_B_7_MODER_AF)
#define FGI_B_7_MODER 0x00008000
#elif defined(FGI_B_7_MODER_AN)
#define FGI_B_7_MODER 0x0000c000
#else
#define FGI_B_7_MODER 0x00000000
#endif

#if defined(FGI_B_8_MODER_IN)
#define FGI_B_8_MODER 0x00000000
#elif defined(FGI_B_8_MODER_OUT)
#define FGI_B_8_MODER 0x00010000
#elif defined(FGI_B_8_MODER_AF)
#define FGI_B_8_MODER 0x00020000
#elif defined(FGI_B_8_MODER_AN)
#define FGI_B_8_MODER 0x00030000
#else
#define FGI_B_8_MODER 0x00000000
#endif

#if defined(FGI_B_9_MODER_IN)
#define FGI_B_9_MODER 0x00000000
#elif defined(FGI_B_9_MODER_OUT)
#define FGI_B_9_MODER 0x00040000
#elif defined(FGI_B_9_MODER_AF)
#define FGI_B_9_MODER 0x00080000
#elif defined(FGI_B_9_MODER_AN)
#define FGI_B_9_MODER 0x000c0000
#else
#define FGI_B_9_MODER 0x00000000
#endif

#if defined(FGI_B_10_MODER_IN)
#define FGI_B_10_MODER 0x00000000
#elif defined(FGI_B_10_MODER_OUT)
#define FGI_B_10_MODER 0x00100000
#elif defined(FGI_B_10_MODER_AF)
#define FGI_B_10_MODER 0x00200000
#elif defined(FGI_B_10_MODER_AN)
#define FGI_B_10_MODER 0x00300000
#else
#define FGI_B_10_MODER 0x00000000
#endif

#if defined(FGI_B_11_MODER_IN)
#define FGI_B_11_MODER 0x00000000
#elif defined(FGI_B_11_MODER_OUT)
#define FGI_B_11_MODER 0x00400000
#elif defined(FGI_B_11_MODER_AF)
#define FGI_B_11_MODER 0x00800000
#elif defined(FGI_B_11_MODER_AN)
#define FGI_B_11_MODER 0x00c00000
#else
#define FGI_B_11_MODER 0x00000000
#endif

#if defined(FGI_B_12_MODER_IN)
#define FGI_B_12_MODER 0x00000000
#elif defined(FGI_B_12_MODER_OUT)
#define FGI_B_12_MODER 0x01000000
#elif defined(FGI_B_12_MODER_AF)
#define FGI_B_12_MODER 0x02000000
#elif defined(FGI_B_12_MODER_AN)
#define FGI_B_12_MODER 0x03000000
#else
#define FGI_B_12_MODER 0x00000000
#endif

#if defined(FGI_B_13_MODER_IN)
#define FGI_B_13_MODER 0x00000000
#elif defined(FGI_B_13_MODER_OUT)
#define FGI_B_13_MODER 0x04000000
#elif defined(FGI_B_13_MODER_AF)
#define FGI_B_13_MODER 0x08000000
#elif defined(FGI_B_13_MODER_AN)
#define FGI_B_13_MODER 0x0c000000
#else
#define FGI_B_13_MODER 0x00000000
#endif

#if defined(FGI_B_14_MODER_IN)
#define FGI_B_14_MODER 0x00000000
#elif defined(FGI_B_14_MODER_OUT)
#define FGI_B_14_MODER 0x10000000
#elif defined(FGI_B_14_MODER_AF)
#define FGI_B_14_MODER 0x20000000
#elif defined(FGI_B_14_MODER_AN)
#define FGI_B_14_MODER 0x30000000
#else
#define FGI_B_14_MODER 0x00000000
#endif

#if defined(FGI_B_15_MODER_IN)
#define FGI_B_15_MODER 0x00000000
#elif defined(FGI_B_15_MODER_OUT)
#define FGI_B_15_MODER 0x40000000
#elif defined(FGI_B_15_MODER_AF)
#define FGI_B_15_MODER 0x80000000
#elif defined(FGI_B_15_MODER_AN)
#define FGI_B_15_MODER 0xc0000000
#else
#define FGI_B_15_MODER 0x00000000
#endif

#if defined(FGI_B_0_OTYPER_PP)
#define FGI_B_0_OTYPER 0x00000000
#elif defined(FGI_B_0_OTYPER_OD)
#define FGI_B_0_OTYPER 0x00000001
#else
#define FGI_B_0_OTYPER 0x00000000
#endif

#if defined(FGI_B_1_OTYPER_PP)
#define FGI_B_1_OTYPER 0x00000000
#elif defined(FGI_B_1_OTYPER_OD)
#define FGI_B_1_OTYPER 0x00000002
#else
#define FGI_B_1_OTYPER 0x00000000
#endif

#if defined(FGI_B_2_OTYPER_PP)
#define FGI_B_2_OTYPER 0x00000000
#elif defined(FGI_B_2_OTYPER_OD)
#define FGI_B_2_OTYPER 0x00000004
#else
#define FGI_B_2_OTYPER 0x00000000
#endif

#if defined(FGI_B_3_OTYPER_PP)
#define FGI_B_3_OTYPER 0x00000000
#elif defined(FGI_B_3_OTYPER_OD)
#define FGI_B_3_OTYPER 0x00000008
#else
#define FGI_B_3_OTYPER 0x00000000
#endif

#if defined(FGI_B_4_OTYPER_PP)
#define FGI_B_4_OTYPER 0x00000000
#elif defined(FGI_B_4_OTYPER_OD)
#define FGI_B_4_OTYPER 0x00000010
#else
#define FGI_B_4_OTYPER 0x00000000
#endif

#if defined(FGI_B_5_OTYPER_PP)
#define FGI_B_5_OTYPER 0x00000000
#elif defined(FGI_B_5_OTYPER_OD)
#define FGI_B_5_OTYPER 0x00000020
#else
#define FGI_B_5_OTYPER 0x00000000
#endif

#if defined(FGI_B_6_OTYPER_PP)
#define FGI_B_6_OTYPER 0x00000000
#elif defined(FGI_B_6_OTYPER_OD)
#define FGI_B_6_OTYPER 0x00000040
#else
#define FGI_B_6_OTYPER 0x00000000
#endif

#if defined(FGI_B_7_OTYPER_PP)
#define FGI_B_7_OTYPER 0x00000000
#elif defined(FGI_B_7_OTYPER_OD)
#define FGI_B_7_OTYPER 0x00000080
#else
#define FGI_B_7_OTYPER 0x00000000
#endif

#if defined(FGI_B_8_OTYPER_PP)
#define FGI_B_8_OTYPER 0x00000000
#elif defined(FGI_B_8_OTYPER_OD)
#define FGI_B_8_OTYPER 0x00000100
#else
#define FGI_B_8_OTYPER 0x00000000
#endif

#if defined(FGI_B_9_OTYPER_PP)
#define FGI_B_9_OTYPER 0x00000000
#elif defined(FGI_B_9_OTYPER_OD)
#define FGI_B_9_OTYPER 0x00000200
#else
#define FGI_B_9_OTYPER 0x00000000
#endif

#if defined(FGI_B_10_OTYPER_PP)
#define FGI_B_10_OTYPER 0x00000000
#elif defined(FGI_B_10_OTYPER_OD)
#define FGI_B_10_OTYPER 0x00000400
#else
#define FGI_B_10_OTYPER 0x00000000
#endif

#if defined(FGI_B_11_OTYPER_PP)
#define FGI_B_11_OTYPER 0x00000000
#elif defined(FGI_B_11_OTYPER_OD)
#define FGI_B_11_OTYPER 0x00000800
#else
#define FGI_B_11_OTYPER 0x00000000
#endif

#if defined(FGI_B_12_OTYPER_PP)
#define FGI_B_12_OTYPER 0x00000000
#elif defined(FGI_B_12_OTYPER_OD)
#define FGI_B_12_OTYPER 0x00001000
#else
#define FGI_B_12_OTYPER 0x00000000
#endif

#if defined(FGI_B_13_OTYPER_PP)
#define FGI_B_13_OTYPER 0x00000000
#elif defined(FGI_B_13_OTYPER_OD)
#define FGI_B_13_OTYPER 0x00002000
#else
#define FGI_B_13_OTYPER 0x00000000
#endif

#if defined(FGI_B_14_OTYPER_PP)
#define FGI_B_14_OTYPER 0x00000000
#elif defined(FGI_B_14_OTYPER_OD)
#define FGI_B_14_OTYPER 0x00004000
#else
#define FGI_B_14_OTYPER 0x00000000
#endif

#if defined(FGI_B_15_OTYPER_PP)
#define FGI_B_15_OTYPER 0x00000000
#elif defined(FGI_B_15_OTYPER_OD)
#define FGI_B_15_OTYPER 0x00008000
#else
#define FGI_B_15_OTYPER 0x00000000
#endif

#if defined(FGI_B_0_OSPEEDR_LOW)
#define FGI_B_0_OSPEEDR 0x00000000
#elif defined(FGI_B_0_OSPEEDR_MEDIUM)
#define FGI_B_0_OSPEEDR 0x00000001
#elif defined(FGI_B_0_OSPEEDR_HIGH)
#define FGI_B_0_OSPEEDR 0x00000003
#else
#define FGI_B_0_OSPEEDR 0x00000000
#endif

#if defined(FGI_B_1_OSPEEDR_LOW)
#define FGI_B_1_OSPEEDR 0x00000000
#elif defined(FGI_B_1_OSPEEDR_MEDIUM)
#define FGI_B_1_OSPEEDR 0x00000004
#elif defined(FGI_B_1_OSPEEDR_HIGH)
#define FGI_B_1_OSPEEDR 0x0000000c
#else
#define FGI_B_1_OSPEEDR 0x00000000
#endif

#if defined(FGI_B_2_OSPEEDR_LOW)
#define FGI_B_2_OSPEEDR 0x00000000
#elif defined(FGI_B_2_OSPEEDR_MEDIUM)
#define FGI_B_2_OSPEEDR 0x00000010
#elif defined(FGI_B_2_OSPEEDR_HIGH)
#define FGI_B_2_OSPEEDR 0x00000030
#else
#define FGI_B_2_OSPEEDR 0x00000000
#endif

#if defined(FGI_B_3_OSPEEDR_LOW)
#define FGI_B_3_OSPEEDR 0x00000000
#elif defined(FGI_B_3_OSPEEDR_MEDIUM)
#define FGI_B_3_OSPEEDR 0x00000040
#elif defined(FGI_B_3_OSPEEDR_HIGH)
#define FGI_B_3_OSPEEDR 0x000000c0
#else
#define FGI_B_3_OSPEEDR 0x00000000
#endif

#if defined(FGI_B_4_OSPEEDR_LOW)
#define FGI_B_4_OSPEEDR 0x00000000
#elif defined(FGI_B_4_OSPEEDR_MEDIUM)
#define FGI_B_4_OSPEEDR 0x00000100
#elif defined(FGI_B_4_OSPEEDR_HIGH)
#define FGI_B_4_OSPEEDR 0x00000300
#else
#define FGI_B_4_OSPEEDR 0x00000000
#endif

#if defined(FGI_B_5_OSPEEDR_LOW)
#define FGI_B_5_OSPEEDR 0x00000000
#elif defined(FGI_B_5_OSPEEDR_MEDIUM)
#define FGI_B_5_OSPEEDR 0x00000400
#elif defined(FGI_B_5_OSPEEDR_HIGH)
#define FGI_B_5_OSPEEDR 0x00000c00
#else
#define FGI_B_5_OSPEEDR 0x00000000
#endif

#if defined(FGI_B_6_OSPEEDR_LOW)
#define FGI_B_6_OSPEEDR 0x00000000
#elif defined(FGI_B_6_OSPEEDR_MEDIUM)
#define FGI_B_6_OSPEEDR 0x00001000
#elif defined(FGI_B_6_OSPEEDR_HIGH)
#define FGI_B_6_OSPEEDR 0x00003000
#else
#define FGI_B_6_OSPEEDR 0x00000000
#endif

#if defined(FGI_B_7_OSPEEDR_LOW)
#define FGI_B_7_OSPEEDR 0x00000000
#elif defined(FGI_B_7_OSPEEDR_MEDIUM)
#define FGI_B_7_OSPEEDR 0x00004000
#elif defined(FGI_B_7_OSPEEDR_HIGH)
#define FGI_B_7_OSPEEDR 0x0000c000
#else
#define FGI_B_7_OSPEEDR 0x00000000
#endif

#if defined(FGI_B_8_OSPEEDR_LOW)
#define FGI_B_8_OSPEEDR 0x00000000
#elif defined(FGI_B_8_OSPEEDR_MEDIUM)
#define FGI_B_8_OSPEEDR 0x00010000
#elif defined(FGI_B_8_OSPEEDR_HIGH)
#define FGI_B_8_OSPEEDR 0x00030000
#else
#define FGI_B_8_OSPEEDR 0x00000000
#endif

#if defined(FGI_B_9_OSPEEDR_LOW)
#define FGI_B_9_OSPEEDR 0x00000000
#elif defined(FGI_B_9_OSPEEDR_MEDIUM)
#define FGI_B_9_OSPEEDR 0x00040000
#elif defined(FGI_B_9_OSPEEDR_HIGH)
#define FGI_B_9_OSPEEDR 0x000c0000
#else
#define FGI_B_9_OSPEEDR 0x00000000
#endif

#if defined(FGI_B_10_OSPEEDR_LOW)
#define FGI_B_10_OSPEEDR 0x00000000
#elif defined(FGI_B_10_OSPEEDR_MEDIUM)
#define FGI_B_10_OSPEEDR 0x00100000
#elif defined(FGI_B_10_OSPEEDR_HIGH)
#define FGI_B_10_OSPEEDR 0x00300000
#else
#define FGI_B_10_OSPEEDR 0x00000000
#endif

#if defined(FGI_B_11_OSPEEDR_LOW)
#define FGI_B_11_OSPEEDR 0x00000000
#elif defined(FGI_B_11_OSPEEDR_MEDIUM)
#define FGI_B_11_OSPEEDR 0x00400000
#elif defined(FGI_B_11_OSPEEDR_HIGH)
#define FGI_B_11_OSPEEDR 0x00c00000
#else
#define FGI_B_11_OSPEEDR 0x00000000
#endif

#if defined(FGI_B_12_OSPEEDR_LOW)
#define FGI_B_12_OSPEEDR 0x00000000
#elif defined(FGI_B_12_OSPEEDR_MEDIUM)
#define FGI_B_12_OSPEEDR 0x01000000
#elif defined(FGI_B_12_OSPEEDR_HIGH)
#define FGI_B_12_OSPEEDR 0x03000000
#else
#define FGI_B_12_OSPEEDR 0x00000000
#endif

#if defined(FGI_B_13_OSPEEDR_LOW)
#define FGI_B_13_OSPEEDR 0x00000000
#elif defined(FGI_B_13_OSPEEDR_MEDIUM)
#define FGI_B_13_OSPEEDR 0x04000000
#elif defined(FGI_B_13_OSPEEDR_HIGH)
#define FGI_B_13_OSPEEDR 0x0c000000
#else
#define FGI_B_13_OSPEEDR 0x00000000
#endif

#if defined(FGI_B_14_OSPEEDR_LOW)
#define FGI_B_14_OSPEEDR 0x00000000
#elif defined(FGI_B_14_OSPEEDR_MEDIUM)
#define FGI_B_14_OSPEEDR 0x10000000
#elif defined(FGI_B_14_OSPEEDR_HIGH)
#define FGI_B_14_OSPEEDR 0x30000000
#else
#define FGI_B_14_OSPEEDR 0x00000000
#endif

#if defined(FGI_B_15_OSPEEDR_LOW)
#define FGI_B_15_OSPEEDR 0x00000000
#elif defined(FGI_B_15_OSPEEDR_MEDIUM)
#define FGI_B_15_OSPEEDR 0x40000000
#elif defined(FGI_B_15_OSPEEDR_HIGH)
#define FGI_B_15_OSPEEDR 0xc0000000
#else
#define FGI_B_15_OSPEEDR 0x00000000
#endif

#if defined(FGI_B_0_PUPDR_NOPULL)
#define FGI_B_0_PUPDR 0x00000000
#elif defined(FGI_B_0_PUPDR_PULL_UP)
#define FGI_B_0_PUPDR 0x00000001
#elif defined(FGI_B_0_PUPDR_PULL_DOWN)
#define FGI_B_0_PUPDR 0x00000003
#else
#define FGI_B_0_PUPDR 0x00000000
#endif

#if defined(FGI_B_1_PUPDR_NOPULL)
#define FGI_B_1_PUPDR 0x00000000
#elif defined(FGI_B_1_PUPDR_PULL_UP)
#define FGI_B_1_PUPDR 0x00000004
#elif defined(FGI_B_1_PUPDR_PULL_DOWN)
#define FGI_B_1_PUPDR 0x0000000c
#else
#define FGI_B_1_PUPDR 0x00000000
#endif

#if defined(FGI_B_2_PUPDR_NOPULL)
#define FGI_B_2_PUPDR 0x00000000
#elif defined(FGI_B_2_PUPDR_PULL_UP)
#define FGI_B_2_PUPDR 0x00000010
#elif defined(FGI_B_2_PUPDR_PULL_DOWN)
#define FGI_B_2_PUPDR 0x00000030
#else
#define FGI_B_2_PUPDR 0x00000000
#endif

#if defined(FGI_B_3_PUPDR_NOPULL)
#define FGI_B_3_PUPDR 0x00000000
#elif defined(FGI_B_3_PUPDR_PULL_UP)
#define FGI_B_3_PUPDR 0x00000040
#elif defined(FGI_B_3_PUPDR_PULL_DOWN)
#define FGI_B_3_PUPDR 0x000000c0
#else
#define FGI_B_3_PUPDR 0x00000000
#endif

#if defined(FGI_B_4_PUPDR_NOPULL)
#define FGI_B_4_PUPDR 0x00000000
#elif defined(FGI_B_4_PUPDR_PULL_UP)
#define FGI_B_4_PUPDR 0x00000100
#elif defined(FGI_B_4_PUPDR_PULL_DOWN)
#define FGI_B_4_PUPDR 0x00000300
#else
#define FGI_B_4_PUPDR 0x00000000
#endif

#if defined(FGI_B_5_PUPDR_NOPULL)
#define FGI_B_5_PUPDR 0x00000000
#elif defined(FGI_B_5_PUPDR_PULL_UP)
#define FGI_B_5_PUPDR 0x00000400
#elif defined(FGI_B_5_PUPDR_PULL_DOWN)
#define FGI_B_5_PUPDR 0x00000c00
#else
#define FGI_B_5_PUPDR 0x00000000
#endif

#if defined(FGI_B_6_PUPDR_NOPULL)
#define FGI_B_6_PUPDR 0x00000000
#elif defined(FGI_B_6_PUPDR_PULL_UP)
#define FGI_B_6_PUPDR 0x00001000
#elif defined(FGI_B_6_PUPDR_PULL_DOWN)
#define FGI_B_6_PUPDR 0x00003000
#else
#define FGI_B_6_PUPDR 0x00000000
#endif

#if defined(FGI_B_7_PUPDR_NOPULL)
#define FGI_B_7_PUPDR 0x00000000
#elif defined(FGI_B_7_PUPDR_PULL_UP)
#define FGI_B_7_PUPDR 0x00004000
#elif defined(FGI_B_7_PUPDR_PULL_DOWN)
#define FGI_B_7_PUPDR 0x0000c000
#else
#define FGI_B_7_PUPDR 0x00000000
#endif

#if defined(FGI_B_8_PUPDR_NOPULL)
#define FGI_B_8_PUPDR 0x00000000
#elif defined(FGI_B_8_PUPDR_PULL_UP)
#define FGI_B_8_PUPDR 0x00010000
#elif defined(FGI_B_8_PUPDR_PULL_DOWN)
#define FGI_B_8_PUPDR 0x00030000
#else
#define FGI_B_8_PUPDR 0x00000000
#endif

#if defined(FGI_B_9_PUPDR_NOPULL)
#define FGI_B_9_PUPDR 0x00000000
#elif defined(FGI_B_9_PUPDR_PULL_UP)
#define FGI_B_9_PUPDR 0x00040000
#elif defined(FGI_B_9_PUPDR_PULL_DOWN)
#define FGI_B_9_PUPDR 0x000c0000
#else
#define FGI_B_9_PUPDR 0x00000000
#endif

#if defined(FGI_B_10_PUPDR_NOPULL)
#define FGI_B_10_PUPDR 0x00000000
#elif defined(FGI_B_10_PUPDR_PULL_UP)
#define FGI_B_10_PUPDR 0x00100000
#elif defined(FGI_B_10_PUPDR_PULL_DOWN)
#define FGI_B_10_PUPDR 0x00300000
#else
#define FGI_B_10_PUPDR 0x00000000
#endif

#if defined(FGI_B_11_PUPDR_NOPULL)
#define FGI_B_11_PUPDR 0x00000000
#elif defined(FGI_B_11_PUPDR_PULL_UP)
#define FGI_B_11_PUPDR 0x00400000
#elif defined(FGI_B_11_PUPDR_PULL_DOWN)
#define FGI_B_11_PUPDR 0x00c00000
#else
#define FGI_B_11_PUPDR 0x00000000
#endif

#if defined(FGI_B_12_PUPDR_NOPULL)
#define FGI_B_12_PUPDR 0x00000000
#elif defined(FGI_B_12_PUPDR_PULL_UP)
#define FGI_B_12_PUPDR 0x01000000
#elif defined(FGI_B_12_PUPDR_PULL_DOWN)
#define FGI_B_12_PUPDR 0x03000000
#else
#define FGI_B_12_PUPDR 0x00000000
#endif

#if defined(FGI_B_13_PUPDR_NOPULL)
#define FGI_B_13_PUPDR 0x00000000
#elif defined(FGI_B_13_PUPDR_PULL_UP)
#define FGI_B_13_PUPDR 0x04000000
#elif defined(FGI_B_13_PUPDR_PULL_DOWN)
#define FGI_B_13_PUPDR 0x0c000000
#else
#define FGI_B_13_PUPDR 0x00000000
#endif

#if defined(FGI_B_14_PUPDR_NOPULL)
#define FGI_B_14_PUPDR 0x00000000
#elif defined(FGI_B_14_PUPDR_PULL_UP)
#define FGI_B_14_PUPDR 0x10000000
#elif defined(FGI_B_14_PUPDR_PULL_DOWN)
#define FGI_B_14_PUPDR 0x30000000
#else
#define FGI_B_14_PUPDR 0x00000000
#endif

#if defined(FGI_B_15_PUPDR_NOPULL)
#define FGI_B_15_PUPDR 0x00000000
#elif defined(FGI_B_15_PUPDR_PULL_UP)
#define FGI_B_15_PUPDR 0x40000000
#elif defined(FGI_B_15_PUPDR_PULL_DOWN)
#define FGI_B_15_PUPDR 0xc0000000
#else
#define FGI_B_15_PUPDR 0x00000000
#endif

#if defined(FGI_B_0_AFR_AF0)
#define FGI_B_0_AFR 0x00000000
#elif defined(FGI_B_0_AFR_AF1)
#define FGI_B_0_AFR 0x00000001
#elif defined(FGI_B_0_AFR_AF2)
#define FGI_B_0_AFR 0x00000002
#elif defined(FGI_B_0_AFR_AF3)
#define FGI_B_0_AFR 0x00000003
#elif defined(FGI_B_0_AFR_AF4)
#define FGI_B_0_AFR 0x00000004
#elif defined(FGI_B_0_AFR_AF5)
#define FGI_B_0_AFR 0x00000005
#elif defined(FGI_B_0_AFR_AF6)
#define FGI_B_0_AFR 0x00000006
#elif defined(FGI_B_0_AFR_AF7)
#define FGI_B_0_AFR 0x00000007
#else
#define FGI_B_0_AFR 0x00000000
#endif

#if defined(FGI_B_1_AFR_AF0)
#define FGI_B_1_AFR 0x00000000
#elif defined(FGI_B_1_AFR_AF1)
#define FGI_B_1_AFR 0x00000010
#elif defined(FGI_B_1_AFR_AF2)
#define FGI_B_1_AFR 0x00000020
#elif defined(FGI_B_1_AFR_AF3)
#define FGI_B_1_AFR 0x00000030
#elif defined(FGI_B_1_AFR_AF4)
#define FGI_B_1_AFR 0x00000040
#elif defined(FGI_B_1_AFR_AF5)
#define FGI_B_1_AFR 0x00000050
#elif defined(FGI_B_1_AFR_AF6)
#define FGI_B_1_AFR 0x00000060
#elif defined(FGI_B_1_AFR_AF7)
#define FGI_B_1_AFR 0x00000070
#else
#define FGI_B_1_AFR 0x00000000
#endif

#if defined(FGI_B_2_AFR_AF0)
#define FGI_B_2_AFR 0x00000000
#elif defined(FGI_B_2_AFR_AF1)
#define FGI_B_2_AFR 0x00000100
#elif defined(FGI_B_2_AFR_AF2)
#define FGI_B_2_AFR 0x00000200
#elif defined(FGI_B_2_AFR_AF3)
#define FGI_B_2_AFR 0x00000300
#elif defined(FGI_B_2_AFR_AF4)
#define FGI_B_2_AFR 0x00000400
#elif defined(FGI_B_2_AFR_AF5)
#define FGI_B_2_AFR 0x00000500
#elif defined(FGI_B_2_AFR_AF6)
#define FGI_B_2_AFR 0x00000600
#elif defined(FGI_B_2_AFR_AF7)
#define FGI_B_2_AFR 0x00000700
#else
#define FGI_B_2_AFR 0x00000000
#endif

#if defined(FGI_B_3_AFR_AF0)
#define FGI_B_3_AFR 0x00000000
#elif defined(FGI_B_3_AFR_AF1)
#define FGI_B_3_AFR 0x00001000
#elif defined(FGI_B_3_AFR_AF2)
#define FGI_B_3_AFR 0x00002000
#elif defined(FGI_B_3_AFR_AF3)
#define FGI_B_3_AFR 0x00003000
#elif defined(FGI_B_3_AFR_AF4)
#define FGI_B_3_AFR 0x00004000
#elif defined(FGI_B_3_AFR_AF5)
#define FGI_B_3_AFR 0x00005000
#elif defined(FGI_B_3_AFR_AF6)
#define FGI_B_3_AFR 0x00006000
#elif defined(FGI_B_3_AFR_AF7)
#define FGI_B_3_AFR 0x00007000
#else
#define FGI_B_3_AFR 0x00000000
#endif

#if defined(FGI_B_4_AFR_AF0)
#define FGI_B_4_AFR 0x00000000
#elif defined(FGI_B_4_AFR_AF1)
#define FGI_B_4_AFR 0x00010000
#elif defined(FGI_B_4_AFR_AF2)
#define FGI_B_4_AFR 0x00020000
#elif defined(FGI_B_4_AFR_AF3)
#define FGI_B_4_AFR 0x00030000
#elif defined(FGI_B_4_AFR_AF4)
#define FGI_B_4_AFR 0x00040000
#elif defined(FGI_B_4_AFR_AF5)
#define FGI_B_4_AFR 0x00050000
#elif defined(FGI_B_4_AFR_AF6)
#define FGI_B_4_AFR 0x00060000
#elif defined(FGI_B_4_AFR_AF7)
#define FGI_B_4_AFR 0x00070000
#else
#define FGI_B_4_AFR 0x00000000
#endif

#if defined(FGI_B_5_AFR_AF0)
#define FGI_B_5_AFR 0x00000000
#elif defined(FGI_B_5_AFR_AF1)
#define FGI_B_5_AFR 0x00100000
#elif defined(FGI_B_5_AFR_AF2)
#define FGI_B_5_AFR 0x00200000
#elif defined(FGI_B_5_AFR_AF3)
#define FGI_B_5_AFR 0x00300000
#elif defined(FGI_B_5_AFR_AF4)
#define FGI_B_5_AFR 0x00400000
#elif defined(FGI_B_5_AFR_AF5)
#define FGI_B_5_AFR 0x00500000
#elif defined(FGI_B_5_AFR_AF6)
#define FGI_B_5_AFR 0x00600000
#elif defined(FGI_B_5_AFR_AF7)
#define FGI_B_5_AFR 0x00700000
#else
#define FGI_B_5_AFR 0x00000000
#endif

#if defined(FGI_B_6_AFR_AF0)
#define FGI_B_6_AFR 0x00000000
#elif defined(FGI_B_6_AFR_AF1)
#define FGI_B_6_AFR 0x01000000
#elif defined(FGI_B_6_AFR_AF2)
#define FGI_B_6_AFR 0x02000000
#elif defined(FGI_B_6_AFR_AF3)
#define FGI_B_6_AFR 0x03000000
#elif defined(FGI_B_6_AFR_AF4)
#define FGI_B_6_AFR 0x04000000
#elif defined(FGI_B_6_AFR_AF5)
#define FGI_B_6_AFR 0x05000000
#elif defined(FGI_B_6_AFR_AF6)
#define FGI_B_6_AFR 0x06000000
#elif defined(FGI_B_6_AFR_AF7)
#define FGI_B_6_AFR 0x07000000
#else
#define FGI_B_6_AFR 0x00000000
#endif

#if defined(FGI_B_7_AFR_AF0)
#define FGI_B_7_AFR 0x00000000
#elif defined(FGI_B_7_AFR_AF1)
#define FGI_B_7_AFR 0x10000000
#elif defined(FGI_B_7_AFR_AF2)
#define FGI_B_7_AFR 0x20000000
#elif defined(FGI_B_7_AFR_AF3)
#define FGI_B_7_AFR 0x30000000
#elif defined(FGI_B_7_AFR_AF4)
#define FGI_B_7_AFR 0x40000000
#elif defined(FGI_B_7_AFR_AF5)
#define FGI_B_7_AFR 0x50000000
#elif defined(FGI_B_7_AFR_AF6)
#define FGI_B_7_AFR 0x60000000
#elif defined(FGI_B_7_AFR_AF7)
#define FGI_B_7_AFR 0x70000000
#else
#define FGI_B_7_AFR 0x00000000
#endif

#if defined(FGI_B_8_AFR_AF0)
#define FGI_B_8_AFR 0x00000000
#elif defined(FGI_B_8_AFR_AF1)
#define FGI_B_8_AFR 0x00000001
#elif defined(FGI_B_8_AFR_AF2)
#define FGI_B_8_AFR 0x00000002
#elif defined(FGI_B_8_AFR_AF3)
#define FGI_B_8_AFR 0x00000003
#elif defined(FGI_B_8_AFR_AF4)
#define FGI_B_8_AFR 0x00000004
#elif defined(FGI_B_8_AFR_AF5)
#define FGI_B_8_AFR 0x00000005
#elif defined(FGI_B_8_AFR_AF6)
#define FGI_B_8_AFR 0x00000006
#elif defined(FGI_B_8_AFR_AF7)
#define FGI_B_8_AFR 0x00000007
#else
#define FGI_B_8_AFR 0x00000000
#endif

#if defined(FGI_B_9_AFR_AF0)
#define FGI_B_9_AFR 0x00000000
#elif defined(FGI_B_9_AFR_AF1)
#define FGI_B_9_AFR 0x00000010
#elif defined(FGI_B_9_AFR_AF2)
#define FGI_B_9_AFR 0x00000020
#elif defined(FGI_B_9_AFR_AF3)
#define FGI_B_9_AFR 0x00000030
#elif defined(FGI_B_9_AFR_AF4)
#define FGI_B_9_AFR 0x00000040
#elif defined(FGI_B_9_AFR_AF5)
#define FGI_B_9_AFR 0x00000050
#elif defined(FGI_B_9_AFR_AF6)
#define FGI_B_9_AFR 0x00000060
#elif defined(FGI_B_9_AFR_AF7)
#define FGI_B_9_AFR 0x00000070
#else
#define FGI_B_9_AFR 0x00000000
#endif

#if defined(FGI_B_10_AFR_AF0)
#define FGI_B_10_AFR 0x00000000
#elif defined(FGI_B_10_AFR_AF1)
#define FGI_B_10_AFR 0x00000100
#elif defined(FGI_B_10_AFR_AF2)
#define FGI_B_10_AFR 0x00000200
#elif defined(FGI_B_10_AFR_AF3)
#define FGI_B_10_AFR 0x00000300
#elif defined(FGI_B_10_AFR_AF4)
#define FGI_B_10_AFR 0x00000400
#elif defined(FGI_B_10_AFR_AF5)
#define FGI_B_10_AFR 0x00000500
#elif defined(FGI_B_10_AFR_AF6)
#define FGI_B_10_AFR 0x00000600
#elif defined(FGI_B_10_AFR_AF7)
#define FGI_B_10_AFR 0x00000700
#else
#define FGI_B_10_AFR 0x00000000
#endif

#if defined(FGI_B_11_AFR_AF0)
#define FGI_B_11_AFR 0x00000000
#elif defined(FGI_B_11_AFR_AF1)
#define FGI_B_11_AFR 0x00001000
#elif defined(FGI_B_11_AFR_AF2)
#define FGI_B_11_AFR 0x00002000
#elif defined(FGI_B_11_AFR_AF3)
#define FGI_B_11_AFR 0x00003000
#elif defined(FGI_B_11_AFR_AF4)
#define FGI_B_11_AFR 0x00004000
#elif defined(FGI_B_11_AFR_AF5)
#define FGI_B_11_AFR 0x00005000
#elif defined(FGI_B_11_AFR_AF6)
#define FGI_B_11_AFR 0x00006000
#elif defined(FGI_B_11_AFR_AF7)
#define FGI_B_11_AFR 0x00007000
#else
#define FGI_B_11_AFR 0x00000000
#endif

#if defined(FGI_B_12_AFR_AF0)
#define FGI_B_12_AFR 0x00000000
#elif defined(FGI_B_12_AFR_AF1)
#define FGI_B_12_AFR 0x00010000
#elif defined(FGI_B_12_AFR_AF2)
#define FGI_B_12_AFR 0x00020000
#elif defined(FGI_B_12_AFR_AF3)
#define FGI_B_12_AFR 0x00030000
#elif defined(FGI_B_12_AFR_AF4)
#define FGI_B_12_AFR 0x00040000
#elif defined(FGI_B_12_AFR_AF5)
#define FGI_B_12_AFR 0x00050000
#elif defined(FGI_B_12_AFR_AF6)
#define FGI_B_12_AFR 0x00060000
#elif defined(FGI_B_12_AFR_AF7)
#define FGI_B_12_AFR 0x00070000
#else
#define FGI_B_12_AFR 0x00000000
#endif

#if defined(FGI_B_13_AFR_AF0)
#define FGI_B_13_AFR 0x00000000
#elif defined(FGI_B_13_AFR_AF1)
#define FGI_B_13_AFR 0x00100000
#elif defined(FGI_B_13_AFR_AF2)
#define FGI_B_13_AFR 0x00200000
#elif defined(FGI_B_13_AFR_AF3)
#define FGI_B_13_AFR 0x00300000
#elif defined(FGI_B_13_AFR_AF4)
#define FGI_B_13_AFR 0x00400000
#elif defined(FGI_B_13_AFR_AF5)
#define FGI_B_13_AFR 0x00500000
#elif defined(FGI_B_13_AFR_AF6)
#define FGI_B_13_AFR 0x00600000
#elif defined(FGI_B_13_AFR_AF7)
#define FGI_B_13_AFR 0x00700000
#else
#define FGI_B_13_AFR 0x00000000
#endif

#if defined(FGI_B_14_AFR_AF0)
#define FGI_B_14_AFR 0x00000000
#elif defined(FGI_B_14_AFR_AF1)
#define FGI_B_14_AFR 0x01000000
#elif defined(FGI_B_14_AFR_AF2)
#define FGI_B_14_AFR 0x02000000
#elif defined(FGI_B_14_AFR_AF3)
#define FGI_B_14_AFR 0x03000000
#elif defined(FGI_B_14_AFR_AF4)
#define FGI_B_14_AFR 0x04000000
#elif defined(FGI_B_14_AFR_AF5)
#define FGI_B_14_AFR 0x05000000
#elif defined(FGI_B_14_AFR_AF6)
#define FGI_B_14_AFR 0x06000000
#elif defined(FGI_B_14_AFR_AF7)
#define FGI_B_14_AFR 0x07000000
#else
#define FGI_B_14_AFR 0x00000000
#endif

#if defined(FGI_B_15_AFR_AF0)
#define FGI_B_15_AFR 0x00000000
#elif defined(FGI_B_15_AFR_AF1)
#define FGI_B_15_AFR 0x10000000
#elif defined(FGI_B_15_AFR_AF2)
#define FGI_B_15_AFR 0x20000000
#elif defined(FGI_B_15_AFR_AF3)
#define FGI_B_15_AFR 0x30000000
#elif defined(FGI_B_15_AFR_AF4)
#define FGI_B_15_AFR 0x40000000
#elif defined(FGI_B_15_AFR_AF5)
#define FGI_B_15_AFR 0x50000000
#elif defined(FGI_B_15_AFR_AF6)
#define FGI_B_15_AFR 0x60000000
#elif defined(FGI_B_15_AFR_AF7)
#define FGI_B_15_AFR 0x70000000
#else
#define FGI_B_15_AFR 0x00000000
#endif

#if defined(FGI_C_0_ODR_0)
#define FGI_C_0_ODR 0x00000000
#elif defined(FGI_C_0_ODR_1)
#define FGI_C_0_ODR 0x00000001
#else
#define FGI_C_0_ODR 0x00000000
#endif

#if defined(FGI_C_1_ODR_0)
#define FGI_C_1_ODR 0x00000000
#elif defined(FGI_C_1_ODR_1)
#define FGI_C_1_ODR 0x00000002
#else
#define FGI_C_1_ODR 0x00000000
#endif

#if defined(FGI_C_2_ODR_0)
#define FGI_C_2_ODR 0x00000000
#elif defined(FGI_C_2_ODR_1)
#define FGI_C_2_ODR 0x00000004
#else
#define FGI_C_2_ODR 0x00000000
#endif

#if defined(FGI_C_3_ODR_0)
#define FGI_C_3_ODR 0x00000000
#elif defined(FGI_C_3_ODR_1)
#define FGI_C_3_ODR 0x00000008
#else
#define FGI_C_3_ODR 0x00000000
#endif

#if defined(FGI_C_4_ODR_0)
#define FGI_C_4_ODR 0x00000000
#elif defined(FGI_C_4_ODR_1)
#define FGI_C_4_ODR 0x00000010
#else
#define FGI_C_4_ODR 0x00000000
#endif

#if defined(FGI_C_5_ODR_0)
#define FGI_C_5_ODR 0x00000000
#elif defined(FGI_C_5_ODR_1)
#define FGI_C_5_ODR 0x00000020
#else
#define FGI_C_5_ODR 0x00000000
#endif

#if defined(FGI_C_6_ODR_0)
#define FGI_C_6_ODR 0x00000000
#elif defined(FGI_C_6_ODR_1)
#define FGI_C_6_ODR 0x00000040
#else
#define FGI_C_6_ODR 0x00000000
#endif

#if defined(FGI_C_7_ODR_0)
#define FGI_C_7_ODR 0x00000000
#elif defined(FGI_C_7_ODR_1)
#define FGI_C_7_ODR 0x00000080
#else
#define FGI_C_7_ODR 0x00000000
#endif

#if defined(FGI_C_8_ODR_0)
#define FGI_C_8_ODR 0x00000000
#elif defined(FGI_C_8_ODR_1)
#define FGI_C_8_ODR 0x00000100
#else
#define FGI_C_8_ODR 0x00000000
#endif

#if defined(FGI_C_9_ODR_0)
#define FGI_C_9_ODR 0x00000000
#elif defined(FGI_C_9_ODR_1)
#define FGI_C_9_ODR 0x00000200
#else
#define FGI_C_9_ODR 0x00000000
#endif

#if defined(FGI_C_10_ODR_0)
#define FGI_C_10_ODR 0x00000000
#elif defined(FGI_C_10_ODR_1)
#define FGI_C_10_ODR 0x00000400
#else
#define FGI_C_10_ODR 0x00000000
#endif

#if defined(FGI_C_11_ODR_0)
#define FGI_C_11_ODR 0x00000000
#elif defined(FGI_C_11_ODR_1)
#define FGI_C_11_ODR 0x00000800
#else
#define FGI_C_11_ODR 0x00000000
#endif

#if defined(FGI_C_12_ODR_0)
#define FGI_C_12_ODR 0x00000000
#elif defined(FGI_C_12_ODR_1)
#define FGI_C_12_ODR 0x00001000
#else
#define FGI_C_12_ODR 0x00000000
#endif

#if defined(FGI_C_13_ODR_0)
#define FGI_C_13_ODR 0x00000000
#elif defined(FGI_C_13_ODR_1)
#define FGI_C_13_ODR 0x00002000
#else
#define FGI_C_13_ODR 0x00000000
#endif

#if defined(FGI_C_14_ODR_0)
#define FGI_C_14_ODR 0x00000000
#elif defined(FGI_C_14_ODR_1)
#define FGI_C_14_ODR 0x00004000
#else
#define FGI_C_14_ODR 0x00000000
#endif

#if defined(FGI_C_15_ODR_0)
#define FGI_C_15_ODR 0x00000000
#elif defined(FGI_C_15_ODR_1)
#define FGI_C_15_ODR 0x00008000
#else
#define FGI_C_15_ODR 0x00000000
#endif

#if defined(FGI_C_0_MODER_IN)
#define FGI_C_0_MODER 0x00000000
#elif defined(FGI_C_0_MODER_OUT)
#define FGI_C_0_MODER 0x00000001
#elif defined(FGI_C_0_MODER_AF)
#define FGI_C_0_MODER 0x00000002
#elif defined(FGI_C_0_MODER_AN)
#define FGI_C_0_MODER 0x00000003
#else
#define FGI_C_0_MODER 0x00000000
#endif

#if defined(FGI_C_1_MODER_IN)
#define FGI_C_1_MODER 0x00000000
#elif defined(FGI_C_1_MODER_OUT)
#define FGI_C_1_MODER 0x00000004
#elif defined(FGI_C_1_MODER_AF)
#define FGI_C_1_MODER 0x00000008
#elif defined(FGI_C_1_MODER_AN)
#define FGI_C_1_MODER 0x0000000c
#else
#define FGI_C_1_MODER 0x00000000
#endif

#if defined(FGI_C_2_MODER_IN)
#define FGI_C_2_MODER 0x00000000
#elif defined(FGI_C_2_MODER_OUT)
#define FGI_C_2_MODER 0x00000010
#elif defined(FGI_C_2_MODER_AF)
#define FGI_C_2_MODER 0x00000020
#elif defined(FGI_C_2_MODER_AN)
#define FGI_C_2_MODER 0x00000030
#else
#define FGI_C_2_MODER 0x00000000
#endif

#if defined(FGI_C_3_MODER_IN)
#define FGI_C_3_MODER 0x00000000
#elif defined(FGI_C_3_MODER_OUT)
#define FGI_C_3_MODER 0x00000040
#elif defined(FGI_C_3_MODER_AF)
#define FGI_C_3_MODER 0x00000080
#elif defined(FGI_C_3_MODER_AN)
#define FGI_C_3_MODER 0x000000c0
#else
#define FGI_C_3_MODER 0x00000000
#endif

#if defined(FGI_C_4_MODER_IN)
#define FGI_C_4_MODER 0x00000000
#elif defined(FGI_C_4_MODER_OUT)
#define FGI_C_4_MODER 0x00000100
#elif defined(FGI_C_4_MODER_AF)
#define FGI_C_4_MODER 0x00000200
#elif defined(FGI_C_4_MODER_AN)
#define FGI_C_4_MODER 0x00000300
#else
#define FGI_C_4_MODER 0x00000000
#endif

#if defined(FGI_C_5_MODER_IN)
#define FGI_C_5_MODER 0x00000000
#elif defined(FGI_C_5_MODER_OUT)
#define FGI_C_5_MODER 0x00000400
#elif defined(FGI_C_5_MODER_AF)
#define FGI_C_5_MODER 0x00000800
#elif defined(FGI_C_5_MODER_AN)
#define FGI_C_5_MODER 0x00000c00
#else
#define FGI_C_5_MODER 0x00000000
#endif

#if defined(FGI_C_6_MODER_IN)
#define FGI_C_6_MODER 0x00000000
#elif defined(FGI_C_6_MODER_OUT)
#define FGI_C_6_MODER 0x00001000
#elif defined(FGI_C_6_MODER_AF)
#define FGI_C_6_MODER 0x00002000
#elif defined(FGI_C_6_MODER_AN)
#define FGI_C_6_MODER 0x00003000
#else
#define FGI_C_6_MODER 0x00000000
#endif

#if defined(FGI_C_7_MODER_IN)
#define FGI_C_7_MODER 0x00000000
#elif defined(FGI_C_7_MODER_OUT)
#define FGI_C_7_MODER 0x00004000
#elif defined(FGI_C_7_MODER_AF)
#define FGI_C_7_MODER 0x00008000
#elif defined(FGI_C_7_MODER_AN)
#define FGI_C_7_MODER 0x0000c000
#else
#define FGI_C_7_MODER 0x00000000
#endif

#if defined(FGI_C_8_MODER_IN)
#define FGI_C_8_MODER 0x00000000
#elif defined(FGI_C_8_MODER_OUT)
#define FGI_C_8_MODER 0x00010000
#elif defined(FGI_C_8_MODER_AF)
#define FGI_C_8_MODER 0x00020000
#elif defined(FGI_C_8_MODER_AN)
#define FGI_C_8_MODER 0x00030000
#else
#define FGI_C_8_MODER 0x00000000
#endif

#if defined(FGI_C_9_MODER_IN)
#define FGI_C_9_MODER 0x00000000
#elif defined(FGI_C_9_MODER_OUT)
#define FGI_C_9_MODER 0x00040000
#elif defined(FGI_C_9_MODER_AF)
#define FGI_C_9_MODER 0x00080000
#elif defined(FGI_C_9_MODER_AN)
#define FGI_C_9_MODER 0x000c0000
#else
#define FGI_C_9_MODER 0x00000000
#endif

#if defined(FGI_C_10_MODER_IN)
#define FGI_C_10_MODER 0x00000000
#elif defined(FGI_C_10_MODER_OUT)
#define FGI_C_10_MODER 0x00100000
#elif defined(FGI_C_10_MODER_AF)
#define FGI_C_10_MODER 0x00200000
#elif defined(FGI_C_10_MODER_AN)
#define FGI_C_10_MODER 0x00300000
#else
#define FGI_C_10_MODER 0x00000000
#endif

#if defined(FGI_C_11_MODER_IN)
#define FGI_C_11_MODER 0x00000000
#elif defined(FGI_C_11_MODER_OUT)
#define FGI_C_11_MODER 0x00400000
#elif defined(FGI_C_11_MODER_AF)
#define FGI_C_11_MODER 0x00800000
#elif defined(FGI_C_11_MODER_AN)
#define FGI_C_11_MODER 0x00c00000
#else
#define FGI_C_11_MODER 0x00000000
#endif

#if defined(FGI_C_12_MODER_IN)
#define FGI_C_12_MODER 0x00000000
#elif defined(FGI_C_12_MODER_OUT)
#define FGI_C_12_MODER 0x01000000
#elif defined(FGI_C_12_MODER_AF)
#define FGI_C_12_MODER 0x02000000
#elif defined(FGI_C_12_MODER_AN)
#define FGI_C_12_MODER 0x03000000
#else
#define FGI_C_12_MODER 0x00000000
#endif

#if defined(FGI_C_13_MODER_IN)
#define FGI_C_13_MODER 0x00000000
#elif defined(FGI_C_13_MODER_OUT)
#define FGI_C_13_MODER 0x04000000
#elif defined(FGI_C_13_MODER_AF)
#define FGI_C_13_MODER 0x08000000
#elif defined(FGI_C_13_MODER_AN)
#define FGI_C_13_MODER 0x0c000000
#else
#define FGI_C_13_MODER 0x00000000
#endif

#if defined(FGI_C_14_MODER_IN)
#define FGI_C_14_MODER 0x00000000
#elif defined(FGI_C_14_MODER_OUT)
#define FGI_C_14_MODER 0x10000000
#elif defined(FGI_C_14_MODER_AF)
#define FGI_C_14_MODER 0x20000000
#elif defined(FGI_C_14_MODER_AN)
#define FGI_C_14_MODER 0x30000000
#else
#define FGI_C_14_MODER 0x00000000
#endif

#if defined(FGI_C_15_MODER_IN)
#define FGI_C_15_MODER 0x00000000
#elif defined(FGI_C_15_MODER_OUT)
#define FGI_C_15_MODER 0x40000000
#elif defined(FGI_C_15_MODER_AF)
#define FGI_C_15_MODER 0x80000000
#elif defined(FGI_C_15_MODER_AN)
#define FGI_C_15_MODER 0xc0000000
#else
#define FGI_C_15_MODER 0x00000000
#endif

#if defined(FGI_C_0_OTYPER_PP)
#define FGI_C_0_OTYPER 0x00000000
#elif defined(FGI_C_0_OTYPER_OD)
#define FGI_C_0_OTYPER 0x00000001
#else
#define FGI_C_0_OTYPER 0x00000000
#endif

#if defined(FGI_C_1_OTYPER_PP)
#define FGI_C_1_OTYPER 0x00000000
#elif defined(FGI_C_1_OTYPER_OD)
#define FGI_C_1_OTYPER 0x00000002
#else
#define FGI_C_1_OTYPER 0x00000000
#endif

#if defined(FGI_C_2_OTYPER_PP)
#define FGI_C_2_OTYPER 0x00000000
#elif defined(FGI_C_2_OTYPER_OD)
#define FGI_C_2_OTYPER 0x00000004
#else
#define FGI_C_2_OTYPER 0x00000000
#endif

#if defined(FGI_C_3_OTYPER_PP)
#define FGI_C_3_OTYPER 0x00000000
#elif defined(FGI_C_3_OTYPER_OD)
#define FGI_C_3_OTYPER 0x00000008
#else
#define FGI_C_3_OTYPER 0x00000000
#endif

#if defined(FGI_C_4_OTYPER_PP)
#define FGI_C_4_OTYPER 0x00000000
#elif defined(FGI_C_4_OTYPER_OD)
#define FGI_C_4_OTYPER 0x00000010
#else
#define FGI_C_4_OTYPER 0x00000000
#endif

#if defined(FGI_C_5_OTYPER_PP)
#define FGI_C_5_OTYPER 0x00000000
#elif defined(FGI_C_5_OTYPER_OD)
#define FGI_C_5_OTYPER 0x00000020
#else
#define FGI_C_5_OTYPER 0x00000000
#endif

#if defined(FGI_C_6_OTYPER_PP)
#define FGI_C_6_OTYPER 0x00000000
#elif defined(FGI_C_6_OTYPER_OD)
#define FGI_C_6_OTYPER 0x00000040
#else
#define FGI_C_6_OTYPER 0x00000000
#endif

#if defined(FGI_C_7_OTYPER_PP)
#define FGI_C_7_OTYPER 0x00000000
#elif defined(FGI_C_7_OTYPER_OD)
#define FGI_C_7_OTYPER 0x00000080
#else
#define FGI_C_7_OTYPER 0x00000000
#endif

#if defined(FGI_C_8_OTYPER_PP)
#define FGI_C_8_OTYPER 0x00000000
#elif defined(FGI_C_8_OTYPER_OD)
#define FGI_C_8_OTYPER 0x00000100
#else
#define FGI_C_8_OTYPER 0x00000000
#endif

#if defined(FGI_C_9_OTYPER_PP)
#define FGI_C_9_OTYPER 0x00000000
#elif defined(FGI_C_9_OTYPER_OD)
#define FGI_C_9_OTYPER 0x00000200
#else
#define FGI_C_9_OTYPER 0x00000000
#endif

#if defined(FGI_C_10_OTYPER_PP)
#define FGI_C_10_OTYPER 0x00000000
#elif defined(FGI_C_10_OTYPER_OD)
#define FGI_C_10_OTYPER 0x00000400
#else
#define FGI_C_10_OTYPER 0x00000000
#endif

#if defined(FGI_C_11_OTYPER_PP)
#define FGI_C_11_OTYPER 0x00000000
#elif defined(FGI_C_11_OTYPER_OD)
#define FGI_C_11_OTYPER 0x00000800
#else
#define FGI_C_11_OTYPER 0x00000000
#endif

#if defined(FGI_C_12_OTYPER_PP)
#define FGI_C_12_OTYPER 0x00000000
#elif defined(FGI_C_12_OTYPER_OD)
#define FGI_C_12_OTYPER 0x00001000
#else
#define FGI_C_12_OTYPER 0x00000000
#endif

#if defined(FGI_C_13_OTYPER_PP)
#define FGI_C_13_OTYPER 0x00000000
#elif defined(FGI_C_13_OTYPER_OD)
#define FGI_C_13_OTYPER 0x00002000
#else
#define FGI_C_13_OTYPER 0x00000000
#endif

#if defined(FGI_C_14_OTYPER_PP)
#define FGI_C_14_OTYPER 0x00000000
#elif defined(FGI_C_14_OTYPER_OD)
#define FGI_C_14_OTYPER 0x00004000
#else
#define FGI_C_14_OTYPER 0x00000000
#endif

#if defined(FGI_C_15_OTYPER_PP)
#define FGI_C_15_OTYPER 0x00000000
#elif defined(FGI_C_15_OTYPER_OD)
#define FGI_C_15_OTYPER 0x00008000
#else
#define FGI_C_15_OTYPER 0x00000000
#endif

#if defined(FGI_C_0_OSPEEDR_LOW)
#define FGI_C_0_OSPEEDR 0x00000000
#elif defined(FGI_C_0_OSPEEDR_MEDIUM)
#define FGI_C_0_OSPEEDR 0x00000001
#elif defined(FGI_C_0_OSPEEDR_HIGH)
#define FGI_C_0_OSPEEDR 0x00000003
#else
#define FGI_C_0_OSPEEDR 0x00000000
#endif

#if defined(FGI_C_1_OSPEEDR_LOW)
#define FGI_C_1_OSPEEDR 0x00000000
#elif defined(FGI_C_1_OSPEEDR_MEDIUM)
#define FGI_C_1_OSPEEDR 0x00000004
#elif defined(FGI_C_1_OSPEEDR_HIGH)
#define FGI_C_1_OSPEEDR 0x0000000c
#else
#define FGI_C_1_OSPEEDR 0x00000000
#endif

#if defined(FGI_C_2_OSPEEDR_LOW)
#define FGI_C_2_OSPEEDR 0x00000000
#elif defined(FGI_C_2_OSPEEDR_MEDIUM)
#define FGI_C_2_OSPEEDR 0x00000010
#elif defined(FGI_C_2_OSPEEDR_HIGH)
#define FGI_C_2_OSPEEDR 0x00000030
#else
#define FGI_C_2_OSPEEDR 0x00000000
#endif

#if defined(FGI_C_3_OSPEEDR_LOW)
#define FGI_C_3_OSPEEDR 0x00000000
#elif defined(FGI_C_3_OSPEEDR_MEDIUM)
#define FGI_C_3_OSPEEDR 0x00000040
#elif defined(FGI_C_3_OSPEEDR_HIGH)
#define FGI_C_3_OSPEEDR 0x000000c0
#else
#define FGI_C_3_OSPEEDR 0x00000000
#endif

#if defined(FGI_C_4_OSPEEDR_LOW)
#define FGI_C_4_OSPEEDR 0x00000000
#elif defined(FGI_C_4_OSPEEDR_MEDIUM)
#define FGI_C_4_OSPEEDR 0x00000100
#elif defined(FGI_C_4_OSPEEDR_HIGH)
#define FGI_C_4_OSPEEDR 0x00000300
#else
#define FGI_C_4_OSPEEDR 0x00000000
#endif

#if defined(FGI_C_5_OSPEEDR_LOW)
#define FGI_C_5_OSPEEDR 0x00000000
#elif defined(FGI_C_5_OSPEEDR_MEDIUM)
#define FGI_C_5_OSPEEDR 0x00000400
#elif defined(FGI_C_5_OSPEEDR_HIGH)
#define FGI_C_5_OSPEEDR 0x00000c00
#else
#define FGI_C_5_OSPEEDR 0x00000000
#endif

#if defined(FGI_C_6_OSPEEDR_LOW)
#define FGI_C_6_OSPEEDR 0x00000000
#elif defined(FGI_C_6_OSPEEDR_MEDIUM)
#define FGI_C_6_OSPEEDR 0x00001000
#elif defined(FGI_C_6_OSPEEDR_HIGH)
#define FGI_C_6_OSPEEDR 0x00003000
#else
#define FGI_C_6_OSPEEDR 0x00000000
#endif

#if defined(FGI_C_7_OSPEEDR_LOW)
#define FGI_C_7_OSPEEDR 0x00000000
#elif defined(FGI_C_7_OSPEEDR_MEDIUM)
#define FGI_C_7_OSPEEDR 0x00004000
#elif defined(FGI_C_7_OSPEEDR_HIGH)
#define FGI_C_7_OSPEEDR 0x0000c000
#else
#define FGI_C_7_OSPEEDR 0x00000000
#endif

#if defined(FGI_C_8_OSPEEDR_LOW)
#define FGI_C_8_OSPEEDR 0x00000000
#elif defined(FGI_C_8_OSPEEDR_MEDIUM)
#define FGI_C_8_OSPEEDR 0x00010000
#elif defined(FGI_C_8_OSPEEDR_HIGH)
#define FGI_C_8_OSPEEDR 0x00030000
#else
#define FGI_C_8_OSPEEDR 0x00000000
#endif

#if defined(FGI_C_9_OSPEEDR_LOW)
#define FGI_C_9_OSPEEDR 0x00000000
#elif defined(FGI_C_9_OSPEEDR_MEDIUM)
#define FGI_C_9_OSPEEDR 0x00040000
#elif defined(FGI_C_9_OSPEEDR_HIGH)
#define FGI_C_9_OSPEEDR 0x000c0000
#else
#define FGI_C_9_OSPEEDR 0x00000000
#endif

#if defined(FGI_C_10_OSPEEDR_LOW)
#define FGI_C_10_OSPEEDR 0x00000000
#elif defined(FGI_C_10_OSPEEDR_MEDIUM)
#define FGI_C_10_OSPEEDR 0x00100000
#elif defined(FGI_C_10_OSPEEDR_HIGH)
#define FGI_C_10_OSPEEDR 0x00300000
#else
#define FGI_C_10_OSPEEDR 0x00000000
#endif

#if defined(FGI_C_11_OSPEEDR_LOW)
#define FGI_C_11_OSPEEDR 0x00000000
#elif defined(FGI_C_11_OSPEEDR_MEDIUM)
#define FGI_C_11_OSPEEDR 0x00400000
#elif defined(FGI_C_11_OSPEEDR_HIGH)
#define FGI_C_11_OSPEEDR 0x00c00000
#else
#define FGI_C_11_OSPEEDR 0x00000000
#endif

#if defined(FGI_C_12_OSPEEDR_LOW)
#define FGI_C_12_OSPEEDR 0x00000000
#elif defined(FGI_C_12_OSPEEDR_MEDIUM)
#define FGI_C_12_OSPEEDR 0x01000000
#elif defined(FGI_C_12_OSPEEDR_HIGH)
#define FGI_C_12_OSPEEDR 0x03000000
#else
#define FGI_C_12_OSPEEDR 0x00000000
#endif

#if defined(FGI_C_13_OSPEEDR_LOW)
#define FGI_C_13_OSPEEDR 0x00000000
#elif defined(FGI_C_13_OSPEEDR_MEDIUM)
#define FGI_C_13_OSPEEDR 0x04000000
#elif defined(FGI_C_13_OSPEEDR_HIGH)
#define FGI_C_13_OSPEEDR 0x0c000000
#else
#define FGI_C_13_OSPEEDR 0x00000000
#endif

#if defined(FGI_C_14_OSPEEDR_LOW)
#define FGI_C_14_OSPEEDR 0x00000000
#elif defined(FGI_C_14_OSPEEDR_MEDIUM)
#define FGI_C_14_OSPEEDR 0x10000000
#elif defined(FGI_C_14_OSPEEDR_HIGH)
#define FGI_C_14_OSPEEDR 0x30000000
#else
#define FGI_C_14_OSPEEDR 0x00000000
#endif

#if defined(FGI_C_15_OSPEEDR_LOW)
#define FGI_C_15_OSPEEDR 0x00000000
#elif defined(FGI_C_15_OSPEEDR_MEDIUM)
#define FGI_C_15_OSPEEDR 0x40000000
#elif defined(FGI_C_15_OSPEEDR_HIGH)
#define FGI_C_15_OSPEEDR 0xc0000000
#else
#define FGI_C_15_OSPEEDR 0x00000000
#endif

#if defined(FGI_C_0_PUPDR_NOPULL)
#define FGI_C_0_PUPDR 0x00000000
#elif defined(FGI_C_0_PUPDR_PULL_UP)
#define FGI_C_0_PUPDR 0x00000001
#elif defined(FGI_C_0_PUPDR_PULL_DOWN)
#define FGI_C_0_PUPDR 0x00000003
#else
#define FGI_C_0_PUPDR 0x00000000
#endif

#if defined(FGI_C_1_PUPDR_NOPULL)
#define FGI_C_1_PUPDR 0x00000000
#elif defined(FGI_C_1_PUPDR_PULL_UP)
#define FGI_C_1_PUPDR 0x00000004
#elif defined(FGI_C_1_PUPDR_PULL_DOWN)
#define FGI_C_1_PUPDR 0x0000000c
#else
#define FGI_C_1_PUPDR 0x00000000
#endif

#if defined(FGI_C_2_PUPDR_NOPULL)
#define FGI_C_2_PUPDR 0x00000000
#elif defined(FGI_C_2_PUPDR_PULL_UP)
#define FGI_C_2_PUPDR 0x00000010
#elif defined(FGI_C_2_PUPDR_PULL_DOWN)
#define FGI_C_2_PUPDR 0x00000030
#else
#define FGI_C_2_PUPDR 0x00000000
#endif

#if defined(FGI_C_3_PUPDR_NOPULL)
#define FGI_C_3_PUPDR 0x00000000
#elif defined(FGI_C_3_PUPDR_PULL_UP)
#define FGI_C_3_PUPDR 0x00000040
#elif defined(FGI_C_3_PUPDR_PULL_DOWN)
#define FGI_C_3_PUPDR 0x000000c0
#else
#define FGI_C_3_PUPDR 0x00000000
#endif

#if defined(FGI_C_4_PUPDR_NOPULL)
#define FGI_C_4_PUPDR 0x00000000
#elif defined(FGI_C_4_PUPDR_PULL_UP)
#define FGI_C_4_PUPDR 0x00000100
#elif defined(FGI_C_4_PUPDR_PULL_DOWN)
#define FGI_C_4_PUPDR 0x00000300
#else
#define FGI_C_4_PUPDR 0x00000000
#endif

#if defined(FGI_C_5_PUPDR_NOPULL)
#define FGI_C_5_PUPDR 0x00000000
#elif defined(FGI_C_5_PUPDR_PULL_UP)
#define FGI_C_5_PUPDR 0x00000400
#elif defined(FGI_C_5_PUPDR_PULL_DOWN)
#define FGI_C_5_PUPDR 0x00000c00
#else
#define FGI_C_5_PUPDR 0x00000000
#endif

#if defined(FGI_C_6_PUPDR_NOPULL)
#define FGI_C_6_PUPDR 0x00000000
#elif defined(FGI_C_6_PUPDR_PULL_UP)
#define FGI_C_6_PUPDR 0x00001000
#elif defined(FGI_C_6_PUPDR_PULL_DOWN)
#define FGI_C_6_PUPDR 0x00003000
#else
#define FGI_C_6_PUPDR 0x00000000
#endif

#if defined(FGI_C_7_PUPDR_NOPULL)
#define FGI_C_7_PUPDR 0x00000000
#elif defined(FGI_C_7_PUPDR_PULL_UP)
#define FGI_C_7_PUPDR 0x00004000
#elif defined(FGI_C_7_PUPDR_PULL_DOWN)
#define FGI_C_7_PUPDR 0x0000c000
#else
#define FGI_C_7_PUPDR 0x00000000
#endif

#if defined(FGI_C_8_PUPDR_NOPULL)
#define FGI_C_8_PUPDR 0x00000000
#elif defined(FGI_C_8_PUPDR_PULL_UP)
#define FGI_C_8_PUPDR 0x00010000
#elif defined(FGI_C_8_PUPDR_PULL_DOWN)
#define FGI_C_8_PUPDR 0x00030000
#else
#define FGI_C_8_PUPDR 0x00000000
#endif

#if defined(FGI_C_9_PUPDR_NOPULL)
#define FGI_C_9_PUPDR 0x00000000
#elif defined(FGI_C_9_PUPDR_PULL_UP)
#define FGI_C_9_PUPDR 0x00040000
#elif defined(FGI_C_9_PUPDR_PULL_DOWN)
#define FGI_C_9_PUPDR 0x000c0000
#else
#define FGI_C_9_PUPDR 0x00000000
#endif

#if defined(FGI_C_10_PUPDR_NOPULL)
#define FGI_C_10_PUPDR 0x00000000
#elif defined(FGI_C_10_PUPDR_PULL_UP)
#define FGI_C_10_PUPDR 0x00100000
#elif defined(FGI_C_10_PUPDR_PULL_DOWN)
#define FGI_C_10_PUPDR 0x00300000
#else
#define FGI_C_10_PUPDR 0x00000000
#endif

#if defined(FGI_C_11_PUPDR_NOPULL)
#define FGI_C_11_PUPDR 0x00000000
#elif defined(FGI_C_11_PUPDR_PULL_UP)
#define FGI_C_11_PUPDR 0x00400000
#elif defined(FGI_C_11_PUPDR_PULL_DOWN)
#define FGI_C_11_PUPDR 0x00c00000
#else
#define FGI_C_11_PUPDR 0x00000000
#endif

#if defined(FGI_C_12_PUPDR_NOPULL)
#define FGI_C_12_PUPDR 0x00000000
#elif defined(FGI_C_12_PUPDR_PULL_UP)
#define FGI_C_12_PUPDR 0x01000000
#elif defined(FGI_C_12_PUPDR_PULL_DOWN)
#define FGI_C_12_PUPDR 0x03000000
#else
#define FGI_C_12_PUPDR 0x00000000
#endif

#if defined(FGI_C_13_PUPDR_NOPULL)
#define FGI_C_13_PUPDR 0x00000000
#elif defined(FGI_C_13_PUPDR_PULL_UP)
#define FGI_C_13_PUPDR 0x04000000
#elif defined(FGI_C_13_PUPDR_PULL_DOWN)
#define FGI_C_13_PUPDR 0x0c000000
#else
#define FGI_C_13_PUPDR 0x00000000
#endif

#if defined(FGI_C_14_PUPDR_NOPULL)
#define FGI_C_14_PUPDR 0x00000000
#elif defined(FGI_C_14_PUPDR_PULL_UP)
#define FGI_C_14_PUPDR 0x10000000
#elif defined(FGI_C_14_PUPDR_PULL_DOWN)
#define FGI_C_14_PUPDR 0x30000000
#else
#define FGI_C_14_PUPDR 0x00000000
#endif

#if defined(FGI_C_15_PUPDR_NOPULL)
#define FGI_C_15_PUPDR 0x00000000
#elif defined(FGI_C_15_PUPDR_PULL_UP)
#define FGI_C_15_PUPDR 0x40000000
#elif defined(FGI_C_15_PUPDR_PULL_DOWN)
#define FGI_C_15_PUPDR 0xc0000000
#else
#define FGI_C_15_PUPDR 0x00000000
#endif

#if defined(FGI_C_0_AFR_AF0)
#define FGI_C_0_AFR 0x00000000
#elif defined(FGI_C_0_AFR_AF1)
#define FGI_C_0_AFR 0x00000001
#elif defined(FGI_C_0_AFR_AF2)
#define FGI_C_0_AFR 0x00000002
#elif defined(FGI_C_0_AFR_AF3)
#define FGI_C_0_AFR 0x00000003
#elif defined(FGI_C_0_AFR_AF4)
#define FGI_C_0_AFR 0x00000004
#elif defined(FGI_C_0_AFR_AF5)
#define FGI_C_0_AFR 0x00000005
#elif defined(FGI_C_0_AFR_AF6)
#define FGI_C_0_AFR 0x00000006
#elif defined(FGI_C_0_AFR_AF7)
#define FGI_C_0_AFR 0x00000007
#else
#define FGI_C_0_AFR 0x00000000
#endif

#if defined(FGI_C_1_AFR_AF0)
#define FGI_C_1_AFR 0x00000000
#elif defined(FGI_C_1_AFR_AF1)
#define FGI_C_1_AFR 0x00000010
#elif defined(FGI_C_1_AFR_AF2)
#define FGI_C_1_AFR 0x00000020
#elif defined(FGI_C_1_AFR_AF3)
#define FGI_C_1_AFR 0x00000030
#elif defined(FGI_C_1_AFR_AF4)
#define FGI_C_1_AFR 0x00000040
#elif defined(FGI_C_1_AFR_AF5)
#define FGI_C_1_AFR 0x00000050
#elif defined(FGI_C_1_AFR_AF6)
#define FGI_C_1_AFR 0x00000060
#elif defined(FGI_C_1_AFR_AF7)
#define FGI_C_1_AFR 0x00000070
#else
#define FGI_C_1_AFR 0x00000000
#endif

#if defined(FGI_C_2_AFR_AF0)
#define FGI_C_2_AFR 0x00000000
#elif defined(FGI_C_2_AFR_AF1)
#define FGI_C_2_AFR 0x00000100
#elif defined(FGI_C_2_AFR_AF2)
#define FGI_C_2_AFR 0x00000200
#elif defined(FGI_C_2_AFR_AF3)
#define FGI_C_2_AFR 0x00000300
#elif defined(FGI_C_2_AFR_AF4)
#define FGI_C_2_AFR 0x00000400
#elif defined(FGI_C_2_AFR_AF5)
#define FGI_C_2_AFR 0x00000500
#elif defined(FGI_C_2_AFR_AF6)
#define FGI_C_2_AFR 0x00000600
#elif defined(FGI_C_2_AFR_AF7)
#define FGI_C_2_AFR 0x00000700
#else
#define FGI_C_2_AFR 0x00000000
#endif

#if defined(FGI_C_3_AFR_AF0)
#define FGI_C_3_AFR 0x00000000
#elif defined(FGI_C_3_AFR_AF1)
#define FGI_C_3_AFR 0x00001000
#elif defined(FGI_C_3_AFR_AF2)
#define FGI_C_3_AFR 0x00002000
#elif defined(FGI_C_3_AFR_AF3)
#define FGI_C_3_AFR 0x00003000
#elif defined(FGI_C_3_AFR_AF4)
#define FGI_C_3_AFR 0x00004000
#elif defined(FGI_C_3_AFR_AF5)
#define FGI_C_3_AFR 0x00005000
#elif defined(FGI_C_3_AFR_AF6)
#define FGI_C_3_AFR 0x00006000
#elif defined(FGI_C_3_AFR_AF7)
#define FGI_C_3_AFR 0x00007000
#else
#define FGI_C_3_AFR 0x00000000
#endif

#if defined(FGI_C_4_AFR_AF0)
#define FGI_C_4_AFR 0x00000000
#elif defined(FGI_C_4_AFR_AF1)
#define FGI_C_4_AFR 0x00010000
#elif defined(FGI_C_4_AFR_AF2)
#define FGI_C_4_AFR 0x00020000
#elif defined(FGI_C_4_AFR_AF3)
#define FGI_C_4_AFR 0x00030000
#elif defined(FGI_C_4_AFR_AF4)
#define FGI_C_4_AFR 0x00040000
#elif defined(FGI_C_4_AFR_AF5)
#define FGI_C_4_AFR 0x00050000
#elif defined(FGI_C_4_AFR_AF6)
#define FGI_C_4_AFR 0x00060000
#elif defined(FGI_C_4_AFR_AF7)
#define FGI_C_4_AFR 0x00070000
#else
#define FGI_C_4_AFR 0x00000000
#endif

#if defined(FGI_C_5_AFR_AF0)
#define FGI_C_5_AFR 0x00000000
#elif defined(FGI_C_5_AFR_AF1)
#define FGI_C_5_AFR 0x00100000
#elif defined(FGI_C_5_AFR_AF2)
#define FGI_C_5_AFR 0x00200000
#elif defined(FGI_C_5_AFR_AF3)
#define FGI_C_5_AFR 0x00300000
#elif defined(FGI_C_5_AFR_AF4)
#define FGI_C_5_AFR 0x00400000
#elif defined(FGI_C_5_AFR_AF5)
#define FGI_C_5_AFR 0x00500000
#elif defined(FGI_C_5_AFR_AF6)
#define FGI_C_5_AFR 0x00600000
#elif defined(FGI_C_5_AFR_AF7)
#define FGI_C_5_AFR 0x00700000
#else
#define FGI_C_5_AFR 0x00000000
#endif

#if defined(FGI_C_6_AFR_AF0)
#define FGI_C_6_AFR 0x00000000
#elif defined(FGI_C_6_AFR_AF1)
#define FGI_C_6_AFR 0x01000000
#elif defined(FGI_C_6_AFR_AF2)
#define FGI_C_6_AFR 0x02000000
#elif defined(FGI_C_6_AFR_AF3)
#define FGI_C_6_AFR 0x03000000
#elif defined(FGI_C_6_AFR_AF4)
#define FGI_C_6_AFR 0x04000000
#elif defined(FGI_C_6_AFR_AF5)
#define FGI_C_6_AFR 0x05000000
#elif defined(FGI_C_6_AFR_AF6)
#define FGI_C_6_AFR 0x06000000
#elif defined(FGI_C_6_AFR_AF7)
#define FGI_C_6_AFR 0x07000000
#else
#define FGI_C_6_AFR 0x00000000
#endif

#if defined(FGI_C_7_AFR_AF0)
#define FGI_C_7_AFR 0x00000000
#elif defined(FGI_C_7_AFR_AF1)
#define FGI_C_7_AFR 0x10000000
#elif defined(FGI_C_7_AFR_AF2)
#define FGI_C_7_AFR 0x20000000
#elif defined(FGI_C_7_AFR_AF3)
#define FGI_C_7_AFR 0x30000000
#elif defined(FGI_C_7_AFR_AF4)
#define FGI_C_7_AFR 0x40000000
#elif defined(FGI_C_7_AFR_AF5)
#define FGI_C_7_AFR 0x50000000
#elif defined(FGI_C_7_AFR_AF6)
#define FGI_C_7_AFR 0x60000000
#elif defined(FGI_C_7_AFR_AF7)
#define FGI_C_7_AFR 0x70000000
#else
#define FGI_C_7_AFR 0x00000000
#endif

#if defined(FGI_C_8_AFR_AF0)
#define FGI_C_8_AFR 0x00000000
#elif defined(FGI_C_8_AFR_AF1)
#define FGI_C_8_AFR 0x00000001
#elif defined(FGI_C_8_AFR_AF2)
#define FGI_C_8_AFR 0x00000002
#elif defined(FGI_C_8_AFR_AF3)
#define FGI_C_8_AFR 0x00000003
#elif defined(FGI_C_8_AFR_AF4)
#define FGI_C_8_AFR 0x00000004
#elif defined(FGI_C_8_AFR_AF5)
#define FGI_C_8_AFR 0x00000005
#elif defined(FGI_C_8_AFR_AF6)
#define FGI_C_8_AFR 0x00000006
#elif defined(FGI_C_8_AFR_AF7)
#define FGI_C_8_AFR 0x00000007
#else
#define FGI_C_8_AFR 0x00000000
#endif

#if defined(FGI_C_9_AFR_AF0)
#define FGI_C_9_AFR 0x00000000
#elif defined(FGI_C_9_AFR_AF1)
#define FGI_C_9_AFR 0x00000010
#elif defined(FGI_C_9_AFR_AF2)
#define FGI_C_9_AFR 0x00000020
#elif defined(FGI_C_9_AFR_AF3)
#define FGI_C_9_AFR 0x00000030
#elif defined(FGI_C_9_AFR_AF4)
#define FGI_C_9_AFR 0x00000040
#elif defined(FGI_C_9_AFR_AF5)
#define FGI_C_9_AFR 0x00000050
#elif defined(FGI_C_9_AFR_AF6)
#define FGI_C_9_AFR 0x00000060
#elif defined(FGI_C_9_AFR_AF7)
#define FGI_C_9_AFR 0x00000070
#else
#define FGI_C_9_AFR 0x00000000
#endif

#if defined(FGI_C_10_AFR_AF0)
#define FGI_C_10_AFR 0x00000000
#elif defined(FGI_C_10_AFR_AF1)
#define FGI_C_10_AFR 0x00000100
#elif defined(FGI_C_10_AFR_AF2)
#define FGI_C_10_AFR 0x00000200
#elif defined(FGI_C_10_AFR_AF3)
#define FGI_C_10_AFR 0x00000300
#elif defined(FGI_C_10_AFR_AF4)
#define FGI_C_10_AFR 0x00000400
#elif defined(FGI_C_10_AFR_AF5)
#define FGI_C_10_AFR 0x00000500
#elif defined(FGI_C_10_AFR_AF6)
#define FGI_C_10_AFR 0x00000600
#elif defined(FGI_C_10_AFR_AF7)
#define FGI_C_10_AFR 0x00000700
#else
#define FGI_C_10_AFR 0x00000000
#endif

#if defined(FGI_C_11_AFR_AF0)
#define FGI_C_11_AFR 0x00000000
#elif defined(FGI_C_11_AFR_AF1)
#define FGI_C_11_AFR 0x00001000
#elif defined(FGI_C_11_AFR_AF2)
#define FGI_C_11_AFR 0x00002000
#elif defined(FGI_C_11_AFR_AF3)
#define FGI_C_11_AFR 0x00003000
#elif defined(FGI_C_11_AFR_AF4)
#define FGI_C_11_AFR 0x00004000
#elif defined(FGI_C_11_AFR_AF5)
#define FGI_C_11_AFR 0x00005000
#elif defined(FGI_C_11_AFR_AF6)
#define FGI_C_11_AFR 0x00006000
#elif defined(FGI_C_11_AFR_AF7)
#define FGI_C_11_AFR 0x00007000
#else
#define FGI_C_11_AFR 0x00000000
#endif

#if defined(FGI_C_12_AFR_AF0)
#define FGI_C_12_AFR 0x00000000
#elif defined(FGI_C_12_AFR_AF1)
#define FGI_C_12_AFR 0x00010000
#elif defined(FGI_C_12_AFR_AF2)
#define FGI_C_12_AFR 0x00020000
#elif defined(FGI_C_12_AFR_AF3)
#define FGI_C_12_AFR 0x00030000
#elif defined(FGI_C_12_AFR_AF4)
#define FGI_C_12_AFR 0x00040000
#elif defined(FGI_C_12_AFR_AF5)
#define FGI_C_12_AFR 0x00050000
#elif defined(FGI_C_12_AFR_AF6)
#define FGI_C_12_AFR 0x00060000
#elif defined(FGI_C_12_AFR_AF7)
#define FGI_C_12_AFR 0x00070000
#else
#define FGI_C_12_AFR 0x00000000
#endif

#if defined(FGI_C_13_AFR_AF0)
#define FGI_C_13_AFR 0x00000000
#elif defined(FGI_C_13_AFR_AF1)
#define FGI_C_13_AFR 0x00100000
#elif defined(FGI_C_13_AFR_AF2)
#define FGI_C_13_AFR 0x00200000
#elif defined(FGI_C_13_AFR_AF3)
#define FGI_C_13_AFR 0x00300000
#elif defined(FGI_C_13_AFR_AF4)
#define FGI_C_13_AFR 0x00400000
#elif defined(FGI_C_13_AFR_AF5)
#define FGI_C_13_AFR 0x00500000
#elif defined(FGI_C_13_AFR_AF6)
#define FGI_C_13_AFR 0x00600000
#elif defined(FGI_C_13_AFR_AF7)
#define FGI_C_13_AFR 0x00700000
#else
#define FGI_C_13_AFR 0x00000000
#endif

#if defined(FGI_C_14_AFR_AF0)
#define FGI_C_14_AFR 0x00000000
#elif defined(FGI_C_14_AFR_AF1)
#define FGI_C_14_AFR 0x01000000
#elif defined(FGI_C_14_AFR_AF2)
#define FGI_C_14_AFR 0x02000000
#elif defined(FGI_C_14_AFR_AF3)
#define FGI_C_14_AFR 0x03000000
#elif defined(FGI_C_14_AFR_AF4)
#define FGI_C_14_AFR 0x04000000
#elif defined(FGI_C_14_AFR_AF5)
#define FGI_C_14_AFR 0x05000000
#elif defined(FGI_C_14_AFR_AF6)
#define FGI_C_14_AFR 0x06000000
#elif defined(FGI_C_14_AFR_AF7)
#define FGI_C_14_AFR 0x07000000
#else
#define FGI_C_14_AFR 0x00000000
#endif

#if defined(FGI_C_15_AFR_AF0)
#define FGI_C_15_AFR 0x00000000
#elif defined(FGI_C_15_AFR_AF1)
#define FGI_C_15_AFR 0x10000000
#elif defined(FGI_C_15_AFR_AF2)
#define FGI_C_15_AFR 0x20000000
#elif defined(FGI_C_15_AFR_AF3)
#define FGI_C_15_AFR 0x30000000
#elif defined(FGI_C_15_AFR_AF4)
#define FGI_C_15_AFR 0x40000000
#elif defined(FGI_C_15_AFR_AF5)
#define FGI_C_15_AFR 0x50000000
#elif defined(FGI_C_15_AFR_AF6)
#define FGI_C_15_AFR 0x60000000
#elif defined(FGI_C_15_AFR_AF7)
#define FGI_C_15_AFR 0x70000000
#else
#define FGI_C_15_AFR 0x00000000
#endif

#if defined(FGI_D_0_ODR_0)
#define FGI_D_0_ODR 0x00000000
#elif defined(FGI_D_0_ODR_1)
#define FGI_D_0_ODR 0x00000001
#else
#define FGI_D_0_ODR 0x00000000
#endif

#if defined(FGI_D_1_ODR_0)
#define FGI_D_1_ODR 0x00000000
#elif defined(FGI_D_1_ODR_1)
#define FGI_D_1_ODR 0x00000002
#else
#define FGI_D_1_ODR 0x00000000
#endif

#if defined(FGI_D_2_ODR_0)
#define FGI_D_2_ODR 0x00000000
#elif defined(FGI_D_2_ODR_1)
#define FGI_D_2_ODR 0x00000004
#else
#define FGI_D_2_ODR 0x00000000
#endif

#if defined(FGI_D_3_ODR_0)
#define FGI_D_3_ODR 0x00000000
#elif defined(FGI_D_3_ODR_1)
#define FGI_D_3_ODR 0x00000008
#else
#define FGI_D_3_ODR 0x00000000
#endif

#if defined(FGI_D_4_ODR_0)
#define FGI_D_4_ODR 0x00000000
#elif defined(FGI_D_4_ODR_1)
#define FGI_D_4_ODR 0x00000010
#else
#define FGI_D_4_ODR 0x00000000
#endif

#if defined(FGI_D_5_ODR_0)
#define FGI_D_5_ODR 0x00000000
#elif defined(FGI_D_5_ODR_1)
#define FGI_D_5_ODR 0x00000020
#else
#define FGI_D_5_ODR 0x00000000
#endif

#if defined(FGI_D_6_ODR_0)
#define FGI_D_6_ODR 0x00000000
#elif defined(FGI_D_6_ODR_1)
#define FGI_D_6_ODR 0x00000040
#else
#define FGI_D_6_ODR 0x00000000
#endif

#if defined(FGI_D_7_ODR_0)
#define FGI_D_7_ODR 0x00000000
#elif defined(FGI_D_7_ODR_1)
#define FGI_D_7_ODR 0x00000080
#else
#define FGI_D_7_ODR 0x00000000
#endif

#if defined(FGI_D_8_ODR_0)
#define FGI_D_8_ODR 0x00000000
#elif defined(FGI_D_8_ODR_1)
#define FGI_D_8_ODR 0x00000100
#else
#define FGI_D_8_ODR 0x00000000
#endif

#if defined(FGI_D_9_ODR_0)
#define FGI_D_9_ODR 0x00000000
#elif defined(FGI_D_9_ODR_1)
#define FGI_D_9_ODR 0x00000200
#else
#define FGI_D_9_ODR 0x00000000
#endif

#if defined(FGI_D_10_ODR_0)
#define FGI_D_10_ODR 0x00000000
#elif defined(FGI_D_10_ODR_1)
#define FGI_D_10_ODR 0x00000400
#else
#define FGI_D_10_ODR 0x00000000
#endif

#if defined(FGI_D_11_ODR_0)
#define FGI_D_11_ODR 0x00000000
#elif defined(FGI_D_11_ODR_1)
#define FGI_D_11_ODR 0x00000800
#else
#define FGI_D_11_ODR 0x00000000
#endif

#if defined(FGI_D_12_ODR_0)
#define FGI_D_12_ODR 0x00000000
#elif defined(FGI_D_12_ODR_1)
#define FGI_D_12_ODR 0x00001000
#else
#define FGI_D_12_ODR 0x00000000
#endif

#if defined(FGI_D_13_ODR_0)
#define FGI_D_13_ODR 0x00000000
#elif defined(FGI_D_13_ODR_1)
#define FGI_D_13_ODR 0x00002000
#else
#define FGI_D_13_ODR 0x00000000
#endif

#if defined(FGI_D_14_ODR_0)
#define FGI_D_14_ODR 0x00000000
#elif defined(FGI_D_14_ODR_1)
#define FGI_D_14_ODR 0x00004000
#else
#define FGI_D_14_ODR 0x00000000
#endif

#if defined(FGI_D_15_ODR_0)
#define FGI_D_15_ODR 0x00000000
#elif defined(FGI_D_15_ODR_1)
#define FGI_D_15_ODR 0x00008000
#else
#define FGI_D_15_ODR 0x00000000
#endif

#if defined(FGI_D_0_MODER_IN)
#define FGI_D_0_MODER 0x00000000
#elif defined(FGI_D_0_MODER_OUT)
#define FGI_D_0_MODER 0x00000001
#elif defined(FGI_D_0_MODER_AF)
#define FGI_D_0_MODER 0x00000002
#elif defined(FGI_D_0_MODER_AN)
#define FGI_D_0_MODER 0x00000003
#else
#define FGI_D_0_MODER 0x00000000
#endif

#if defined(FGI_D_1_MODER_IN)
#define FGI_D_1_MODER 0x00000000
#elif defined(FGI_D_1_MODER_OUT)
#define FGI_D_1_MODER 0x00000004
#elif defined(FGI_D_1_MODER_AF)
#define FGI_D_1_MODER 0x00000008
#elif defined(FGI_D_1_MODER_AN)
#define FGI_D_1_MODER 0x0000000c
#else
#define FGI_D_1_MODER 0x00000000
#endif

#if defined(FGI_D_2_MODER_IN)
#define FGI_D_2_MODER 0x00000000
#elif defined(FGI_D_2_MODER_OUT)
#define FGI_D_2_MODER 0x00000010
#elif defined(FGI_D_2_MODER_AF)
#define FGI_D_2_MODER 0x00000020
#elif defined(FGI_D_2_MODER_AN)
#define FGI_D_2_MODER 0x00000030
#else
#define FGI_D_2_MODER 0x00000000
#endif

#if defined(FGI_D_3_MODER_IN)
#define FGI_D_3_MODER 0x00000000
#elif defined(FGI_D_3_MODER_OUT)
#define FGI_D_3_MODER 0x00000040
#elif defined(FGI_D_3_MODER_AF)
#define FGI_D_3_MODER 0x00000080
#elif defined(FGI_D_3_MODER_AN)
#define FGI_D_3_MODER 0x000000c0
#else
#define FGI_D_3_MODER 0x00000000
#endif

#if defined(FGI_D_4_MODER_IN)
#define FGI_D_4_MODER 0x00000000
#elif defined(FGI_D_4_MODER_OUT)
#define FGI_D_4_MODER 0x00000100
#elif defined(FGI_D_4_MODER_AF)
#define FGI_D_4_MODER 0x00000200
#elif defined(FGI_D_4_MODER_AN)
#define FGI_D_4_MODER 0x00000300
#else
#define FGI_D_4_MODER 0x00000000
#endif

#if defined(FGI_D_5_MODER_IN)
#define FGI_D_5_MODER 0x00000000
#elif defined(FGI_D_5_MODER_OUT)
#define FGI_D_5_MODER 0x00000400
#elif defined(FGI_D_5_MODER_AF)
#define FGI_D_5_MODER 0x00000800
#elif defined(FGI_D_5_MODER_AN)
#define FGI_D_5_MODER 0x00000c00
#else
#define FGI_D_5_MODER 0x00000000
#endif

#if defined(FGI_D_6_MODER_IN)
#define FGI_D_6_MODER 0x00000000
#elif defined(FGI_D_6_MODER_OUT)
#define FGI_D_6_MODER 0x00001000
#elif defined(FGI_D_6_MODER_AF)
#define FGI_D_6_MODER 0x00002000
#elif defined(FGI_D_6_MODER_AN)
#define FGI_D_6_MODER 0x00003000
#else
#define FGI_D_6_MODER 0x00000000
#endif

#if defined(FGI_D_7_MODER_IN)
#define FGI_D_7_MODER 0x00000000
#elif defined(FGI_D_7_MODER_OUT)
#define FGI_D_7_MODER 0x00004000
#elif defined(FGI_D_7_MODER_AF)
#define FGI_D_7_MODER 0x00008000
#elif defined(FGI_D_7_MODER_AN)
#define FGI_D_7_MODER 0x0000c000
#else
#define FGI_D_7_MODER 0x00000000
#endif

#if defined(FGI_D_8_MODER_IN)
#define FGI_D_8_MODER 0x00000000
#elif defined(FGI_D_8_MODER_OUT)
#define FGI_D_8_MODER 0x00010000
#elif defined(FGI_D_8_MODER_AF)
#define FGI_D_8_MODER 0x00020000
#elif defined(FGI_D_8_MODER_AN)
#define FGI_D_8_MODER 0x00030000
#else
#define FGI_D_8_MODER 0x00000000
#endif

#if defined(FGI_D_9_MODER_IN)
#define FGI_D_9_MODER 0x00000000
#elif defined(FGI_D_9_MODER_OUT)
#define FGI_D_9_MODER 0x00040000
#elif defined(FGI_D_9_MODER_AF)
#define FGI_D_9_MODER 0x00080000
#elif defined(FGI_D_9_MODER_AN)
#define FGI_D_9_MODER 0x000c0000
#else
#define FGI_D_9_MODER 0x00000000
#endif

#if defined(FGI_D_10_MODER_IN)
#define FGI_D_10_MODER 0x00000000
#elif defined(FGI_D_10_MODER_OUT)
#define FGI_D_10_MODER 0x00100000
#elif defined(FGI_D_10_MODER_AF)
#define FGI_D_10_MODER 0x00200000
#elif defined(FGI_D_10_MODER_AN)
#define FGI_D_10_MODER 0x00300000
#else
#define FGI_D_10_MODER 0x00000000
#endif

#if defined(FGI_D_11_MODER_IN)
#define FGI_D_11_MODER 0x00000000
#elif defined(FGI_D_11_MODER_OUT)
#define FGI_D_11_MODER 0x00400000
#elif defined(FGI_D_11_MODER_AF)
#define FGI_D_11_MODER 0x00800000
#elif defined(FGI_D_11_MODER_AN)
#define FGI_D_11_MODER 0x00c00000
#else
#define FGI_D_11_MODER 0x00000000
#endif

#if defined(FGI_D_12_MODER_IN)
#define FGI_D_12_MODER 0x00000000
#elif defined(FGI_D_12_MODER_OUT)
#define FGI_D_12_MODER 0x01000000
#elif defined(FGI_D_12_MODER_AF)
#define FGI_D_12_MODER 0x02000000
#elif defined(FGI_D_12_MODER_AN)
#define FGI_D_12_MODER 0x03000000
#else
#define FGI_D_12_MODER 0x00000000
#endif

#if defined(FGI_D_13_MODER_IN)
#define FGI_D_13_MODER 0x00000000
#elif defined(FGI_D_13_MODER_OUT)
#define FGI_D_13_MODER 0x04000000
#elif defined(FGI_D_13_MODER_AF)
#define FGI_D_13_MODER 0x08000000
#elif defined(FGI_D_13_MODER_AN)
#define FGI_D_13_MODER 0x0c000000
#else
#define FGI_D_13_MODER 0x00000000
#endif

#if defined(FGI_D_14_MODER_IN)
#define FGI_D_14_MODER 0x00000000
#elif defined(FGI_D_14_MODER_OUT)
#define FGI_D_14_MODER 0x10000000
#elif defined(FGI_D_14_MODER_AF)
#define FGI_D_14_MODER 0x20000000
#elif defined(FGI_D_14_MODER_AN)
#define FGI_D_14_MODER 0x30000000
#else
#define FGI_D_14_MODER 0x00000000
#endif

#if defined(FGI_D_15_MODER_IN)
#define FGI_D_15_MODER 0x00000000
#elif defined(FGI_D_15_MODER_OUT)
#define FGI_D_15_MODER 0x40000000
#elif defined(FGI_D_15_MODER_AF)
#define FGI_D_15_MODER 0x80000000
#elif defined(FGI_D_15_MODER_AN)
#define FGI_D_15_MODER 0xc0000000
#else
#define FGI_D_15_MODER 0x00000000
#endif

#if defined(FGI_D_0_OTYPER_PP)
#define FGI_D_0_OTYPER 0x00000000
#elif defined(FGI_D_0_OTYPER_OD)
#define FGI_D_0_OTYPER 0x00000001
#else
#define FGI_D_0_OTYPER 0x00000000
#endif

#if defined(FGI_D_1_OTYPER_PP)
#define FGI_D_1_OTYPER 0x00000000
#elif defined(FGI_D_1_OTYPER_OD)
#define FGI_D_1_OTYPER 0x00000002
#else
#define FGI_D_1_OTYPER 0x00000000
#endif

#if defined(FGI_D_2_OTYPER_PP)
#define FGI_D_2_OTYPER 0x00000000
#elif defined(FGI_D_2_OTYPER_OD)
#define FGI_D_2_OTYPER 0x00000004
#else
#define FGI_D_2_OTYPER 0x00000000
#endif

#if defined(FGI_D_3_OTYPER_PP)
#define FGI_D_3_OTYPER 0x00000000
#elif defined(FGI_D_3_OTYPER_OD)
#define FGI_D_3_OTYPER 0x00000008
#else
#define FGI_D_3_OTYPER 0x00000000
#endif

#if defined(FGI_D_4_OTYPER_PP)
#define FGI_D_4_OTYPER 0x00000000
#elif defined(FGI_D_4_OTYPER_OD)
#define FGI_D_4_OTYPER 0x00000010
#else
#define FGI_D_4_OTYPER 0x00000000
#endif

#if defined(FGI_D_5_OTYPER_PP)
#define FGI_D_5_OTYPER 0x00000000
#elif defined(FGI_D_5_OTYPER_OD)
#define FGI_D_5_OTYPER 0x00000020
#else
#define FGI_D_5_OTYPER 0x00000000
#endif

#if defined(FGI_D_6_OTYPER_PP)
#define FGI_D_6_OTYPER 0x00000000
#elif defined(FGI_D_6_OTYPER_OD)
#define FGI_D_6_OTYPER 0x00000040
#else
#define FGI_D_6_OTYPER 0x00000000
#endif

#if defined(FGI_D_7_OTYPER_PP)
#define FGI_D_7_OTYPER 0x00000000
#elif defined(FGI_D_7_OTYPER_OD)
#define FGI_D_7_OTYPER 0x00000080
#else
#define FGI_D_7_OTYPER 0x00000000
#endif

#if defined(FGI_D_8_OTYPER_PP)
#define FGI_D_8_OTYPER 0x00000000
#elif defined(FGI_D_8_OTYPER_OD)
#define FGI_D_8_OTYPER 0x00000100
#else
#define FGI_D_8_OTYPER 0x00000000
#endif

#if defined(FGI_D_9_OTYPER_PP)
#define FGI_D_9_OTYPER 0x00000000
#elif defined(FGI_D_9_OTYPER_OD)
#define FGI_D_9_OTYPER 0x00000200
#else
#define FGI_D_9_OTYPER 0x00000000
#endif

#if defined(FGI_D_10_OTYPER_PP)
#define FGI_D_10_OTYPER 0x00000000
#elif defined(FGI_D_10_OTYPER_OD)
#define FGI_D_10_OTYPER 0x00000400
#else
#define FGI_D_10_OTYPER 0x00000000
#endif

#if defined(FGI_D_11_OTYPER_PP)
#define FGI_D_11_OTYPER 0x00000000
#elif defined(FGI_D_11_OTYPER_OD)
#define FGI_D_11_OTYPER 0x00000800
#else
#define FGI_D_11_OTYPER 0x00000000
#endif

#if defined(FGI_D_12_OTYPER_PP)
#define FGI_D_12_OTYPER 0x00000000
#elif defined(FGI_D_12_OTYPER_OD)
#define FGI_D_12_OTYPER 0x00001000
#else
#define FGI_D_12_OTYPER 0x00000000
#endif

#if defined(FGI_D_13_OTYPER_PP)
#define FGI_D_13_OTYPER 0x00000000
#elif defined(FGI_D_13_OTYPER_OD)
#define FGI_D_13_OTYPER 0x00002000
#else
#define FGI_D_13_OTYPER 0x00000000
#endif

#if defined(FGI_D_14_OTYPER_PP)
#define FGI_D_14_OTYPER 0x00000000
#elif defined(FGI_D_14_OTYPER_OD)
#define FGI_D_14_OTYPER 0x00004000
#else
#define FGI_D_14_OTYPER 0x00000000
#endif

#if defined(FGI_D_15_OTYPER_PP)
#define FGI_D_15_OTYPER 0x00000000
#elif defined(FGI_D_15_OTYPER_OD)
#define FGI_D_15_OTYPER 0x00008000
#else
#define FGI_D_15_OTYPER 0x00000000
#endif

#if defined(FGI_D_0_OSPEEDR_LOW)
#define FGI_D_0_OSPEEDR 0x00000000
#elif defined(FGI_D_0_OSPEEDR_MEDIUM)
#define FGI_D_0_OSPEEDR 0x00000001
#elif defined(FGI_D_0_OSPEEDR_HIGH)
#define FGI_D_0_OSPEEDR 0x00000003
#else
#define FGI_D_0_OSPEEDR 0x00000000
#endif

#if defined(FGI_D_1_OSPEEDR_LOW)
#define FGI_D_1_OSPEEDR 0x00000000
#elif defined(FGI_D_1_OSPEEDR_MEDIUM)
#define FGI_D_1_OSPEEDR 0x00000004
#elif defined(FGI_D_1_OSPEEDR_HIGH)
#define FGI_D_1_OSPEEDR 0x0000000c
#else
#define FGI_D_1_OSPEEDR 0x00000000
#endif

#if defined(FGI_D_2_OSPEEDR_LOW)
#define FGI_D_2_OSPEEDR 0x00000000
#elif defined(FGI_D_2_OSPEEDR_MEDIUM)
#define FGI_D_2_OSPEEDR 0x00000010
#elif defined(FGI_D_2_OSPEEDR_HIGH)
#define FGI_D_2_OSPEEDR 0x00000030
#else
#define FGI_D_2_OSPEEDR 0x00000000
#endif

#if defined(FGI_D_3_OSPEEDR_LOW)
#define FGI_D_3_OSPEEDR 0x00000000
#elif defined(FGI_D_3_OSPEEDR_MEDIUM)
#define FGI_D_3_OSPEEDR 0x00000040
#elif defined(FGI_D_3_OSPEEDR_HIGH)
#define FGI_D_3_OSPEEDR 0x000000c0
#else
#define FGI_D_3_OSPEEDR 0x00000000
#endif

#if defined(FGI_D_4_OSPEEDR_LOW)
#define FGI_D_4_OSPEEDR 0x00000000
#elif defined(FGI_D_4_OSPEEDR_MEDIUM)
#define FGI_D_4_OSPEEDR 0x00000100
#elif defined(FGI_D_4_OSPEEDR_HIGH)
#define FGI_D_4_OSPEEDR 0x00000300
#else
#define FGI_D_4_OSPEEDR 0x00000000
#endif

#if defined(FGI_D_5_OSPEEDR_LOW)
#define FGI_D_5_OSPEEDR 0x00000000
#elif defined(FGI_D_5_OSPEEDR_MEDIUM)
#define FGI_D_5_OSPEEDR 0x00000400
#elif defined(FGI_D_5_OSPEEDR_HIGH)
#define FGI_D_5_OSPEEDR 0x00000c00
#else
#define FGI_D_5_OSPEEDR 0x00000000
#endif

#if defined(FGI_D_6_OSPEEDR_LOW)
#define FGI_D_6_OSPEEDR 0x00000000
#elif defined(FGI_D_6_OSPEEDR_MEDIUM)
#define FGI_D_6_OSPEEDR 0x00001000
#elif defined(FGI_D_6_OSPEEDR_HIGH)
#define FGI_D_6_OSPEEDR 0x00003000
#else
#define FGI_D_6_OSPEEDR 0x00000000
#endif

#if defined(FGI_D_7_OSPEEDR_LOW)
#define FGI_D_7_OSPEEDR 0x00000000
#elif defined(FGI_D_7_OSPEEDR_MEDIUM)
#define FGI_D_7_OSPEEDR 0x00004000
#elif defined(FGI_D_7_OSPEEDR_HIGH)
#define FGI_D_7_OSPEEDR 0x0000c000
#else
#define FGI_D_7_OSPEEDR 0x00000000
#endif

#if defined(FGI_D_8_OSPEEDR_LOW)
#define FGI_D_8_OSPEEDR 0x00000000
#elif defined(FGI_D_8_OSPEEDR_MEDIUM)
#define FGI_D_8_OSPEEDR 0x00010000
#elif defined(FGI_D_8_OSPEEDR_HIGH)
#define FGI_D_8_OSPEEDR 0x00030000
#else
#define FGI_D_8_OSPEEDR 0x00000000
#endif

#if defined(FGI_D_9_OSPEEDR_LOW)
#define FGI_D_9_OSPEEDR 0x00000000
#elif defined(FGI_D_9_OSPEEDR_MEDIUM)
#define FGI_D_9_OSPEEDR 0x00040000
#elif defined(FGI_D_9_OSPEEDR_HIGH)
#define FGI_D_9_OSPEEDR 0x000c0000
#else
#define FGI_D_9_OSPEEDR 0x00000000
#endif

#if defined(FGI_D_10_OSPEEDR_LOW)
#define FGI_D_10_OSPEEDR 0x00000000
#elif defined(FGI_D_10_OSPEEDR_MEDIUM)
#define FGI_D_10_OSPEEDR 0x00100000
#elif defined(FGI_D_10_OSPEEDR_HIGH)
#define FGI_D_10_OSPEEDR 0x00300000
#else
#define FGI_D_10_OSPEEDR 0x00000000
#endif

#if defined(FGI_D_11_OSPEEDR_LOW)
#define FGI_D_11_OSPEEDR 0x00000000
#elif defined(FGI_D_11_OSPEEDR_MEDIUM)
#define FGI_D_11_OSPEEDR 0x00400000
#elif defined(FGI_D_11_OSPEEDR_HIGH)
#define FGI_D_11_OSPEEDR 0x00c00000
#else
#define FGI_D_11_OSPEEDR 0x00000000
#endif

#if defined(FGI_D_12_OSPEEDR_LOW)
#define FGI_D_12_OSPEEDR 0x00000000
#elif defined(FGI_D_12_OSPEEDR_MEDIUM)
#define FGI_D_12_OSPEEDR 0x01000000
#elif defined(FGI_D_12_OSPEEDR_HIGH)
#define FGI_D_12_OSPEEDR 0x03000000
#else
#define FGI_D_12_OSPEEDR 0x00000000
#endif

#if defined(FGI_D_13_OSPEEDR_LOW)
#define FGI_D_13_OSPEEDR 0x00000000
#elif defined(FGI_D_13_OSPEEDR_MEDIUM)
#define FGI_D_13_OSPEEDR 0x04000000
#elif defined(FGI_D_13_OSPEEDR_HIGH)
#define FGI_D_13_OSPEEDR 0x0c000000
#else
#define FGI_D_13_OSPEEDR 0x00000000
#endif

#if defined(FGI_D_14_OSPEEDR_LOW)
#define FGI_D_14_OSPEEDR 0x00000000
#elif defined(FGI_D_14_OSPEEDR_MEDIUM)
#define FGI_D_14_OSPEEDR 0x10000000
#elif defined(FGI_D_14_OSPEEDR_HIGH)
#define FGI_D_14_OSPEEDR 0x30000000
#else
#define FGI_D_14_OSPEEDR 0x00000000
#endif

#if defined(FGI_D_15_OSPEEDR_LOW)
#define FGI_D_15_OSPEEDR 0x00000000
#elif defined(FGI_D_15_OSPEEDR_MEDIUM)
#define FGI_D_15_OSPEEDR 0x40000000
#elif defined(FGI_D_15_OSPEEDR_HIGH)
#define FGI_D_15_OSPEEDR 0xc0000000
#else
#define FGI_D_15_OSPEEDR 0x00000000
#endif

#if defined(FGI_D_0_PUPDR_NOPULL)
#define FGI_D_0_PUPDR 0x00000000
#elif defined(FGI_D_0_PUPDR_PULL_UP)
#define FGI_D_0_PUPDR 0x00000001
#elif defined(FGI_D_0_PUPDR_PULL_DOWN)
#define FGI_D_0_PUPDR 0x00000003
#else
#define FGI_D_0_PUPDR 0x00000000
#endif

#if defined(FGI_D_1_PUPDR_NOPULL)
#define FGI_D_1_PUPDR 0x00000000
#elif defined(FGI_D_1_PUPDR_PULL_UP)
#define FGI_D_1_PUPDR 0x00000004
#elif defined(FGI_D_1_PUPDR_PULL_DOWN)
#define FGI_D_1_PUPDR 0x0000000c
#else
#define FGI_D_1_PUPDR 0x00000000
#endif

#if defined(FGI_D_2_PUPDR_NOPULL)
#define FGI_D_2_PUPDR 0x00000000
#elif defined(FGI_D_2_PUPDR_PULL_UP)
#define FGI_D_2_PUPDR 0x00000010
#elif defined(FGI_D_2_PUPDR_PULL_DOWN)
#define FGI_D_2_PUPDR 0x00000030
#else
#define FGI_D_2_PUPDR 0x00000000
#endif

#if defined(FGI_D_3_PUPDR_NOPULL)
#define FGI_D_3_PUPDR 0x00000000
#elif defined(FGI_D_3_PUPDR_PULL_UP)
#define FGI_D_3_PUPDR 0x00000040
#elif defined(FGI_D_3_PUPDR_PULL_DOWN)
#define FGI_D_3_PUPDR 0x000000c0
#else
#define FGI_D_3_PUPDR 0x00000000
#endif

#if defined(FGI_D_4_PUPDR_NOPULL)
#define FGI_D_4_PUPDR 0x00000000
#elif defined(FGI_D_4_PUPDR_PULL_UP)
#define FGI_D_4_PUPDR 0x00000100
#elif defined(FGI_D_4_PUPDR_PULL_DOWN)
#define FGI_D_4_PUPDR 0x00000300
#else
#define FGI_D_4_PUPDR 0x00000000
#endif

#if defined(FGI_D_5_PUPDR_NOPULL)
#define FGI_D_5_PUPDR 0x00000000
#elif defined(FGI_D_5_PUPDR_PULL_UP)
#define FGI_D_5_PUPDR 0x00000400
#elif defined(FGI_D_5_PUPDR_PULL_DOWN)
#define FGI_D_5_PUPDR 0x00000c00
#else
#define FGI_D_5_PUPDR 0x00000000
#endif

#if defined(FGI_D_6_PUPDR_NOPULL)
#define FGI_D_6_PUPDR 0x00000000
#elif defined(FGI_D_6_PUPDR_PULL_UP)
#define FGI_D_6_PUPDR 0x00001000
#elif defined(FGI_D_6_PUPDR_PULL_DOWN)
#define FGI_D_6_PUPDR 0x00003000
#else
#define FGI_D_6_PUPDR 0x00000000
#endif

#if defined(FGI_D_7_PUPDR_NOPULL)
#define FGI_D_7_PUPDR 0x00000000
#elif defined(FGI_D_7_PUPDR_PULL_UP)
#define FGI_D_7_PUPDR 0x00004000
#elif defined(FGI_D_7_PUPDR_PULL_DOWN)
#define FGI_D_7_PUPDR 0x0000c000
#else
#define FGI_D_7_PUPDR 0x00000000
#endif

#if defined(FGI_D_8_PUPDR_NOPULL)
#define FGI_D_8_PUPDR 0x00000000
#elif defined(FGI_D_8_PUPDR_PULL_UP)
#define FGI_D_8_PUPDR 0x00010000
#elif defined(FGI_D_8_PUPDR_PULL_DOWN)
#define FGI_D_8_PUPDR 0x00030000
#else
#define FGI_D_8_PUPDR 0x00000000
#endif

#if defined(FGI_D_9_PUPDR_NOPULL)
#define FGI_D_9_PUPDR 0x00000000
#elif defined(FGI_D_9_PUPDR_PULL_UP)
#define FGI_D_9_PUPDR 0x00040000
#elif defined(FGI_D_9_PUPDR_PULL_DOWN)
#define FGI_D_9_PUPDR 0x000c0000
#else
#define FGI_D_9_PUPDR 0x00000000
#endif

#if defined(FGI_D_10_PUPDR_NOPULL)
#define FGI_D_10_PUPDR 0x00000000
#elif defined(FGI_D_10_PUPDR_PULL_UP)
#define FGI_D_10_PUPDR 0x00100000
#elif defined(FGI_D_10_PUPDR_PULL_DOWN)
#define FGI_D_10_PUPDR 0x00300000
#else
#define FGI_D_10_PUPDR 0x00000000
#endif

#if defined(FGI_D_11_PUPDR_NOPULL)
#define FGI_D_11_PUPDR 0x00000000
#elif defined(FGI_D_11_PUPDR_PULL_UP)
#define FGI_D_11_PUPDR 0x00400000
#elif defined(FGI_D_11_PUPDR_PULL_DOWN)
#define FGI_D_11_PUPDR 0x00c00000
#else
#define FGI_D_11_PUPDR 0x00000000
#endif

#if defined(FGI_D_12_PUPDR_NOPULL)
#define FGI_D_12_PUPDR 0x00000000
#elif defined(FGI_D_12_PUPDR_PULL_UP)
#define FGI_D_12_PUPDR 0x01000000
#elif defined(FGI_D_12_PUPDR_PULL_DOWN)
#define FGI_D_12_PUPDR 0x03000000
#else
#define FGI_D_12_PUPDR 0x00000000
#endif

#if defined(FGI_D_13_PUPDR_NOPULL)
#define FGI_D_13_PUPDR 0x00000000
#elif defined(FGI_D_13_PUPDR_PULL_UP)
#define FGI_D_13_PUPDR 0x04000000
#elif defined(FGI_D_13_PUPDR_PULL_DOWN)
#define FGI_D_13_PUPDR 0x0c000000
#else
#define FGI_D_13_PUPDR 0x00000000
#endif

#if defined(FGI_D_14_PUPDR_NOPULL)
#define FGI_D_14_PUPDR 0x00000000
#elif defined(FGI_D_14_PUPDR_PULL_UP)
#define FGI_D_14_PUPDR 0x10000000
#elif defined(FGI_D_14_PUPDR_PULL_DOWN)
#define FGI_D_14_PUPDR 0x30000000
#else
#define FGI_D_14_PUPDR 0x00000000
#endif

#if defined(FGI_D_15_PUPDR_NOPULL)
#define FGI_D_15_PUPDR 0x00000000
#elif defined(FGI_D_15_PUPDR_PULL_UP)
#define FGI_D_15_PUPDR 0x40000000
#elif defined(FGI_D_15_PUPDR_PULL_DOWN)
#define FGI_D_15_PUPDR 0xc0000000
#else
#define FGI_D_15_PUPDR 0x00000000
#endif

#if defined(FGI_D_0_AFR_AF0)
#define FGI_D_0_AFR 0x00000000
#elif defined(FGI_D_0_AFR_AF1)
#define FGI_D_0_AFR 0x00000001
#elif defined(FGI_D_0_AFR_AF2)
#define FGI_D_0_AFR 0x00000002
#elif defined(FGI_D_0_AFR_AF3)
#define FGI_D_0_AFR 0x00000003
#elif defined(FGI_D_0_AFR_AF4)
#define FGI_D_0_AFR 0x00000004
#elif defined(FGI_D_0_AFR_AF5)
#define FGI_D_0_AFR 0x00000005
#elif defined(FGI_D_0_AFR_AF6)
#define FGI_D_0_AFR 0x00000006
#elif defined(FGI_D_0_AFR_AF7)
#define FGI_D_0_AFR 0x00000007
#else
#define FGI_D_0_AFR 0x00000000
#endif

#if defined(FGI_D_1_AFR_AF0)
#define FGI_D_1_AFR 0x00000000
#elif defined(FGI_D_1_AFR_AF1)
#define FGI_D_1_AFR 0x00000010
#elif defined(FGI_D_1_AFR_AF2)
#define FGI_D_1_AFR 0x00000020
#elif defined(FGI_D_1_AFR_AF3)
#define FGI_D_1_AFR 0x00000030
#elif defined(FGI_D_1_AFR_AF4)
#define FGI_D_1_AFR 0x00000040
#elif defined(FGI_D_1_AFR_AF5)
#define FGI_D_1_AFR 0x00000050
#elif defined(FGI_D_1_AFR_AF6)
#define FGI_D_1_AFR 0x00000060
#elif defined(FGI_D_1_AFR_AF7)
#define FGI_D_1_AFR 0x00000070
#else
#define FGI_D_1_AFR 0x00000000
#endif

#if defined(FGI_D_2_AFR_AF0)
#define FGI_D_2_AFR 0x00000000
#elif defined(FGI_D_2_AFR_AF1)
#define FGI_D_2_AFR 0x00000100
#elif defined(FGI_D_2_AFR_AF2)
#define FGI_D_2_AFR 0x00000200
#elif defined(FGI_D_2_AFR_AF3)
#define FGI_D_2_AFR 0x00000300
#elif defined(FGI_D_2_AFR_AF4)
#define FGI_D_2_AFR 0x00000400
#elif defined(FGI_D_2_AFR_AF5)
#define FGI_D_2_AFR 0x00000500
#elif defined(FGI_D_2_AFR_AF6)
#define FGI_D_2_AFR 0x00000600
#elif defined(FGI_D_2_AFR_AF7)
#define FGI_D_2_AFR 0x00000700
#else
#define FGI_D_2_AFR 0x00000000
#endif

#if defined(FGI_D_3_AFR_AF0)
#define FGI_D_3_AFR 0x00000000
#elif defined(FGI_D_3_AFR_AF1)
#define FGI_D_3_AFR 0x00001000
#elif defined(FGI_D_3_AFR_AF2)
#define FGI_D_3_AFR 0x00002000
#elif defined(FGI_D_3_AFR_AF3)
#define FGI_D_3_AFR 0x00003000
#elif defined(FGI_D_3_AFR_AF4)
#define FGI_D_3_AFR 0x00004000
#elif defined(FGI_D_3_AFR_AF5)
#define FGI_D_3_AFR 0x00005000
#elif defined(FGI_D_3_AFR_AF6)
#define FGI_D_3_AFR 0x00006000
#elif defined(FGI_D_3_AFR_AF7)
#define FGI_D_3_AFR 0x00007000
#else
#define FGI_D_3_AFR 0x00000000
#endif

#if defined(FGI_D_4_AFR_AF0)
#define FGI_D_4_AFR 0x00000000
#elif defined(FGI_D_4_AFR_AF1)
#define FGI_D_4_AFR 0x00010000
#elif defined(FGI_D_4_AFR_AF2)
#define FGI_D_4_AFR 0x00020000
#elif defined(FGI_D_4_AFR_AF3)
#define FGI_D_4_AFR 0x00030000
#elif defined(FGI_D_4_AFR_AF4)
#define FGI_D_4_AFR 0x00040000
#elif defined(FGI_D_4_AFR_AF5)
#define FGI_D_4_AFR 0x00050000
#elif defined(FGI_D_4_AFR_AF6)
#define FGI_D_4_AFR 0x00060000
#elif defined(FGI_D_4_AFR_AF7)
#define FGI_D_4_AFR 0x00070000
#else
#define FGI_D_4_AFR 0x00000000
#endif

#if defined(FGI_D_5_AFR_AF0)
#define FGI_D_5_AFR 0x00000000
#elif defined(FGI_D_5_AFR_AF1)
#define FGI_D_5_AFR 0x00100000
#elif defined(FGI_D_5_AFR_AF2)
#define FGI_D_5_AFR 0x00200000
#elif defined(FGI_D_5_AFR_AF3)
#define FGI_D_5_AFR 0x00300000
#elif defined(FGI_D_5_AFR_AF4)
#define FGI_D_5_AFR 0x00400000
#elif defined(FGI_D_5_AFR_AF5)
#define FGI_D_5_AFR 0x00500000
#elif defined(FGI_D_5_AFR_AF6)
#define FGI_D_5_AFR 0x00600000
#elif defined(FGI_D_5_AFR_AF7)
#define FGI_D_5_AFR 0x00700000
#else
#define FGI_D_5_AFR 0x00000000
#endif

#if defined(FGI_D_6_AFR_AF0)
#define FGI_D_6_AFR 0x00000000
#elif defined(FGI_D_6_AFR_AF1)
#define FGI_D_6_AFR 0x01000000
#elif defined(FGI_D_6_AFR_AF2)
#define FGI_D_6_AFR 0x02000000
#elif defined(FGI_D_6_AFR_AF3)
#define FGI_D_6_AFR 0x03000000
#elif defined(FGI_D_6_AFR_AF4)
#define FGI_D_6_AFR 0x04000000
#elif defined(FGI_D_6_AFR_AF5)
#define FGI_D_6_AFR 0x05000000
#elif defined(FGI_D_6_AFR_AF6)
#define FGI_D_6_AFR 0x06000000
#elif defined(FGI_D_6_AFR_AF7)
#define FGI_D_6_AFR 0x07000000
#else
#define FGI_D_6_AFR 0x00000000
#endif

#if defined(FGI_D_7_AFR_AF0)
#define FGI_D_7_AFR 0x00000000
#elif defined(FGI_D_7_AFR_AF1)
#define FGI_D_7_AFR 0x10000000
#elif defined(FGI_D_7_AFR_AF2)
#define FGI_D_7_AFR 0x20000000
#elif defined(FGI_D_7_AFR_AF3)
#define FGI_D_7_AFR 0x30000000
#elif defined(FGI_D_7_AFR_AF4)
#define FGI_D_7_AFR 0x40000000
#elif defined(FGI_D_7_AFR_AF5)
#define FGI_D_7_AFR 0x50000000
#elif defined(FGI_D_7_AFR_AF6)
#define FGI_D_7_AFR 0x60000000
#elif defined(FGI_D_7_AFR_AF7)
#define FGI_D_7_AFR 0x70000000
#else
#define FGI_D_7_AFR 0x00000000
#endif

#if defined(FGI_D_8_AFR_AF0)
#define FGI_D_8_AFR 0x00000000
#elif defined(FGI_D_8_AFR_AF1)
#define FGI_D_8_AFR 0x00000001
#elif defined(FGI_D_8_AFR_AF2)
#define FGI_D_8_AFR 0x00000002
#elif defined(FGI_D_8_AFR_AF3)
#define FGI_D_8_AFR 0x00000003
#elif defined(FGI_D_8_AFR_AF4)
#define FGI_D_8_AFR 0x00000004
#elif defined(FGI_D_8_AFR_AF5)
#define FGI_D_8_AFR 0x00000005
#elif defined(FGI_D_8_AFR_AF6)
#define FGI_D_8_AFR 0x00000006
#elif defined(FGI_D_8_AFR_AF7)
#define FGI_D_8_AFR 0x00000007
#else
#define FGI_D_8_AFR 0x00000000
#endif

#if defined(FGI_D_9_AFR_AF0)
#define FGI_D_9_AFR 0x00000000
#elif defined(FGI_D_9_AFR_AF1)
#define FGI_D_9_AFR 0x00000010
#elif defined(FGI_D_9_AFR_AF2)
#define FGI_D_9_AFR 0x00000020
#elif defined(FGI_D_9_AFR_AF3)
#define FGI_D_9_AFR 0x00000030
#elif defined(FGI_D_9_AFR_AF4)
#define FGI_D_9_AFR 0x00000040
#elif defined(FGI_D_9_AFR_AF5)
#define FGI_D_9_AFR 0x00000050
#elif defined(FGI_D_9_AFR_AF6)
#define FGI_D_9_AFR 0x00000060
#elif defined(FGI_D_9_AFR_AF7)
#define FGI_D_9_AFR 0x00000070
#else
#define FGI_D_9_AFR 0x00000000
#endif

#if defined(FGI_D_10_AFR_AF0)
#define FGI_D_10_AFR 0x00000000
#elif defined(FGI_D_10_AFR_AF1)
#define FGI_D_10_AFR 0x00000100
#elif defined(FGI_D_10_AFR_AF2)
#define FGI_D_10_AFR 0x00000200
#elif defined(FGI_D_10_AFR_AF3)
#define FGI_D_10_AFR 0x00000300
#elif defined(FGI_D_10_AFR_AF4)
#define FGI_D_10_AFR 0x00000400
#elif defined(FGI_D_10_AFR_AF5)
#define FGI_D_10_AFR 0x00000500
#elif defined(FGI_D_10_AFR_AF6)
#define FGI_D_10_AFR 0x00000600
#elif defined(FGI_D_10_AFR_AF7)
#define FGI_D_10_AFR 0x00000700
#else
#define FGI_D_10_AFR 0x00000000
#endif

#if defined(FGI_D_11_AFR_AF0)
#define FGI_D_11_AFR 0x00000000
#elif defined(FGI_D_11_AFR_AF1)
#define FGI_D_11_AFR 0x00001000
#elif defined(FGI_D_11_AFR_AF2)
#define FGI_D_11_AFR 0x00002000
#elif defined(FGI_D_11_AFR_AF3)
#define FGI_D_11_AFR 0x00003000
#elif defined(FGI_D_11_AFR_AF4)
#define FGI_D_11_AFR 0x00004000
#elif defined(FGI_D_11_AFR_AF5)
#define FGI_D_11_AFR 0x00005000
#elif defined(FGI_D_11_AFR_AF6)
#define FGI_D_11_AFR 0x00006000
#elif defined(FGI_D_11_AFR_AF7)
#define FGI_D_11_AFR 0x00007000
#else
#define FGI_D_11_AFR 0x00000000
#endif

#if defined(FGI_D_12_AFR_AF0)
#define FGI_D_12_AFR 0x00000000
#elif defined(FGI_D_12_AFR_AF1)
#define FGI_D_12_AFR 0x00010000
#elif defined(FGI_D_12_AFR_AF2)
#define FGI_D_12_AFR 0x00020000
#elif defined(FGI_D_12_AFR_AF3)
#define FGI_D_12_AFR 0x00030000
#elif defined(FGI_D_12_AFR_AF4)
#define FGI_D_12_AFR 0x00040000
#elif defined(FGI_D_12_AFR_AF5)
#define FGI_D_12_AFR 0x00050000
#elif defined(FGI_D_12_AFR_AF6)
#define FGI_D_12_AFR 0x00060000
#elif defined(FGI_D_12_AFR_AF7)
#define FGI_D_12_AFR 0x00070000
#else
#define FGI_D_12_AFR 0x00000000
#endif

#if defined(FGI_D_13_AFR_AF0)
#define FGI_D_13_AFR 0x00000000
#elif defined(FGI_D_13_AFR_AF1)
#define FGI_D_13_AFR 0x00100000
#elif defined(FGI_D_13_AFR_AF2)
#define FGI_D_13_AFR 0x00200000
#elif defined(FGI_D_13_AFR_AF3)
#define FGI_D_13_AFR 0x00300000
#elif defined(FGI_D_13_AFR_AF4)
#define FGI_D_13_AFR 0x00400000
#elif defined(FGI_D_13_AFR_AF5)
#define FGI_D_13_AFR 0x00500000
#elif defined(FGI_D_13_AFR_AF6)
#define FGI_D_13_AFR 0x00600000
#elif defined(FGI_D_13_AFR_AF7)
#define FGI_D_13_AFR 0x00700000
#else
#define FGI_D_13_AFR 0x00000000
#endif

#if defined(FGI_D_14_AFR_AF0)
#define FGI_D_14_AFR 0x00000000
#elif defined(FGI_D_14_AFR_AF1)
#define FGI_D_14_AFR 0x01000000
#elif defined(FGI_D_14_AFR_AF2)
#define FGI_D_14_AFR 0x02000000
#elif defined(FGI_D_14_AFR_AF3)
#define FGI_D_14_AFR 0x03000000
#elif defined(FGI_D_14_AFR_AF4)
#define FGI_D_14_AFR 0x04000000
#elif defined(FGI_D_14_AFR_AF5)
#define FGI_D_14_AFR 0x05000000
#elif defined(FGI_D_14_AFR_AF6)
#define FGI_D_14_AFR 0x06000000
#elif defined(FGI_D_14_AFR_AF7)
#define FGI_D_14_AFR 0x07000000
#else
#define FGI_D_14_AFR 0x00000000
#endif

#if defined(FGI_D_15_AFR_AF0)
#define FGI_D_15_AFR 0x00000000
#elif defined(FGI_D_15_AFR_AF1)
#define FGI_D_15_AFR 0x10000000
#elif defined(FGI_D_15_AFR_AF2)
#define FGI_D_15_AFR 0x20000000
#elif defined(FGI_D_15_AFR_AF3)
#define FGI_D_15_AFR 0x30000000
#elif defined(FGI_D_15_AFR_AF4)
#define FGI_D_15_AFR 0x40000000
#elif defined(FGI_D_15_AFR_AF5)
#define FGI_D_15_AFR 0x50000000
#elif defined(FGI_D_15_AFR_AF6)
#define FGI_D_15_AFR 0x60000000
#elif defined(FGI_D_15_AFR_AF7)
#define FGI_D_15_AFR 0x70000000
#else
#define FGI_D_15_AFR 0x00000000
#endif

#if defined(FGI_E_0_ODR_0)
#define FGI_E_0_ODR 0x00000000
#elif defined(FGI_E_0_ODR_1)
#define FGI_E_0_ODR 0x00000001
#else
#define FGI_E_0_ODR 0x00000000
#endif

#if defined(FGI_E_1_ODR_0)
#define FGI_E_1_ODR 0x00000000
#elif defined(FGI_E_1_ODR_1)
#define FGI_E_1_ODR 0x00000002
#else
#define FGI_E_1_ODR 0x00000000
#endif

#if defined(FGI_E_2_ODR_0)
#define FGI_E_2_ODR 0x00000000
#elif defined(FGI_E_2_ODR_1)
#define FGI_E_2_ODR 0x00000004
#else
#define FGI_E_2_ODR 0x00000000
#endif

#if defined(FGI_E_3_ODR_0)
#define FGI_E_3_ODR 0x00000000
#elif defined(FGI_E_3_ODR_1)
#define FGI_E_3_ODR 0x00000008
#else
#define FGI_E_3_ODR 0x00000000
#endif

#if defined(FGI_E_4_ODR_0)
#define FGI_E_4_ODR 0x00000000
#elif defined(FGI_E_4_ODR_1)
#define FGI_E_4_ODR 0x00000010
#else
#define FGI_E_4_ODR 0x00000000
#endif

#if defined(FGI_E_5_ODR_0)
#define FGI_E_5_ODR 0x00000000
#elif defined(FGI_E_5_ODR_1)
#define FGI_E_5_ODR 0x00000020
#else
#define FGI_E_5_ODR 0x00000000
#endif

#if defined(FGI_E_6_ODR_0)
#define FGI_E_6_ODR 0x00000000
#elif defined(FGI_E_6_ODR_1)
#define FGI_E_6_ODR 0x00000040
#else
#define FGI_E_6_ODR 0x00000000
#endif

#if defined(FGI_E_7_ODR_0)
#define FGI_E_7_ODR 0x00000000
#elif defined(FGI_E_7_ODR_1)
#define FGI_E_7_ODR 0x00000080
#else
#define FGI_E_7_ODR 0x00000000
#endif

#if defined(FGI_E_8_ODR_0)
#define FGI_E_8_ODR 0x00000000
#elif defined(FGI_E_8_ODR_1)
#define FGI_E_8_ODR 0x00000100
#else
#define FGI_E_8_ODR 0x00000000
#endif

#if defined(FGI_E_9_ODR_0)
#define FGI_E_9_ODR 0x00000000
#elif defined(FGI_E_9_ODR_1)
#define FGI_E_9_ODR 0x00000200
#else
#define FGI_E_9_ODR 0x00000000
#endif

#if defined(FGI_E_10_ODR_0)
#define FGI_E_10_ODR 0x00000000
#elif defined(FGI_E_10_ODR_1)
#define FGI_E_10_ODR 0x00000400
#else
#define FGI_E_10_ODR 0x00000000
#endif

#if defined(FGI_E_11_ODR_0)
#define FGI_E_11_ODR 0x00000000
#elif defined(FGI_E_11_ODR_1)
#define FGI_E_11_ODR 0x00000800
#else
#define FGI_E_11_ODR 0x00000000
#endif

#if defined(FGI_E_12_ODR_0)
#define FGI_E_12_ODR 0x00000000
#elif defined(FGI_E_12_ODR_1)
#define FGI_E_12_ODR 0x00001000
#else
#define FGI_E_12_ODR 0x00000000
#endif

#if defined(FGI_E_13_ODR_0)
#define FGI_E_13_ODR 0x00000000
#elif defined(FGI_E_13_ODR_1)
#define FGI_E_13_ODR 0x00002000
#else
#define FGI_E_13_ODR 0x00000000
#endif

#if defined(FGI_E_14_ODR_0)
#define FGI_E_14_ODR 0x00000000
#elif defined(FGI_E_14_ODR_1)
#define FGI_E_14_ODR 0x00004000
#else
#define FGI_E_14_ODR 0x00000000
#endif

#if defined(FGI_E_15_ODR_0)
#define FGI_E_15_ODR 0x00000000
#elif defined(FGI_E_15_ODR_1)
#define FGI_E_15_ODR 0x00008000
#else
#define FGI_E_15_ODR 0x00000000
#endif

#if defined(FGI_E_0_MODER_IN)
#define FGI_E_0_MODER 0x00000000
#elif defined(FGI_E_0_MODER_OUT)
#define FGI_E_0_MODER 0x00000001
#elif defined(FGI_E_0_MODER_AF)
#define FGI_E_0_MODER 0x00000002
#elif defined(FGI_E_0_MODER_AN)
#define FGI_E_0_MODER 0x00000003
#else
#define FGI_E_0_MODER 0x00000000
#endif

#if defined(FGI_E_1_MODER_IN)
#define FGI_E_1_MODER 0x00000000
#elif defined(FGI_E_1_MODER_OUT)
#define FGI_E_1_MODER 0x00000004
#elif defined(FGI_E_1_MODER_AF)
#define FGI_E_1_MODER 0x00000008
#elif defined(FGI_E_1_MODER_AN)
#define FGI_E_1_MODER 0x0000000c
#else
#define FGI_E_1_MODER 0x00000000
#endif

#if defined(FGI_E_2_MODER_IN)
#define FGI_E_2_MODER 0x00000000
#elif defined(FGI_E_2_MODER_OUT)
#define FGI_E_2_MODER 0x00000010
#elif defined(FGI_E_2_MODER_AF)
#define FGI_E_2_MODER 0x00000020
#elif defined(FGI_E_2_MODER_AN)
#define FGI_E_2_MODER 0x00000030
#else
#define FGI_E_2_MODER 0x00000000
#endif

#if defined(FGI_E_3_MODER_IN)
#define FGI_E_3_MODER 0x00000000
#elif defined(FGI_E_3_MODER_OUT)
#define FGI_E_3_MODER 0x00000040
#elif defined(FGI_E_3_MODER_AF)
#define FGI_E_3_MODER 0x00000080
#elif defined(FGI_E_3_MODER_AN)
#define FGI_E_3_MODER 0x000000c0
#else
#define FGI_E_3_MODER 0x00000000
#endif

#if defined(FGI_E_4_MODER_IN)
#define FGI_E_4_MODER 0x00000000
#elif defined(FGI_E_4_MODER_OUT)
#define FGI_E_4_MODER 0x00000100
#elif defined(FGI_E_4_MODER_AF)
#define FGI_E_4_MODER 0x00000200
#elif defined(FGI_E_4_MODER_AN)
#define FGI_E_4_MODER 0x00000300
#else
#define FGI_E_4_MODER 0x00000000
#endif

#if defined(FGI_E_5_MODER_IN)
#define FGI_E_5_MODER 0x00000000
#elif defined(FGI_E_5_MODER_OUT)
#define FGI_E_5_MODER 0x00000400
#elif defined(FGI_E_5_MODER_AF)
#define FGI_E_5_MODER 0x00000800
#elif defined(FGI_E_5_MODER_AN)
#define FGI_E_5_MODER 0x00000c00
#else
#define FGI_E_5_MODER 0x00000000
#endif

#if defined(FGI_E_6_MODER_IN)
#define FGI_E_6_MODER 0x00000000
#elif defined(FGI_E_6_MODER_OUT)
#define FGI_E_6_MODER 0x00001000
#elif defined(FGI_E_6_MODER_AF)
#define FGI_E_6_MODER 0x00002000
#elif defined(FGI_E_6_MODER_AN)
#define FGI_E_6_MODER 0x00003000
#else
#define FGI_E_6_MODER 0x00000000
#endif

#if defined(FGI_E_7_MODER_IN)
#define FGI_E_7_MODER 0x00000000
#elif defined(FGI_E_7_MODER_OUT)
#define FGI_E_7_MODER 0x00004000
#elif defined(FGI_E_7_MODER_AF)
#define FGI_E_7_MODER 0x00008000
#elif defined(FGI_E_7_MODER_AN)
#define FGI_E_7_MODER 0x0000c000
#else
#define FGI_E_7_MODER 0x00000000
#endif

#if defined(FGI_E_8_MODER_IN)
#define FGI_E_8_MODER 0x00000000
#elif defined(FGI_E_8_MODER_OUT)
#define FGI_E_8_MODER 0x00010000
#elif defined(FGI_E_8_MODER_AF)
#define FGI_E_8_MODER 0x00020000
#elif defined(FGI_E_8_MODER_AN)
#define FGI_E_8_MODER 0x00030000
#else
#define FGI_E_8_MODER 0x00000000
#endif

#if defined(FGI_E_9_MODER_IN)
#define FGI_E_9_MODER 0x00000000
#elif defined(FGI_E_9_MODER_OUT)
#define FGI_E_9_MODER 0x00040000
#elif defined(FGI_E_9_MODER_AF)
#define FGI_E_9_MODER 0x00080000
#elif defined(FGI_E_9_MODER_AN)
#define FGI_E_9_MODER 0x000c0000
#else
#define FGI_E_9_MODER 0x00000000
#endif

#if defined(FGI_E_10_MODER_IN)
#define FGI_E_10_MODER 0x00000000
#elif defined(FGI_E_10_MODER_OUT)
#define FGI_E_10_MODER 0x00100000
#elif defined(FGI_E_10_MODER_AF)
#define FGI_E_10_MODER 0x00200000
#elif defined(FGI_E_10_MODER_AN)
#define FGI_E_10_MODER 0x00300000
#else
#define FGI_E_10_MODER 0x00000000
#endif

#if defined(FGI_E_11_MODER_IN)
#define FGI_E_11_MODER 0x00000000
#elif defined(FGI_E_11_MODER_OUT)
#define FGI_E_11_MODER 0x00400000
#elif defined(FGI_E_11_MODER_AF)
#define FGI_E_11_MODER 0x00800000
#elif defined(FGI_E_11_MODER_AN)
#define FGI_E_11_MODER 0x00c00000
#else
#define FGI_E_11_MODER 0x00000000
#endif

#if defined(FGI_E_12_MODER_IN)
#define FGI_E_12_MODER 0x00000000
#elif defined(FGI_E_12_MODER_OUT)
#define FGI_E_12_MODER 0x01000000
#elif defined(FGI_E_12_MODER_AF)
#define FGI_E_12_MODER 0x02000000
#elif defined(FGI_E_12_MODER_AN)
#define FGI_E_12_MODER 0x03000000
#else
#define FGI_E_12_MODER 0x00000000
#endif

#if defined(FGI_E_13_MODER_IN)
#define FGI_E_13_MODER 0x00000000
#elif defined(FGI_E_13_MODER_OUT)
#define FGI_E_13_MODER 0x04000000
#elif defined(FGI_E_13_MODER_AF)
#define FGI_E_13_MODER 0x08000000
#elif defined(FGI_E_13_MODER_AN)
#define FGI_E_13_MODER 0x0c000000
#else
#define FGI_E_13_MODER 0x00000000
#endif

#if defined(FGI_E_14_MODER_IN)
#define FGI_E_14_MODER 0x00000000
#elif defined(FGI_E_14_MODER_OUT)
#define FGI_E_14_MODER 0x10000000
#elif defined(FGI_E_14_MODER_AF)
#define FGI_E_14_MODER 0x20000000
#elif defined(FGI_E_14_MODER_AN)
#define FGI_E_14_MODER 0x30000000
#else
#define FGI_E_14_MODER 0x00000000
#endif

#if defined(FGI_E_15_MODER_IN)
#define FGI_E_15_MODER 0x00000000
#elif defined(FGI_E_15_MODER_OUT)
#define FGI_E_15_MODER 0x40000000
#elif defined(FGI_E_15_MODER_AF)
#define FGI_E_15_MODER 0x80000000
#elif defined(FGI_E_15_MODER_AN)
#define FGI_E_15_MODER 0xc0000000
#else
#define FGI_E_15_MODER 0x00000000
#endif

#if defined(FGI_E_0_OTYPER_PP)
#define FGI_E_0_OTYPER 0x00000000
#elif defined(FGI_E_0_OTYPER_OD)
#define FGI_E_0_OTYPER 0x00000001
#else
#define FGI_E_0_OTYPER 0x00000000
#endif

#if defined(FGI_E_1_OTYPER_PP)
#define FGI_E_1_OTYPER 0x00000000
#elif defined(FGI_E_1_OTYPER_OD)
#define FGI_E_1_OTYPER 0x00000002
#else
#define FGI_E_1_OTYPER 0x00000000
#endif

#if defined(FGI_E_2_OTYPER_PP)
#define FGI_E_2_OTYPER 0x00000000
#elif defined(FGI_E_2_OTYPER_OD)
#define FGI_E_2_OTYPER 0x00000004
#else
#define FGI_E_2_OTYPER 0x00000000
#endif

#if defined(FGI_E_3_OTYPER_PP)
#define FGI_E_3_OTYPER 0x00000000
#elif defined(FGI_E_3_OTYPER_OD)
#define FGI_E_3_OTYPER 0x00000008
#else
#define FGI_E_3_OTYPER 0x00000000
#endif

#if defined(FGI_E_4_OTYPER_PP)
#define FGI_E_4_OTYPER 0x00000000
#elif defined(FGI_E_4_OTYPER_OD)
#define FGI_E_4_OTYPER 0x00000010
#else
#define FGI_E_4_OTYPER 0x00000000
#endif

#if defined(FGI_E_5_OTYPER_PP)
#define FGI_E_5_OTYPER 0x00000000
#elif defined(FGI_E_5_OTYPER_OD)
#define FGI_E_5_OTYPER 0x00000020
#else
#define FGI_E_5_OTYPER 0x00000000
#endif

#if defined(FGI_E_6_OTYPER_PP)
#define FGI_E_6_OTYPER 0x00000000
#elif defined(FGI_E_6_OTYPER_OD)
#define FGI_E_6_OTYPER 0x00000040
#else
#define FGI_E_6_OTYPER 0x00000000
#endif

#if defined(FGI_E_7_OTYPER_PP)
#define FGI_E_7_OTYPER 0x00000000
#elif defined(FGI_E_7_OTYPER_OD)
#define FGI_E_7_OTYPER 0x00000080
#else
#define FGI_E_7_OTYPER 0x00000000
#endif

#if defined(FGI_E_8_OTYPER_PP)
#define FGI_E_8_OTYPER 0x00000000
#elif defined(FGI_E_8_OTYPER_OD)
#define FGI_E_8_OTYPER 0x00000100
#else
#define FGI_E_8_OTYPER 0x00000000
#endif

#if defined(FGI_E_9_OTYPER_PP)
#define FGI_E_9_OTYPER 0x00000000
#elif defined(FGI_E_9_OTYPER_OD)
#define FGI_E_9_OTYPER 0x00000200
#else
#define FGI_E_9_OTYPER 0x00000000
#endif

#if defined(FGI_E_10_OTYPER_PP)
#define FGI_E_10_OTYPER 0x00000000
#elif defined(FGI_E_10_OTYPER_OD)
#define FGI_E_10_OTYPER 0x00000400
#else
#define FGI_E_10_OTYPER 0x00000000
#endif

#if defined(FGI_E_11_OTYPER_PP)
#define FGI_E_11_OTYPER 0x00000000
#elif defined(FGI_E_11_OTYPER_OD)
#define FGI_E_11_OTYPER 0x00000800
#else
#define FGI_E_11_OTYPER 0x00000000
#endif

#if defined(FGI_E_12_OTYPER_PP)
#define FGI_E_12_OTYPER 0x00000000
#elif defined(FGI_E_12_OTYPER_OD)
#define FGI_E_12_OTYPER 0x00001000
#else
#define FGI_E_12_OTYPER 0x00000000
#endif

#if defined(FGI_E_13_OTYPER_PP)
#define FGI_E_13_OTYPER 0x00000000
#elif defined(FGI_E_13_OTYPER_OD)
#define FGI_E_13_OTYPER 0x00002000
#else
#define FGI_E_13_OTYPER 0x00000000
#endif

#if defined(FGI_E_14_OTYPER_PP)
#define FGI_E_14_OTYPER 0x00000000
#elif defined(FGI_E_14_OTYPER_OD)
#define FGI_E_14_OTYPER 0x00004000
#else
#define FGI_E_14_OTYPER 0x00000000
#endif

#if defined(FGI_E_15_OTYPER_PP)
#define FGI_E_15_OTYPER 0x00000000
#elif defined(FGI_E_15_OTYPER_OD)
#define FGI_E_15_OTYPER 0x00008000
#else
#define FGI_E_15_OTYPER 0x00000000
#endif

#if defined(FGI_E_0_OSPEEDR_LOW)
#define FGI_E_0_OSPEEDR 0x00000000
#elif defined(FGI_E_0_OSPEEDR_MEDIUM)
#define FGI_E_0_OSPEEDR 0x00000001
#elif defined(FGI_E_0_OSPEEDR_HIGH)
#define FGI_E_0_OSPEEDR 0x00000003
#else
#define FGI_E_0_OSPEEDR 0x00000000
#endif

#if defined(FGI_E_1_OSPEEDR_LOW)
#define FGI_E_1_OSPEEDR 0x00000000
#elif defined(FGI_E_1_OSPEEDR_MEDIUM)
#define FGI_E_1_OSPEEDR 0x00000004
#elif defined(FGI_E_1_OSPEEDR_HIGH)
#define FGI_E_1_OSPEEDR 0x0000000c
#else
#define FGI_E_1_OSPEEDR 0x00000000
#endif

#if defined(FGI_E_2_OSPEEDR_LOW)
#define FGI_E_2_OSPEEDR 0x00000000
#elif defined(FGI_E_2_OSPEEDR_MEDIUM)
#define FGI_E_2_OSPEEDR 0x00000010
#elif defined(FGI_E_2_OSPEEDR_HIGH)
#define FGI_E_2_OSPEEDR 0x00000030
#else
#define FGI_E_2_OSPEEDR 0x00000000
#endif

#if defined(FGI_E_3_OSPEEDR_LOW)
#define FGI_E_3_OSPEEDR 0x00000000
#elif defined(FGI_E_3_OSPEEDR_MEDIUM)
#define FGI_E_3_OSPEEDR 0x00000040
#elif defined(FGI_E_3_OSPEEDR_HIGH)
#define FGI_E_3_OSPEEDR 0x000000c0
#else
#define FGI_E_3_OSPEEDR 0x00000000
#endif

#if defined(FGI_E_4_OSPEEDR_LOW)
#define FGI_E_4_OSPEEDR 0x00000000
#elif defined(FGI_E_4_OSPEEDR_MEDIUM)
#define FGI_E_4_OSPEEDR 0x00000100
#elif defined(FGI_E_4_OSPEEDR_HIGH)
#define FGI_E_4_OSPEEDR 0x00000300
#else
#define FGI_E_4_OSPEEDR 0x00000000
#endif

#if defined(FGI_E_5_OSPEEDR_LOW)
#define FGI_E_5_OSPEEDR 0x00000000
#elif defined(FGI_E_5_OSPEEDR_MEDIUM)
#define FGI_E_5_OSPEEDR 0x00000400
#elif defined(FGI_E_5_OSPEEDR_HIGH)
#define FGI_E_5_OSPEEDR 0x00000c00
#else
#define FGI_E_5_OSPEEDR 0x00000000
#endif

#if defined(FGI_E_6_OSPEEDR_LOW)
#define FGI_E_6_OSPEEDR 0x00000000
#elif defined(FGI_E_6_OSPEEDR_MEDIUM)
#define FGI_E_6_OSPEEDR 0x00001000
#elif defined(FGI_E_6_OSPEEDR_HIGH)
#define FGI_E_6_OSPEEDR 0x00003000
#else
#define FGI_E_6_OSPEEDR 0x00000000
#endif

#if defined(FGI_E_7_OSPEEDR_LOW)
#define FGI_E_7_OSPEEDR 0x00000000
#elif defined(FGI_E_7_OSPEEDR_MEDIUM)
#define FGI_E_7_OSPEEDR 0x00004000
#elif defined(FGI_E_7_OSPEEDR_HIGH)
#define FGI_E_7_OSPEEDR 0x0000c000
#else
#define FGI_E_7_OSPEEDR 0x00000000
#endif

#if defined(FGI_E_8_OSPEEDR_LOW)
#define FGI_E_8_OSPEEDR 0x00000000
#elif defined(FGI_E_8_OSPEEDR_MEDIUM)
#define FGI_E_8_OSPEEDR 0x00010000
#elif defined(FGI_E_8_OSPEEDR_HIGH)
#define FGI_E_8_OSPEEDR 0x00030000
#else
#define FGI_E_8_OSPEEDR 0x00000000
#endif

#if defined(FGI_E_9_OSPEEDR_LOW)
#define FGI_E_9_OSPEEDR 0x00000000
#elif defined(FGI_E_9_OSPEEDR_MEDIUM)
#define FGI_E_9_OSPEEDR 0x00040000
#elif defined(FGI_E_9_OSPEEDR_HIGH)
#define FGI_E_9_OSPEEDR 0x000c0000
#else
#define FGI_E_9_OSPEEDR 0x00000000
#endif

#if defined(FGI_E_10_OSPEEDR_LOW)
#define FGI_E_10_OSPEEDR 0x00000000
#elif defined(FGI_E_10_OSPEEDR_MEDIUM)
#define FGI_E_10_OSPEEDR 0x00100000
#elif defined(FGI_E_10_OSPEEDR_HIGH)
#define FGI_E_10_OSPEEDR 0x00300000
#else
#define FGI_E_10_OSPEEDR 0x00000000
#endif

#if defined(FGI_E_11_OSPEEDR_LOW)
#define FGI_E_11_OSPEEDR 0x00000000
#elif defined(FGI_E_11_OSPEEDR_MEDIUM)
#define FGI_E_11_OSPEEDR 0x00400000
#elif defined(FGI_E_11_OSPEEDR_HIGH)
#define FGI_E_11_OSPEEDR 0x00c00000
#else
#define FGI_E_11_OSPEEDR 0x00000000
#endif

#if defined(FGI_E_12_OSPEEDR_LOW)
#define FGI_E_12_OSPEEDR 0x00000000
#elif defined(FGI_E_12_OSPEEDR_MEDIUM)
#define FGI_E_12_OSPEEDR 0x01000000
#elif defined(FGI_E_12_OSPEEDR_HIGH)
#define FGI_E_12_OSPEEDR 0x03000000
#else
#define FGI_E_12_OSPEEDR 0x00000000
#endif

#if defined(FGI_E_13_OSPEEDR_LOW)
#define FGI_E_13_OSPEEDR 0x00000000
#elif defined(FGI_E_13_OSPEEDR_MEDIUM)
#define FGI_E_13_OSPEEDR 0x04000000
#elif defined(FGI_E_13_OSPEEDR_HIGH)
#define FGI_E_13_OSPEEDR 0x0c000000
#else
#define FGI_E_13_OSPEEDR 0x00000000
#endif

#if defined(FGI_E_14_OSPEEDR_LOW)
#define FGI_E_14_OSPEEDR 0x00000000
#elif defined(FGI_E_14_OSPEEDR_MEDIUM)
#define FGI_E_14_OSPEEDR 0x10000000
#elif defined(FGI_E_14_OSPEEDR_HIGH)
#define FGI_E_14_OSPEEDR 0x30000000
#else
#define FGI_E_14_OSPEEDR 0x00000000
#endif

#if defined(FGI_E_15_OSPEEDR_LOW)
#define FGI_E_15_OSPEEDR 0x00000000
#elif defined(FGI_E_15_OSPEEDR_MEDIUM)
#define FGI_E_15_OSPEEDR 0x40000000
#elif defined(FGI_E_15_OSPEEDR_HIGH)
#define FGI_E_15_OSPEEDR 0xc0000000
#else
#define FGI_E_15_OSPEEDR 0x00000000
#endif

#if defined(FGI_E_0_PUPDR_NOPULL)
#define FGI_E_0_PUPDR 0x00000000
#elif defined(FGI_E_0_PUPDR_PULL_UP)
#define FGI_E_0_PUPDR 0x00000001
#elif defined(FGI_E_0_PUPDR_PULL_DOWN)
#define FGI_E_0_PUPDR 0x00000003
#else
#define FGI_E_0_PUPDR 0x00000000
#endif

#if defined(FGI_E_1_PUPDR_NOPULL)
#define FGI_E_1_PUPDR 0x00000000
#elif defined(FGI_E_1_PUPDR_PULL_UP)
#define FGI_E_1_PUPDR 0x00000004
#elif defined(FGI_E_1_PUPDR_PULL_DOWN)
#define FGI_E_1_PUPDR 0x0000000c
#else
#define FGI_E_1_PUPDR 0x00000000
#endif

#if defined(FGI_E_2_PUPDR_NOPULL)
#define FGI_E_2_PUPDR 0x00000000
#elif defined(FGI_E_2_PUPDR_PULL_UP)
#define FGI_E_2_PUPDR 0x00000010
#elif defined(FGI_E_2_PUPDR_PULL_DOWN)
#define FGI_E_2_PUPDR 0x00000030
#else
#define FGI_E_2_PUPDR 0x00000000
#endif

#if defined(FGI_E_3_PUPDR_NOPULL)
#define FGI_E_3_PUPDR 0x00000000
#elif defined(FGI_E_3_PUPDR_PULL_UP)
#define FGI_E_3_PUPDR 0x00000040
#elif defined(FGI_E_3_PUPDR_PULL_DOWN)
#define FGI_E_3_PUPDR 0x000000c0
#else
#define FGI_E_3_PUPDR 0x00000000
#endif

#if defined(FGI_E_4_PUPDR_NOPULL)
#define FGI_E_4_PUPDR 0x00000000
#elif defined(FGI_E_4_PUPDR_PULL_UP)
#define FGI_E_4_PUPDR 0x00000100
#elif defined(FGI_E_4_PUPDR_PULL_DOWN)
#define FGI_E_4_PUPDR 0x00000300
#else
#define FGI_E_4_PUPDR 0x00000000
#endif

#if defined(FGI_E_5_PUPDR_NOPULL)
#define FGI_E_5_PUPDR 0x00000000
#elif defined(FGI_E_5_PUPDR_PULL_UP)
#define FGI_E_5_PUPDR 0x00000400
#elif defined(FGI_E_5_PUPDR_PULL_DOWN)
#define FGI_E_5_PUPDR 0x00000c00
#else
#define FGI_E_5_PUPDR 0x00000000
#endif

#if defined(FGI_E_6_PUPDR_NOPULL)
#define FGI_E_6_PUPDR 0x00000000
#elif defined(FGI_E_6_PUPDR_PULL_UP)
#define FGI_E_6_PUPDR 0x00001000
#elif defined(FGI_E_6_PUPDR_PULL_DOWN)
#define FGI_E_6_PUPDR 0x00003000
#else
#define FGI_E_6_PUPDR 0x00000000
#endif

#if defined(FGI_E_7_PUPDR_NOPULL)
#define FGI_E_7_PUPDR 0x00000000
#elif defined(FGI_E_7_PUPDR_PULL_UP)
#define FGI_E_7_PUPDR 0x00004000
#elif defined(FGI_E_7_PUPDR_PULL_DOWN)
#define FGI_E_7_PUPDR 0x0000c000
#else
#define FGI_E_7_PUPDR 0x00000000
#endif

#if defined(FGI_E_8_PUPDR_NOPULL)
#define FGI_E_8_PUPDR 0x00000000
#elif defined(FGI_E_8_PUPDR_PULL_UP)
#define FGI_E_8_PUPDR 0x00010000
#elif defined(FGI_E_8_PUPDR_PULL_DOWN)
#define FGI_E_8_PUPDR 0x00030000
#else
#define FGI_E_8_PUPDR 0x00000000
#endif

#if defined(FGI_E_9_PUPDR_NOPULL)
#define FGI_E_9_PUPDR 0x00000000
#elif defined(FGI_E_9_PUPDR_PULL_UP)
#define FGI_E_9_PUPDR 0x00040000
#elif defined(FGI_E_9_PUPDR_PULL_DOWN)
#define FGI_E_9_PUPDR 0x000c0000
#else
#define FGI_E_9_PUPDR 0x00000000
#endif

#if defined(FGI_E_10_PUPDR_NOPULL)
#define FGI_E_10_PUPDR 0x00000000
#elif defined(FGI_E_10_PUPDR_PULL_UP)
#define FGI_E_10_PUPDR 0x00100000
#elif defined(FGI_E_10_PUPDR_PULL_DOWN)
#define FGI_E_10_PUPDR 0x00300000
#else
#define FGI_E_10_PUPDR 0x00000000
#endif

#if defined(FGI_E_11_PUPDR_NOPULL)
#define FGI_E_11_PUPDR 0x00000000
#elif defined(FGI_E_11_PUPDR_PULL_UP)
#define FGI_E_11_PUPDR 0x00400000
#elif defined(FGI_E_11_PUPDR_PULL_DOWN)
#define FGI_E_11_PUPDR 0x00c00000
#else
#define FGI_E_11_PUPDR 0x00000000
#endif

#if defined(FGI_E_12_PUPDR_NOPULL)
#define FGI_E_12_PUPDR 0x00000000
#elif defined(FGI_E_12_PUPDR_PULL_UP)
#define FGI_E_12_PUPDR 0x01000000
#elif defined(FGI_E_12_PUPDR_PULL_DOWN)
#define FGI_E_12_PUPDR 0x03000000
#else
#define FGI_E_12_PUPDR 0x00000000
#endif

#if defined(FGI_E_13_PUPDR_NOPULL)
#define FGI_E_13_PUPDR 0x00000000
#elif defined(FGI_E_13_PUPDR_PULL_UP)
#define FGI_E_13_PUPDR 0x04000000
#elif defined(FGI_E_13_PUPDR_PULL_DOWN)
#define FGI_E_13_PUPDR 0x0c000000
#else
#define FGI_E_13_PUPDR 0x00000000
#endif

#if defined(FGI_E_14_PUPDR_NOPULL)
#define FGI_E_14_PUPDR 0x00000000
#elif defined(FGI_E_14_PUPDR_PULL_UP)
#define FGI_E_14_PUPDR 0x10000000
#elif defined(FGI_E_14_PUPDR_PULL_DOWN)
#define FGI_E_14_PUPDR 0x30000000
#else
#define FGI_E_14_PUPDR 0x00000000
#endif

#if defined(FGI_E_15_PUPDR_NOPULL)
#define FGI_E_15_PUPDR 0x00000000
#elif defined(FGI_E_15_PUPDR_PULL_UP)
#define FGI_E_15_PUPDR 0x40000000
#elif defined(FGI_E_15_PUPDR_PULL_DOWN)
#define FGI_E_15_PUPDR 0xc0000000
#else
#define FGI_E_15_PUPDR 0x00000000
#endif

#if defined(FGI_E_0_AFR_AF0)
#define FGI_E_0_AFR 0x00000000
#elif defined(FGI_E_0_AFR_AF1)
#define FGI_E_0_AFR 0x00000001
#elif defined(FGI_E_0_AFR_AF2)
#define FGI_E_0_AFR 0x00000002
#elif defined(FGI_E_0_AFR_AF3)
#define FGI_E_0_AFR 0x00000003
#elif defined(FGI_E_0_AFR_AF4)
#define FGI_E_0_AFR 0x00000004
#elif defined(FGI_E_0_AFR_AF5)
#define FGI_E_0_AFR 0x00000005
#elif defined(FGI_E_0_AFR_AF6)
#define FGI_E_0_AFR 0x00000006
#elif defined(FGI_E_0_AFR_AF7)
#define FGI_E_0_AFR 0x00000007
#else
#define FGI_E_0_AFR 0x00000000
#endif

#if defined(FGI_E_1_AFR_AF0)
#define FGI_E_1_AFR 0x00000000
#elif defined(FGI_E_1_AFR_AF1)
#define FGI_E_1_AFR 0x00000010
#elif defined(FGI_E_1_AFR_AF2)
#define FGI_E_1_AFR 0x00000020
#elif defined(FGI_E_1_AFR_AF3)
#define FGI_E_1_AFR 0x00000030
#elif defined(FGI_E_1_AFR_AF4)
#define FGI_E_1_AFR 0x00000040
#elif defined(FGI_E_1_AFR_AF5)
#define FGI_E_1_AFR 0x00000050
#elif defined(FGI_E_1_AFR_AF6)
#define FGI_E_1_AFR 0x00000060
#elif defined(FGI_E_1_AFR_AF7)
#define FGI_E_1_AFR 0x00000070
#else
#define FGI_E_1_AFR 0x00000000
#endif

#if defined(FGI_E_2_AFR_AF0)
#define FGI_E_2_AFR 0x00000000
#elif defined(FGI_E_2_AFR_AF1)
#define FGI_E_2_AFR 0x00000100
#elif defined(FGI_E_2_AFR_AF2)
#define FGI_E_2_AFR 0x00000200
#elif defined(FGI_E_2_AFR_AF3)
#define FGI_E_2_AFR 0x00000300
#elif defined(FGI_E_2_AFR_AF4)
#define FGI_E_2_AFR 0x00000400
#elif defined(FGI_E_2_AFR_AF5)
#define FGI_E_2_AFR 0x00000500
#elif defined(FGI_E_2_AFR_AF6)
#define FGI_E_2_AFR 0x00000600
#elif defined(FGI_E_2_AFR_AF7)
#define FGI_E_2_AFR 0x00000700
#else
#define FGI_E_2_AFR 0x00000000
#endif

#if defined(FGI_E_3_AFR_AF0)
#define FGI_E_3_AFR 0x00000000
#elif defined(FGI_E_3_AFR_AF1)
#define FGI_E_3_AFR 0x00001000
#elif defined(FGI_E_3_AFR_AF2)
#define FGI_E_3_AFR 0x00002000
#elif defined(FGI_E_3_AFR_AF3)
#define FGI_E_3_AFR 0x00003000
#elif defined(FGI_E_3_AFR_AF4)
#define FGI_E_3_AFR 0x00004000
#elif defined(FGI_E_3_AFR_AF5)
#define FGI_E_3_AFR 0x00005000
#elif defined(FGI_E_3_AFR_AF6)
#define FGI_E_3_AFR 0x00006000
#elif defined(FGI_E_3_AFR_AF7)
#define FGI_E_3_AFR 0x00007000
#else
#define FGI_E_3_AFR 0x00000000
#endif

#if defined(FGI_E_4_AFR_AF0)
#define FGI_E_4_AFR 0x00000000
#elif defined(FGI_E_4_AFR_AF1)
#define FGI_E_4_AFR 0x00010000
#elif defined(FGI_E_4_AFR_AF2)
#define FGI_E_4_AFR 0x00020000
#elif defined(FGI_E_4_AFR_AF3)
#define FGI_E_4_AFR 0x00030000
#elif defined(FGI_E_4_AFR_AF4)
#define FGI_E_4_AFR 0x00040000
#elif defined(FGI_E_4_AFR_AF5)
#define FGI_E_4_AFR 0x00050000
#elif defined(FGI_E_4_AFR_AF6)
#define FGI_E_4_AFR 0x00060000
#elif defined(FGI_E_4_AFR_AF7)
#define FGI_E_4_AFR 0x00070000
#else
#define FGI_E_4_AFR 0x00000000
#endif

#if defined(FGI_E_5_AFR_AF0)
#define FGI_E_5_AFR 0x00000000
#elif defined(FGI_E_5_AFR_AF1)
#define FGI_E_5_AFR 0x00100000
#elif defined(FGI_E_5_AFR_AF2)
#define FGI_E_5_AFR 0x00200000
#elif defined(FGI_E_5_AFR_AF3)
#define FGI_E_5_AFR 0x00300000
#elif defined(FGI_E_5_AFR_AF4)
#define FGI_E_5_AFR 0x00400000
#elif defined(FGI_E_5_AFR_AF5)
#define FGI_E_5_AFR 0x00500000
#elif defined(FGI_E_5_AFR_AF6)
#define FGI_E_5_AFR 0x00600000
#elif defined(FGI_E_5_AFR_AF7)
#define FGI_E_5_AFR 0x00700000
#else
#define FGI_E_5_AFR 0x00000000
#endif

#if defined(FGI_E_6_AFR_AF0)
#define FGI_E_6_AFR 0x00000000
#elif defined(FGI_E_6_AFR_AF1)
#define FGI_E_6_AFR 0x01000000
#elif defined(FGI_E_6_AFR_AF2)
#define FGI_E_6_AFR 0x02000000
#elif defined(FGI_E_6_AFR_AF3)
#define FGI_E_6_AFR 0x03000000
#elif defined(FGI_E_6_AFR_AF4)
#define FGI_E_6_AFR 0x04000000
#elif defined(FGI_E_6_AFR_AF5)
#define FGI_E_6_AFR 0x05000000
#elif defined(FGI_E_6_AFR_AF6)
#define FGI_E_6_AFR 0x06000000
#elif defined(FGI_E_6_AFR_AF7)
#define FGI_E_6_AFR 0x07000000
#else
#define FGI_E_6_AFR 0x00000000
#endif

#if defined(FGI_E_7_AFR_AF0)
#define FGI_E_7_AFR 0x00000000
#elif defined(FGI_E_7_AFR_AF1)
#define FGI_E_7_AFR 0x10000000
#elif defined(FGI_E_7_AFR_AF2)
#define FGI_E_7_AFR 0x20000000
#elif defined(FGI_E_7_AFR_AF3)
#define FGI_E_7_AFR 0x30000000
#elif defined(FGI_E_7_AFR_AF4)
#define FGI_E_7_AFR 0x40000000
#elif defined(FGI_E_7_AFR_AF5)
#define FGI_E_7_AFR 0x50000000
#elif defined(FGI_E_7_AFR_AF6)
#define FGI_E_7_AFR 0x60000000
#elif defined(FGI_E_7_AFR_AF7)
#define FGI_E_7_AFR 0x70000000
#else
#define FGI_E_7_AFR 0x00000000
#endif

#if defined(FGI_E_8_AFR_AF0)
#define FGI_E_8_AFR 0x00000000
#elif defined(FGI_E_8_AFR_AF1)
#define FGI_E_8_AFR 0x00000001
#elif defined(FGI_E_8_AFR_AF2)
#define FGI_E_8_AFR 0x00000002
#elif defined(FGI_E_8_AFR_AF3)
#define FGI_E_8_AFR 0x00000003
#elif defined(FGI_E_8_AFR_AF4)
#define FGI_E_8_AFR 0x00000004
#elif defined(FGI_E_8_AFR_AF5)
#define FGI_E_8_AFR 0x00000005
#elif defined(FGI_E_8_AFR_AF6)
#define FGI_E_8_AFR 0x00000006
#elif defined(FGI_E_8_AFR_AF7)
#define FGI_E_8_AFR 0x00000007
#else
#define FGI_E_8_AFR 0x00000000
#endif

#if defined(FGI_E_9_AFR_AF0)
#define FGI_E_9_AFR 0x00000000
#elif defined(FGI_E_9_AFR_AF1)
#define FGI_E_9_AFR 0x00000010
#elif defined(FGI_E_9_AFR_AF2)
#define FGI_E_9_AFR 0x00000020
#elif defined(FGI_E_9_AFR_AF3)
#define FGI_E_9_AFR 0x00000030
#elif defined(FGI_E_9_AFR_AF4)
#define FGI_E_9_AFR 0x00000040
#elif defined(FGI_E_9_AFR_AF5)
#define FGI_E_9_AFR 0x00000050
#elif defined(FGI_E_9_AFR_AF6)
#define FGI_E_9_AFR 0x00000060
#elif defined(FGI_E_9_AFR_AF7)
#define FGI_E_9_AFR 0x00000070
#else
#define FGI_E_9_AFR 0x00000000
#endif

#if defined(FGI_E_10_AFR_AF0)
#define FGI_E_10_AFR 0x00000000
#elif defined(FGI_E_10_AFR_AF1)
#define FGI_E_10_AFR 0x00000100
#elif defined(FGI_E_10_AFR_AF2)
#define FGI_E_10_AFR 0x00000200
#elif defined(FGI_E_10_AFR_AF3)
#define FGI_E_10_AFR 0x00000300
#elif defined(FGI_E_10_AFR_AF4)
#define FGI_E_10_AFR 0x00000400
#elif defined(FGI_E_10_AFR_AF5)
#define FGI_E_10_AFR 0x00000500
#elif defined(FGI_E_10_AFR_AF6)
#define FGI_E_10_AFR 0x00000600
#elif defined(FGI_E_10_AFR_AF7)
#define FGI_E_10_AFR 0x00000700
#else
#define FGI_E_10_AFR 0x00000000
#endif

#if defined(FGI_E_11_AFR_AF0)
#define FGI_E_11_AFR 0x00000000
#elif defined(FGI_E_11_AFR_AF1)
#define FGI_E_11_AFR 0x00001000
#elif defined(FGI_E_11_AFR_AF2)
#define FGI_E_11_AFR 0x00002000
#elif defined(FGI_E_11_AFR_AF3)
#define FGI_E_11_AFR 0x00003000
#elif defined(FGI_E_11_AFR_AF4)
#define FGI_E_11_AFR 0x00004000
#elif defined(FGI_E_11_AFR_AF5)
#define FGI_E_11_AFR 0x00005000
#elif defined(FGI_E_11_AFR_AF6)
#define FGI_E_11_AFR 0x00006000
#elif defined(FGI_E_11_AFR_AF7)
#define FGI_E_11_AFR 0x00007000
#else
#define FGI_E_11_AFR 0x00000000
#endif

#if defined(FGI_E_12_AFR_AF0)
#define FGI_E_12_AFR 0x00000000
#elif defined(FGI_E_12_AFR_AF1)
#define FGI_E_12_AFR 0x00010000
#elif defined(FGI_E_12_AFR_AF2)
#define FGI_E_12_AFR 0x00020000
#elif defined(FGI_E_12_AFR_AF3)
#define FGI_E_12_AFR 0x00030000
#elif defined(FGI_E_12_AFR_AF4)
#define FGI_E_12_AFR 0x00040000
#elif defined(FGI_E_12_AFR_AF5)
#define FGI_E_12_AFR 0x00050000
#elif defined(FGI_E_12_AFR_AF6)
#define FGI_E_12_AFR 0x00060000
#elif defined(FGI_E_12_AFR_AF7)
#define FGI_E_12_AFR 0x00070000
#else
#define FGI_E_12_AFR 0x00000000
#endif

#if defined(FGI_E_13_AFR_AF0)
#define FGI_E_13_AFR 0x00000000
#elif defined(FGI_E_13_AFR_AF1)
#define FGI_E_13_AFR 0x00100000
#elif defined(FGI_E_13_AFR_AF2)
#define FGI_E_13_AFR 0x00200000
#elif defined(FGI_E_13_AFR_AF3)
#define FGI_E_13_AFR 0x00300000
#elif defined(FGI_E_13_AFR_AF4)
#define FGI_E_13_AFR 0x00400000
#elif defined(FGI_E_13_AFR_AF5)
#define FGI_E_13_AFR 0x00500000
#elif defined(FGI_E_13_AFR_AF6)
#define FGI_E_13_AFR 0x00600000
#elif defined(FGI_E_13_AFR_AF7)
#define FGI_E_13_AFR 0x00700000
#else
#define FGI_E_13_AFR 0x00000000
#endif

#if defined(FGI_E_14_AFR_AF0)
#define FGI_E_14_AFR 0x00000000
#elif defined(FGI_E_14_AFR_AF1)
#define FGI_E_14_AFR 0x01000000
#elif defined(FGI_E_14_AFR_AF2)
#define FGI_E_14_AFR 0x02000000
#elif defined(FGI_E_14_AFR_AF3)
#define FGI_E_14_AFR 0x03000000
#elif defined(FGI_E_14_AFR_AF4)
#define FGI_E_14_AFR 0x04000000
#elif defined(FGI_E_14_AFR_AF5)
#define FGI_E_14_AFR 0x05000000
#elif defined(FGI_E_14_AFR_AF6)
#define FGI_E_14_AFR 0x06000000
#elif defined(FGI_E_14_AFR_AF7)
#define FGI_E_14_AFR 0x07000000
#else
#define FGI_E_14_AFR 0x00000000
#endif

#if defined(FGI_E_15_AFR_AF0)
#define FGI_E_15_AFR 0x00000000
#elif defined(FGI_E_15_AFR_AF1)
#define FGI_E_15_AFR 0x10000000
#elif defined(FGI_E_15_AFR_AF2)
#define FGI_E_15_AFR 0x20000000
#elif defined(FGI_E_15_AFR_AF3)
#define FGI_E_15_AFR 0x30000000
#elif defined(FGI_E_15_AFR_AF4)
#define FGI_E_15_AFR 0x40000000
#elif defined(FGI_E_15_AFR_AF5)
#define FGI_E_15_AFR 0x50000000
#elif defined(FGI_E_15_AFR_AF6)
#define FGI_E_15_AFR 0x60000000
#elif defined(FGI_E_15_AFR_AF7)
#define FGI_E_15_AFR 0x70000000
#else
#define FGI_E_15_AFR 0x00000000
#endif

#if defined(FGI_F_0_ODR_0)
#define FGI_F_0_ODR 0x00000000
#elif defined(FGI_F_0_ODR_1)
#define FGI_F_0_ODR 0x00000001
#else
#define FGI_F_0_ODR 0x00000000
#endif

#if defined(FGI_F_1_ODR_0)
#define FGI_F_1_ODR 0x00000000
#elif defined(FGI_F_1_ODR_1)
#define FGI_F_1_ODR 0x00000002
#else
#define FGI_F_1_ODR 0x00000000
#endif

#if defined(FGI_F_2_ODR_0)
#define FGI_F_2_ODR 0x00000000
#elif defined(FGI_F_2_ODR_1)
#define FGI_F_2_ODR 0x00000004
#else
#define FGI_F_2_ODR 0x00000000
#endif

#if defined(FGI_F_3_ODR_0)
#define FGI_F_3_ODR 0x00000000
#elif defined(FGI_F_3_ODR_1)
#define FGI_F_3_ODR 0x00000008
#else
#define FGI_F_3_ODR 0x00000000
#endif

#if defined(FGI_F_4_ODR_0)
#define FGI_F_4_ODR 0x00000000
#elif defined(FGI_F_4_ODR_1)
#define FGI_F_4_ODR 0x00000010
#else
#define FGI_F_4_ODR 0x00000000
#endif

#if defined(FGI_F_5_ODR_0)
#define FGI_F_5_ODR 0x00000000
#elif defined(FGI_F_5_ODR_1)
#define FGI_F_5_ODR 0x00000020
#else
#define FGI_F_5_ODR 0x00000000
#endif

#if defined(FGI_F_6_ODR_0)
#define FGI_F_6_ODR 0x00000000
#elif defined(FGI_F_6_ODR_1)
#define FGI_F_6_ODR 0x00000040
#else
#define FGI_F_6_ODR 0x00000000
#endif

#if defined(FGI_F_7_ODR_0)
#define FGI_F_7_ODR 0x00000000
#elif defined(FGI_F_7_ODR_1)
#define FGI_F_7_ODR 0x00000080
#else
#define FGI_F_7_ODR 0x00000000
#endif

#if defined(FGI_F_8_ODR_0)
#define FGI_F_8_ODR 0x00000000
#elif defined(FGI_F_8_ODR_1)
#define FGI_F_8_ODR 0x00000100
#else
#define FGI_F_8_ODR 0x00000000
#endif

#if defined(FGI_F_9_ODR_0)
#define FGI_F_9_ODR 0x00000000
#elif defined(FGI_F_9_ODR_1)
#define FGI_F_9_ODR 0x00000200
#else
#define FGI_F_9_ODR 0x00000000
#endif

#if defined(FGI_F_10_ODR_0)
#define FGI_F_10_ODR 0x00000000
#elif defined(FGI_F_10_ODR_1)
#define FGI_F_10_ODR 0x00000400
#else
#define FGI_F_10_ODR 0x00000000
#endif

#if defined(FGI_F_11_ODR_0)
#define FGI_F_11_ODR 0x00000000
#elif defined(FGI_F_11_ODR_1)
#define FGI_F_11_ODR 0x00000800
#else
#define FGI_F_11_ODR 0x00000000
#endif

#if defined(FGI_F_12_ODR_0)
#define FGI_F_12_ODR 0x00000000
#elif defined(FGI_F_12_ODR_1)
#define FGI_F_12_ODR 0x00001000
#else
#define FGI_F_12_ODR 0x00000000
#endif

#if defined(FGI_F_13_ODR_0)
#define FGI_F_13_ODR 0x00000000
#elif defined(FGI_F_13_ODR_1)
#define FGI_F_13_ODR 0x00002000
#else
#define FGI_F_13_ODR 0x00000000
#endif

#if defined(FGI_F_14_ODR_0)
#define FGI_F_14_ODR 0x00000000
#elif defined(FGI_F_14_ODR_1)
#define FGI_F_14_ODR 0x00004000
#else
#define FGI_F_14_ODR 0x00000000
#endif

#if defined(FGI_F_15_ODR_0)
#define FGI_F_15_ODR 0x00000000
#elif defined(FGI_F_15_ODR_1)
#define FGI_F_15_ODR 0x00008000
#else
#define FGI_F_15_ODR 0x00000000
#endif

#if defined(FGI_F_0_MODER_IN)
#define FGI_F_0_MODER 0x00000000
#elif defined(FGI_F_0_MODER_OUT)
#define FGI_F_0_MODER 0x00000001
#elif defined(FGI_F_0_MODER_AF)
#define FGI_F_0_MODER 0x00000002
#elif defined(FGI_F_0_MODER_AN)
#define FGI_F_0_MODER 0x00000003
#else
#define FGI_F_0_MODER 0x00000000
#endif

#if defined(FGI_F_1_MODER_IN)
#define FGI_F_1_MODER 0x00000000
#elif defined(FGI_F_1_MODER_OUT)
#define FGI_F_1_MODER 0x00000004
#elif defined(FGI_F_1_MODER_AF)
#define FGI_F_1_MODER 0x00000008
#elif defined(FGI_F_1_MODER_AN)
#define FGI_F_1_MODER 0x0000000c
#else
#define FGI_F_1_MODER 0x00000000
#endif

#if defined(FGI_F_2_MODER_IN)
#define FGI_F_2_MODER 0x00000000
#elif defined(FGI_F_2_MODER_OUT)
#define FGI_F_2_MODER 0x00000010
#elif defined(FGI_F_2_MODER_AF)
#define FGI_F_2_MODER 0x00000020
#elif defined(FGI_F_2_MODER_AN)
#define FGI_F_2_MODER 0x00000030
#else
#define FGI_F_2_MODER 0x00000000
#endif

#if defined(FGI_F_3_MODER_IN)
#define FGI_F_3_MODER 0x00000000
#elif defined(FGI_F_3_MODER_OUT)
#define FGI_F_3_MODER 0x00000040
#elif defined(FGI_F_3_MODER_AF)
#define FGI_F_3_MODER 0x00000080
#elif defined(FGI_F_3_MODER_AN)
#define FGI_F_3_MODER 0x000000c0
#else
#define FGI_F_3_MODER 0x00000000
#endif

#if defined(FGI_F_4_MODER_IN)
#define FGI_F_4_MODER 0x00000000
#elif defined(FGI_F_4_MODER_OUT)
#define FGI_F_4_MODER 0x00000100
#elif defined(FGI_F_4_MODER_AF)
#define FGI_F_4_MODER 0x00000200
#elif defined(FGI_F_4_MODER_AN)
#define FGI_F_4_MODER 0x00000300
#else
#define FGI_F_4_MODER 0x00000000
#endif

#if defined(FGI_F_5_MODER_IN)
#define FGI_F_5_MODER 0x00000000
#elif defined(FGI_F_5_MODER_OUT)
#define FGI_F_5_MODER 0x00000400
#elif defined(FGI_F_5_MODER_AF)
#define FGI_F_5_MODER 0x00000800
#elif defined(FGI_F_5_MODER_AN)
#define FGI_F_5_MODER 0x00000c00
#else
#define FGI_F_5_MODER 0x00000000
#endif

#if defined(FGI_F_6_MODER_IN)
#define FGI_F_6_MODER 0x00000000
#elif defined(FGI_F_6_MODER_OUT)
#define FGI_F_6_MODER 0x00001000
#elif defined(FGI_F_6_MODER_AF)
#define FGI_F_6_MODER 0x00002000
#elif defined(FGI_F_6_MODER_AN)
#define FGI_F_6_MODER 0x00003000
#else
#define FGI_F_6_MODER 0x00000000
#endif

#if defined(FGI_F_7_MODER_IN)
#define FGI_F_7_MODER 0x00000000
#elif defined(FGI_F_7_MODER_OUT)
#define FGI_F_7_MODER 0x00004000
#elif defined(FGI_F_7_MODER_AF)
#define FGI_F_7_MODER 0x00008000
#elif defined(FGI_F_7_MODER_AN)
#define FGI_F_7_MODER 0x0000c000
#else
#define FGI_F_7_MODER 0x00000000
#endif

#if defined(FGI_F_8_MODER_IN)
#define FGI_F_8_MODER 0x00000000
#elif defined(FGI_F_8_MODER_OUT)
#define FGI_F_8_MODER 0x00010000
#elif defined(FGI_F_8_MODER_AF)
#define FGI_F_8_MODER 0x00020000
#elif defined(FGI_F_8_MODER_AN)
#define FGI_F_8_MODER 0x00030000
#else
#define FGI_F_8_MODER 0x00000000
#endif

#if defined(FGI_F_9_MODER_IN)
#define FGI_F_9_MODER 0x00000000
#elif defined(FGI_F_9_MODER_OUT)
#define FGI_F_9_MODER 0x00040000
#elif defined(FGI_F_9_MODER_AF)
#define FGI_F_9_MODER 0x00080000
#elif defined(FGI_F_9_MODER_AN)
#define FGI_F_9_MODER 0x000c0000
#else
#define FGI_F_9_MODER 0x00000000
#endif

#if defined(FGI_F_10_MODER_IN)
#define FGI_F_10_MODER 0x00000000
#elif defined(FGI_F_10_MODER_OUT)
#define FGI_F_10_MODER 0x00100000
#elif defined(FGI_F_10_MODER_AF)
#define FGI_F_10_MODER 0x00200000
#elif defined(FGI_F_10_MODER_AN)
#define FGI_F_10_MODER 0x00300000
#else
#define FGI_F_10_MODER 0x00000000
#endif

#if defined(FGI_F_11_MODER_IN)
#define FGI_F_11_MODER 0x00000000
#elif defined(FGI_F_11_MODER_OUT)
#define FGI_F_11_MODER 0x00400000
#elif defined(FGI_F_11_MODER_AF)
#define FGI_F_11_MODER 0x00800000
#elif defined(FGI_F_11_MODER_AN)
#define FGI_F_11_MODER 0x00c00000
#else
#define FGI_F_11_MODER 0x00000000
#endif

#if defined(FGI_F_12_MODER_IN)
#define FGI_F_12_MODER 0x00000000
#elif defined(FGI_F_12_MODER_OUT)
#define FGI_F_12_MODER 0x01000000
#elif defined(FGI_F_12_MODER_AF)
#define FGI_F_12_MODER 0x02000000
#elif defined(FGI_F_12_MODER_AN)
#define FGI_F_12_MODER 0x03000000
#else
#define FGI_F_12_MODER 0x00000000
#endif

#if defined(FGI_F_13_MODER_IN)
#define FGI_F_13_MODER 0x00000000
#elif defined(FGI_F_13_MODER_OUT)
#define FGI_F_13_MODER 0x04000000
#elif defined(FGI_F_13_MODER_AF)
#define FGI_F_13_MODER 0x08000000
#elif defined(FGI_F_13_MODER_AN)
#define FGI_F_13_MODER 0x0c000000
#else
#define FGI_F_13_MODER 0x00000000
#endif

#if defined(FGI_F_14_MODER_IN)
#define FGI_F_14_MODER 0x00000000
#elif defined(FGI_F_14_MODER_OUT)
#define FGI_F_14_MODER 0x10000000
#elif defined(FGI_F_14_MODER_AF)
#define FGI_F_14_MODER 0x20000000
#elif defined(FGI_F_14_MODER_AN)
#define FGI_F_14_MODER 0x30000000
#else
#define FGI_F_14_MODER 0x00000000
#endif

#if defined(FGI_F_15_MODER_IN)
#define FGI_F_15_MODER 0x00000000
#elif defined(FGI_F_15_MODER_OUT)
#define FGI_F_15_MODER 0x40000000
#elif defined(FGI_F_15_MODER_AF)
#define FGI_F_15_MODER 0x80000000
#elif defined(FGI_F_15_MODER_AN)
#define FGI_F_15_MODER 0xc0000000
#else
#define FGI_F_15_MODER 0x00000000
#endif

#if defined(FGI_F_0_OTYPER_PP)
#define FGI_F_0_OTYPER 0x00000000
#elif defined(FGI_F_0_OTYPER_OD)
#define FGI_F_0_OTYPER 0x00000001
#else
#define FGI_F_0_OTYPER 0x00000000
#endif

#if defined(FGI_F_1_OTYPER_PP)
#define FGI_F_1_OTYPER 0x00000000
#elif defined(FGI_F_1_OTYPER_OD)
#define FGI_F_1_OTYPER 0x00000002
#else
#define FGI_F_1_OTYPER 0x00000000
#endif

#if defined(FGI_F_2_OTYPER_PP)
#define FGI_F_2_OTYPER 0x00000000
#elif defined(FGI_F_2_OTYPER_OD)
#define FGI_F_2_OTYPER 0x00000004
#else
#define FGI_F_2_OTYPER 0x00000000
#endif

#if defined(FGI_F_3_OTYPER_PP)
#define FGI_F_3_OTYPER 0x00000000
#elif defined(FGI_F_3_OTYPER_OD)
#define FGI_F_3_OTYPER 0x00000008
#else
#define FGI_F_3_OTYPER 0x00000000
#endif

#if defined(FGI_F_4_OTYPER_PP)
#define FGI_F_4_OTYPER 0x00000000
#elif defined(FGI_F_4_OTYPER_OD)
#define FGI_F_4_OTYPER 0x00000010
#else
#define FGI_F_4_OTYPER 0x00000000
#endif

#if defined(FGI_F_5_OTYPER_PP)
#define FGI_F_5_OTYPER 0x00000000
#elif defined(FGI_F_5_OTYPER_OD)
#define FGI_F_5_OTYPER 0x00000020
#else
#define FGI_F_5_OTYPER 0x00000000
#endif

#if defined(FGI_F_6_OTYPER_PP)
#define FGI_F_6_OTYPER 0x00000000
#elif defined(FGI_F_6_OTYPER_OD)
#define FGI_F_6_OTYPER 0x00000040
#else
#define FGI_F_6_OTYPER 0x00000000
#endif

#if defined(FGI_F_7_OTYPER_PP)
#define FGI_F_7_OTYPER 0x00000000
#elif defined(FGI_F_7_OTYPER_OD)
#define FGI_F_7_OTYPER 0x00000080
#else
#define FGI_F_7_OTYPER 0x00000000
#endif

#if defined(FGI_F_8_OTYPER_PP)
#define FGI_F_8_OTYPER 0x00000000
#elif defined(FGI_F_8_OTYPER_OD)
#define FGI_F_8_OTYPER 0x00000100
#else
#define FGI_F_8_OTYPER 0x00000000
#endif

#if defined(FGI_F_9_OTYPER_PP)
#define FGI_F_9_OTYPER 0x00000000
#elif defined(FGI_F_9_OTYPER_OD)
#define FGI_F_9_OTYPER 0x00000200
#else
#define FGI_F_9_OTYPER 0x00000000
#endif

#if defined(FGI_F_10_OTYPER_PP)
#define FGI_F_10_OTYPER 0x00000000
#elif defined(FGI_F_10_OTYPER_OD)
#define FGI_F_10_OTYPER 0x00000400
#else
#define FGI_F_10_OTYPER 0x00000000
#endif

#if defined(FGI_F_11_OTYPER_PP)
#define FGI_F_11_OTYPER 0x00000000
#elif defined(FGI_F_11_OTYPER_OD)
#define FGI_F_11_OTYPER 0x00000800
#else
#define FGI_F_11_OTYPER 0x00000000
#endif

#if defined(FGI_F_12_OTYPER_PP)
#define FGI_F_12_OTYPER 0x00000000
#elif defined(FGI_F_12_OTYPER_OD)
#define FGI_F_12_OTYPER 0x00001000
#else
#define FGI_F_12_OTYPER 0x00000000
#endif

#if defined(FGI_F_13_OTYPER_PP)
#define FGI_F_13_OTYPER 0x00000000
#elif defined(FGI_F_13_OTYPER_OD)
#define FGI_F_13_OTYPER 0x00002000
#else
#define FGI_F_13_OTYPER 0x00000000
#endif

#if defined(FGI_F_14_OTYPER_PP)
#define FGI_F_14_OTYPER 0x00000000
#elif defined(FGI_F_14_OTYPER_OD)
#define FGI_F_14_OTYPER 0x00004000
#else
#define FGI_F_14_OTYPER 0x00000000
#endif

#if defined(FGI_F_15_OTYPER_PP)
#define FGI_F_15_OTYPER 0x00000000
#elif defined(FGI_F_15_OTYPER_OD)
#define FGI_F_15_OTYPER 0x00008000
#else
#define FGI_F_15_OTYPER 0x00000000
#endif

#if defined(FGI_F_0_OSPEEDR_LOW)
#define FGI_F_0_OSPEEDR 0x00000000
#elif defined(FGI_F_0_OSPEEDR_MEDIUM)
#define FGI_F_0_OSPEEDR 0x00000001
#elif defined(FGI_F_0_OSPEEDR_HIGH)
#define FGI_F_0_OSPEEDR 0x00000003
#else
#define FGI_F_0_OSPEEDR 0x00000000
#endif

#if defined(FGI_F_1_OSPEEDR_LOW)
#define FGI_F_1_OSPEEDR 0x00000000
#elif defined(FGI_F_1_OSPEEDR_MEDIUM)
#define FGI_F_1_OSPEEDR 0x00000004
#elif defined(FGI_F_1_OSPEEDR_HIGH)
#define FGI_F_1_OSPEEDR 0x0000000c
#else
#define FGI_F_1_OSPEEDR 0x00000000
#endif

#if defined(FGI_F_2_OSPEEDR_LOW)
#define FGI_F_2_OSPEEDR 0x00000000
#elif defined(FGI_F_2_OSPEEDR_MEDIUM)
#define FGI_F_2_OSPEEDR 0x00000010
#elif defined(FGI_F_2_OSPEEDR_HIGH)
#define FGI_F_2_OSPEEDR 0x00000030
#else
#define FGI_F_2_OSPEEDR 0x00000000
#endif

#if defined(FGI_F_3_OSPEEDR_LOW)
#define FGI_F_3_OSPEEDR 0x00000000
#elif defined(FGI_F_3_OSPEEDR_MEDIUM)
#define FGI_F_3_OSPEEDR 0x00000040
#elif defined(FGI_F_3_OSPEEDR_HIGH)
#define FGI_F_3_OSPEEDR 0x000000c0
#else
#define FGI_F_3_OSPEEDR 0x00000000
#endif

#if defined(FGI_F_4_OSPEEDR_LOW)
#define FGI_F_4_OSPEEDR 0x00000000
#elif defined(FGI_F_4_OSPEEDR_MEDIUM)
#define FGI_F_4_OSPEEDR 0x00000100
#elif defined(FGI_F_4_OSPEEDR_HIGH)
#define FGI_F_4_OSPEEDR 0x00000300
#else
#define FGI_F_4_OSPEEDR 0x00000000
#endif

#if defined(FGI_F_5_OSPEEDR_LOW)
#define FGI_F_5_OSPEEDR 0x00000000
#elif defined(FGI_F_5_OSPEEDR_MEDIUM)
#define FGI_F_5_OSPEEDR 0x00000400
#elif defined(FGI_F_5_OSPEEDR_HIGH)
#define FGI_F_5_OSPEEDR 0x00000c00
#else
#define FGI_F_5_OSPEEDR 0x00000000
#endif

#if defined(FGI_F_6_OSPEEDR_LOW)
#define FGI_F_6_OSPEEDR 0x00000000
#elif defined(FGI_F_6_OSPEEDR_MEDIUM)
#define FGI_F_6_OSPEEDR 0x00001000
#elif defined(FGI_F_6_OSPEEDR_HIGH)
#define FGI_F_6_OSPEEDR 0x00003000
#else
#define FGI_F_6_OSPEEDR 0x00000000
#endif

#if defined(FGI_F_7_OSPEEDR_LOW)
#define FGI_F_7_OSPEEDR 0x00000000
#elif defined(FGI_F_7_OSPEEDR_MEDIUM)
#define FGI_F_7_OSPEEDR 0x00004000
#elif defined(FGI_F_7_OSPEEDR_HIGH)
#define FGI_F_7_OSPEEDR 0x0000c000
#else
#define FGI_F_7_OSPEEDR 0x00000000
#endif

#if defined(FGI_F_8_OSPEEDR_LOW)
#define FGI_F_8_OSPEEDR 0x00000000
#elif defined(FGI_F_8_OSPEEDR_MEDIUM)
#define FGI_F_8_OSPEEDR 0x00010000
#elif defined(FGI_F_8_OSPEEDR_HIGH)
#define FGI_F_8_OSPEEDR 0x00030000
#else
#define FGI_F_8_OSPEEDR 0x00000000
#endif

#if defined(FGI_F_9_OSPEEDR_LOW)
#define FGI_F_9_OSPEEDR 0x00000000
#elif defined(FGI_F_9_OSPEEDR_MEDIUM)
#define FGI_F_9_OSPEEDR 0x00040000
#elif defined(FGI_F_9_OSPEEDR_HIGH)
#define FGI_F_9_OSPEEDR 0x000c0000
#else
#define FGI_F_9_OSPEEDR 0x00000000
#endif

#if defined(FGI_F_10_OSPEEDR_LOW)
#define FGI_F_10_OSPEEDR 0x00000000
#elif defined(FGI_F_10_OSPEEDR_MEDIUM)
#define FGI_F_10_OSPEEDR 0x00100000
#elif defined(FGI_F_10_OSPEEDR_HIGH)
#define FGI_F_10_OSPEEDR 0x00300000
#else
#define FGI_F_10_OSPEEDR 0x00000000
#endif

#if defined(FGI_F_11_OSPEEDR_LOW)
#define FGI_F_11_OSPEEDR 0x00000000
#elif defined(FGI_F_11_OSPEEDR_MEDIUM)
#define FGI_F_11_OSPEEDR 0x00400000
#elif defined(FGI_F_11_OSPEEDR_HIGH)
#define FGI_F_11_OSPEEDR 0x00c00000
#else
#define FGI_F_11_OSPEEDR 0x00000000
#endif

#if defined(FGI_F_12_OSPEEDR_LOW)
#define FGI_F_12_OSPEEDR 0x00000000
#elif defined(FGI_F_12_OSPEEDR_MEDIUM)
#define FGI_F_12_OSPEEDR 0x01000000
#elif defined(FGI_F_12_OSPEEDR_HIGH)
#define FGI_F_12_OSPEEDR 0x03000000
#else
#define FGI_F_12_OSPEEDR 0x00000000
#endif

#if defined(FGI_F_13_OSPEEDR_LOW)
#define FGI_F_13_OSPEEDR 0x00000000
#elif defined(FGI_F_13_OSPEEDR_MEDIUM)
#define FGI_F_13_OSPEEDR 0x04000000
#elif defined(FGI_F_13_OSPEEDR_HIGH)
#define FGI_F_13_OSPEEDR 0x0c000000
#else
#define FGI_F_13_OSPEEDR 0x00000000
#endif

#if defined(FGI_F_14_OSPEEDR_LOW)
#define FGI_F_14_OSPEEDR 0x00000000
#elif defined(FGI_F_14_OSPEEDR_MEDIUM)
#define FGI_F_14_OSPEEDR 0x10000000
#elif defined(FGI_F_14_OSPEEDR_HIGH)
#define FGI_F_14_OSPEEDR 0x30000000
#else
#define FGI_F_14_OSPEEDR 0x00000000
#endif

#if defined(FGI_F_15_OSPEEDR_LOW)
#define FGI_F_15_OSPEEDR 0x00000000
#elif defined(FGI_F_15_OSPEEDR_MEDIUM)
#define FGI_F_15_OSPEEDR 0x40000000
#elif defined(FGI_F_15_OSPEEDR_HIGH)
#define FGI_F_15_OSPEEDR 0xc0000000
#else
#define FGI_F_15_OSPEEDR 0x00000000
#endif

#if defined(FGI_F_0_PUPDR_NOPULL)
#define FGI_F_0_PUPDR 0x00000000
#elif defined(FGI_F_0_PUPDR_PULL_UP)
#define FGI_F_0_PUPDR 0x00000001
#elif defined(FGI_F_0_PUPDR_PULL_DOWN)
#define FGI_F_0_PUPDR 0x00000003
#else
#define FGI_F_0_PUPDR 0x00000000
#endif

#if defined(FGI_F_1_PUPDR_NOPULL)
#define FGI_F_1_PUPDR 0x00000000
#elif defined(FGI_F_1_PUPDR_PULL_UP)
#define FGI_F_1_PUPDR 0x00000004
#elif defined(FGI_F_1_PUPDR_PULL_DOWN)
#define FGI_F_1_PUPDR 0x0000000c
#else
#define FGI_F_1_PUPDR 0x00000000
#endif

#if defined(FGI_F_2_PUPDR_NOPULL)
#define FGI_F_2_PUPDR 0x00000000
#elif defined(FGI_F_2_PUPDR_PULL_UP)
#define FGI_F_2_PUPDR 0x00000010
#elif defined(FGI_F_2_PUPDR_PULL_DOWN)
#define FGI_F_2_PUPDR 0x00000030
#else
#define FGI_F_2_PUPDR 0x00000000
#endif

#if defined(FGI_F_3_PUPDR_NOPULL)
#define FGI_F_3_PUPDR 0x00000000
#elif defined(FGI_F_3_PUPDR_PULL_UP)
#define FGI_F_3_PUPDR 0x00000040
#elif defined(FGI_F_3_PUPDR_PULL_DOWN)
#define FGI_F_3_PUPDR 0x000000c0
#else
#define FGI_F_3_PUPDR 0x00000000
#endif

#if defined(FGI_F_4_PUPDR_NOPULL)
#define FGI_F_4_PUPDR 0x00000000
#elif defined(FGI_F_4_PUPDR_PULL_UP)
#define FGI_F_4_PUPDR 0x00000100
#elif defined(FGI_F_4_PUPDR_PULL_DOWN)
#define FGI_F_4_PUPDR 0x00000300
#else
#define FGI_F_4_PUPDR 0x00000000
#endif

#if defined(FGI_F_5_PUPDR_NOPULL)
#define FGI_F_5_PUPDR 0x00000000
#elif defined(FGI_F_5_PUPDR_PULL_UP)
#define FGI_F_5_PUPDR 0x00000400
#elif defined(FGI_F_5_PUPDR_PULL_DOWN)
#define FGI_F_5_PUPDR 0x00000c00
#else
#define FGI_F_5_PUPDR 0x00000000
#endif

#if defined(FGI_F_6_PUPDR_NOPULL)
#define FGI_F_6_PUPDR 0x00000000
#elif defined(FGI_F_6_PUPDR_PULL_UP)
#define FGI_F_6_PUPDR 0x00001000
#elif defined(FGI_F_6_PUPDR_PULL_DOWN)
#define FGI_F_6_PUPDR 0x00003000
#else
#define FGI_F_6_PUPDR 0x00000000
#endif

#if defined(FGI_F_7_PUPDR_NOPULL)
#define FGI_F_7_PUPDR 0x00000000
#elif defined(FGI_F_7_PUPDR_PULL_UP)
#define FGI_F_7_PUPDR 0x00004000
#elif defined(FGI_F_7_PUPDR_PULL_DOWN)
#define FGI_F_7_PUPDR 0x0000c000
#else
#define FGI_F_7_PUPDR 0x00000000
#endif

#if defined(FGI_F_8_PUPDR_NOPULL)
#define FGI_F_8_PUPDR 0x00000000
#elif defined(FGI_F_8_PUPDR_PULL_UP)
#define FGI_F_8_PUPDR 0x00010000
#elif defined(FGI_F_8_PUPDR_PULL_DOWN)
#define FGI_F_8_PUPDR 0x00030000
#else
#define FGI_F_8_PUPDR 0x00000000
#endif

#if defined(FGI_F_9_PUPDR_NOPULL)
#define FGI_F_9_PUPDR 0x00000000
#elif defined(FGI_F_9_PUPDR_PULL_UP)
#define FGI_F_9_PUPDR 0x00040000
#elif defined(FGI_F_9_PUPDR_PULL_DOWN)
#define FGI_F_9_PUPDR 0x000c0000
#else
#define FGI_F_9_PUPDR 0x00000000
#endif

#if defined(FGI_F_10_PUPDR_NOPULL)
#define FGI_F_10_PUPDR 0x00000000
#elif defined(FGI_F_10_PUPDR_PULL_UP)
#define FGI_F_10_PUPDR 0x00100000
#elif defined(FGI_F_10_PUPDR_PULL_DOWN)
#define FGI_F_10_PUPDR 0x00300000
#else
#define FGI_F_10_PUPDR 0x00000000
#endif

#if defined(FGI_F_11_PUPDR_NOPULL)
#define FGI_F_11_PUPDR 0x00000000
#elif defined(FGI_F_11_PUPDR_PULL_UP)
#define FGI_F_11_PUPDR 0x00400000
#elif defined(FGI_F_11_PUPDR_PULL_DOWN)
#define FGI_F_11_PUPDR 0x00c00000
#else
#define FGI_F_11_PUPDR 0x00000000
#endif

#if defined(FGI_F_12_PUPDR_NOPULL)
#define FGI_F_12_PUPDR 0x00000000
#elif defined(FGI_F_12_PUPDR_PULL_UP)
#define FGI_F_12_PUPDR 0x01000000
#elif defined(FGI_F_12_PUPDR_PULL_DOWN)
#define FGI_F_12_PUPDR 0x03000000
#else
#define FGI_F_12_PUPDR 0x00000000
#endif

#if defined(FGI_F_13_PUPDR_NOPULL)
#define FGI_F_13_PUPDR 0x00000000
#elif defined(FGI_F_13_PUPDR_PULL_UP)
#define FGI_F_13_PUPDR 0x04000000
#elif defined(FGI_F_13_PUPDR_PULL_DOWN)
#define FGI_F_13_PUPDR 0x0c000000
#else
#define FGI_F_13_PUPDR 0x00000000
#endif

#if defined(FGI_F_14_PUPDR_NOPULL)
#define FGI_F_14_PUPDR 0x00000000
#elif defined(FGI_F_14_PUPDR_PULL_UP)
#define FGI_F_14_PUPDR 0x10000000
#elif defined(FGI_F_14_PUPDR_PULL_DOWN)
#define FGI_F_14_PUPDR 0x30000000
#else
#define FGI_F_14_PUPDR 0x00000000
#endif

#if defined(FGI_F_15_PUPDR_NOPULL)
#define FGI_F_15_PUPDR 0x00000000
#elif defined(FGI_F_15_PUPDR_PULL_UP)
#define FGI_F_15_PUPDR 0x40000000
#elif defined(FGI_F_15_PUPDR_PULL_DOWN)
#define FGI_F_15_PUPDR 0xc0000000
#else
#define FGI_F_15_PUPDR 0x00000000
#endif

#if defined(FGI_F_0_AFR_AF0)
#define FGI_F_0_AFR 0x00000000
#elif defined(FGI_F_0_AFR_AF1)
#define FGI_F_0_AFR 0x00000001
#elif defined(FGI_F_0_AFR_AF2)
#define FGI_F_0_AFR 0x00000002
#elif defined(FGI_F_0_AFR_AF3)
#define FGI_F_0_AFR 0x00000003
#elif defined(FGI_F_0_AFR_AF4)
#define FGI_F_0_AFR 0x00000004
#elif defined(FGI_F_0_AFR_AF5)
#define FGI_F_0_AFR 0x00000005
#elif defined(FGI_F_0_AFR_AF6)
#define FGI_F_0_AFR 0x00000006
#elif defined(FGI_F_0_AFR_AF7)
#define FGI_F_0_AFR 0x00000007
#else
#define FGI_F_0_AFR 0x00000000
#endif

#if defined(FGI_F_1_AFR_AF0)
#define FGI_F_1_AFR 0x00000000
#elif defined(FGI_F_1_AFR_AF1)
#define FGI_F_1_AFR 0x00000010
#elif defined(FGI_F_1_AFR_AF2)
#define FGI_F_1_AFR 0x00000020
#elif defined(FGI_F_1_AFR_AF3)
#define FGI_F_1_AFR 0x00000030
#elif defined(FGI_F_1_AFR_AF4)
#define FGI_F_1_AFR 0x00000040
#elif defined(FGI_F_1_AFR_AF5)
#define FGI_F_1_AFR 0x00000050
#elif defined(FGI_F_1_AFR_AF6)
#define FGI_F_1_AFR 0x00000060
#elif defined(FGI_F_1_AFR_AF7)
#define FGI_F_1_AFR 0x00000070
#else
#define FGI_F_1_AFR 0x00000000
#endif

#if defined(FGI_F_2_AFR_AF0)
#define FGI_F_2_AFR 0x00000000
#elif defined(FGI_F_2_AFR_AF1)
#define FGI_F_2_AFR 0x00000100
#elif defined(FGI_F_2_AFR_AF2)
#define FGI_F_2_AFR 0x00000200
#elif defined(FGI_F_2_AFR_AF3)
#define FGI_F_2_AFR 0x00000300
#elif defined(FGI_F_2_AFR_AF4)
#define FGI_F_2_AFR 0x00000400
#elif defined(FGI_F_2_AFR_AF5)
#define FGI_F_2_AFR 0x00000500
#elif defined(FGI_F_2_AFR_AF6)
#define FGI_F_2_AFR 0x00000600
#elif defined(FGI_F_2_AFR_AF7)
#define FGI_F_2_AFR 0x00000700
#else
#define FGI_F_2_AFR 0x00000000
#endif

#if defined(FGI_F_3_AFR_AF0)
#define FGI_F_3_AFR 0x00000000
#elif defined(FGI_F_3_AFR_AF1)
#define FGI_F_3_AFR 0x00001000
#elif defined(FGI_F_3_AFR_AF2)
#define FGI_F_3_AFR 0x00002000
#elif defined(FGI_F_3_AFR_AF3)
#define FGI_F_3_AFR 0x00003000
#elif defined(FGI_F_3_AFR_AF4)
#define FGI_F_3_AFR 0x00004000
#elif defined(FGI_F_3_AFR_AF5)
#define FGI_F_3_AFR 0x00005000
#elif defined(FGI_F_3_AFR_AF6)
#define FGI_F_3_AFR 0x00006000
#elif defined(FGI_F_3_AFR_AF7)
#define FGI_F_3_AFR 0x00007000
#else
#define FGI_F_3_AFR 0x00000000
#endif

#if defined(FGI_F_4_AFR_AF0)
#define FGI_F_4_AFR 0x00000000
#elif defined(FGI_F_4_AFR_AF1)
#define FGI_F_4_AFR 0x00010000
#elif defined(FGI_F_4_AFR_AF2)
#define FGI_F_4_AFR 0x00020000
#elif defined(FGI_F_4_AFR_AF3)
#define FGI_F_4_AFR 0x00030000
#elif defined(FGI_F_4_AFR_AF4)
#define FGI_F_4_AFR 0x00040000
#elif defined(FGI_F_4_AFR_AF5)
#define FGI_F_4_AFR 0x00050000
#elif defined(FGI_F_4_AFR_AF6)
#define FGI_F_4_AFR 0x00060000
#elif defined(FGI_F_4_AFR_AF7)
#define FGI_F_4_AFR 0x00070000
#else
#define FGI_F_4_AFR 0x00000000
#endif

#if defined(FGI_F_5_AFR_AF0)
#define FGI_F_5_AFR 0x00000000
#elif defined(FGI_F_5_AFR_AF1)
#define FGI_F_5_AFR 0x00100000
#elif defined(FGI_F_5_AFR_AF2)
#define FGI_F_5_AFR 0x00200000
#elif defined(FGI_F_5_AFR_AF3)
#define FGI_F_5_AFR 0x00300000
#elif defined(FGI_F_5_AFR_AF4)
#define FGI_F_5_AFR 0x00400000
#elif defined(FGI_F_5_AFR_AF5)
#define FGI_F_5_AFR 0x00500000
#elif defined(FGI_F_5_AFR_AF6)
#define FGI_F_5_AFR 0x00600000
#elif defined(FGI_F_5_AFR_AF7)
#define FGI_F_5_AFR 0x00700000
#else
#define FGI_F_5_AFR 0x00000000
#endif

#if defined(FGI_F_6_AFR_AF0)
#define FGI_F_6_AFR 0x00000000
#elif defined(FGI_F_6_AFR_AF1)
#define FGI_F_6_AFR 0x01000000
#elif defined(FGI_F_6_AFR_AF2)
#define FGI_F_6_AFR 0x02000000
#elif defined(FGI_F_6_AFR_AF3)
#define FGI_F_6_AFR 0x03000000
#elif defined(FGI_F_6_AFR_AF4)
#define FGI_F_6_AFR 0x04000000
#elif defined(FGI_F_6_AFR_AF5)
#define FGI_F_6_AFR 0x05000000
#elif defined(FGI_F_6_AFR_AF6)
#define FGI_F_6_AFR 0x06000000
#elif defined(FGI_F_6_AFR_AF7)
#define FGI_F_6_AFR 0x07000000
#else
#define FGI_F_6_AFR 0x00000000
#endif

#if defined(FGI_F_7_AFR_AF0)
#define FGI_F_7_AFR 0x00000000
#elif defined(FGI_F_7_AFR_AF1)
#define FGI_F_7_AFR 0x10000000
#elif defined(FGI_F_7_AFR_AF2)
#define FGI_F_7_AFR 0x20000000
#elif defined(FGI_F_7_AFR_AF3)
#define FGI_F_7_AFR 0x30000000
#elif defined(FGI_F_7_AFR_AF4)
#define FGI_F_7_AFR 0x40000000
#elif defined(FGI_F_7_AFR_AF5)
#define FGI_F_7_AFR 0x50000000
#elif defined(FGI_F_7_AFR_AF6)
#define FGI_F_7_AFR 0x60000000
#elif defined(FGI_F_7_AFR_AF7)
#define FGI_F_7_AFR 0x70000000
#else
#define FGI_F_7_AFR 0x00000000
#endif

#if defined(FGI_F_8_AFR_AF0)
#define FGI_F_8_AFR 0x00000000
#elif defined(FGI_F_8_AFR_AF1)
#define FGI_F_8_AFR 0x00000001
#elif defined(FGI_F_8_AFR_AF2)
#define FGI_F_8_AFR 0x00000002
#elif defined(FGI_F_8_AFR_AF3)
#define FGI_F_8_AFR 0x00000003
#elif defined(FGI_F_8_AFR_AF4)
#define FGI_F_8_AFR 0x00000004
#elif defined(FGI_F_8_AFR_AF5)
#define FGI_F_8_AFR 0x00000005
#elif defined(FGI_F_8_AFR_AF6)
#define FGI_F_8_AFR 0x00000006
#elif defined(FGI_F_8_AFR_AF7)
#define FGI_F_8_AFR 0x00000007
#else
#define FGI_F_8_AFR 0x00000000
#endif

#if defined(FGI_F_9_AFR_AF0)
#define FGI_F_9_AFR 0x00000000
#elif defined(FGI_F_9_AFR_AF1)
#define FGI_F_9_AFR 0x00000010
#elif defined(FGI_F_9_AFR_AF2)
#define FGI_F_9_AFR 0x00000020
#elif defined(FGI_F_9_AFR_AF3)
#define FGI_F_9_AFR 0x00000030
#elif defined(FGI_F_9_AFR_AF4)
#define FGI_F_9_AFR 0x00000040
#elif defined(FGI_F_9_AFR_AF5)
#define FGI_F_9_AFR 0x00000050
#elif defined(FGI_F_9_AFR_AF6)
#define FGI_F_9_AFR 0x00000060
#elif defined(FGI_F_9_AFR_AF7)
#define FGI_F_9_AFR 0x00000070
#else
#define FGI_F_9_AFR 0x00000000
#endif

#if defined(FGI_F_10_AFR_AF0)
#define FGI_F_10_AFR 0x00000000
#elif defined(FGI_F_10_AFR_AF1)
#define FGI_F_10_AFR 0x00000100
#elif defined(FGI_F_10_AFR_AF2)
#define FGI_F_10_AFR 0x00000200
#elif defined(FGI_F_10_AFR_AF3)
#define FGI_F_10_AFR 0x00000300
#elif defined(FGI_F_10_AFR_AF4)
#define FGI_F_10_AFR 0x00000400
#elif defined(FGI_F_10_AFR_AF5)
#define FGI_F_10_AFR 0x00000500
#elif defined(FGI_F_10_AFR_AF6)
#define FGI_F_10_AFR 0x00000600
#elif defined(FGI_F_10_AFR_AF7)
#define FGI_F_10_AFR 0x00000700
#else
#define FGI_F_10_AFR 0x00000000
#endif

#if defined(FGI_F_11_AFR_AF0)
#define FGI_F_11_AFR 0x00000000
#elif defined(FGI_F_11_AFR_AF1)
#define FGI_F_11_AFR 0x00001000
#elif defined(FGI_F_11_AFR_AF2)
#define FGI_F_11_AFR 0x00002000
#elif defined(FGI_F_11_AFR_AF3)
#define FGI_F_11_AFR 0x00003000
#elif defined(FGI_F_11_AFR_AF4)
#define FGI_F_11_AFR 0x00004000
#elif defined(FGI_F_11_AFR_AF5)
#define FGI_F_11_AFR 0x00005000
#elif defined(FGI_F_11_AFR_AF6)
#define FGI_F_11_AFR 0x00006000
#elif defined(FGI_F_11_AFR_AF7)
#define FGI_F_11_AFR 0x00007000
#else
#define FGI_F_11_AFR 0x00000000
#endif

#if defined(FGI_F_12_AFR_AF0)
#define FGI_F_12_AFR 0x00000000
#elif defined(FGI_F_12_AFR_AF1)
#define FGI_F_12_AFR 0x00010000
#elif defined(FGI_F_12_AFR_AF2)
#define FGI_F_12_AFR 0x00020000
#elif defined(FGI_F_12_AFR_AF3)
#define FGI_F_12_AFR 0x00030000
#elif defined(FGI_F_12_AFR_AF4)
#define FGI_F_12_AFR 0x00040000
#elif defined(FGI_F_12_AFR_AF5)
#define FGI_F_12_AFR 0x00050000
#elif defined(FGI_F_12_AFR_AF6)
#define FGI_F_12_AFR 0x00060000
#elif defined(FGI_F_12_AFR_AF7)
#define FGI_F_12_AFR 0x00070000
#else
#define FGI_F_12_AFR 0x00000000
#endif

#if defined(FGI_F_13_AFR_AF0)
#define FGI_F_13_AFR 0x00000000
#elif defined(FGI_F_13_AFR_AF1)
#define FGI_F_13_AFR 0x00100000
#elif defined(FGI_F_13_AFR_AF2)
#define FGI_F_13_AFR 0x00200000
#elif defined(FGI_F_13_AFR_AF3)
#define FGI_F_13_AFR 0x00300000
#elif defined(FGI_F_13_AFR_AF4)
#define FGI_F_13_AFR 0x00400000
#elif defined(FGI_F_13_AFR_AF5)
#define FGI_F_13_AFR 0x00500000
#elif defined(FGI_F_13_AFR_AF6)
#define FGI_F_13_AFR 0x00600000
#elif defined(FGI_F_13_AFR_AF7)
#define FGI_F_13_AFR 0x00700000
#else
#define FGI_F_13_AFR 0x00000000
#endif

#if defined(FGI_F_14_AFR_AF0)
#define FGI_F_14_AFR 0x00000000
#elif defined(FGI_F_14_AFR_AF1)
#define FGI_F_14_AFR 0x01000000
#elif defined(FGI_F_14_AFR_AF2)
#define FGI_F_14_AFR 0x02000000
#elif defined(FGI_F_14_AFR_AF3)
#define FGI_F_14_AFR 0x03000000
#elif defined(FGI_F_14_AFR_AF4)
#define FGI_F_14_AFR 0x04000000
#elif defined(FGI_F_14_AFR_AF5)
#define FGI_F_14_AFR 0x05000000
#elif defined(FGI_F_14_AFR_AF6)
#define FGI_F_14_AFR 0x06000000
#elif defined(FGI_F_14_AFR_AF7)
#define FGI_F_14_AFR 0x07000000
#else
#define FGI_F_14_AFR 0x00000000
#endif

#if defined(FGI_F_15_AFR_AF0)
#define FGI_F_15_AFR 0x00000000
#elif defined(FGI_F_15_AFR_AF1)
#define FGI_F_15_AFR 0x10000000
#elif defined(FGI_F_15_AFR_AF2)
#define FGI_F_15_AFR 0x20000000
#elif defined(FGI_F_15_AFR_AF3)
#define FGI_F_15_AFR 0x30000000
#elif defined(FGI_F_15_AFR_AF4)
#define FGI_F_15_AFR 0x40000000
#elif defined(FGI_F_15_AFR_AF5)
#define FGI_F_15_AFR 0x50000000
#elif defined(FGI_F_15_AFR_AF6)
#define FGI_F_15_AFR 0x60000000
#elif defined(FGI_F_15_AFR_AF7)
#define FGI_F_15_AFR 0x70000000
#else
#define FGI_F_15_AFR 0x00000000
#endif


#ifdef FGI_USE_PORTA
#define FGI_RCC_GPIOAEN (RCC_AHBENR_GPIOAEN)
#else
#define FGI_RCC_GPIOAEN (0)
#endif

#ifdef FGI_USE_PORTB
#define FGI_RCC_GPIOBEN (RCC_AHBENR_GPIOBEN)
#else
#define FGI_RCC_GPIOBEN (0)
#endif

#ifdef FGI_USE_PORTC
#define FGI_RCC_GPIOCEN (RCC_AHBENR_GPIOCEN)
#else
#define FGI_RCC_GPIOCEN (0)
#endif

#ifdef FGI_USE_PORTD
#define FGI_RCC_GPIODEN (RCC_AHBENR_GPIODEN)
#else
#define FGI_RCC_GPIODEN (0)
#endif

#ifdef FGI_USE_PORTE
#define FGI_RCC_GPIOEEN (RCC_AHBENR_GPIOEEN)
#else
#define FGI_RCC_GPIOEEN (0)
#endif

#ifdef FGI_USE_PORTF
#define FGI_RCC_GPIOFEN (RCC_AHBENR_GPIOFEN)
#else
#define FGI_RCC_GPIOFEN (0)
#endif

__STATIC_INLINE void fast_gpio_init(void);

__STATIC_INLINE void fast_gpio_init(){
	RCC->AHBENR |= FGI_RCC_GPIOAEN | FGI_RCC_GPIOBEN | FGI_RCC_GPIOCEN
			| FGI_RCC_GPIODEN | FGI_RCC_GPIOEEN | FGI_RCC_GPIOFEN;


#ifdef FGI_USE_PORTA
	GPIOA->ODR = FGI_A_15_ODR | FGI_A_14_ODR | FGI_A_13_ODR
			| FGI_A_12_ODR | FGI_A_11_ODR | FGI_A_10_ODR | FGI_A_9_ODR
			| FGI_A_8_ODR | FGI_A_7_ODR | FGI_A_6_ODR | FGI_A_5_ODR
			| FGI_A_4_ODR | FGI_A_3_ODR | FGI_A_2_ODR | FGI_A_1_ODR
			| FGI_A_0_ODR;

	GPIOA->MODER = FGI_A_15_MODER | FGI_A_14_MODER | FGI_A_13_MODER
			| FGI_A_12_MODER | FGI_A_11_MODER | FGI_A_10_MODER | FGI_A_9_MODER
			| FGI_A_8_MODER | FGI_A_7_MODER | FGI_A_6_MODER | FGI_A_5_MODER
			| FGI_A_4_MODER | FGI_A_3_MODER | FGI_A_2_MODER | FGI_A_1_MODER
			| FGI_A_0_MODER;

	GPIOA->OTYPER = FGI_A_15_OTYPER | FGI_A_14_OTYPER | FGI_A_13_OTYPER
			| FGI_A_12_OTYPER | FGI_A_11_OTYPER | FGI_A_10_OTYPER
			| FGI_A_9_OTYPER | FGI_A_8_OTYPER | FGI_A_7_OTYPER | FGI_A_6_OTYPER
			| FGI_A_5_OTYPER | FGI_A_4_OTYPER | FGI_A_3_OTYPER | FGI_A_2_OTYPER
			| FGI_A_1_OTYPER | FGI_A_0_OTYPER;

	GPIOA->OSPEEDR = FGI_A_15_OSPEEDR | FGI_A_14_OSPEEDR | FGI_A_13_OSPEEDR
			| FGI_A_12_OSPEEDR | FGI_A_11_OSPEEDR | FGI_A_10_OSPEEDR
			| FGI_A_9_OSPEEDR | FGI_A_8_OSPEEDR | FGI_A_7_OSPEEDR
			| FGI_A_6_OSPEEDR | FGI_A_5_OSPEEDR | FGI_A_4_OSPEEDR
			| FGI_A_3_OSPEEDR | FGI_A_2_OSPEEDR | FGI_A_1_OSPEEDR
			| FGI_A_0_OSPEEDR;

	GPIOA->PUPDR = FGI_A_15_PUPDR | FGI_A_14_PUPDR | FGI_A_13_PUPDR
			| FGI_A_12_PUPDR | FGI_A_11_PUPDR | FGI_A_10_PUPDR | FGI_A_9_PUPDR
			| FGI_A_8_PUPDR | FGI_A_7_PUPDR | FGI_A_6_PUPDR | FGI_A_5_PUPDR
			| FGI_A_4_PUPDR | FGI_A_3_PUPDR | FGI_A_2_PUPDR | FGI_A_1_PUPDR
			| FGI_A_0_PUPDR;

	GPIOA->AFR[0] = FGI_A_7_AFR | FGI_A_6_AFR | FGI_A_5_AFR | FGI_A_4_AFR
			| FGI_A_3_AFR | FGI_A_2_AFR | FGI_A_1_AFR | FGI_A_0_AFR;

	GPIOA->AFR[1] = FGI_A_15_AFR | FGI_A_14_AFR | FGI_A_13_AFR | FGI_A_12_AFR
			| FGI_A_11_AFR | FGI_A_10_AFR | FGI_A_9_AFR | FGI_A_8_AFR;
#endif

#ifdef FGI_USE_PORTB
	GPIOB->ODR = FGI_B_15_ODR | FGI_B_14_ODR | FGI_B_13_ODR
			| FGI_B_12_ODR | FGI_B_11_ODR | FGI_B_10_ODR | FGI_B_9_ODR
			| FGI_B_8_ODR | FGI_B_7_ODR | FGI_B_6_ODR | FGI_B_5_ODR
			| FGI_B_4_ODR | FGI_B_3_ODR | FGI_B_2_ODR | FGI_B_1_ODR
			| FGI_B_0_ODR;

	GPIOB->MODER = FGI_B_15_MODER | FGI_B_14_MODER | FGI_B_13_MODER
			| FGI_B_12_MODER | FGI_B_11_MODER | FGI_B_10_MODER | FGI_B_9_MODER
			| FGI_B_8_MODER | FGI_B_7_MODER | FGI_B_6_MODER | FGI_B_5_MODER
			| FGI_B_4_MODER | FGI_B_3_MODER | FGI_B_2_MODER | FGI_B_1_MODER
			| FGI_B_0_MODER;

	GPIOB->OTYPER = FGI_B_15_OTYPER | FGI_B_14_OTYPER | FGI_B_13_OTYPER
			| FGI_B_12_OTYPER | FGI_B_11_OTYPER | FGI_B_10_OTYPER
			| FGI_B_9_OTYPER | FGI_B_8_OTYPER | FGI_B_7_OTYPER | FGI_B_6_OTYPER
			| FGI_B_5_OTYPER | FGI_B_4_OTYPER | FGI_B_3_OTYPER | FGI_B_2_OTYPER
			| FGI_B_1_OTYPER | FGI_B_0_OTYPER;

	GPIOB->OSPEEDR = FGI_B_15_OSPEEDR | FGI_B_14_OSPEEDR | FGI_B_13_OSPEEDR
			| FGI_B_12_OSPEEDR | FGI_B_11_OSPEEDR | FGI_B_10_OSPEEDR
			| FGI_B_9_OSPEEDR | FGI_B_8_OSPEEDR | FGI_B_7_OSPEEDR
			| FGI_B_6_OSPEEDR | FGI_B_5_OSPEEDR | FGI_B_4_OSPEEDR
			| FGI_B_3_OSPEEDR | FGI_B_2_OSPEEDR | FGI_B_1_OSPEEDR
			| FGI_B_0_OSPEEDR;

	GPIOB->PUPDR = FGI_B_15_PUPDR | FGI_B_14_PUPDR | FGI_B_13_PUPDR
			| FGI_B_12_PUPDR | FGI_B_11_PUPDR | FGI_B_10_PUPDR | FGI_B_9_PUPDR
			| FGI_B_8_PUPDR | FGI_B_7_PUPDR | FGI_B_6_PUPDR | FGI_B_5_PUPDR
			| FGI_B_4_PUPDR | FGI_B_3_PUPDR | FGI_B_2_PUPDR | FGI_B_1_PUPDR
			| FGI_B_0_PUPDR;

	GPIOB->AFR[0] = FGI_B_7_AFR | FGI_B_6_AFR | FGI_B_5_AFR | FGI_B_4_AFR
			| FGI_B_3_AFR | FGI_B_2_AFR | FGI_B_1_AFR | FGI_B_0_AFR;

	GPIOB->AFR[1] = FGI_B_15_AFR | FGI_B_14_AFR | FGI_B_13_AFR | FGI_B_12_AFR
			| FGI_B_11_AFR | FGI_B_10_AFR | FGI_B_9_AFR | FGI_B_8_AFR;
#endif

#ifdef FGI_USE_PORTC
	GPIOC->ODR = FGI_C_15_ODR | FGI_C_14_ODR | FGI_C_13_ODR
			| FGI_C_12_ODR | FGI_C_11_ODR | FGI_C_10_ODR | FGI_C_9_ODR
			| FGI_C_8_ODR | FGI_C_7_ODR | FGI_C_6_ODR | FGI_C_5_ODR
			| FGI_C_4_ODR | FGI_C_3_ODR | FGI_C_2_ODR | FGI_C_1_ODR
			| FGI_C_0_ODR;

	GPIOC->MODER = FGI_C_15_MODER | FGI_C_14_MODER | FGI_C_13_MODER
			| FGI_C_12_MODER | FGI_C_11_MODER | FGI_C_10_MODER | FGI_C_9_MODER
			| FGI_C_8_MODER | FGI_C_7_MODER | FGI_C_6_MODER | FGI_C_5_MODER
			| FGI_C_4_MODER | FGI_C_3_MODER | FGI_C_2_MODER | FGI_C_1_MODER
			| FGI_C_0_MODER;

	GPIOC->OTYPER = FGI_C_15_OTYPER | FGI_C_14_OTYPER | FGI_C_13_OTYPER
			| FGI_C_12_OTYPER | FGI_C_11_OTYPER | FGI_C_10_OTYPER
			| FGI_C_9_OTYPER | FGI_C_8_OTYPER | FGI_C_7_OTYPER | FGI_C_6_OTYPER
			| FGI_C_5_OTYPER | FGI_C_4_OTYPER | FGI_C_3_OTYPER | FGI_C_2_OTYPER
			| FGI_C_1_OTYPER | FGI_C_0_OTYPER;

	GPIOC->OSPEEDR = FGI_C_15_OSPEEDR | FGI_C_14_OSPEEDR | FGI_C_13_OSPEEDR
			| FGI_C_12_OSPEEDR | FGI_C_11_OSPEEDR | FGI_C_10_OSPEEDR
			| FGI_C_9_OSPEEDR | FGI_C_8_OSPEEDR | FGI_C_7_OSPEEDR
			| FGI_C_6_OSPEEDR | FGI_C_5_OSPEEDR | FGI_C_4_OSPEEDR
			| FGI_C_3_OSPEEDR | FGI_C_2_OSPEEDR | FGI_C_1_OSPEEDR
			| FGI_C_0_OSPEEDR;

	GPIOC->PUPDR = FGI_C_15_PUPDR | FGI_C_14_PUPDR | FGI_C_13_PUPDR
			| FGI_C_12_PUPDR | FGI_C_11_PUPDR | FGI_C_10_PUPDR | FGI_C_9_PUPDR
			| FGI_C_8_PUPDR | FGI_C_7_PUPDR | FGI_C_6_PUPDR | FGI_C_5_PUPDR
			| FGI_C_4_PUPDR | FGI_C_3_PUPDR | FGI_C_2_PUPDR | FGI_C_1_PUPDR
			| FGI_C_0_PUPDR;

	GPIOC->AFR[0] = FGI_C_7_AFR | FGI_C_6_AFR | FGI_C_5_AFR | FGI_C_4_AFR
			| FGI_C_3_AFR | FGI_C_2_AFR | FGI_C_1_AFR | FGI_C_0_AFR;

	GPIOC->AFR[1] = FGI_C_15_AFR | FGI_C_14_AFR | FGI_C_13_AFR | FGI_C_12_AFR
			| FGI_C_11_AFR | FGI_C_10_AFR | FGI_C_9_AFR | FGI_C_8_AFR;
#endif

#ifdef FGI_USE_PORTD
	GPIOD->ODR = FGI_D_15_ODR | FGI_D_14_ODR | FGI_D_13_ODR
			| FGI_D_12_ODR | FGI_D_11_ODR | FGI_D_10_ODR | FGI_D_9_ODR
			| FGI_D_8_ODR | FGI_D_7_ODR | FGI_D_6_ODR | FGI_D_5_ODR
			| FGI_D_4_ODR | FGI_D_3_ODR | FGI_D_2_ODR | FGI_D_1_ODR
			| FGI_D_0_ODR;

	GPIOD->MODER = FGI_D_15_MODER | FGI_D_14_MODER | FGI_D_13_MODER
			| FGI_D_12_MODER | FGI_D_11_MODER | FGI_D_10_MODER | FGI_D_9_MODER
			| FGI_D_8_MODER | FGI_D_7_MODER | FGI_D_6_MODER | FGI_D_5_MODER
			| FGI_D_4_MODER | FGI_D_3_MODER | FGI_D_2_MODER | FGI_D_1_MODER
			| FGI_D_0_MODER;

	GPIOD->OTYPER = FGI_D_15_OTYPER | FGI_D_14_OTYPER | FGI_D_13_OTYPER
			| FGI_D_12_OTYPER | FGI_D_11_OTYPER | FGI_D_10_OTYPER
			| FGI_D_9_OTYPER | FGI_D_8_OTYPER | FGI_D_7_OTYPER | FGI_D_6_OTYPER
			| FGI_D_5_OTYPER | FGI_D_4_OTYPER | FGI_D_3_OTYPER | FGI_D_2_OTYPER
			| FGI_D_1_OTYPER | FGI_D_0_OTYPER;

	GPIOD->OSPEEDR = FGI_D_15_OSPEEDR | FGI_D_14_OSPEEDR | FGI_D_13_OSPEEDR
			| FGI_D_12_OSPEEDR | FGI_D_11_OSPEEDR | FGI_D_10_OSPEEDR
			| FGI_D_9_OSPEEDR | FGI_D_8_OSPEEDR | FGI_D_7_OSPEEDR
			| FGI_D_6_OSPEEDR | FGI_D_5_OSPEEDR | FGI_D_4_OSPEEDR
			| FGI_D_3_OSPEEDR | FGI_D_2_OSPEEDR | FGI_D_1_OSPEEDR
			| FGI_D_0_OSPEEDR;

	GPIOD->PUPDR = FGI_D_15_PUPDR | FGI_D_14_PUPDR | FGI_D_13_PUPDR
			| FGI_D_12_PUPDR | FGI_D_11_PUPDR | FGI_D_10_PUPDR | FGI_D_9_PUPDR
			| FGI_D_8_PUPDR | FGI_D_7_PUPDR | FGI_D_6_PUPDR | FGI_D_5_PUPDR
			| FGI_D_4_PUPDR | FGI_D_3_PUPDR | FGI_D_2_PUPDR | FGI_D_1_PUPDR
			| FGI_D_0_PUPDR;

	GPIOD->AFR[0] = FGI_D_7_AFR | FGI_D_6_AFR | FGI_D_5_AFR | FGI_D_4_AFR
			| FGI_D_3_AFR | FGI_D_2_AFR | FGI_D_1_AFR | FGI_D_0_AFR;

	GPIOD->AFR[1] = FGI_D_15_AFR | FGI_D_14_AFR | FGI_D_13_AFR | FGI_D_12_AFR
			| FGI_D_11_AFR | FGI_D_10_AFR | FGI_D_9_AFR | FGI_D_8_AFR;
#endif

#ifdef FGI_USE_PORTE
	GPIOE->ODR = FGI_E_15_ODR | FGI_E_14_ODR | FGI_E_13_ODR
			| FGI_E_12_ODR | FGI_E_11_ODR | FGI_E_10_ODR | FGI_E_9_ODR
			| FGI_E_8_ODR | FGI_E_7_ODR | FGI_E_6_ODR | FGI_E_5_ODR
			| FGI_E_4_ODR | FGI_E_3_ODR | FGI_E_2_ODR | FGI_E_1_ODR
			| FGI_E_0_ODR;

	GPIOE->MODER = FGI_E_15_MODER | FGI_E_14_MODER | FGI_E_13_MODER
			| FGI_E_12_MODER | FGI_E_11_MODER | FGI_E_10_MODER | FGI_E_9_MODER
			| FGI_E_8_MODER | FGI_E_7_MODER | FGI_E_6_MODER | FGI_E_5_MODER
			| FGI_E_4_MODER | FGI_E_3_MODER | FGI_E_2_MODER | FGI_E_1_MODER
			| FGI_E_0_MODER;

	GPIOE->OTYPER = FGI_E_15_OTYPER | FGI_E_14_OTYPER | FGI_E_13_OTYPER
			| FGI_E_12_OTYPER | FGI_E_11_OTYPER | FGI_E_10_OTYPER
			| FGI_E_9_OTYPER | FGI_E_8_OTYPER | FGI_E_7_OTYPER | FGI_E_6_OTYPER
			| FGI_E_5_OTYPER | FGI_E_4_OTYPER | FGI_E_3_OTYPER | FGI_E_2_OTYPER
			| FGI_E_1_OTYPER | FGI_E_0_OTYPER;

	GPIOE->OSPEEDR = FGI_E_15_OSPEEDR | FGI_E_14_OSPEEDR | FGI_E_13_OSPEEDR
			| FGI_E_12_OSPEEDR | FGI_E_11_OSPEEDR | FGI_E_10_OSPEEDR
			| FGI_E_9_OSPEEDR | FGI_E_8_OSPEEDR | FGI_E_7_OSPEEDR
			| FGI_E_6_OSPEEDR | FGI_E_5_OSPEEDR | FGI_E_4_OSPEEDR
			| FGI_E_3_OSPEEDR | FGI_E_2_OSPEEDR | FGI_E_1_OSPEEDR
			| FGI_E_0_OSPEEDR;

	GPIOE->PUPDR = FGI_E_15_PUPDR | FGI_E_14_PUPDR | FGI_E_13_PUPDR
			| FGI_E_12_PUPDR | FGI_E_11_PUPDR | FGI_E_10_PUPDR | FGI_E_9_PUPDR
			| FGI_E_8_PUPDR | FGI_E_7_PUPDR | FGI_E_6_PUPDR | FGI_E_5_PUPDR
			| FGI_E_4_PUPDR | FGI_E_3_PUPDR | FGI_E_2_PUPDR | FGI_E_1_PUPDR
			| FGI_E_0_PUPDR;

	GPIOE->AFR[0] = FGI_E_7_AFR | FGI_E_6_AFR | FGI_E_5_AFR | FGI_E_4_AFR
			| FGI_E_3_AFR | FGI_E_2_AFR | FGI_E_1_AFR | FGI_E_0_AFR;

	GPIOE->AFR[1] = FGI_E_15_AFR | FGI_E_14_AFR | FGI_E_13_AFR | FGI_E_12_AFR
			| FGI_E_11_AFR | FGI_E_10_AFR | FGI_E_9_AFR | FGI_E_8_AFR;
#endif

#ifdef FGI_USE_PORTF
	GPIOF->ODR = FGI_F_15_ODR | FGI_F_14_ODR | FGI_F_13_ODR
			| FGI_F_12_ODR | FGI_F_11_ODR | FGI_F_10_ODR | FGI_F_9_ODR
			| FGI_F_8_ODR | FGI_F_7_ODR | FGI_F_6_ODR | FGI_F_5_ODR
			| FGI_F_4_ODR | FGI_F_3_ODR | FGI_F_2_ODR | FGI_F_1_ODR
			| FGI_F_0_ODR;

	GPIOF->MODER = FGI_F_15_MODER | FGI_F_14_MODER | FGI_F_13_MODER
			| FGI_F_12_MODER | FGI_F_11_MODER | FGI_F_10_MODER | FGI_F_9_MODER
			| FGI_F_8_MODER | FGI_F_7_MODER | FGI_F_6_MODER | FGI_F_5_MODER
			| FGI_F_4_MODER | FGI_F_3_MODER | FGI_F_2_MODER | FGI_F_1_MODER
			| FGI_F_0_MODER;

	GPIOF->OTYPER = FGI_F_15_OTYPER | FGI_F_14_OTYPER | FGI_F_13_OTYPER
			| FGI_F_12_OTYPER | FGI_F_11_OTYPER | FGI_F_10_OTYPER
			| FGI_F_9_OTYPER | FGI_F_8_OTYPER | FGI_F_7_OTYPER | FGI_F_6_OTYPER
			| FGI_F_5_OTYPER | FGI_F_4_OTYPER | FGI_F_3_OTYPER | FGI_F_2_OTYPER
			| FGI_F_1_OTYPER | FGI_F_0_OTYPER;

	GPIOF->OSPEEDR = FGI_F_15_OSPEEDR | FGI_F_14_OSPEEDR | FGI_F_13_OSPEEDR
			| FGI_F_12_OSPEEDR | FGI_F_11_OSPEEDR | FGI_F_10_OSPEEDR
			| FGI_F_9_OSPEEDR | FGI_F_8_OSPEEDR | FGI_F_7_OSPEEDR
			| FGI_F_6_OSPEEDR | FGI_F_5_OSPEEDR | FGI_F_4_OSPEEDR
			| FGI_F_3_OSPEEDR | FGI_F_2_OSPEEDR | FGI_F_1_OSPEEDR
			| FGI_F_0_OSPEEDR;

	GPIOF->PUPDR = FGI_F_15_PUPDR | FGI_F_14_PUPDR | FGI_F_13_PUPDR
			| FGI_F_12_PUPDR | FGI_F_11_PUPDR | FGI_F_10_PUPDR | FGI_F_9_PUPDR
			| FGI_F_8_PUPDR | FGI_F_7_PUPDR | FGI_F_6_PUPDR | FGI_F_5_PUPDR
			| FGI_F_4_PUPDR | FGI_F_3_PUPDR | FGI_F_2_PUPDR | FGI_F_1_PUPDR
			| FGI_F_0_PUPDR;

	GPIOF->AFR[0] = FGI_F_7_AFR | FGI_F_6_AFR | FGI_F_5_AFR | FGI_F_4_AFR
			| FGI_F_3_AFR | FGI_F_2_AFR | FGI_F_1_AFR | FGI_F_0_AFR;

	GPIOF->AFR[1] = FGI_F_15_AFR | FGI_F_14_AFR | FGI_F_13_AFR | FGI_F_12_AFR
			| FGI_F_11_AFR | FGI_F_10_AFR | FGI_F_9_AFR | FGI_F_8_AFR;
#endif
}

#endif //__FAST_GPIO_INIT_H_

