# Smart_Home_Automation
 Smart Home Automation Using ATmega32, LCD, Temperature Sensor, LDR Sensor, Flame Sensor  and Motor Control

## Objective:
To design and implement a smart home system that automates the control of lighting and fan 
speed based on environmental conditions. The project uses an ATmega32 microcontroller, LM35 
temperature sensor, LDR (Light Dependent Resistor), Flame sensor, and a PWM-controlled 
motor. An LCD provides real-time display, and an H-bridge circuit controls the fan motor. 
Additionally, LEDs indicate varying light intensity levels.

## Project Highlights:
- Lighting Control: Adjusts LED lights based on how much light is around, detected by an LDR sensor.
- Fan Speed Control: Changes fan speed based on temperature readings from an LM35 sensor.
- Fire Detection: Uses a flame sensor to trigger alarms and show alerts on an LCD screen.
- Real-Time Display: A 16x2 LCD shows current temperature and light levels.

  ##  Key Features:
- Lighting:
  - 0 - 15% light: All LEDs ON (Red, Green, Blue).
  - 16 – 50% light: Red and Green LEDs ON.
  - 51 – 69% light: Red LED ON.
  - 70 - 100% light: All LEDs OFF.
- Fan Speed:
  - ≥ 40°C: Fan at 100%.
  - 35–39°C: Fan at 75%.
  - 30–34°C: Fan at 50%.
  - 25–29°C: Fan at 25%.
  - < 25°C: Fan OFF.
- Fire Alerts:
Sounds a buzzer and shows "Critical Alert!" on the LCD when flames are detected.

## System Overview:
- Lighting Control: The LDR sensor measures light and adjusts the LEDs.
- Temperature Control: The LM35 sensor changes the fan speed for comfort.
- Fire Detection: The flame sensor keeps us safe by triggering alarms.
- Real-Time Feedback: The LCD shows ongoing updates about temperature and light levels.

https://github.com/user-attachments/assets/2bae634e-0775-4a1e-ae24-90d38f8bdabc
