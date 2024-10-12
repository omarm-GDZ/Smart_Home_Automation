
#include"dc_motor.h"
#include"common_macros.h"
#include"pwm.h"

void DcMotor_Init(void){
	GPIO_setupPinDirection(IN1_PORT_ID,IN1_ID,PIN_OUTPUT);
	GPIO_setupPinDirection(IN2_PORT_ID,IN2_ID,PIN_OUTPUT);
	GPIO_setupPinDirection(ENABLE_1_PORT_ID,ENABLE_1_ID,PIN_OUTPUT);
	GPIO_writePin(IN1_PORT_ID,IN1_ID,LOGIC_LOW);
	GPIO_writePin(IN2_PORT_ID,IN2_ID,LOGIC_LOW);
#if(NO_OF_MOTORS==2)
	GPIO_setupPinDirection(IN3_PORT_ID,IN3_ID,PIN_OUTPUT);
	GPIO_setupPinDirection(IN4_PORT_ID,IN4_ID,PIN_OUTPUT);
	GPIO_setupPinDirection(ENABLE_2_PORT_ID,ENABLE_2_ID,PIN_OUTPUT);
	GPIO_writePin(IN3_PORT_ID,IN3_ID,LOGIC_LOW);
	GPIO_writePin(IN4_PORT_ID,IN4_ID,LOGIC_LOW);
#endif
}
void DcMotor_Rotate(DcMotor_State state, uint8 speed){
	switch(state){
	case DCMOTOR_CW:
		GPIO_writePin(IN1_PORT_ID,IN1_ID,LOGIC_LOW);
		GPIO_writePin(IN2_PORT_ID,IN2_ID,LOGIC_HIGH);
		PWM_Timer0_Start((TOP*speed)/100);
		break;
	case DCMOTOR_ACW:
		GPIO_writePin(IN1_PORT_ID,IN1_ID,LOGIC_HIGH);
		GPIO_writePin(IN2_PORT_ID,IN2_ID,LOGIC_LOW);
		PWM_Timer0_Start((TOP*speed)/100);
		break;
	case DCMOTOR_STOP:
		GPIO_writePin(IN1_PORT_ID,IN1_ID,LOGIC_LOW);
		GPIO_writePin(IN2_PORT_ID,IN2_ID,LOGIC_LOW);
		break;
	}
}
