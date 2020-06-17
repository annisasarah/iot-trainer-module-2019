/*********
 copyright Geraldo Gianno
 Atma Jaya Catholic University of Indonesia
 for research "Learning Internet-of-Things: IoT Basic Experiments using ESP8266, Arduino and Xbee"
 will be presented in SmartIoT2020 Conference
*********/



#include <dht.h>



#define DHT11_PIN 7
unsigned long interval = 5000; // interval pengiriman data dalam mili second
unsigned long previousMillis = 0;
dht DHT;
void setup() {
  pinMode(A0, OUTPUT); //temp up 1
  pinMode(A1, OUTPUT); //temp down 2
  pinMode(A2, OUTPUT); //power 3
  delay(1000);
  digitalWrite(A0, HIGH);
  digitalWrite(A1, HIGH);
  digitalWrite(A2, HIGH);

  Serial.begin(9600);
}

void loop() {
  unsigned long currentMillis = millis();
  
  if (currentMillis - previousMillis >= interval)
  {
  int chk = DHT.read11(DHT11_PIN);
  Serial.println(DHT.temperature);//software serial ke zigbee
  previousMillis = currentMillis;
  }
  
//  if (Serial.available() > 0) {
//      String temp = Serial.readString();
//      if (temp.substring(0, 1) == "1"){
//        digitalWrite(A0, LOW);
//        delay(200);
//        digitalWrite(A0, HIGH);
//      } else if (temp.substring(0, 1) == "2") {
//        digitalWrite(A1, LOW);
//        delay(200);
//        digitalWrite(A1, HIGH);
//      } else if (temp.substring(0, 1) == "3") {
//        digitalWrite(A2, LOW);
//        delay(200);
//        digitalWrite(A2, HIGH);
//      }
//    }
}
