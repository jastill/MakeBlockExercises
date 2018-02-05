# makeblockexercises
Makeblock exercises for the Starter Robot

Exercises created for the [makeblock starter robot](http://store.makeblock.com/starter-robot-kit) using the [mBlock IDE](http://www.mblock.cc/)

## Temperature
This is a simple exercise that reads temperature and then diplays it on the 7 Segment Display attached to the device and also in the Scratch sprite 

The [Me Temperature Sensor](http://store.makeblock.com/me-temperature-sensor-waterproof-ds18b20/) is connected to Port 3 with the [Me RJ25 Connector](http://store.makeblock.com/me-rj25-adapter).

The [Me 7 Segment Display](http://store.makeblock.com/me-7-segment-serial-display-red) is connected to port 6.

### Scratch Mode
![alt Scratch](https://raw.githubusercontent.com/jastill/makeblockexercises/master/images/ScratchMode.PNG)

### Arduino Mode
This mode has a quirk as of version v3.4.1.1 of mBlock. The Arduino code does not insert the include for "MeOrion.h". This needs to be added in the Arduino IDE for the code to compile and be able to be uploaded.

Trying to upload from Arduino Mode in mBlock results in the following error:

C:\Program Files (x86)\mBlock\Arduino\hardware\tools\avr/bin/avr-g++ -c -g -Os -w -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -MMD -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10605 -DARDUINO_AVR_UNO -DARDUINO_ARCH_AVR -IC:\Program Files (x86)\mBlock\Arduino\hardware\arduino\avr\cores\arduino -IC:\Program Files (x86)\mBlock\Arduino\hardware\arduino\avr\variants\standard -IC:\Program Files (x86)\mBlock\Arduino\hardware\arduino\avr\libraries\Wire -IC:\Program Files (x86)\mBlock\Arduino\hardware\arduino\avr\libraries\SoftwareSerial C:\Users\john\AppData\Local\Temp\build8903909047036700396.tmp\project_temperature1_0.cpp -o C:\Users\john\AppData\Local\Temp\build8903909047036700396.tmp\project_temperature1_0.cpp.o 
project_temperature1_0.ino:8:1: error: 'MeTemperature' does not name a type
project_temperature1_0.ino:9:1: error: 'Me7SegmentDisplay' does not name a type
project_temperature1_0.ino: In function 'void loop()':
project_temperature1_0.ino:19:5: error: 'seg7_6' was not declared in this scope
project_temperature1_0.ino:19:27: error: 'temperature_3_2' was not declared in this scope
'MeTemperature' does not name a type

The fixed Arduino Code can be found here:
https://github.com/jastill/makeblockexercises/blob/master/Temperature%20Reading/project_temperature1_0/project_temperature1_0.ino 

![alt Arduino](https://raw.githubusercontent.com/jastill/makeblockexercises/master/images/ArduinoMode.PNG)

