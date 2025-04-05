#include <ESP8266WiFi.h>
#include <WiFiClientSecure.h>
#include <UniversalTelegramBot.h>

#define WIFI_SSID "arsh"  
#define WIFI_PASSWORD "12345678"    
#define BOT_TOKEN "7909504037:AAGWmoWrr2MNrhGzKTyCA1AxuMNoXy0YJ4o"   
#define CHAT_ID "991663718"

const int ledPin = D5;
WiFiClientSecure secured_client;
UniversalTelegramBot bot(BOT_TOKEN, secured_client);

void setup() {
  Serial.begin(115200);
  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, HIGH);

  WiFi.begin(WIFI_SSID, WIFI_PASSWORD);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("\nWiFi connected.");
  
  secured_client.setInsecure();
  bot.sendMessage(CHAT_ID, "Bot Started!", "");
}

void loop() {
  int numNewMessages = bot.getUpdates(bot.last_message_received + 1);
  for (int i = 0; i < numNewMessages; i++) {
    String text = bot.messages[i].text;

    if (text == "/ledon") {
      digitalWrite(ledPin, HIGH);
      bot.sendMessage(CHAT_ID, "LED is ON", "");
      Serial.print("LED is ON");
    } 
    else if (text == "/ledoff") {
      digitalWrite(ledPin, LOW);
      bot.sendMessage(CHAT_ID, "LED is OFF", "");
      Serial.print("LED is OFF");
    }
  }
  delay(1000);
}
