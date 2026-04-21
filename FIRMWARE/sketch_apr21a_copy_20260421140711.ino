#include "Keyboard.h"

#define ButtonA 10
#define ButtonB 9

int prevA = HIGH;
int prevB = HIGH;

char ctrlKey = KEY_LEFT_CTRL;

void setup() {
  pinMode(ButtonA, INPUT);
  pinMode(ButtonB, INPUT);

  Keyboard.begin();
}

void loop() {
  int buttonAState = digitalRead(ButtonA);
  if ((buttonAState != prevA)
      && (buttonAState == HIGH)) {
    Keyboard.press(ctrlKey);
    Keyboard.press('c');
  }
  prevA = buttonAState;

  int buttonBState = digitalRead(ButtonB);
  if ((buttonBState != prevB)
      && (buttonBState == HIGH)) {
    Keyboard.press(ctrlKey);
    Keyboard.press('v');
  }
  prevB = buttonBState;
}
