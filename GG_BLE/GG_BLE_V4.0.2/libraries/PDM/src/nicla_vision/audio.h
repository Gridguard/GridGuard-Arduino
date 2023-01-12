#ifdef ARDUINO_NICLA_VISION

#include "stdbool.h"

// DFSDM1
#define AUDIO_DFSDM                 (DFSDM1_Channel2)
#define AUDIO_DFSDM1_NBR_CHANNELS   (8) // Default number of channels.

#define AUDIO_DFSDM1_CK_PORT        (GPIOD)
#define AUDIO_DFSDM1_CK_PIN         (GPIO_PIN_10)
#define AUDIO_DFSDM1_CK_AF          (GPIO_AF3_DFSDM1)

#define AUDIO_DFSDM1_D1_PORT        (GPIOE)
#define AUDIO_DFSDM1_D1_PIN         (GPIO_PIN_7)
#define AUDIO_DFSDM1_D1_AF          (GPIO_AF3_DFSDM1)

#define AUDIO_DFSDM1_DMA_STREAM        DMA1_Stream0
#define AUDIO_DFSDM1_DMA_REQUEST       DMA_REQUEST_DFSDM1_FLT0
#define AUDIO_DFSDM1_DMA_IRQ           DMA1_Stream0_IRQn
#define AUDIO_DFSDM1_DMA_IRQHandler    DMA1_Stream0_IRQHandler


#define AUDIO_DFSDM1_CLK_ENABLE()      __HAL_RCC_C1_DFSDM1_CLK_ENABLE()
#define AUDIO_DFSDM1_CLK_DISABLE()     __HAL_RCC_C1_DFSDM1_CLK_DISABLE()
#define AUDIO_DFSDM1_DMA_CLK_ENABLE()  __HAL_RCC_DMA1_CLK_ENABLE()

#define AUDIO_IN_IRQ_PREPRIO                ((uint32_t)0x0F)

#define PDM_BUFFER_SIZE               (512)

void py_audio_deinit();
int py_audio_init(size_t g_channels, uint32_t frequency);
void py_audio_gain_set(int gain_db);
void audio_pendsv_callback(void);
int py_audio_start_streaming();
void py_audio_stop_streaming();
int get_filter_state();

#endif
