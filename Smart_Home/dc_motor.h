
#ifndef DC_MOTOR_H_
#define DC_MOTOR_H_

#include"std_types.h"
#include"gpio.h"

#define NO_OF_MOTORS 1 /*1 or 2*/
/*Motor 1 Configurations*/
#define IN1_ID PIN0_ID
#define IN1_PORT_ID PORTB_ID
#define IN2_ID PIN1_ID
#define IN2_PORT_ID PORTB_ID
#define ENABLE_1_ID PIN3_ID
#define ENABLE_1_PORT_ID PORTB_ID

#if(NO_OF_MOTORS==2)
/*Motor 2 Configurations*/
#define IN3_ID PIN2_ID
#define IN3_PORT_ID PORTA_ID
#define IN4_ID PIN3_ID
#define IN4_PORT_ID PORTA_ID
#define ENABLE_2_ID PIN4_ID
#define ENABLE_2_PORT_ID PORTA_ID
#endif

/*PWM levels*/
#define MOTOR_LEVEL_0 0
#define MOTOR_LEVEL_1 25
#define MOTOR_LEVEL_2 50
#define MOTOR_LEVEL_3 75
#define MOTOR_LEVEL_4 100
#define TOP 255

/*Motor States*/
typedef enum{
	DCMOTOR_CW,DCMOTOR_ACW,DCMOTOR_STOP
}DcMotor_State;

/* Motor Initialization */
void DcMotor_Init(void);
/* Rotating the Motor with speed and direction */
void DcMotor_Rotate(DcMotor_State state, uint8 speed);

#endif /* DC_MOTOR_H_ */
