#include <Keyboard.h>

void setup() {
  Serial.begin(9600);
  Keyboard.begin();
}

void loop() {
  if (Keyboard.available()) {
    char key = Keyboard.read();
    Serial.print("Key pressed: ");
    Serial.println(key);
  }
}
