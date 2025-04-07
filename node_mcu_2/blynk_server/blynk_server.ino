#define BLYNK_TEMPLATE_ID "XXXXXXXXX"
#define BLYNK_DEVICE_NAME "Gas"
#define BLYNK_AUTH_TOKEN "XXXXXXXXXXXXXXXXXX"

#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

 
char auth[] = BLYNK_AUTH_TOKEN;

char ssid[] = "arsh";  // type your wifi name
char pass[] = "12345678";  // type your wifi password
int gas_sensor = A0;
int value = 0;

BlynkTimer timer;

void sendSensor(){
 
 int value = analogRead(gas_sensor);
 value = map(value,0,1023,0,100);
 Blynk.virtualWrite(V0, value);
 Serial.print("Pin A0: ");
 Serial.println(value);

 
}

void setup(){
  pinMode(gas_sensor, INPUT);
  Serial.begin(115200);
  Blynk.begin(auth, ssid, pass);
  timer.setInterval(2500L, sendSensor);
}

void loop(){
  Blynk.run();
  timer.run();
}
