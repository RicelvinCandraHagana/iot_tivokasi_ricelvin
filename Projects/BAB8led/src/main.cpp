#include <Arduino.h>  // Wajib untuk PlatformIO + ESP32

#define LED1 25   // Pin untuk LED pertama
#define LED2 26   // Pin untuk LED kedua
#define LED3 27   // Pin untuk LED ketiga

void setup() {
    pinMode(LED1, OUTPUT);
    pinMode(LED2, OUTPUT);
    pinMode(LED3, OUTPUT);
}

void loop() {
    digitalWrite(LED1, HIGH);
    digitalWrite(LED2, HIGH);
    digitalWrite(LED3, HIGH);
    delay(1000); // Nyalakan selama 1 detik
    
    digitalWrite(LED1, LOW);
    digitalWrite(LED2, LOW);
    digitalWrite(LED3, LOW);
    delay(1000); // Matikan selama 1 detik
}