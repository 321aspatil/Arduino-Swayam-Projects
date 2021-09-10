#include <LiquidCrystal.h>
LiquidCrystal lcd(12,11,5,4,3,2);
int pbutton=7;
int count=0;

void setup() {
  // put your setup code here, to run once:
  lcd.begin(16,2);
  pinMode(pbutton,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(pbutton)==HIGH)
  {
    lcd.setCursor(0,0);
    lcd.print("Button Pressed");
    lcd.setCursor(0,1);
    lcd.print(count++);
    while(digitalRead(pbutton)==HIGH);
  }
}
