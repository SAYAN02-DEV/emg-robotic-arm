#include <WiFi.h>
#include <ESP32Servo.h>

#define WIFI_SSID "Wokwi-GUEST"
#define WIFI_PASSWORD ""

#define LED 2
#define SERVO_PIN 13

Servo myServo;

void InitWiFi() {
    Serial.println("Connecting to WiFi...");
    WiFi.begin(WIFI_SSID, WIFI_PASSWORD);
    while (WiFi.status() != WL_CONNECTED) {
        delay(500);
        Serial.print(".");
    }
    Serial.println("\nConnected!");
}

void setup() {
    Serial.begin(115200);
    InitWiFi();

    pinMode(LED, OUTPUT);
    myServo.attach(SERVO_PIN);
    myServo.write(0);
}

void loop() {
    digitalWrite(LED, HIGH);
    myServo.write(90);
    delay(1000);
    myServo.write(0);
    digitalWrite(LED, LOW);
    delay(1000);
}
