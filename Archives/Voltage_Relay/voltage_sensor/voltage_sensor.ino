#define BLYNK_PRINT Serial
#include "EmonLib.h"
#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>

EnergyMonitor emon;
#define vCalibration 106.8
#define currCalibration 0.52
BlynkTimer timer;


void setup(){
float kWh = 0;
unsigned long lastmillis = millis();

emon.calcVI(20, 2000);
kWh = kWh + emon.apparentPower * (millis() - lastmillis) / 3600000000.0;

Blynk.virtualWrite(V0, emon.Vrms);
Blynk.virtualWrite(V1, emon.Irms);
Blynk.virtualWrite(V2, emon.apparentPower);
Blynk.virtualWrite(V3, kWh);

Serial.begin(9600);
emon.voltage(35, vCalibration, 1.7); // Voltage: input pin, calibration, phase_shift
emon.current(34, currCalibration); // Current: input pin, calibration.
Blynk.begin(auth, ssid, pass);
timer.setInterval(5000L, myTimerEvent);

}

void loop() {
  // put your main code here, to run repeatedly:
Blynk.run();
timer.run();
}
