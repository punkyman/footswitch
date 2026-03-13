#include <Arduino.h>
#include <Keyboard.h>

#define D10 A10 // as pins are the same on layout

static bool s_buttonWasPressed = false;

void setup() {
  pinMode(D10, INPUT);
}

void loop() {
  bool value = digitalRead(D10);
  if(value == LOW)
  {
    if(!s_buttonWasPressed)
    {
      s_buttonWasPressed = true;
      Keyboard.write(KEY_F9);
    }
  }
  else
    s_buttonWasPressed = false;
}

