
#ifdef FGI_USE_PORT%%X%%
	GPIO%%X%%->ODR = FGI_%%X%%_15_ODR | FGI_%%X%%_14_ODR | FGI_%%X%%_13_ODR
			| FGI_%%X%%_12_ODR | FGI_%%X%%_11_ODR | FGI_%%X%%_10_ODR | FGI_%%X%%_9_ODR
			| FGI_%%X%%_8_ODR | FGI_%%X%%_7_ODR | FGI_%%X%%_6_ODR | FGI_%%X%%_5_ODR
			| FGI_%%X%%_4_ODR | FGI_%%X%%_3_ODR | FGI_%%X%%_2_ODR | FGI_%%X%%_1_ODR
			| FGI_%%X%%_0_ODR;

	GPIO%%X%%->MODER = FGI_%%X%%_15_MODER | FGI_%%X%%_14_MODER | FGI_%%X%%_13_MODER
			| FGI_%%X%%_12_MODER | FGI_%%X%%_11_MODER | FGI_%%X%%_10_MODER | FGI_%%X%%_9_MODER
			| FGI_%%X%%_8_MODER | FGI_%%X%%_7_MODER | FGI_%%X%%_6_MODER | FGI_%%X%%_5_MODER
			| FGI_%%X%%_4_MODER | FGI_%%X%%_3_MODER | FGI_%%X%%_2_MODER | FGI_%%X%%_1_MODER
			| FGI_%%X%%_0_MODER;

	GPIO%%X%%->OTYPER = FGI_%%X%%_15_OTYPER | FGI_%%X%%_14_OTYPER | FGI_%%X%%_13_OTYPER
			| FGI_%%X%%_12_OTYPER | FGI_%%X%%_11_OTYPER | FGI_%%X%%_10_OTYPER
			| FGI_%%X%%_9_OTYPER | FGI_%%X%%_8_OTYPER | FGI_%%X%%_7_OTYPER | FGI_%%X%%_6_OTYPER
			| FGI_%%X%%_5_OTYPER | FGI_%%X%%_4_OTYPER | FGI_%%X%%_3_OTYPER | FGI_%%X%%_2_OTYPER
			| FGI_%%X%%_1_OTYPER | FGI_%%X%%_0_OTYPER;

	GPIO%%X%%->OSPEEDR = FGI_%%X%%_15_OSPEEDR | FGI_%%X%%_14_OSPEEDR | FGI_%%X%%_13_OSPEEDR
			| FGI_%%X%%_12_OSPEEDR | FGI_%%X%%_11_OSPEEDR | FGI_%%X%%_10_OSPEEDR
			| FGI_%%X%%_9_OSPEEDR | FGI_%%X%%_8_OSPEEDR | FGI_%%X%%_7_OSPEEDR
			| FGI_%%X%%_6_OSPEEDR | FGI_%%X%%_5_OSPEEDR | FGI_%%X%%_4_OSPEEDR
			| FGI_%%X%%_3_OSPEEDR | FGI_%%X%%_2_OSPEEDR | FGI_%%X%%_1_OSPEEDR
			| FGI_%%X%%_0_OSPEEDR;

	GPIO%%X%%->PUPDR = FGI_%%X%%_15_PUPDR | FGI_%%X%%_14_PUPDR | FGI_%%X%%_13_PUPDR
			| FGI_%%X%%_12_PUPDR | FGI_%%X%%_11_PUPDR | FGI_%%X%%_10_PUPDR | FGI_%%X%%_9_PUPDR
			| FGI_%%X%%_8_PUPDR | FGI_%%X%%_7_PUPDR | FGI_%%X%%_6_PUPDR | FGI_%%X%%_5_PUPDR
			| FGI_%%X%%_4_PUPDR | FGI_%%X%%_3_PUPDR | FGI_%%X%%_2_PUPDR | FGI_%%X%%_1_PUPDR
			| FGI_%%X%%_0_PUPDR;

	GPIO%%X%%->AFR[0] = FGI_%%X%%_7_AFR | FGI_%%X%%_6_AFR | FGI_%%X%%_5_AFR | FGI_%%X%%_4_AFR
			| FGI_%%X%%_3_AFR | FGI_%%X%%_2_AFR | FGI_%%X%%_1_AFR | FGI_%%X%%_0_AFR;

	GPIO%%X%%->AFR[1] = FGI_%%X%%_15_AFR | FGI_%%X%%_14_AFR | FGI_%%X%%_13_AFR | FGI_%%X%%_12_AFR
			| FGI_%%X%%_11_AFR | FGI_%%X%%_10_AFR | FGI_%%X%%_9_AFR | FGI_%%X%%_8_AFR;
#endif