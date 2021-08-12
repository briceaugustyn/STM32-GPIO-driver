#include  "my_stm32f4_gpio_lib.h"



GPIO_InitTypeDef		myGPIO_InitSruct;

int main(void){
   
  myGPIO_InitSruct.Mode = GPIO_MODE_OUTPUT_PP; //SET THE MODE PIN PUSH PULL
  myGPIO_InitSruct.Pin  = GPIO_PIN_13; // DELECT THE PIN 
	myGPIO_InitSruct.Pull	= GPIO_NOPULL; // PULL
	
	__LIB_RCC_GPIOD_CLK_ENABLE(); // ENABLE GPIO D
	LIB_GPIO_Init(GPIOD,&myGPIO_InitSruct); // INIT PORT D




	while(1){
	   for(int i =0;i< 900000;i++){}
		 LIB_GPIO_TogglePin(GPIOD,GPIO_PIN_13); // TOGGLE LED 13

	}
   
}

