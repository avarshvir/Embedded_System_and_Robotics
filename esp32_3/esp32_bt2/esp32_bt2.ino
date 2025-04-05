#include<BluetoothSerial.h>
#define LED_BUILTIN 2
BluetoothSerial SerialBT;

void setup(){
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(115200);
  SerialBT.begin("ESP1");
  Serial.println("Bluetooth started");
}

void loop(){
  if(SerialBT.available()){
    String recieved = SerialBT.readString();
    Serial.println("Recieved via BT: "+ recieved);
    if(recieved == "turn on light"){
      digitalWrite(LED_BUILTIN, HIGH);
    }

    //Echo back the reciveed data
    SerialBT.println("Echo: "+ recieved);
    if(recieved == "turn off light"){
      digitalWrite(LED_BUILTIN, LOW);
    }

    delay(20);
  }
}
