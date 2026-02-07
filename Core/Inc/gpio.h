// RCC


// GPIO
#define GPIO_A (unsigned int*)0x40020000
#define GPIO_B (unsigned int*)0x40020400
#define GPIO_C (unsigned int*)0x40020800
#define GPIO_D (unsigned int*)0x40020C00
#define GPIO_E (unsigned int*)0x40021000
#define GPIO_F (unsigned int*)0x40021400
#define GPIO_G (unsigned int*)0x40021800
#define GPIO_H (unsigned int*)0x40021C00
#define GPIO_I (unsigned int*)0x40022000
#define GPIO_J (unsigned int*)0x40022400
#define GPIO_K (unsigned int*)0x40022800

// Registers Offset
#define MODER	0x00
#define OTYPER  0x04
#define OSPEEDR	0x08
#define PUPDR  	0x0C
#define IDR  	0x10
#define ODR  	0x14
#define BSRR  	0x18
#define LCKR  	0x1C
#define AFRL  	0x20
#define AFRH  	0x24

// Modes
#define MODE_INPUT 					0x00
#define MODE_OUTPUT 				0x01
#define MODE_ALTERNATE_FUNCTION 	0x10
#define MODE_ANALOG 				0x11
#define MODE_PUSH_PULL				0x0
#define MODE_OPEN_DRAIN				0x1

// Pins
#define GPIO_PIN_0 	(1 << 0)
#define GPIO_PIN_1 	(1 << 1)
#define GPIO_PIN_2 	(1 << 2)
#define GPIO_PIN_3 	(1 << 3)
#define GPIO_PIN_4 	(1 << 4)
#define GPIO_PIN_5 	(1 << 5)
#define GPIO_PIN_6 	(1 << 6)
#define GPIO_PIN_7 	(1 << 7)
#define GPIO_PIN_8 	(1 << 8)
#define GPIO_PIN_9 	(1 << 9)
#define GPIO_PIN_10 (1 << 10)
#define GPIO_PIN_11 (1 << 11)
#define GPIO_PIN_12 (1 << 12)
#define GPIO_PIN_13	(1 << 13)
#define GPIO_PIN_14	(1 << 14)
#define GPIO_PIN_15	(1 << 15)

// Fonctions
void GPIO_ClockEnable (unsigned int * gpio_x);

#define BIT_SET 1
#define BIT_RESET 0



