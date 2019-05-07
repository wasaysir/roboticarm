#include <Servo.h>
Servo myservo1;
Servo myservo2;
Servo myservo3;

int potpin1 = 0;
int potpin2 = 1;
int potpin3 = 2;
int val_1;
int val_2;
int val_3;

void setup() {
  // put your setup code here, to run once:
  myservo1.attach(10);
  myservo2.attach(11);
  myservo3.attach(12);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  val_1 = analogRead(potpin1);
  val_1 = map(val, 0, 1023, 0, 180);     // scale it to use it with the servo (value between 0 and 180)
  val_2 = analogRead(potpin2);
  val_2 = map(val, 0, 1023, 0, 180);     // scale it to use it with the servo (value between 0 and 180)
  val_3 = analogRead(potpin3);
  val_3 = map(val, 0, 1023, 0, 180);     // scale it to use it with the servo (value between 0 and 180)
  myservo1.write(val_1);
  myservo2.write(val_2);
  myservo3.write(val_3);
  delay(50);
}
