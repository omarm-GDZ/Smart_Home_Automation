/*
 * buzzer.h
 *
 *  Created on: Oct 8, 2024
 *      Author: omarm
 */

#ifndef BUZZER_H_
#define BUZZER_H_

#include"gpio.h"
/* Buzzer Configuration */
#define BUZZER_PORT_ID PORTD_ID
#define BUZZER_PIN_ID PIN3_ID

/* Initializes the buzzer pin direction and turn off the buzzer */
void Buzzer_init(void);
/* Activates the buzzer */
void Buzzer_on(void);
/* Deactivates the buzzer */
void Buzzer_off(void);

#endif /* BUZZER_H_ */
