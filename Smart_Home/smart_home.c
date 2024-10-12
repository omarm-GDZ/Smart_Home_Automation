#include"lcd.h"
#include"led.h"
#include"ldr.h"
#include"buzzer.h"
#include"dc_motor.h"
#include"flamesensor.h"
#include"lm35_sensor.h"
#include"adc.h"

int main(void){
	uint8 Temperature;
	uint16 LightIntensity;
	ADC_init();
	Buzzer_init();
	DcMotor_Init();
	FlameSensor_init();
	LCD_init();
	LEDS_init();

	while(1){

		Temperature=LM35_getTemperature();
		LightIntensity=LDR_getLightIntensity();

		if(LightIntensity<=15){
			LED_on(LED_Red);
			LED_on(LED_Green);
			LED_on(LED_Blue);
		}
		else if(LightIntensity>15 && LightIntensity<=50){
			LED_on(LED_Red);
			LED_on(LED_Green);
			LED_off(LED_Blue);
		}
		else if(LightIntensity>50 && LightIntensity<=70){
			LED_on(LED_Red);
			LED_off(LED_Green);
			LED_off(LED_Blue);
		}
		else if (LightIntensity>70)		{
			LED_off(LED_Red);
			LED_off(LED_Green);
			LED_off(LED_Blue);
		}

		if(Temperature>=40){
			DcMotor_Rotate(DCMOTOR_CW,MOTOR_LEVEL_4);
		}
		else if (Temperature>=35 && Temperature<40){
			DcMotor_Rotate(DCMOTOR_CW,MOTOR_LEVEL_3);
		}
		else if (Temperature>=30 && Temperature<35){
			DcMotor_Rotate(DCMOTOR_CW,MOTOR_LEVEL_2);
		}
		else if(Temperature>=25 && Temperature<30){
			DcMotor_Rotate(DCMOTOR_CW,MOTOR_LEVEL_1);
		}
		else if(Temperature<25){
			DcMotor_Rotate(DCMOTOR_STOP,MOTOR_LEVEL_0);
		}

		if(FlameSensor_getValue()){
			LCD_clearScreen();
			while(FlameSensor_getValue()){
				Buzzer_on();
				LCD_moveCursor(0,1);
				LCD_displayString("Critical Alert!");
			}
			Buzzer_off();
			LCD_clearScreen();
		}
		if(Temperature<25){
			LCD_moveCursor(0,3);
			LCD_displayString("FAN is OFF");
		}
		else if(Temperature>=25){
			LCD_moveCursor(0,3);
			LCD_displayString("FAN is ON");
			LCD_displayCharacter(' ');
		}
		LCD_moveCursor(1, 0);
		LCD_displayString("Temp=");
		LCD_intgerToString(Temperature);
		LCD_displayCharacter(',');
		LCD_displayString("LDR =");
		LCD_intgerToString(LightIntensity);
		LCD_displayCharacter('%');

	}
}
