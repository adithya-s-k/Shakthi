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