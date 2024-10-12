
#ifndef LED_H_
#define LED_H_

#include"std_types.h"

typedef enum{
	LED_Red=1,LED_Green,LED_Blue
}LED_ID;

#define POSITIVE_LOGIC 1
#define NEGATIVE_LOGIC 0

#define CONNECTION POSITIVE_LOGIC /* POSITIVE_LOGIC or NEGATIVE_LOGIC*/

#if(CONNECTION == POSITIVE_LOGIC)

#define LED_ON LOGIC_HIGH
#define LED_OFF LOGIC_LOW

#elif(CONNECTION == NEGATIVE_LOGIC)
#define LED_ON LOGIC_LOW
#define LED_OFF LOGIC_HIGH
#endif
/* LED Configuration */
#define RED_LED_PORT_ID PORTB_ID
#define GREEN_LED_PORT_ID PORTB_ID
#define BLUE_LED_PORT_ID PORTB_ID

#define RED_LED_ID PIN5_ID
#define GREEN_LED_ID PIN6_ID
#define BLUE_LED_ID PIN7_ID

/* LED Initialization */
void LEDS_init(void);
/* Turning LED ON */
void LED_on(LED_ID id);
/* Turning LED OFF */
void LED_off(LED_ID id);

#endif /* LED_H_ */
