#include <stdio.h>
#include <Arduino.h>

// Joystick 1 : xpin -> 1, y pin -> 2 
const int joy1x = 1;
const int joy1y = 2;
// Joystick 2 : xpin -> 3, y pin -> 4 
const int joy2x = 3;
const int joy2y = 4;

// Radio TX GPIO 9 
// Radio RX GPIO 8

const int txpin = 9;
const int rxpin = 8;

HardwareSerial Radio(1);

void setup(){
    Serial.begin(115200);

    pinMode(joy1x, INPUT);
    pinMode(joy1y, INPUT);
    pinMode(joy2x, INPUT);
    pinMode(joy2y, INPUT);

    Radio.begin(9600,SERIAL_8N1, rxpin, txpin);
}

int joysticktopercent(int raw){
    int val = map(raw, 0, 4095, -100,100);

    if (abs(val) < 5) val =0;
    
    return val;
}

void loop {
    int j1x = joysticktopercent(analogRead(joy1x));
    int j1y = joysticktopercent(analogRead(joy1y));
    int j2x = joysticktopercent(analogRead(joy2x));
    int j2y = joysticktopercent(analogRead(joy2y));

    Radio.printf("%d,%d,%d,%d\n",
        j1x,
        j1y,
        j2x,
        j2y); // sent all commands 

}