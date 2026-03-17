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

float f = 4.0;


void setup() {
  Serial.begin(9600);

  servo1.attach(SERVO_PIN_1);
  servo2.attach(SERVO_PIN_2);
  servo3.attach(SERVO_PIN_3);
  // servo4.attach(SERVO_PIN_4);
  // servo5.attach(SERVO_PIN_5);

  servo1.write(90);
  servo2.write(90);
  servo3.write(90);
  // servo4.write(90);
  // servo5.write(90);

  delay(2000);

  Serial.println("Started");
}

void loop() {

  float t = millis() / 1000.0;
  
  float sine3 = 0.1 * sin(t * f + 1.2);
  int angle3 = (90 * sine3);

  float sine2 = 0.25 * sin(t * f + 0.9);
  int angle2 = (90 * sine2);

  float sine1 = 0.35 * sin(t * f);
  int angle1 = (90 * sine1);
  
  
  servo3.write(90 + angle3); //head
  servo2.write(90 - angle2);
  servo1.write(90 + angle1);

  delay(5);
}



