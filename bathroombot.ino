// This #include statement was automatically added by the Particle IDE.
#include "neopixel/neopixel.h"

#define PIXEL_PIN D2
#define PIXEL_COUNT 64
#define PIXEL_TYPE WS2812B

int sensorPin = D1;
int led = D7;
bool messageSent = false;

Adafruit_NeoPixel strip = Adafruit_NeoPixel(PIXEL_COUNT, PIXEL_PIN, PIXEL_TYPE);

void setup() {
  strip.begin();
  strip.show(); // Initialize all pixels to 'off'
  pinMode(sensorPin, INPUT_PULLDOWN);
  pinMode(led, OUTPUT);
}

void loop() 
{
  if (digitalRead(sensorPin) == HIGH && messageSent == false)
  {
    Particle.publish("doorStatus", "not available", PRIVATE);
    doorClosed();
    digitalWrite(led, digitalRead(sensorPin));
    messageSent = true;
  }
  if (digitalRead(sensorPin) == LOW && messageSent == true)
  {
      Particle.publish("doorStatus", "available", PRIVATE);
      doorOpen();
      digitalWrite(led, digitalRead(sensorPin));
      messageSent = false;
  }
}

void doorOpen() {
    strip.setPixelColor(0, 0, 255, 0);
    strip.setPixelColor(1, 0, 255, 0);
    strip.setPixelColor(2, 0, 255, 0);
    strip.setPixelColor(3, 0, 255, 0);
    strip.setPixelColor(4, 0, 255, 0);
    strip.setPixelColor(5, 0, 255, 0);
    strip.setPixelColor(6, 0, 255, 0);
    strip.setPixelColor(7, 0, 255, 0);
    strip.setPixelColor(8, 0, 255, 0);
    strip.setPixelColor(9, 0, 255, 0);
    strip.setPixelColor(10, 0, 255, 0);
    strip.setPixelColor(11, 0, 255, 0);
    strip.setPixelColor(12, 0, 255, 0);
    strip.setPixelColor(13, 0, 255, 0);
    strip.setPixelColor(14, 0, 255, 0);
    strip.setPixelColor(15, 0, 255, 0);
    strip.setPixelColor(16, 0, 255, 0);
    strip.setPixelColor(17, 0, 255, 0);
    strip.setPixelColor(18, 0, 255, 0);
    strip.setPixelColor(19, 0, 255, 0);
    strip.setPixelColor(20, 0, 255, 0);
    strip.setPixelColor(21, 0, 255, 0);
    strip.setPixelColor(22, 0, 255, 0);
    strip.setPixelColor(23, 0, 255, 0);
    strip.setPixelColor(24, 0, 255, 0);
    strip.setPixelColor(25, 0, 255, 0);
    strip.setPixelColor(26, 0, 255, 0);
    strip.setPixelColor(27, 0, 255, 0);
    strip.setPixelColor(28, 0, 255, 0);
    strip.setPixelColor(29, 0, 255, 0);
    strip.setPixelColor(30, 0, 255, 0);
    strip.setPixelColor(31, 0, 255, 0);
    strip.setPixelColor(32, 0, 255, 0);
    strip.setPixelColor(33, 0, 255, 0);
    strip.setPixelColor(34, 0, 255, 0);
    strip.setPixelColor(35, 0, 255, 0);
    strip.setPixelColor(36, 0, 255, 0);
    strip.setPixelColor(37, 0, 255, 0);
    strip.setPixelColor(38, 0, 255, 0);
    strip.setPixelColor(39, 0, 255, 0);
    strip.setPixelColor(40, 0, 255, 0);
    strip.setPixelColor(41, 0, 255, 0);
    strip.setPixelColor(42, 0, 255, 0);
    strip.setPixelColor(43, 0, 255, 0);
    strip.setPixelColor(44, 0, 255, 0);
    strip.setPixelColor(45, 0, 255, 0);
    strip.setPixelColor(46, 0, 255, 0);
    strip.setPixelColor(47, 0, 255, 0);
    strip.setPixelColor(48, 0, 255, 0);
    strip.setPixelColor(49, 0, 255, 0);
    strip.setPixelColor(50, 0, 255, 0);
    strip.setPixelColor(51, 0, 255, 0);
    strip.setPixelColor(52, 0, 255, 0);
    strip.setPixelColor(53, 0, 255, 0);
    strip.setPixelColor(54, 0, 255, 0);
    strip.setPixelColor(55, 0, 255, 0);
    strip.setPixelColor(56, 0, 255, 0);
    strip.setPixelColor(57, 0, 255, 0);
    strip.setPixelColor(58, 0, 255, 0);
    strip.setPixelColor(59, 0, 255, 0);
    strip.setPixelColor(60, 0, 255, 0);
    strip.setPixelColor(61, 0, 255, 0);
    strip.setPixelColor(62, 0, 255, 0);
    strip.setPixelColor(63, 0, 255, 0);
    strip.setBrightness(100);
    strip.show();
}

