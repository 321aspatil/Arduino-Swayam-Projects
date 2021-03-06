//Temparature and Humidity Sensor
#include <SimpleDHT.h>
int pinDHT11=A0;
SimpleDHT11 dht11(pinDHT11);
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  delay(500);
  Serial.print("DHT11 Temparature and Humidity\n\n");
  delay(1000);

}

void loop() {
  // put your main code here, to run repeatedly:
  byte temperature=0;
  byte humidity=0;
  dht11.read(pinDHT11,&temperature,&humidity,NULL);
  Serial.print("Temperature & Humidity:");
  Serial.print((int)temperature);
  Serial.print(" *C & ");
  Serial.print((int)humidity);
  Serial.print("%H \n\n");
  delay(2000);

}
