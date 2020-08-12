# Documentation of "Learning Internet-of-Things: IoT Basic Experiments using ESP8266, Arduino and Xbee"
This is a simple trainer kit module to help you understand the basic concept of IoT infrastructure. 
This project is powered by Faculty of Engineering, Atma Jaya Catholic University of Indonesia (AJCUI)

There are 7 (seven) experiments that will cover three IoT segmentation:
- Device
- Connectivity
- Cloud and Application

Schematic design for our IoT Trainer is shown below:
<a href="https://sites.google.com/view/telecom-uaj/home"><img src="https://user-images.githubusercontent.com/61287961/84870233-3f871380-b0a9-11ea-9936-90fbb5485c39.JPG"></a>


## List of Experiments

### Understanding Devices

- Experiment 1: DHT sensor with OLED display
- Experiment 2: DHT 11 with Xbee Connectivity
- Experiment 3: LED with local host


### Understanding Connectivity 

- Experiment 4: Tunneling with Ngrok
- Experiment 5: Xbee Network Connected to ESP8266


### Understanding Cloud and Application

- Experiment 6: ThingSpeak
- Experiment 7: Web Hosting

## Instructions 

### Preparation:
1. Install Arduino IDE
2. Install XCTU 
3. Create ThinkSpeak Account
4. Create 000webhost Account

## Experiment 1
The first experiment is to read the data from a sensor (DHT11), and show the current temperature and humidity on the OLED display. The data has not been sent to any server yet.
the code available on: <a href="https://github.com/annisasarah/iot-trainer-module-2019/blob/master/DHT_OLED/DHT_OLED.ino">Code for Experiment 1</a>.
The circuit for experiment 1:
<a href="https://sites.google.com/view/telecom-uaj/home"><img src="https://raw.githubusercontent.com/annisasarah/iot-trainer-module-2019/master/doc_files/Experiment%201.JPG"></a>

## Experiment 2
The next experiment is reading DHT Sensor who connected to Xbee and Arduino. In the next section, the Xbee will connected to other Xbee, in which combined with an ESP8266. This experimeny continues to Experiment 5.
the code available on: <a href="https://github.com/annisasarah/iot-trainer-module-2019/blob/master/xbee_end/xbee_end.ino">Code for Experiment </a>.
The circuit for experiment 2:
<a href="https://sites.google.com/view/telecom-uaj/home"><img src="https://raw.githubusercontent.com/annisasarah/iot-trainer-module-2019/master/doc_files/Experiment%202.JPG"></a>

to config Xbee module, we need to install