void doorClosed() {
    strip.setPixelColor(0, 255, 0, 0);
    strip.setPixelColor(1, 255, 0, 0);
    strip.setPixelColor(2, 255, 0, 0);
    strip.setPixelColor(3, 255, 0, 0);
    strip.setPixelColor(4, 255, 0, 0);
    strip.setPixelColor(5, 255, 0, 0);
    strip.setPixelColor(6, 255, 0, 0);
    strip.setPixelColor(7, 255, 0, 0);
    strip.setPixelColor(8, 255, 0, 0);
    strip.setPixelColor(9, 255, 0, 0);
    strip.setPixelColor(10, 255, 0, 0);
    strip.setPixelColor(11, 255, 0, 0);
    strip.setPixelColor(12, 255, 0, 0);
    strip.setPixelColor(13, 255, 0, 0);
    strip.setPixelColor(14, 255, 0, 0);
    strip.setPixelColor(15, 255, 0, 0);
    strip.setPixelColor(16, 255, 0, 0);
    strip.setPixelColor(17, 255, 0, 0);
    strip.setPixelColor(18, 255, 0, 0);
    strip.setPixelColor(19, 255, 0, 0);
    strip.setPixelColor(20, 255, 0, 0);
    strip.setPixelColor(21, 255, 0, 0);
    strip.setPixelColor(22, 255, 0, 0);
    strip.setPixelColor(23, 255, 0, 0);
    strip.setPixelColor(24, 255, 0, 0);
    strip.setPixelColor(25, 255, 0, 0);
    strip.setPixelColor(26, 255, 0, 0);
    strip.setPixelColor(27, 255, 0, 0);
    strip.setPixelColor(28, 255, 0, 0);
    strip.setPixelColor(29, 255, 0, 0);
    strip.setPixelColor(30, 255, 0, 0);
    strip.setPixelColor(31, 255, 0, 0);
    strip.setPixelColor(32, 255, 0, 0);
    strip.setPixelColor(33, 255, 0, 0);
    strip.setPixelColor(34, 255, 0, 0);
    strip.setPixelColor(35, 255, 0, 0);
    strip.setPixelColor(36, 255, 0, 0);
    strip.setPixelColor(37, 255, 0, 0);
    strip.setPixelColor(38, 255, 0, 0);
    strip.setPixelColor(39, 255, 0, 0);
    strip.setPixelColor(40, 255, 0, 0);
    strip.setPixelColor(41, 255, 0, 0);
    strip.setPixelColor(42, 255, 0, 0);
    strip.setPixelColor(43, 255, 0, 0);
    strip.setPixelColor(44, 255, 0, 0);
    strip.setPixelColor(45, 255, 0, 0);
    strip.setPixelColor(46, 255, 0, 0);
    strip.setPixelColor(47, 255, 0, 0);
    strip.setPixelColor(48, 255, 0, 0);
    strip.setPixelColor(49, 255, 0, 0);
    strip.setPixelColor(50, 255, 0, 0);
    strip.setPixelColor(51, 255, 0, 0);
    strip.setPixelColor(52, 255, 0, 0);
    strip.setPixelColor(53, 255, 0, 0);
    strip.setPixelColor(54, 255, 0, 0);
    strip.setPixelColor(55, 255, 0, 0);
    strip.setPixelColor(56, 255, 0, 0);
    strip.setPixelColor(57, 255, 0, 0);
    strip.setPixelColor(58, 255, 0, 0);
    strip.setPixelColor(59, 255, 0, 0);
    strip.setPixelColor(60, 255, 0, 0);
    strip.setPixelColor(61, 255, 0, 0);
    strip.setPixelColor(62, 255, 0, 0);
    strip.setPixelColor(63, 255, 0, 0);
    strip.setBrightness(100);
    strip.show();
}
