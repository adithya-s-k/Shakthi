/*************************************************************
  Download latest Blynk library here:
    https://github.com/blynkkk/blynk-library/releases/latest

  Blynk is a platform with iOS and Android apps to control
  Arduino, Raspberry Pi and the likes over the Internet.
  You can easily build graphic interfaces for all your
  projects by simply dragging and dropping widgets.

    Downloads, docs, tutorials: http://www.blynk.cc
    Sketch generator:           http://examples.blynk.cc
    Blynk community:            http://community.blynk.cc
    Follow us:                  http://www.fb.com/blynkapp
                                http://twitter.com/blynk_app

  Blynk library is licensed under MIT license
  This example code is in public domain.

 *************************************************************
  This example runs directly on NodeMCU.

  Note: This requires ESP8266 support package:
    https://github.com/esp8266/Arduino

  Please be sure to select the right NodeMCU module
  in the Tools -> Board menu!

  For advanced settings please follow ESP examples :
   - ESP8266_Standalone_Manual_IP.ino
   - ESP8266_Standalone_SmartConfig.ino
   - ESP8266_Standalone_SSL.ino

  Change WiFi ssid, pass, and Blynk auth token to run :)
  Feel free to apply it to any other example. It's simple!
 *************************************************************/

/* Comment this out to disable prints and save space */
#define BLYNK_PRINT Serial

/* Fill-in your Template ID (only if using Blynk.Cloud) */
#define BLYNK_TEMPLATE_ID "TMPLGUfx0xqd"
#define BLYNK_DEVICE_NAME "Home Automation"
#define BLYNK_AUTH_TOKEN "COXTkWaiiRJxB1ERgNetMIOKZK3SxVOB"

#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>

BlynkTimer timer;

#include "EmonLib.h"             // Include Emon Library

#define VOLT_CAL 140

// You should get Auth Token in the Blynk App.
// Go to the Project Settings (nut icon).
char auth[] = "COXTkWaiiRJxB1ERgNetMIOKZK3SxVOB";

// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "OMKOLAVI";
char pass[] = "vijayaraja123";

EnergyMonitor emon;             // Create an instance
long randNumber;

float kWh = 0;
unsigned long lastmillis = millis();
 
void myTimerEvent()
{
  randNumber = random(1.00, 1.55);
  emon.calcVI(20, 2000);
  kWh = kWh + emon.apparentPower * (millis() - lastmillis) / 3600000000.0;
  yield();
  Serial.print("Vrms: ");
  Serial.print(emon.Vrms, 2);
  Serial.print("V");
 
  Serial.print("\tIrms: ");
  Serial.print(randNumber, 4);
  Serial.print("A");
 
  Serial.print("\tPower: ");
  Serial.print((emon.Vrms*randNumber)/1000, 4);
  Serial.print("W");
 
  Serial.print("\tkWh: ");
  Serial.print(kWh, 5);
  Serial.println("kWh");
  
//  lcd.clear();
//  lcd.setCursor(0, 0);
//  lcd.print("Vrms:");
//  lcd.print(emon.Vrms, 2);
//  lcd.print("V");
//  lcd.setCursor(0, 1);
//  lcd.print("Irms:");
//  lcd.print(emon.Irms, 4);
//  lcd.print("A");
//  delay(2500);
//  
//  lcd.clear();
//  lcd.setCursor(0, 0);
//  lcd.print("Power:");
//  lcd.print(emon.apparentPower, 4);
//  lcd.print("W");
//  lcd.setCursor(0, 1);
//  lcd.print("kWh:");
//  lcd.print(kWh, 4);
//  lcd.print("W");
//  delay(2500);
 
  lastmillis = millis();
 
  Blynk.virtualWrite(V0, emon.Vrms);
  Blynk.virtualWrite(V1, randNumber);
  Blynk.virtualWrite(V2, (emon.Vrms*randNumber)/1000);
  Blynk.virtualWrite(V3, kWh);
}

void setup()
{
  // Debug console
  Serial.begin(115200);

  Blynk.begin(auth, ssid, pass);

  // You can also specify server:
  //Blynk.begin(auth, ssid, pass, "blynk-cloud.com", 80);
  //Blynk.begin(auth, ssid, pass, IPAddress(192,168,1,100), 8080);

  emon.voltage(35, VOLT_CAL, 1.7); // Voltage: input pin, calibration, phase_shift
  
  timer.setInterval(500L, myTimerEvent);
}

void loop()
{
  Blynk.run();
  timer.run();
}
