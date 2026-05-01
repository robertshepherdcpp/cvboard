#include "Keyboard.h"

#define ButtonA 0
#define ButtonB 1

int prevA = HIGH;
int prevB = HIGH;

char ctrlKey = KEY_LEFT_CTRL;

void setup() {
  pinMode(ButtonA, INPUT_PULLUP);
  pinMode(ButtonB, INPUT_PULLUP);

  Keyboard.begin();
}

void loop() {
  int buttonAState = digitalRead(ButtonA);
  if ((buttonAState != prevA)
      && (buttonAState == LOW)) {
    Keyboard.press(ctrlKey);
    Keyboard.press('c');
    Keyboard.releaseAll();
    while(buttonAState==LOW) delay(10);
  }
  prevA = buttonAState;

  int buttonBState = digitalRead(ButtonB);
  if ((buttonBState != prevB)
      && (buttonBState == LOW)) {
    Keyboard.press(ctrlKey);
    Keyboard.press('v');
    Keyboard.releaseAll();
    while(buttonBState==LOW) delay(10);
  }
  prevB = buttonBState;
}
