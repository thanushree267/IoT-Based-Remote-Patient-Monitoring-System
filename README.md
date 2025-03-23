# IoT-Based Health Monitoring System

## Overview
This project is an **IoT-based Health Monitoring System** that measures **heart rate** and **body temperature** using an **Arduino Uno** and displays the readings on an **LCD screen**. It also triggers an **alert** if the readings exceed safe thresholds. Optionally, data can be sent to the cloud for remote monitoring.

## Features
- Measures **heart rate** using a **Pulse Sensor**.
- Measures **body temperature** using an **LM35 Temperature Sensor**.
- Displays readings on a **16x2 LCD Display**.
- **Buzzer alert** for abnormal heart rate or temperature.
- **(Optional)** Sends data to a cloud platform (e.g., **Thingspeak, Blynk**) using **ESP8266 WiFi Module**.

## Components Required
- **Arduino Uno**
- **Pulse Sensor**
- **LM35 Temperature Sensor**
- **16x2 LCD Display with I2C Module**
- **ESP8266 WiFi Module** *(Optional for IoT features)*
- **Buzzer**
- **Breadboard & Jumper Wires**

## Circuit Diagram
[Add an image of the circuit diagram here]

## Circuit Connections
1. **LM35 Temperature Sensor**
   - VCC → **5V (Arduino)**
   - GND → **GND (Arduino)**
   - Output → **A0 (Arduino)**

2. **Pulse Sensor**
   - VCC → **5V (Arduino)**
   - GND → **GND (Arduino)**
   - Signal → **A1 (Arduino)**

3. **LCD Display (16x2 with I2C)**
   - VCC → **5V (Arduino)**
   - GND → **GND (Arduino)**
   - SDA → **A4 (Arduino)**
   - SCL → **A5 (Arduino)**

4. **Buzzer**
   - +ve → **D9 (Arduino)**
   - -ve → **GND**

5. **ESP8266 WiFi Module (Optional for IoT)**
   - VCC → **3.3V (Arduino)**
   - GND → **GND (Arduino)**
   - TX → **RX (Arduino)**
   - RX → **TX (Arduino)**
   - CH_PD → **3.3V**

## IoT Integration (Optional)
- Use **ESP8266** to send data to **Thingspeak, Firebase, or Blynk**.
- Modify the code to send readings using **WiFiClient**.

## How to Run on Tinkercad
1. **Go to** [Tinkercad Circuits](https://www.tinkercad.com/).
2. **Create a new circuit** and add **Arduino Uno**.
3. **Connect components** as per the circuit diagram.
4. **Paste the Arduino code** into Tinkercad's code editor.
5. **Run the simulation** and observe the readings.

## Future Enhancements
- Add **SpO2 (Oxygen Level) Sensor**.
- Implement **real-time cloud dashboard** for monitoring.
- Create a **mobile app** for tracking health data.
