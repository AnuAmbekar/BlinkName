#include "lib1.h"

int led = D7; 


void setup() {

  pinMode(led, OUTPUT);

}


void loop() {
  digitalWrite(led, HIGH);

  delay(100);

  digitalWrite(led, LOW);

  delay(100);
  
  digitalWrite(led, HIGH);
  
  delay(1000);
  
  digitalWrite(led, LOW);
  
  delay(100);
  
  digitalWrite(led, HIGH);
  
  delay(100);
  
  digitalWrite(led, LOW);

  delay(100);
  
  digitalWrite(led, HIGH);
  
  delay(100);
  
  digitalWrite(led, LOW);

}
