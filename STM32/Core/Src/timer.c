/*
 * timer.c
 *
 *  Created on: Nov 6, 2023
 *      Author: Administrator
 */


#include "main.h"
#include "button.h"
#include "software_timer.h"

void HAL_TIM_PeriodElapsedCallback ( TIM_HandleTypeDef * htim )
{
	if( htim -> Instance == TIM2 )
	{
		getKeyInput();
		timer_run();
	}
}
