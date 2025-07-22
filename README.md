# Heater Control System

Hi! 👋 I’m Basabathini Munipooja, and this is my submission for the Embedded Systems Intern Assignment from upliance.ai.

This project is about controlling a heater using an Arduino and a temperature sensor. Based on the temperature, the heater turns ON or OFF and shows the current status in the Serial Monitor.


## 🛠 What the system does

- It reads temperature from a sensor (I used LM35 logic in simulation).
- When the temperature is low → it turns ON the heater (HEATING).
- When it gets close to the target temp (around 30°C) → it STABILIZES.
- If the temp goes above the target → it turns OFF the heater.
- If it crosses max limit → it shows OVERHEAT and turns on a warning LED.

All the state changes are printed in the Serial Monitor, so you can see what’s happening.


## 🎯 Target Temperatures
- Target Temp: 30°C
- Max Temp: 35°C


## 🧪 Wokwi Simulation

You can see my working simulation here:  
👉 https://wokwi.com/projects/437180811165995009


## 📂 What’s inside this repo

- `Heater_Control.ino` → Arduino code  
- `README.md` → this file :)  
- `Heater_Control_System_Design.pdf` → brief design explanation


## 🙋‍♀️ About Me

Basabathini Munipooja  
📧 munipooja012@gmail.com  
📱 +91 93906 99622

Thanks for reviewing my work! 🙏
