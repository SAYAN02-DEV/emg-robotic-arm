#include <ESP32Servo.h>

#define LED 2

#define SERVO_PIN1 32
#define SERVO_PIN2 33
#define SERVO_PIN3 25

#define EMG_INPUT_PIN 35

Servo myServo1;
Servo myServo2;
Servo myServo3;

void setup() {
    Serial.begin(115200);
    delay(1000);

    Serial.println("Starting muscle sensor reading...");

    pinMode(LED, OUTPUT);

    myServo1.attach(SERVO_PIN1);
    myServo2.attach(SERVO_PIN2);
    myServo3.attach(SERVO_PIN3);

    myServo1.write(0);
    myServo2.write(0);
    myServo3.write(0);
}

void loop() {
    int emgValue = analogRead(EMG_INPUT_PIN);
    Serial.println(emgValue);  // Debugging output

    int thresHold1 = 1500;
    int threshHold2 = 1000;
    int threshHold3 = 2000;

    if (emgValue >= thresHold1) {
        myServo1.write(170);
    } else {
        myServo1.write(10);
    }

    if (emgValue >= threshHold2) {
        myServo2.write(170);
    } else {
        myServo2.write(10);
    }

    if (emgValue >= threshHold3) {
        myServo3.write(170);
    } else {
        myServo3.write(10);
    }

    delay(100);
}
