
#define trig 7
#define echo 6

void setup(){
  pinMode(echo,INPUT);
  pinMode(trig,OUTPUT);
  Serial.begin(9600);
}
void loop(){
  digitalWrite(trig,LOW);
  delayMicroseconds(2);
  digitalWrite(trig,HIGH);
  delayMicroseconds(10);
  digitalWrite(trig,LOW);

  float duration = pulseIn(echo,HIGH);
  float distance = 0.034*duration/2;

  Serial.print("Distance is ");
  Serial.print(distance);
  Serial.println("cm");
  delay(50);
}


/*#include<LiquidCrystal.h>
LiquidCrystal lcd(7,6,5,4,3,2);
void setup() {
  // put your setup code here, to run once:
  pinMode(A0,INPUT);
  lcd.begin(16,2);
}

void loop() {
  // put your main code here, to run repeatedly:
  int a = analogRead(A0);
  lcd.setCursor(1,5);
  lcd.println(a);

}
*/
