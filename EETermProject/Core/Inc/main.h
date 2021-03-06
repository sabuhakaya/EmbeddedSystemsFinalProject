/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2021 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define LCD_EN_Pin GPIO_PIN_2
#define LCD_EN_GPIO_Port GPIOA
#define LCD_RS_Pin GPIO_PIN_3
#define LCD_RS_GPIO_Port GPIOA
#define LCD_D4_Pin GPIO_PIN_4
#define LCD_D4_GPIO_Port GPIOA
#define LCD_D5_Pin GPIO_PIN_5
#define LCD_D5_GPIO_Port GPIOA
#define LCD_D6_Pin GPIO_PIN_6
#define LCD_D6_GPIO_Port GPIOA
#define LCD_D7_Pin GPIO_PIN_7
#define LCD_D7_GPIO_Port GPIOA
#define input0_Pin GPIO_PIN_0
#define input0_GPIO_Port GPIOB
#define input0_EXTI_IRQn EXTI0_IRQn
#define input1_Pin GPIO_PIN_1
#define input1_GPIO_Port GPIOB
#define input1_EXTI_IRQn EXTI1_IRQn
#define pir_Pin GPIO_PIN_2
#define pir_GPIO_Port GPIOB
#define pir_EXTI_IRQn EXTI2_IRQn
#define in1_Pin GPIO_PIN_12
#define in1_GPIO_Port GPIOB
#define in2_Pin GPIO_PIN_13
#define in2_GPIO_Port GPIOB
#define in3_Pin GPIO_PIN_14
#define in3_GPIO_Port GPIOB
#define in4_Pin GPIO_PIN_15
#define in4_GPIO_Port GPIOB
#define lamp0_Pin GPIO_PIN_3
#define lamp0_GPIO_Port GPIOB
#define lamp1_Pin GPIO_PIN_4
#define lamp1_GPIO_Port GPIOB
#define UP_Pin GPIO_PIN_5
#define UP_GPIO_Port GPIOB
#define UP_EXTI_IRQn EXTI9_5_IRQn
#define DOWN_Pin GPIO_PIN_6
#define DOWN_GPIO_Port GPIOB
#define DOWN_EXTI_IRQn EXTI9_5_IRQn
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
