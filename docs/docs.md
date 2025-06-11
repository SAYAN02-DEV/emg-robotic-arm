# 🤖 EMG-Controlled Tri-Operational Robotic Arm

This project is a real-time EMG-controlled robotic arm that enables **hands-free control** of grasping, rotating, and lifting actions using muscle signals. Built using the ESP8266 microcontroller and MG90S servo motors, this low-cost prototype demonstrates the intersection of **biomedical signal processing** and **robotic actuation** for assistive and rehabilitation applications.

---

## 🚩 Project Goal

To develop a tri-operational robotic arm controlled via **EMG (Electromyography) signals**, enabling users to perform motor actions through muscle activity without using their hands — ideal for disabled individuals or hands-free scenarios.

---

## ⚙️ Features

- 🧠 **EMG Signal Control** — Commands issued via forearm muscle flexes
- 🔁 **Tri-Operational Movement** — Grasp, rotate, and lift
- 🧩 **ESP8266-Based Control** — Wi-Fi-enabled and programmable microcontroller
- 💪 **Six MG90S Servos** — Compact and responsive servo motors
- 🔋 **Battery-Powered** — Uses a 11.1V Li-ion pack for portability

---

## 🧰 Hardware Components

| Component                                    | Quantity | Description                                      |
|----------------------------------------------|----------|--------------------------------------------------|
| NodeMCU ESP8266 AMICA CP2102                 | 1        | Wi-Fi dev board for control logic               |
| MG90S Mini Servo Motor (180°)                | 3        | Controls fingers, wrist, and lifting mechanism  |
| XL4015 Voltage Regulator Module              | 1        | For voltage regulation (5V) from Li-ion battery |
| EMG Muscle Sensor Kit                        | 1        | Captures forearm muscle activity                |
| 11.1V 2000mAh 2S1P Li-ion Battery Pack | 1        | Power source for servos and controller          |
| Jumper Wires                                 | 40       | For electrical connections                      |
| Breadboard                                   | 1        | For prototyping circuit                         |
| Stepper Motor (optional for future upgrade)  | 1        | For wrist rotation or lifting (optional)        |
| Robotic Arm Kit or 3D-Printed Frame          | 1        | Structural frame of the arm                     |
| Nylon Fishing Line                           | –        | Translates servo pull to finger movement        |

> Full details available in hardware section of the repo
---

## 🔄 System Architecture


- The EMG sensor detects muscle activity and sends analog signals to the microcontroller.
- The ESP8266 interprets the signals based on thresholds.
- Corresponding servo motors are activated for:
    - Gripping (fingers)
    - Rotating (wrist)
    - Lifting (elbow or base)


---

## 🔌 Circuit & Firmware

- Circuit diagrams and prototyping instructions are available in `hardware/schematics/`.
- The firmware is written using the Arduino framework and deployed on ESP8266.
- Example features include:
    - Analog signal read from EMG
    - Threshold comparison
    - Servo angle control using PWM


---

## 🧪 Project Workflow

1. Finalize control concept
2. Gather all hardware components
3. Design and prototype the circuit
4. Write and upload firmware to ESP8266
5. Breadboard testing with EMG signal and servo responses
6. Assemble robotic arm frame
7. Integrate circuit and calibrate
8. Final testing and demo

---

## 🎯 Applications

- **Assistive Technology**: Hands-free control for physically challenged individuals
- **Rehabilitation**: Physical therapy with EMG-triggered movements
- **Biomedical Research**: Study interaction of biosignals with robotics
- **Hazardous Environments**: Hands-free control in sterile or dangerous zones

---

## 📸 Media

> Coming soon:
> - 📷 Images of prototype
> - 🎥 Demo video of working robotic arm
> - 📊 Diagrams and flowcharts

---

## 👥 Contributors

- **Sannidhya** – Mentor
- **Anish** – Hardware
- **Abhishek** – Software and Design
- **Sayan** – Software

---

## 📚 References

- [ESP8266 Datasheet](https://www.espressif.com/sites/default/files/documentation/0a-esp8266ex_datasheet_en.pdf)
- [MG90S Servo Datasheet](https://www.electronicoscaldas.com/datasheet/MG90S_Tower-Pro.pdf)
- [Robu.in](https://www.robu.in/)
- [Robocraze](https://robocraze.com/)

---


