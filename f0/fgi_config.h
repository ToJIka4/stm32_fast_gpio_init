//STM32F051R8T6

#ifndef FGI_USE_PORTA
#define FGI_USE_PORTA
#endif

// GPIOA.1
#define FGI_A_1_MODER_OUT
#define FGI_A_1_OTYPER_PP
#define FGI_A_1_PUPDR_NOPULL
#define FGI_A_1_OSPEEDR_LOW
#define FGI_A_1_ODR_1

#ifndef FGI_USE_PORTB
#define FGI_USE_PORTB
#endif

// GPIOB.6 /UART1_TX/
#define FGI_B_6_MODER_AF
#define FGI_B_6_OTYPER_PP
#define FGI_B_6_PUPDR_PULL_UP
#define FGI_B_6_OSPEEDR_LOW
#define FGI_B_6_AFR_AF0

// GPIOB.7 /UART1_RX/
#define FGI_B_7_MODER_AF
#define FGI_B_7_OTYPER_PP
#define FGI_B_7_PUPDR_PULL_UP
#define FGI_B_7_OSPEEDR_LOW
#define FGI_B_7_AFR_AF0