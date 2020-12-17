#include <ESP8266WiFi.h>
#include <DNSServer.h>
#include <ESP8266WebServer.h>
#include <WiFiManager.h>
char* ssid =  "teche";
char* password = "teche123";


void setup() 
{
  // put your setup code here, to run once:
  Serial.begin(115200);
  WiFiManager wifiManager;
  Serial.println("Connecting");
  wifiManager.autoConnect(ssid,password);
  Serial.println("connected");

}

void loop() {
  // put your main code here, to run repeatedly:

}
