#include <Servo.h>

const int botones[2] = {2, 3};
int isPresionado[2] = {LOW, LOW};
Servo servito;

void setup() {
  servito.attach(9);
  for (int i = 0; i < 2; i++) {
    pinMode(botones[i], INPUT);
  }
}

void loop() {
  for (int i = 0; i < 2; i++) {
    isPresionado[i] = digitalRead(botones[i]);
  }
  if (isPresionado[0] == HIGH && isPresionado[1] == LOW) {
    servito.write(0);
  } else if (isPresionado[0] == LOW && isPresionado[1] == HIGH) {
    servito.write(180);
  } else {
    servito.write(90);
  }
  delay(20);
}
