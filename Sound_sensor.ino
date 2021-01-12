#include <LCD_I2C.h>
LCD_I2C lcd(0x27);   // Default address of most PCF8574 modules, change according
int AudioPin = A0;   // Connect Your Analog Sound Sensor Module To This Pin
int value;       // Variable to store the sensor input value
void setup() {
  lcd.begin(); 
  lcd.backlight();
  pinMode(AudioPin,INPUT);  // Set the pin to read from sensor
}

void loop() {
  value = analogRead (AudioPin);  // Reading the sensor data
    if (value>50){
    lcd.setCursor(5,0);
    lcd.print("Keep");
    lcd.setCursor(5,1);
    lcd.print("Quite");
    delay(1000);
    lcd.clear();
    }
}
