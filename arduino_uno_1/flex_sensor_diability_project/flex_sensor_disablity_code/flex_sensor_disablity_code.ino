#include<LiquidCrystal.h>
LiquidCrystal lcd(8,7,6,5,4,3);
void setup() {
  // put your setup code here, to run once:
  pinMode(A0,INPUT);
  pinMode(A1,INPUT);
  lcd.begin(16,2);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  int a = analogRead(A0);
  int b = analogRead(A1);

  int c = map(a,93,293,0,500);
  int d = map(b,93,293,0,500);

  lcd.clear();
  lcd.setCursor(0,0);

  if (c > 100 && c < 300) {
    lcd.print("Need Water");
  } else if (d > 200 && d < 400) {
    lcd.print("Need Medicine");
  } else {
    lcd.print("No Movement");
  }

  delay(500);
}
