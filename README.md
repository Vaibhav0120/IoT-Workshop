# IoT Workshop: Weather Monitoring Program

## Event Information

On **Day 2** of the IoT workshop hosted by **iHUB DivyaSampark & IIT Roorkee** at **IPEC Ghaziabad**, we delved into some of the most **cutting-edge IoT technologies**. The day was packed with hands-on activities that illustrated the real-world applications of IoT and how it’s transforming data collection and utilization.

### Key Highlights:
- **Hands-on with MCU Boards and Arduino**: 
  - We connected **MCU boards** with **Arduino** on our laptops. By writing code, we were able to sense **temperature**, **humidity**, and **air quality index (AQI)** in real-time. It was fascinating to see our sensors gather data straight from the environment!

- **Visualizing Data on the Cloud with ThingSpeak**: 
  - We uploaded our sensor data to the cloud using **ThingSpeak**. Watching the live data transform into dynamic graphs was eye-opening. It was incredible to monitor temperature and humidity in real-time from our devices—this is IoT in action!

- **Real-time Data Communication with HiveMQ**: 
  - We explored **HiveMQ** and learned how devices communicate securely over the cloud in real time. Understanding how seamless data flow happens in IoT systems was a significant learning moment for me.

- **Collaboration and Fun**: 
  - The best part of the day was working on these projects with my friends! Learning something new is always more enjoyable when you have companions by your side.

This workshop has greatly enhanced my understanding of the **real-world applications of IoT** and demonstrated how this technology is reshaping the way we collect and use data.

---

## Getting Started with the Weather Monitoring Program

### Requirements
- **ESP8266**: Ensure you have the appropriate driver installed. [Download Driver for Windows](https://www.pololu.com/docs/0J7/all#2)
- **Arduino IDE**: Make sure you have the latest version installed.
- **OLED Display**: For displaying output values.
- **Temperature and Humidity Sensor**: To collect environmental data.

### Step-by-Step Instructions

1. **Setup ThingSpeak Account**:
   - Sign up at [ThingSpeak](https://thingspeak.com/signup).
   - Create a new channel with the following fields:
     - **Field 1**: Temperature
     - **Field 2**: Humidity
   - In the private view, add 2 Widgets for Temperature and Humidity. Set:
     - **Min Value**: 0
     - **Max Value**: 100

2. **Copy API Key**:
   - Navigate to your channel settings and copy the **API Key**. You will need this for the program.

3. **Run the Weather Monitoring Program**:
   - Open your Arduino IDE.
   - Paste the copied API Key into the program.
   - Upload the code to your ESP8266.
   - Once uploaded, the output values will be displayed on the OLED screen and sent to your ThingSpeak channel as gauge and graph.

### Useful Links
- **My Weather Channel**: [Weather Data](https://thingspeak.com/channels/2674435/private_show)
- **ThingSpeak Documentation**: [ThingSpeak](https://thingspeak.com/docs)

---

## Conclusion

This workshop provided valuable insights into the real-world applications of IoT, showcasing how this technology is revolutionizing data collection and usage. I highly encourage anyone interested in IoT or emerging tech to participate in such workshops.

---

## Moments of the Event

<p align="center">
  <p align="center"><img src="https://github.com/user-attachments/assets/e8737e2c-3045-4c21-ab96-4d9e45f92fb9" width="40%" height="40%"></p>
  <p align="center"><img src="https://github.com/user-attachments/assets/a1775bfd-f95d-4985-a1e6-f6838f992a10" width="40%" height="40%"></p>
  <p align="center"><img src="https://github.com/user-attachments/assets/dc56d89c-6d66-4162-9419-347a850dcd96" width="40%" height="40%"></p>
  <p align="center"><img src="https://github.com/user-attachments/assets/66c1deb2-3f25-47f3-842a-4c0700e99a6b" width="40%" height="40%"></p>
  <img src="https://github.com/user-attachments/assets/3a8bf049-20a2-4f00-b2ed-c74e70cd7716" width="70%" height="70%">
  <img src="https://github.com/user-attachments/assets/3a8bf049-20a2-4f00-b2ed-c74e70cd7716" width="70%" height="70%">
</p>

#IoT #EmergingTech #Innovation #CloudComputing #ThingSpeak #HiveMQ #Arduino #TechWorkshop #LearningByDoing #iHub #IPEC

