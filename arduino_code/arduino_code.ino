#include <Servo.h>

#define SERVO_PIN_1 13
#define SERVO_PIN_2 12
#define SERVO_PIN_3 11
#define SERVO_PIN_4 10
#define SERVO_PIN_5 9

Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;
Servo servo5;


void setup() {
  Serial.begin(9600);

  servo1.attach(SERVO_PIN_1);
  // servo2.attach(SERVO_PIN_2);
  // servo3.attach(SERVO_PIN_3);
  // servo4.attach(SERVO_PIN_4);
  // servo5.attach(SERVO_PIN_5);

  servo1.write(0);
  // servo2.write(0);
  // servo3.write(0);
  // servo4.write(0);
  // servo5.write(0);

  delay(2000);

  Serial.println("Started");
}

void loop() {

  float t = millis() / 1000.0;
  float sineValue = 0.5 * sin((t + 0) * 3.0); // Ovdje upravljam amplitudu, vremenski offset i frekvenciju...
  int angle = 90 + (90 * sineValue);
  
  servo1.write(angle);

  delay(15);
}

