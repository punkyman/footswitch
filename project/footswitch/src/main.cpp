#include <Arduino.h>

#define D10 A10 // as pins are the same on layout

static bool s_buttonWasPressed = false;

void setup() {
  pinMode(D10, INPUT);
  Serial.begin(9600);
}

void loop() {
  bool value = digitalRead(D10);
  if(value == LOW)
  {
    if(!s_buttonWasPressed)
    {
      s_buttonWasPressed = true;
        Serial.println("Pressed");
    }
  }
  else
    s_buttonWasPressed = false;
}

