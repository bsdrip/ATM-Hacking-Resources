#include <DigiKeyboard.h>

void setup() {
  // Initialize the pin for blinking (usually pin 1 for Digispark boards)
  pinMode(1, OUTPUT);
  // Wait for a moment after the device starts
  delay(1000);  // Optional: Wait for the system to begin booting

  // Start sending keystrokes to attempt entering BIOS
  for (int i = 0; i < 5; i++) {
    DigiKeyboard.sendKeyStroke(KEY_F2);  // Press F2 to attempt BIOS
    blink();
    delay(500);  // Wait half a second between presses

    DigiKeyboard.sendKeyStroke(KEY_DELETE);  // Press Del to attempt BIOS
    blink();
    delay(500);

    DigiKeyboard.sendKeyStroke(KEY_ESC);  // Press Esc to attempt BIOS
    blink();
    delay(500);

    DigiKeyboard.sendKeyStroke(KEY_F1);  // Press F1 to attempt BIOS
    blink();
    delay(500);

    DigiKeyboard.sendKeyStroke(KEY_F10);  // Press F10 to attempt BIOS
    blink();
    delay(500);
  }
}

void loop() {
  // put your main code here, to run repeatedly:

}

void blink() {
  for (int i = 0; i < 3; i++) {
    digitalWrite(1, HIGH);
    delay(100);
    digitalWrite(1, LOW);
    delay(100);
  }
}