#include <DigiKeyboard.h>

void setup() {
  // Initialize the pin for blinking (usually pin 1 for Digispark boards)
  pinMode(1, OUTPUT);  // Set pin 0 as output for LED blink

  // Wait for the system to be ready
  delay(1000);  // Optional: Gives the system time to initialize (adjust if necessary)

  // Windows Key + Shift + Left Arrow: Move the current window to the left monitor (multi-monitor setup)
  DigiKeyboard.sendKeyStroke(KEY_ARROW_LEFT, MOD_GUI_LEFT | MOD_SHIFT_LEFT);  // Use MOD_GUI_LEFT and MOD_SHIFT_LEFT
  blink();
  delay(500);

  // Windows Key + Shift + Right Arrow: Move the current window to the right monitor (multi-monitor setup)
  DigiKeyboard.sendKeyStroke(KEY_ARROW_RIGHT, MOD_GUI_LEFT | MOD_SHIFT_LEFT);  // Use MOD_GUI_LEFT and MOD_SHIFT_LEFT
  blink();
  delay(500);

  // Windows Key + Up Arrow: Maximize the current window
  DigiKeyboard.sendKeyStroke(KEY_ARROW_UP, MOD_GUI_LEFT);  // Use MOD_GUI_LEFT
  blink();
  delay(500);

  // Windows Key + Down Arrow: Minimize the current window
  DigiKeyboard.sendKeyStroke(KEY_ARROW_DOWN, MOD_GUI_LEFT);  // Use MOD_GUI_LEFT
  blink();
  delay(500);

  // Ctrl + Shift + N: Create a new folder in File Explorer
  DigiKeyboard.sendKeyStroke(KEY_N, MOD_CONTROL_LEFT | MOD_SHIFT_LEFT);  // Use MOD_CONTROL_LEFT and MOD_SHIFT_LEFT
  blink();
  delay(500);

  // Alt + Space: Open window's system menu (minimize, maximize, close, etc.)
  DigiKeyboard.sendKeyStroke(KEY_SPACE, MOD_ALT_LEFT);  // Use MOD_ALT_LEFT
  blink();
  delay(500);

  // Alt + Left Arrow: Back (navigate back in File Explorer or browsers)
  DigiKeyboard.sendKeyStroke(KEY_ARROW_LEFT, MOD_ALT_LEFT);  // Use MOD_ALT_LEFT
  blink();
  delay(500);

  // Alt + Right Arrow: Forward (navigate forward in File Explorer or browsers)
  DigiKeyboard.sendKeyStroke(KEY_ARROW_RIGHT, MOD_ALT_LEFT);  // Use MOD_ALT_LEFT
  blink();
  delay(500);

  // Windows Key + U: Open Ease of Access settings
  DigiKeyboard.sendKeyStroke(KEY_U, MOD_GUI_LEFT);  // Use MOD_GUI_LEFT
  blink();
  delay(500);

  // Windows Key + H: Open the Share charm (Windows 8/10)
  DigiKeyboard.sendKeyStroke(KEY_H, MOD_GUI_LEFT);  // Use MOD_GUI_LEFT
  blink();
  delay(500);

  // Windows Key + Z: Open the app command menu (Windows Store apps)
  DigiKeyboard.sendKeyStroke(KEY_Z, MOD_GUI_LEFT);  // Use MOD_GUI_LEFT
  blink();
  delay(500);

  // Windows Key + V: Open clipboard history (Windows 10)
  DigiKeyboard.sendKeyStroke(KEY_V, MOD_GUI_LEFT);  // Use MOD_GUI_LEFT
  blink();
  delay(500);

  // Windows Key + X: Open the Quick Link menu
  DigiKeyboard.sendKeyStroke(KEY_X, MOD_GUI_LEFT);  // Use MOD_GUI_LEFT
  blink();
  delay(500);

  // Ctrl + Shift + Esc: Open Task Manager
  DigiKeyboard.sendKeyStroke(KEY_ESC, MOD_CONTROL_LEFT | MOD_SHIFT_LEFT);  // Use MOD_CONTROL_LEFT and MOD_SHIFT_LEFT
  blink();
  delay(500);

  // Ctrl + Alt + Del: Open the Windows Security Options screen
  DigiKeyboard.sendKeyStroke(KEY_DELETE, MOD_CONTROL_LEFT | MOD_ALT_LEFT);  // Use MOD_CONTROL_LEFT and MOD_ALT_LEFT
  blink();
  delay(500);

  // Windows Key + L: Lock the computer
  DigiKeyboard.sendKeyStroke(KEY_L, MOD_GUI_LEFT);  // Use MOD_GUI_LEFT
  blink();
  delay(500);

  // Windows Key + D: Show desktop
  DigiKeyboard.sendKeyStroke(KEY_D, MOD_GUI_LEFT);  // Use MOD_GUI_LEFT
  blink();
  delay(500);

  // Windows Key + F: Open File Explorer Search
  DigiKeyboard.sendKeyStroke(KEY_F, MOD_GUI_LEFT);  // Use MOD_GUI_LEFT
  blink();
  delay(500);

  // Windows Key + Shift + S: Open Snipping Tool for a screenshot
  DigiKeyboard.sendKeyStroke(KEY_S, MOD_GUI_LEFT | MOD_SHIFT_LEFT);  // Use MOD_GUI_LEFT and MOD_SHIFT_LEFT
  blink();
  delay(500);

  // Windows Key + PrtScn: Take a screenshot and save it to the Pictures folder
  DigiKeyboard.sendKeyStroke(KEY_PRINTSCREEN, MOD_GUI_LEFT);  // Use MOD_GUI_LEFT
  blink();
  delay(500);

  // Windows Key + E: Open File Explorer
  DigiKeyboard.sendKeyStroke(KEY_E, MOD_GUI_LEFT);  // Use MOD_GUI_LEFT
  blink();
  delay(500);

  // Windows Key + F1: Open Help and Support
  DigiKeyboard.sendKeyStroke(KEY_F1, MOD_GUI_LEFT);  // Use MOD_GUI_LEFT
  blink();
  delay(500);

  // Windows Key + M: Minimize all windows
  DigiKeyboard.sendKeyStroke(KEY_M, MOD_GUI_LEFT);  // Use MOD_GUI_LEFT
  blink();
  delay(500);

  // Windows Key + Shift + M: Restore minimized windows
  DigiKeyboard.sendKeyStroke(KEY_M, MOD_GUI_LEFT | MOD_SHIFT_LEFT);  // Use MOD_GUI_LEFT and MOD_SHIFT_LEFT
  blink();
  delay(500);

  // Ctrl + P: Print the current document or webpage
  DigiKeyboard.sendKeyStroke(KEY_P, MOD_CONTROL_LEFT);  // Use MOD_CONTROL_LEFT
  blink();
  delay(500);

  // Ctrl + A: Select all content (text, files, etc.)
  DigiKeyboard.sendKeyStroke(KEY_A, MOD_CONTROL_LEFT);  // Use MOD_CONTROL_LEFT
  blink();
  delay(500);

  // Ctrl + C: Copy selected content to clipboard
  DigiKeyboard.sendKeyStroke(KEY_C, MOD_CONTROL_LEFT);  // Use MOD_CONTROL_LEFT
  blink();
  delay(500);

  // Ctrl + V: Paste clipboard content
  DigiKeyboard.sendKeyStroke(KEY_V, MOD_CONTROL_LEFT);  // Use MOD_CONTROL_LEFT
  blink();
  delay(500);

  // Ctrl + X: Cut selected content to clipboard
  DigiKeyboard.sendKeyStroke(KEY_X, MOD_CONTROL_LEFT);  // Use MOD_CONTROL_LEFT
  blink();
  delay(500);

  // Ctrl + Z: Undo the last action
  DigiKeyboard.sendKeyStroke(KEY_Z, MOD_CONTROL_LEFT);  // Use MOD_CONTROL_LEFT
  blink();
  delay(500);

  // Ctrl + Y: Redo the last undone action
  DigiKeyboard.sendKeyStroke(KEY_Y, MOD_CONTROL_LEFT);  // Use MOD_CONTROL_LEFT
  blink();
  delay(500);

  // Alt + Tab: Switch between open applications
  DigiKeyboard.sendKeyStroke(KEY_TAB, MOD_ALT_LEFT);  // Use MOD_ALT_LEFT
  blink();
  delay(500);

  // Alt + F4: Close the current application
  DigiKeyboard.sendKeyStroke(KEY_F4, MOD_ALT_LEFT);  // Use MOD_ALT_LEFT
  blink();
  delay(500);

  // Alt + Space: Open window's system menu (minimize, maximize, close, etc.)
  DigiKeyboard.sendKeyStroke(KEY_SPACE, MOD_ALT_LEFT);  // Use MOD_ALT_LEFT
  blink();
  delay(500);

  // Windows Key + Shift + Left/Right Arrow: Move the current window between monitors in multi-monitor setup
  DigiKeyboard.sendKeyStroke(KEY_ARROW_LEFT, MOD_GUI_LEFT | MOD_SHIFT_LEFT);  // Use MOD_GUI_LEFT and MOD_SHIFT_LEFT
  blink();
  delay(500);
  
  // Windows Key + P: Open Projector/Display settings
  DigiKeyboard.sendKeyStroke(KEY_P, MOD_GUI_LEFT);  // Use MOD_GUI_LEFT
  blink();
  delay(500);

  // Ctrl + Shift + T: Reopen the last closed tab (browsers)
  DigiKeyboard.sendKeyStroke(KEY_T, MOD_CONTROL_LEFT | MOD_SHIFT_LEFT);  // Use MOD_CONTROL_LEFT and MOD_SHIFT_LEFT
  blink();
  delay(500);

  // Ctrl + F: Open the Find dialog in most apps
  DigiKeyboard.sendKeyStroke(KEY_F, MOD_CONTROL_LEFT);  // Use MOD_CONTROL_LEFT
  blink();
  delay(500);

  // Ctrl + Shift + Esc: Open Task Manager
  DigiKeyboard.sendKeyStroke(KEY_ESC, MOD_CONTROL_LEFT | MOD_SHIFT_LEFT);  // Use MOD_CONTROL_LEFT and MOD_SHIFT_LEFT
  blink();
  delay(500);
}

void loop() {
  // Nothing needed in the loop
}

void blink() {
  // Blink the LED 3 times to indicate each attempt
  for (int i = 0; i < 3; i++) {
    digitalWrite(1, HIGH);  // Turn the LED on
    delay(100);              // Wait for 100 ms
    digitalWrite(1, LOW);   // Turn the LED off
    delay(100);              // Wait for 100 ms
  }
}
