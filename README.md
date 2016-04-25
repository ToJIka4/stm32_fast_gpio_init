# STM32_Fast_GPIO_Init

Easy way to configure and fast to initialize STM32 GPIO

Note. Now STM32F0-family is supported only. Supporting of STM32F4 and STM32F1-families will be added soon.

## How to use
1. Copy **fast_gpio_init.h** to your project form **fX** directiory.
2. Include **fast_gpio_init.h** in *c-file* where you will initialize GPIO.
3. Create **fgi_config.h**.
4. Configure GPIO via **fgi_config.h**.
5. Call **fast_gpio_init()** to initialize GPIO.

## Configuration
You shoutd configurate gpio with defines in **fgi_config.h**:
```c
#define FGI_PROT_PIN_REG_VALUE
```
- PROT - port from A to F
- PIN - pin from 0 to 15
- REG - register of port
    - ODR: Output data bit. VALUE = 0 or 1
    - MODER: Mode of pin. VALUE = IN, OUT, AF (Alternate), AN (Analog)
    - OTYPER: Output type register. VALUE = PP (push-pull), OD (open-drain)
    - OSPEEDR: Output speed register. VALUE = LOW, MEDIUM, HIGH
    - PUPDR: Pull-up/pull-down register. VALUE = NOPULL, PULL_UP, PULL_DOWN
    - AFR: Alternate function low register. VALUE = AF0 .. AF7

For example, **STM32F051R8T6**: you want to configure **GPIOA.1** as slow output (logic 1 at start) push-pull without pull-up and pull-down. Then  you want to configure **UART1** at **GPIOB.6** (TX) and **GPIOB.7** (RX).
```c
// Tell that we will use GPIOA
#ifndef FGI_USE_PORTA
#define FGI_USE_PORTA
#endif

// GPIOA.1
#define FGI_A_1_MODER_OUT
#define FGI_A_1_OTYPER_PP
#define FGI_A_1_PUPDR_NOPULL
#define FGI_A_1_OSPEEDR_LOW
#define FGI_A_1_ODR_1

// Tell that we will use GPIOB
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
```

# Why it configures fast
We need to configure many pins on same port. Each port is configured by several registers: ODR, MODER, MODER, OTYPER, OSPEEDR, PUPDR, AFR[2]. By one writing in MODER we can set modes of all of **16** pins of port! Similar we can to write in other GPIO registers and configure one property of the all pins.
### Version
0.1.0

### Thanks to
[EDS Company] for allocated time for this project

### License

MIT

   [EDS Company]: <http://eds-co.ru/>
