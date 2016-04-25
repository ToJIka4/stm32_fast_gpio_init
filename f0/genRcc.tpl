#ifdef FGI_USE_PORT%%X%%
#define FGI_RCC_GPIO%%X%%EN (RCC_AHBENR_GPIO%%X%%EN)
#else
#define FGI_RCC_GPIO%%X%%EN (0)
#endif