#include <Arduino.h>

// Radio UART 

const int RADIO_RX = 8; 
const int RADIO_TX = 9; 

// OUTPUT UART

const int OUT_RX = 1;
const int OUT_TX = 2; 

HardwareSerial Radio(1);
HardwareSerial OUT(2);

void setup(){
    Serial.begin(115200);

    Radio.begin(9600, SERIAL_8N1, RADIO_RX, RADIO_TX);

    OUT.begin(SERIAL_8N1, OUT_RX, OUT_TX);

    Serial.println("Relay Started");
}

void loop(){
    if (Radio.available()){
        String msg = Radio.readStringuntil('\n');
        Serial.print("RX: ");
        Serial.println(msg);

        Out.println(msg);
    }
}