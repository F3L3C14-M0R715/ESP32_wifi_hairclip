#include <WiFi.h>

#define LED_PIN 2
const int threshold = -70;
const uint32_t SCAN_INTERVAL_US = 30ULL * 1000000; // 30 seconds

void setup() {
  pinMode(LED_PIN, OUTPUT);
  WiFi.mode(WIFI_STA);
  }

void loop() {
  // Scan
  int n = WiFi.scanNetworks();
  bool detected = false;
  for (int i = 0; i < n; i++) {
    if (WiFi.RSSI(i) > threshold) detected = true;
  }

    if (detected) {
    digitalWrite(LED_PIN, HIGH);
    delay(200);
    digitalWrite(LED_PIN, LOW);
  }
  delay(3000);
}
