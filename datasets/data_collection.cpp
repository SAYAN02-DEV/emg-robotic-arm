#include <ESP32Servo.h>  // Include the servo library

#define LED 2              // Onboard LED
#define SERVO_PIN 13       // Servo signal pin
#define EMG_INPUT_PIN 35   // Analog input pin

Servo myServo;

void setup() {
    Serial.begin(115200);
    delay(1000);

    Serial.println("Starting muscle sensor reading...");

    pinMode(LED, OUTPUT);

    myServo.attach(SERVO_PIN);  // Attach servo to GPIO13
    myServo.write(0);           // Start position
}

void loop() {
    int emgValue = analogRead(EMG_INPUT_PIN);

    Serial.print("EMG Reading: ");
    Serial.println(emgValue);

    delay(500);  // time delay
}
