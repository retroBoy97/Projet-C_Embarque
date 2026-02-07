#include "gpio.c"

#define MODE_CIRCULAIRE
//#define MODE_ALTERNANCE Uncommentez cette ligne pour activer le mode circulaire

void Delay(volatile unsigned  int  nCount);

int main(void){
	

	unsigned  int counter = 0x00;  

	/* Activer l'orloge pour le Port D */
	GPIO_ClockEnable ( GPIO_D);

 	/* Reinitialiser les registers de port D */
	GPIO_DeInit(GPIO_D);

	/* Configure PD12, PD13, PD14 et PD15 en mode Output Push pull */  
	GPIO_Init(GPIO_D, OUTPUT, PP, GPIO_PIN_12);
	GPIO_Init(GPIO_D, OUTPUT, PP, GPIO_PIN_13);
	GPIO_Init(GPIO_D, OUTPUT, PP, GPIO_PIN_14);
	GPIO_Init(GPIO_D, OUTPUT, PP, GPIO_PIN_15);

	#if defined(MODE_CIRCULAIRE)
	  	  for(counter=0; counter<NOMBRE_BOUCLES ; counter++){
		  
			  // Activer Pin12
			  GPIO_WriteBit(GPIO_D, GPIO_PIN_12, Bit_SET);
			  Delay(0x3FFF);
		
			  // Activer Pin13
			  GPIO_WriteBit(GPIO_D, GPIO_PIN_13, Bit_SET);
			  Delay(0x3FFF);
			  
			  // Activer Pin14
			  GPIO_WriteBit(GPIO_D, GPIO_PIN_14, Bit_SET);
			  Delay(0x3FFF);
		
			  // Activer Pin15
			  GPIO_WriteBit(GPIO_D, GPIO_PIN_15, Bit_SET);
			  Delay(0x3FFF);
		
			  //Desactiver Pins 12:15
			  GPIO_WriteBit(GPIO_D, GPIO_PIN_12, Bit_RESET);
			  GPIO_WriteBit(GPIO_D, GPIO_PIN_13, Bit_RESET);	
			  GPIO_WriteBit(GPIO_D, GPIO_PIN_14, Bit_RESET);
			  GPIO_WriteBit(GPIO_D, GPIO_PIN_15, Bit_RESET);
	  	  }


   #elif defined(MODE_ALTERNANCE)
		  for(counter=0; counter<NOMBRE_BOUCLES ; counter++){ 
			  //Activer Pin12 et Pin14
			  GPIO_WriteBit(GPIO_D, GPIO_PIN_12, Bit_SET);
			  GPIO_WriteBit(GPIO_D, GPIO_PIN_14, Bit_SET);
		
			  Delay(0x3FFF);
			  
			  // Desactiver Pin12 et 14
			  GPIO_WriteBit(GPIO_D, GPIO_PIN_12, Bit_RESET);
			  GPIO_WriteBit(GPIO_D, GPIO_PIN_14, Bit_RESET);
		
			  // Activer Pin13 et Pin15
			  GPIO_WriteBit(GPIO_D, GPIO_PIN_13, Bit_SET);	
			  GPIO_WriteBit(GPIO_D, GPIO_PIN_15, Bit_SET);
		
			  Delay(0x3FFF);
			  
			  // Desactiver Pin13 et Pin15
			  GPIO_WriteBit(GPIO_D, GPIO_PIN_13, Bit_RESET);
			  GPIO_WriteBit(GPIO_D, GPIO_PIN_15, Bit_RESET);
		  }
	#endif

	while(1){;};
}



void Delay(volatile unsigned  int  nCount){
	/**

	  * @brief  Inserts a delay time.

	  * @param  nCount: specifies the delay time length.

	  * @retval None

	  */

	for(; nCount != 0; nCount--);
}

