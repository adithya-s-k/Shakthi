
// Fill-in information from your Blynk Template here
//#define BLYNK_TEMPLATE_ID           "TMPLxxxxxx"
//#define BLYNK_DEVICE_NAME           "Device"

#define BLYNK_TEMPLATE_ID "TMPLWf2NCVj5"
#define BLYNK_DEVICE_NAME "Quickstart Template"

#define BLYNK_FIRMWARE_VERSION        "0.1.0"

#define BLYNK_PRINT Serial
//#define BLYNK_DEBUG

#define APP_DEBUG

// Uncomment your board, or configure a custom board in Settings.h
//#define USE_SPARKFUN_BLYNK_BOARD
//#define USE_NODE_MCU_BOARD
//#define USE_WITTY_CLOUD_BOARD
//#define USE_WEMOS_D1_MINI

#include "BlynkEdgent.h"
int ledpin = 13;
BLYNK_WRITE(V0){
  int pinvalue = param.asInt();
  digitalWrite(ledpin,pinvalue);
  
}

void setup()
{
  Serial.begin(115200);
  delay(100);
  pinMode(ledpin, OUTPUT);
  BlynkEdgent.begin();
}

void loop() {
  BlynkEdgent.run();
}
