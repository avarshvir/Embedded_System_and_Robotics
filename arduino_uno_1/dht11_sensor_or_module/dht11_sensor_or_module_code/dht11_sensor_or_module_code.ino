#include<dht.h>
dht DHT;
#define DHT11_PIN 8
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  int chk = DHT.read11(DHT11_PIN);
  Serial.print("Temperature: ");
  Serial.println(DHT.temperature);
  
  Serial.print("Humidity: ");
  Serial.println(DHT.humidity);

  delay(1000);
  
}
