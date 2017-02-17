// Author: Mosam
// This Code controls an LED on pin 13 using WiFly Module RN-171 
// Uses it's own hotspot
// Android is interfaced | Android is controlling the LED

#include <Arduino.h>
#include <SoftwareSerial.h>
#include "WiFly.h"
 
SoftwareSerial uart(2, 3); 
WiFly wifly(&uart); 
int ledPin = 13;
  void setup() 
  {
  uart.begin(9600); 
  Serial.begin(9600); // start the Arduino serial monitor window connection
  delay(3000); // wait 3 second to allow the serial/uart object to start
  pinMode(ledPin, OUTPUT);
  }
 
  void loop() 
  {
 
  while (wifly.available())  // if there is data available from the shield
    {
   
     int incomming = wifly.read();
     incomming = incomming - 48;
     Serial.println(incomming);
     if(incomming == 1)
     {
       digitalWrite(ledPin, HIGH);
     }
     else if(incomming == 0)
     {
       digitalWrite(ledPin, LOW);
     }
     
    }
 
  while (Serial.available()) // if we typed a command
    {
    wifly.write(Serial.read()); // send the command to the WiFi shield.
    }
  }
  
  
 
