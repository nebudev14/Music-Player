#include <LiquidCrystal.h>
int prev = 3;
int playPause = 5;
int next = 6;

const int rs = 7, en = 8, d4 = 9, d5 = 10, d6 = 11, d7 = 12;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  pinMode(prev, INPUT);
  pinMode(playPause, INPUT);
  pinMode(next, INPUT);
  pinMode(2, OUTPUT);
  lcd.begin(16, 2);
  Serial.begin(9600);
}

void loop() {n
  digitalWrite(2, HIGH);
  if(digitalRead(prev) == HIGH) {
    Serial.println("previous");
    lcd.clear();
    lcd.setCursor(0, 1);
    lcd.print("Previous Song");
    delay(750);
  }
  if(digitalRead(playPause) == HIGH) {
    Serial.println("play_pause");
    lcd.clear();
    lcd.setCursor(0, 1);
    lcd.print("Resumed/Paused");
    delay(750);
  }
  if(digitalRead(next) == HIGH) {
    Serial.println("next");
    lcd.clear();
    lcd.setCursor(0, 1);
    lcd.print("Next song");
    delay(750);
  }
  
}