//important! there is no short_shluf!

#include <Adafruit_NeoPixel.h>

#define LED_PIN 2
#define NUM_LEDS 30

Adafruit_NeoPixel strip(NUM_LEDS, LED_PIN, NEO_GRB + NEO_KHZ800);

void led_off(){
  strip.clear();
  strip.show();
}
void dot(){
  for (int i = 0; i < NUM_LEDS; i++) strip.setPixelColor(i, 0, 0, 255, 255);
  strip.show();
  delay(250);
  for (int i = 0; i < NUM_LEDS; i++) strip.setPixelColor(i, 0, 0, 50); //fade out
  delay(50);
  led_off();
  delay(300);
}

void dash(){
  for (int i = 0; i < NUM_LEDS; i++) strip.setPixelColor(i, 255, 0, 0, 255); //remember to use the for i
  strip.show();
  delay(700);
  for (int i = 0; i < NUM_LEDS; i++) strip.setPixelColor(i, 255, 0, 0, 50); //fade out
  delay(200);
  led_off();
  delay(300);
}

void shluf(){
  led_off();
  strip.clear();
  delay(2100);
}

void setup() {
  strip.begin();
  strip.show();
}

void loop() {
  //paste genarated morse code here
}
