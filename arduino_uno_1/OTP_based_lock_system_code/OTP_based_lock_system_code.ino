#include<LiquidCrystal.h>
#include<Keypad.h>

LiquidCrystal lcd(A5,A4,A3,A2,A1,A0);

const byte ROWS = 4; //four rows
const byte COLS = 3; //three columns
char keys[ROWS][COLS] = {
  {'3','2','1'},
  {'6','5','4'},
  {'7','8','9'},
  {'*','0','#'}
};

byte rowPins[ROWS] = {6, 5, 4, 3}; //connect to the row pinouts of the keypad
byte colPins[COLS] = {9,8,7}; //connect to the column pinouts of the keypad
Keypad keypad = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  lcd.begin(16,2);

}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print(random(1111,9999));
  delay(1000);
  lcd.setCursor(0,0);
  //lcd.println("hello");
  char key = keypad.getKey();
  
  if (key){
    lcd.print(key);
    //Serial.println(key);
  }
}
