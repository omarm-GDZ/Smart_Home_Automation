
#include<avr/io.h>
#include"pwm.h"
#include"common_macros.h"
void PWM_Timer0_Start(uint8 duty_cycle){
SET_BIT(TCCR0,WGM01);
SET_BIT(TCCR0,WGM00);
SET_BIT(TCCR0,COM01);
SET_BIT(TCCR0,CS02);
SET_BIT(TCCR0,CS00);
SET_BIT(DDRB,PB3);
TCNT0=0;
OCR0 = duty_cycle;
}
