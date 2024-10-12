
#include"led.h"
#include"gpio.h"
void LEDS_init(void){
	GPIO_setupPinDirection(RED_LED_PORT_ID,RED_LED_ID,PIN_OUTPUT);
	GPIO_setupPinDirection(GREEN_LED_PORT_ID,GREEN_LED_ID,PIN_OUTPUT);
	GPIO_setupPinDirection(BLUE_LED_PORT_ID,BLUE_LED_ID,PIN_OUTPUT);
	GPIO_writePin(RED_LED_PORT_ID,RED_LED_ID,LED_OFF);
	GPIO_writePin(GREEN_LED_PORT_ID,GREEN_LED_ID,LED_OFF);
	GPIO_writePin(BLUE_LED_PORT_ID,BLUE_LED_ID,LED_OFF);
}
void LED_on(LED_ID id){
	switch(id){
	case LED_Red:
		GPIO_writePin(RED_LED_PORT_ID,RED_LED_ID,LED_ON);
		break;
	case LED_Green:
		GPIO_writePin(GREEN_LED_PORT_ID,GREEN_LED_ID,LED_ON);
		break;
	case LED_Blue:
		GPIO_writePin(BLUE_LED_PORT_ID,BLUE_LED_ID,LED_ON);
		break;
	}
}
void LED_off(LED_ID id){
	switch(id){
	case LED_Red:
		GPIO_writePin(RED_LED_PORT_ID,RED_LED_ID,LED_OFF);
		break;
	case LED_Green:
		GPIO_writePin(GREEN_LED_PORT_ID,GREEN_LED_ID,LED_OFF);
		break;
	case LED_Blue:
		GPIO_writePin(BLUE_LED_PORT_ID,BLUE_LED_ID,LED_OFF);
		break;
	}
}
