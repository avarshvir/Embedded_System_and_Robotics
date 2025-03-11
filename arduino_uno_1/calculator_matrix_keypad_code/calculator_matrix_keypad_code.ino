/*#include<Keypad.h>
#include<LiquidCrystal.h>

LiquidCrystal lcd(A5,A4,A3,A2,A1,A0);

const byte ROWS = 4;
const byte COLS = 4;

char keys[ROWS][COLS] = {
  {'7','8','9','/'},
  {'4','5','6','*'},
  {'1','2','3','-'},
  {'C','0','=','+'}
};

byte rowPins[ROWS] = {13,12,11,10};
byte colPins[COLS] = {9,8,7,6};

Keypad keypad = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );

String input = "";  // Stores user input
char operation = 0; // Stores current operation (+, -, *, /)
float num1 = 0, num2 = 0; // Stores operands

void setup() {
  // put your setup code here, to run once:
  lcd.begin(16,2);
  

}

void loop() {
  // put your main code here, to run repeatedly:

  char key = keypad.getKey();

  if(key){
    //lcd.print(key);
    if (key >= '0' && key <= '9') {
      // Append numbers to the input
      input += key;
      lcd.print(key);
    } else if (key == '+' || key == '-' || key == '*' || key == '/') {
      // If an operator is entered
      if (input.length() > 0) {
        num1 = input.toFloat();
        operation = key;
        input = ""; // Clear input for the second number
        lcd.print(key);
      }
    } else if (key == '=') {
      // Calculate result when '=' is pressed
      if (input.length() > 0) {
        num2 = input.toFloat();
        float result = 0;

        // Perform operation
        switch (operation) {
          case '+': result = num1 + num2; break;
          case '-': result = num1 - num2; break;
          case '*': result = num1 * num2; break;
          case '/': 
            if (num2 != 0) result = num1 / num2; 
            else {
              lcd.clear();
              lcd.print("Err: Divide by 0");
              delay(2000);
              lcd.clear();
              return;
            }
            break;
          default: return;
        }

        // Display result
        lcd.setCursor(0, 1);
        lcd.print("= ");
        lcd.print(result, 2);
        input = ""; // Reset input
      }
    } else if (key == 'C') {
      // Clear everything
      input = "";
      num1 = num2 = 0;
      operation = 0;
      lcd.clear();
    }
  }

}*/

#include <Keypad.h>
#include <LiquidCrystal.h>

LiquidCrystal lcd(A5, A4, A3, A2, A1, A0);

const byte ROWS = 4;
const byte COLS = 4;

char keys[ROWS][COLS] = {
  {'7', '8', '9', '/'},
  {'4', '5', '6', '*'},
  {'1', '2', '3', '-'},
  {'C', '0', '=', '+'}
};

byte rowPins[ROWS] = {13, 12, 11, 10};
byte colPins[COLS] = {9, 8, 7, 6};

Keypad keypad = Keypad(makeKeymap(keys), rowPins, colPins, ROWS, COLS);

String input = "";
char operation = 0;
float num1 = 0, num2 = 0;

void setup() {
  lcd.begin(16, 2);
  lcd.print("Calculator Ready");
  delay(1000);
  lcd.clear();
}

void loop() {
  char key = keypad.getKey();

  if (key) {
    if (key >= '0' && key <= '9') {
      input += key;
      lcd.print(key);
    } else if (key == '+' || key == '-' || key == '*' || key == '/') {
      if (input.length() > 0) {
        num1 = input.toFloat();
        operation = key;
        input = "";
        lcd.print(key);
      }
    } else if (key == '=') {
      if (input.length() > 0) {
        num2 = input.toFloat();
        float result = 0;
        switch (operation) {
          case '+': result = num1 + num2; break;
          case '-': result = num1 - num2; break;
          case '*': result = num1 * num2; break;
          case '/': 
            if (num2 != 0) result = num1 / num2; 
            else {
              lcd.clear();
              lcd.print("Err: Divide by 0");
              delay(2000);
              lcd.clear();
              return;
            }
            break;
          default: return;
        }
        lcd.setCursor(0, 1);
        lcd.print("= ");
        lcd.print(result, 2);
        input = "";
      }
    } else if (key == 'C') {
      input = "";
      num1 = num2 = 0;
      operation = 0;
      lcd.clear();
    }
  }
}
