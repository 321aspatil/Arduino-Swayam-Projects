void setup() {
  // put your setup code here, to run once:
  pinMode(10,OUTPUT);//Blue led
  pinMode(11,OUTPUT);//green led
  pinMode(12,OUTPUT);//red led
  pinMode(4,INPUT);//push button

}

void loop() {
if (digitalRead(4)== LOW)
 { 
 // put your main code here, to run repeatedly:
 
 digitalWrite(10,HIGH);//blue
 delay(500);
 digitalWrite(10,LOW);
 delay(500);

 digitalWrite(11,HIGH);//green
 delay(500);
 digitalWrite(11,LOW);
 delay(500);

 digitalWrite(12,HIGH);//red
 delay(500);
 digitalWrite(12,LOW);
 delay(500);
 }
}
