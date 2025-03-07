#include <VirtualWire.h>
const int datain = 12;
void setup()
{
    vw_set_ptt_inverted(true);
    vw_set_rx_pin(datain);
    vw_setup(2000);
    vw_rx_start();
    pinMode(8,OUTPUT);
    pinMode(6,OUTPUT);
    //Serial.begin(9600);
}
    void loop()
{
    uint8_t buf[VW_MAX_MESSAGE_LEN];
    uint8_t buflen = VW_MAX_MESSAGE_LEN; 
 
    if (vw_get_message(buf, &buflen))
    { 

      if(buf[0]=='C')
      {  
       digitalWrite(6,HIGH);
       digitalWrite(8,HIGH);
       
       //Serial.print("data is: ");
       //Serial.println(buf[0]);
       delay(500);
       digitalWrite(6,LOW);
      }


      
      else if(buf[0]=='A')
      {  
       digitalWrite(8,HIGH);
       //Serial.print("data is: ");
       //Serial.println(buf[0]);
       delay(500);
       digitalWrite(8,LOW);
      }
      else if(buf[0]=='B')
      {  
       digitalWrite(6,HIGH);
       //Serial.print("data is: ");
       //Serial.println(buf[0]);
       delay(500);
       digitalWrite(6,LOW);
      }
         
      /*if(buf[0]=='a')
      {
       digitalWrite(8,LOW);
      }*/
    }
}
