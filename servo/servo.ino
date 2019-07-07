/* Comment this out to disable prints and save space */
#define BLYNK_PRINT Serial

#include <ESP8266WiFi.h>

#include <BlynkSimpleEsp8266.h>

#include <Servo.h>

// You should get Auth Token in the Blynk App.

// Go to the Project Settings (nut icon).

char auth[] = "7307614fe29b46089e41ff306af58e3c";

// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "MIWIFI_2G_qR4k";
char pass[] = "3hqPrHCE";
Servo servo;

BLYNK_WRITE(V3) {

servo.write(param.asInt());

}

void setup() {

// Debug console Serial.begin(115200);

Blynk.begin(auth, ssid, pass);

// You can also specify server:

//Blynk.begin(auth, ssid, pass, "blynk-cloud.com", 8442);

//Blynk.begin(auth, ssid, pass, IPAddress(192,168,1,100), 8442);

servo.attach(15); // 15 means D8 pin of ESP8266

}

void loop()

{

Blynk.run(); // You can inject your own code or combine it with other sketches.

}
