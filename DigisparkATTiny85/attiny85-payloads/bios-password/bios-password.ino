#include <DigiKeyboard.h>


void setup() {
    DigiKeyboard.delay(1000); // Wait for the system to be ready

    for (int i = 0; i < 10; i++) {
        DigiKeyboard.sendKeyStroke(KEY_F2);
        DigiKeyboard.delay(100); // Small delay between key presses
    }
    DigiKeyboard.delay(10000);
    DigiKeyboard.print("<REDACTED>");
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
}

void loop() {
    // Empty loop, Digispark only executes setup once
}
