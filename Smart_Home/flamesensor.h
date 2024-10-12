
#ifndef FLAMESENSOR_H_
#define FLAMESENSOR_H_
#include"std_types.h"
#include"gpio.h"

/* Sensor Configuration */
#define FLAME_SENSOR_PORT_ID PORTD_ID
#define FLAME_SENSOR_PIN_ID PIN2_ID

/* Sensor Initialization */
void FlameSensor_init(void);
/* Reading Sensor Value */
uint8 FlameSensor_getValue(void);

#endif /* FLAMESENSOR_H_ */
