#include <DigiMouse.h>

void setup() {
  DigiMouse.begin(); 
  pinMode(1, OUTPUT);

}

void loop() {
  digitalWrite(1, HIGH);
  DigiMouse.moveY(1);
  DigiMouse.delay(500);
  DigiMouse.moveY(-1);
  digitalWrite(1, LOW); 
  
  DigiMouse.delay(10000); // 1 sec delay
}
