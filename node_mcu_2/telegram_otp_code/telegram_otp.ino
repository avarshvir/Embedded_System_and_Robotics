#include <ESP8266WiFi.h>
#include <WiFiClientSecure.h>
#include <UniversalTelegramBot.h>

#define WIFI_SSID "iot"  //hotspot
#define WIFI_PASSWORD "project1234"    //password       

#define BOT_TOKEN "7909504037:AAGWmoWrr2MNrhGzKTyCA1AxuMNoXy0YJ4o"   //api
#define chat_id "991663718"

//const unsigned long BOT_MTBS = 1000; // mean time between scan messages
X509List cert(TELEGRAM_CERTIFICATE_ROOT);
WiFiClientSecure secured_client;
UniversalTelegramBot bot(BOT_TOKEN, secured_client);
//unsigned long bot_lasttime; // last time messages' scan has been done


void setup()
{
  Serial.begin(115200);
  //configTime(0, 0, "pool.ntp.org");      // get UTC time via NTP
  secured_client.setTrustAnchors(&cert); // Add root certificate for api.telegram.org
  Serial.print("Connecting to Wifi SSID ");
  Serial.print(WIFI_SSID);
  WiFi.begin(WIFI_SSID, WIFI_PASSWORD);
  while (WiFi.status() != WL_CONNECTED)
  {
    Serial.print(".");
    delay(500);
  }
  Serial.print("\nWiFi connected. IP address: ");
  Serial.println(WiFi.localIP());
//
//  // Check NTP/Time, usually it is instantaneous and you can delete the code below.
//  Serial.print("Retrieving time: ");
//  time_t now = time(nullptr);
//  while (now < 24 * 3600)
//  {
//    Serial.print(".");
//    delay(100);
//    now = time(nullptr);
//  }
//  Serial.println(now);
}

void loop()
{
  bot.sendMessage(chat_id, "Led is ON", "");
  Serial.println("send");  delay(500);
}
