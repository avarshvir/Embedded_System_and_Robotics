#include "SPI.h"
#include "MFRC522.h"
#define SS_PIN 10
#define RST_PIN 9
MFRC522 rfid(SS_PIN, RST_PIN);
MFRC522::MIFARE_Key key;
void setup() {
      SPI.begin();
      rfid.PCD_Init();
      Serial.println("I am waiting for card...");
      Serial.begin(9600);
}

void loop() {
if (!rfid.PICC_IsNewCardPresent() || !rfid.PICC_ReadCardSerial())
        return;
      MFRC522::PICC_Type piccType = rfid.PICC_GetType(rfid.uid.sak);
        String strID = "";
      for (byte i = 0; i < 9; i++) {
        strID +=
          (rfid.uid.uidByte[i] < 0x10 ? "0" : "") +
          String(rfid.uid.uidByte[i], HEX) +
          (i != 3 ? ":" : "");
      }
      strID.toUpperCase();
      Serial.print("Tap card key: ");
      Serial.println(strID);
      delay(1000);
      if (strID.indexOf("AA:F9:74:3C00:00:00:00:00") >= 0) {  //put your own tap card key;AA:F9:74:3C
        Serial.println("Authorised acces");
        return;
      }
      else {
        Serial.println("Acces denied");
        return;
      }
}
