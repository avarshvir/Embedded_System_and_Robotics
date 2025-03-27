#include<LiquidCrystal.h>
#include<Keypad.h>

LiquidCrystal lcd(A5,A4,A3,A2,A1,A0);

const byte ROWS = 4;
const byte COLS = 4;

long t = 0;
bool ts = false;

char keys[ROWS][COLS] = {
  {'7','8','9','E'},
  {'4','5','6','X'},
  {'1','2','3','-'},
  {'C','0','=','+'}
};

const byte rowPins[ROWS] = {11,10,9,8};
const byte colPins[COLS] = {7,6,5,4};

String otp = "";
String userInput = "";

Keypad keypad = Keypad(makeKeymap(keys),rowPins, colPins, ROWS, COLS);


void setup() {
  // put your setup code here, to run once:
  lcd.begin(16,2);
  lcd.setCursor(0,0);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  char key = keypad.getKey();
  

  if(key){

      if(key >= '0' && key <= '9'){
        userInput += key;  
        lcd.setCursor(0,1);
        lcd.print(userInput);
        Serial.print(userInput);
             
      
      }
     
    
    if(key == 'C'){
      lcd.clear();
      userInput = "";
    }
    if(key == '+'){
      t = millis();
      ts = true;
      //lcd.setCursor(8,1);
      //lcd.print(10000-t);
      
      userInput = "";
      lcd.setCursor(0,0);
      lcd.print("otp is: ");
      otp = random(1111,9999);
      lcd.print(otp);
      /*lcd.setCursor(8,1);
      lcd.print(10000-millis());*/     
    }
    
    if(key == '='){
      if(otp == userInput){
        lcd.setCursor(0,1);
        lcd.print("Done");
      }
      if(otp != userInput){
        lcd.setCursor(0,1);
        lcd.print("wrong");
      }
    }
//    lcd.print(key);
//    Serial.println(key);
  }
}
