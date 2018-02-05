// This line is missing from the generated code for it to work on the device, this is the Orion specific code
#include <MeOrion.h>

#include <Arduino.h>
#include <Wire.h>
#include <SoftwareSerial.h>


double angle_rad = PI/180.0;
double angle_deg = 180.0/PI;
MeTemperature temperature_3_2(3,2);
Me7SegmentDisplay seg7_6(6);



void setup(){
    
}

void loop(){
    
    seg7_6.display((float)temperature_3_2.temperature());
    _delay(1);
    
    _loop();
}

void _delay(float seconds){
    long endTime = millis() + seconds * 1000;
    while(millis() < endTime)_loop();
}

void _loop(){
    
}

