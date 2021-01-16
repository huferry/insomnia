#include <DigiMouse.h>

void setup() {
  DigiMouse.begin(); 
  pinMode(1, OUTPUT);

}

void loop() {
  digitalWrite(1, HIGH);
  DigiMouse.moveY(2);
  DigiMouse.delay(100);
  DigiMouse.moveY(-2);
  digitalWrite(1, LOW); 
  
  DigiMouse.delay(10000); // 1 sec delay
}
