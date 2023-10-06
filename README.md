
# Shakthi

A device which is small and compact and allows you to monitor the power consumed by electrical appliances.
It also can switch on and off your connected electrical appliances remotly using an app.

# Components
- ESP8266
- AC Voltage Sensor Module ZMPT101B
- SCT013‑030 30A Current Sensor Clamp Current Transformation for Current Measurement
- Relay

# Check out the demonstration Video


https://github.com/adithya-s-k/Shakthi/assets/27956426/797e8d00-092d-4b18-805b-a0bc798c1a83


[![videolink](https://github.com/adithya-s-k/Shakthi/blob/master/Archives/Assets/Slide1.PNG)](https://youtu.be/kS_2ZGTF39I)

[![videolink](https://github.com/adithya-s-k/Shakthi/blob/master/Archives/Assets/Slide2.PNG)](https://youtu.be/kS_2ZGTF39I)

[![videolink](https://github.com/adithya-s-k/Shakthi/blob/master/Archives/Assets/Slide3.PNG)](https://youtu.be/kS_2ZGTF39I)

# [Documentation](https://github.com/adithya-s-k/Shakthi/blob/master/Documentation.md)
## 22/5/2022

Aim - To set up a simple circuit using ESP3266 which can turn on and off an LED through the Blynk app
\
\
Connected a relay and power supply to and was able to turn on and off an led using Blynk app.
\
[Video I referred to](https://youtu.be/HFGP1YqUPy0)
\
[Code used](https://github.com/adithya-s-k/Shakthi/blob/d94287c6fe34f4617cba3545bfbc44f00065b80b/Remote_blink_control)
\
[Result Video](https://github.com/adithya-s-k/Shakthi/blob/b4589c9ca509b027ca998b03486c893b244e8cc1/Archives/Assets/blynk_led_relay.mp4)

## 24/5/2022

This is the circuit connections which i have followed for this project.
\
![circuit Connections](https://github.com/adithya-s-k/Shakthi/blob/master/Archives/Assets/circuit_diagram.jpg)

Aim - To setup a simple websocket connections with ESP3266.
## 13/6/2022

Aim - To calibrate and get accurate readings from [Voltage sensor](https://robu.in/product/ac-voltage-sensor-module-zmpt101b-single-phase/)
\
Voltage sensor calibrated and displayed on the serial monitor
\
\
[Code used](https://github.com/adithya-s-k/Shakthi/blob/master/Archives/Smart_Plug/voltage_measurment/voltage_measurment.ino)
\
[Video I referred to](https://youtu.be/EaTBNvZ7C-Q)

## 29/6/2022

Aim - To enclose all the sensors and the circuit within a box and integrate the [voltage sensor code](https://github.com/adithya-s-k/Shakthi/blob/master/Archives/Smart_Plug/voltage_measurment/voltage_measurment.ino) with the [main code](https://github.com/adithya-s-k/Shakthi/blob/d94287c6fe34f4617cba3545bfbc44f00065b80b/Remote_blink_control)
- The smart plug can remotely switch on and off any appliance which is connected to it.
- It can also measure the voltage(Vrms).
- The current value is fixed to 2.0 Amps(next step is to integrate the current sensor)
- Both power an energy calculation is done successfully and displayed on the Blynk app as well as the terminal.
\
[Code used](https://github.com/adithya-s-k/Shakthi/blob/master/Archives/Smart_Plug/node_mcu_relay/node_mcu_relay.ino#L1)
## 30/6/2022

Aim - To integrate the current sensor so that we can accurately determine the power consumed.
\
\
[Current sensor which we are using is SCT013](https://robu.in/product/sct-013-060-non-invasive-ac-current-sensor-clamp-sensor-60a/) 

## 2/7/2022

Aim - To integrate wifi manager which prevents from hardcoding wifi credentials.
\
\
[Refrence Video](https://youtu.be/dQw4w9WgXcQ)
\
[Library Used](https://github.com/tzapu/WiFiManager)
\
[Code Used](https://github.com/adithya-s-k/Shakthi/blob/master/Archives/Wifi_manager/Wifi_manager_basic/Wifi_manager_basic.ino#L1)

## 16/7/2022

Aim - Shifted from ESP8266 to ESP32
\
\
[Code Used](https://github.com/adithya-s-k/Shakthi/blob/master/Archives/Smart_Plug/ESP32_voltage_current_sensor)

