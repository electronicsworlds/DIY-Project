#include <LCD_I2C.h>
LCD_I2C lcd(0x27);
int AudioPin = A0;
int value;
void setup() {
  Serial.begin(9600);
  lcd.begin(); 
  lcd.backlight();
  pinMode(AudioPin,INPUT);
}

void loop() {
  value = analogRead (AudioPin);
    if (value>50){
    lcd.setCursor(5,0);
    lcd.print("Keep");
    lcd.setCursor(5,1);
    lcd.print("Quite");
    delay(1000);
    lcd.clear();
    }
}
