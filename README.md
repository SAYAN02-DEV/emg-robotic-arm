# 🦾 EMG-Controlled Robotic Arm

This project is a **tri-operational robotic arm** controlled using real-time **EMG (electromyography) signals**, enabling hands-free execution of three key mechanical actions:
- **Grasping**
- **Rotating**
- **Lifting**

The system uses muscle activity detected from the human forearm and translates signal patterns into servo commands. Built using an ESP8266 microcontroller, it serves as a low-cost, functional prototype for assistive and biomedical applications.

---

## 🎯 Problem Statement

> **Design a tri-operational robotic arm controlled using EMG signals**, enabling hands-free command over **grasping**, **rotating**, and **lifting** actions through real-time analysis of muscular activity.

---

## 🔧 Technologies & Hardware Used

| Component               | Description                                      |
|------------------------|--------------------------------------------------|
| **ESP8266**            | Microcontroller for signal processing & control  |
| **MG90S Servo Motors** | Three micro servo motors for grasp, rotate, and lift |
| **Muscle Sensor Kit**  | EMG module to acquire muscle signals             |
| **Jumper Wires**       | For all interconnections                         |
| **11.1V 2000mAh Battery** | Power source for servos and ESP8266           |
| **Breadboard / ETs**   | For prototyping the circuit                      |

---

## ⚙️ Features

- 🧠 Real-time EMG signal-based control
- ✋ Hands-free actuation of 3 robotic functions
- 🔌 Wireless-capable with ESP8266
- 💸 Cost-effective and modular design
- 🛠️ Easy to prototype and open-source

---

## 🚀 How It Works

1. EMG electrodes are attached to the forearm.
2. Muscle signals are amplified and filtered using the muscle sensor module.
3. ESP8266 reads the analog voltage using `analogRead()`.
4. Based on thresholds or signal timing:
    - **Grasping** 
    - **Rotating** 
    - **Lifting**

---
## 👥 Team Members

- [Sannidhya]() — Mentor
- [Sayan Manna]() — Software
- [Abhishek Kumar]() — Software + Design
- [Anish Kumar Gupta]() — Hardware

---

## 📌 Future Plans

- EMG signal classification using machine learning
- Multi-gesture recognition
- Bluetooth or WiFi control interface
- Enhanced filtering using digital signal processing
