#include<LiquidCrystal.h>
LiquidCrystal lcd(7,6,5,4,3,2);
void setup() {
  // put your setup code here, to run once:
  pinMode(A0,INPUT);
  pinMode(10,OUTPUT);
  pinMode(9,OUTPUT);
  lcd.begin(16,2);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  int a = analogRead(A0);
  int delay_time = map(a, 0, 1023, 0, 3000);

  /*lcd.setCursor(0,0);
  lcd.print(delay_time);*/

  lcd.setCursor(0, 1);     
  lcd.print(delay_time);   
  Serial.println(delay_time);

  digitalWrite(10,HIGH);
  digitalWrite(9,LOW);
  delay(delay_time);
  
  digitalWrite(10,LOW);
  digitalWrite(9,HIGH);
  delay(delay_time);
  
  

}
