#include <VirtualWire.h>
const int ledPin = 9;
const int ledPin2 = 7;
const int ledPin3 = 5;
const int ledPin4 = 3;


char *data;
void setup() 
{
  pinMode(ledPin,OUTPUT);
  pinMode(ledPin2,OUTPUT);
  pinMode(ledPin3,OUTPUT);
  pinMode(ledPin4,OUTPUT);
  
  
  vw_set_ptt_inverted(true);
  vw_set_tx_pin(12);
  vw_setup(2000); 
  pinMode(8,INPUT_PULLUP);  
  pinMode(6,INPUT_PULLUP);
  pinMode(4,INPUT_PULLUP);
  pinMode(2,INPUT_PULLUP);   
  Serial.begin(9600);
}

void loop()
{
  if((digitalRead(4)==0))
  {
  data="C";
  vw_send((uint8_t *)data, strlen(data));
  vw_wait_tx();
  digitalWrite(ledPin,HIGH);
  digitalWrite(ledPin2,LOW);
  digitalWrite(ledPin3,LOW);
  digitalWrite(ledPin4,LOW); 
  Serial.print("data is: ");
  Serial.println(data);
  //delay(500);
  }
  
  else if(digitalRead(8)==0)
  {
  data="A";
  vw_send((uint8_t *)data, strlen(data));
  vw_wait_tx();
  digitalWrite(ledPin,HIGH);
  Serial.print("data is: ");
  Serial.println(data);
  //delay(500);
  digitalWrite(ledPin,LOW);
  }
  else if(digitalRead(6)==0)
  {
  data="B";
  vw_send((uint8_t *)data, strlen(data));
  vw_wait_tx();
  digitalWrite(ledPin2,HIGH);
  Serial.print("data is: ");
  Serial.println(data);
  //delay(500);
  digitalWrite(ledPin2,LOW);
  }
  else{
    data="D";
    vw_send((uint8_t *)data, strlen(data));
    vw_wait_tx();
    digitalWrite(ledPin2,HIGH);
    Serial.print("data is: ");
    Serial.println(data);
    //delay(500);
    digitalWrite(ledPin2,LOW);
  }
  
   /* if(digitalRead(8)==1)
  {
  data="a";
  vw_send((uint8_t *)data, strlen(data));
  vw_wait_tx();
  digitalWrite(ledPin,HIGH);
  delay(500);
  digitalWrite(ledPin,LOW);
  }*/
}
