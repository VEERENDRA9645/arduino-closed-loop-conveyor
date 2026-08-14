#include <LiquidCrystal.h>

LiquidCrystal lcd(12,11,5,4,3,2);

const int potPin=A0;
const int ENA=10;
const int IN1=9;
const int IN2=8;

void setup() {
  pinMode(IN1,OUTPUT);
  pinMode(IN2,OUTPUT);
  pinMode(ENA,OUTPUT);
  lcd.begin(16,2);
  lcd.print("Conveyor System");
  delay(2000);
  lcd.clear();
}

void loop() {
  int potValue=analogRead(potPin);
  int motorSpeed=map(potValue,0,1023,0,255);
  int speedPercent=map(potValue,0,1023,0,100);

  digitalWrite(IN1,HIGH);
  digitalWrite(IN2,LOW);
  analogWrite(ENA,motorSpeed);

  lcd.setCursor(0,0);
  lcd.print("Speed:");
  lcd.print(speedPercent);
  lcd.print("%   ");

  lcd.setCursor(0,1);
  lcd.print("Direction:FWD");

  delay(200);
}
