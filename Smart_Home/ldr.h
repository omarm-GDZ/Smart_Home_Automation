
#ifndef LDR_H_
#define LDR_H_

#include"std_types.h"
/* LDR Configuration */
#define LDR_SENSOR_CHANNEL_ID 0
#define LDR_SENSOR_MAX_VOLT_VALUE 2.56
#define LDR_SENSOR_MAX_LIGHT_INTENSITY 100

/* Reading Sensor Measurement */
uint16 LDR_getLightIntensity(void);


#endif /* LDR_H_ */
