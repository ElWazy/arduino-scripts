#include <Servo.h>

Servo servito;
int angulo;
int lectura;

void setup() { 
  servito.attach(9);
}

void loop() {
  lectura = analogRead(A0);
  angulo  = map(lectura, 0, 1023, 0, 179);

  servito.write(angulo);
  delay(20);

}
