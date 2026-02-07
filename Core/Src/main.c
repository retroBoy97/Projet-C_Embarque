#include "gpio.h"


void Delay(volatile unsigned  int  nCount);

int main(void){

	GPIO_ClockEnable (GPIO_D);
	GPIO_Init(GPIO_D, MODE_OUTPUT, MODE_PUSH_PULL, 13);
	GPIO_WriteBit(GPIO_D,13, 1);


	while(1){};
}

void Delay(volatile unsigned  int  nCount){
	/**
	  * @brief  Inserts a delay time.
	  * @param  nCount: specifies the delay time length.
	  * @retval None
	  */

	for(; nCount != 0; nCount--){};
}
//0111001110111001
