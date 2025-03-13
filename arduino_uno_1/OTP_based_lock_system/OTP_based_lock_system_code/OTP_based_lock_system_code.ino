#include<LiquidCrystal.h>
#include<Keypad.h>

LiquidCrystal lcd(A5,A4,A3,A2,A1,A0);

const byte ROWS = 4; //four rows
const byte COLS = 3; //three columns
char keys[ROWS][COLS] = {
  {'3','2','1'},
  {'6','5','4'},
  {'9','8','7'},
  {'*','0','#'}
};
String userInput ="";
String otp = "";

byte rowPins[ROWS] = {6, 5, 4, 3}; 
byte colPins[COLS] = {9,8,7}; 
Keypad keypad = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );

void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT);
  
  Serial.begin(9600);
  lcd.begin(16,2);

  
  otp = String(random(1111,9999));
  Serial.println(otp);
  
  
  
}

void loop() {
  // put your main code here, to run repeatedly:
  char key = keypad.getKey();

  /*if (key) {
    if (key == '#') { 
      if (userInput == otp) {
        lcd.setCursor(0, 0);
        lcd.print("Opening Lock");
        Serial.println("Opening Lock");
        digitalWrite(13, HIGH); 
      } else {
        lcd.setCursor(0, 0);
        lcd.print("OTP not match");
        Serial.println("OTP not match");
        digitalWrite(13, LOW); 
      }
      userInput = ""; 
    }
    else if (key == '*') { // '*' is used to clear the input
      userInput = "";
      lcd.setCursor(0, 1);
      lcd.print("                "); // Clear the second line
      digitalWrite(13, LOW); // Turn off the LED
    } else {
      userInput += key; // Append the key to the user input
      lcd.setCursor(0, 1);
      lcd.print("Input: ");
      lcd.print(userInput);
    }
  }*/

  

  if (key) {
    if (key >= '0' && key <= '9') { 
      userInput += key; 
      lcd.setCursor(0, 0);
      lcd.print(userInput);

      
      if (userInput.length() == 4) {
        if (userInput == otp) {
          lcd.setCursor(0, 1);
          lcd.print("Opening Lock");  
          digitalWrite(13, HIGH); 
        } else {
          lcd.setCursor(0, 1);
          lcd.print("OTP not match");
          digitalWrite(13, LOW); 
        }
         
      }
    }
  }
}
