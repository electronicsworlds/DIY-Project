#include <LCD_I2C.h>
LCD_I2C lcd(0x27);   // Default address of most PCF8574 modules, change according
int AudioPin = A0;   // Connect Your Analog Sound Sensor Module To This Pin
int value;       // Variable to store the sensor input value
void setup() {
  lcd.begin();   // Initializing LCD Module
  lcd.backlight();  // Initializing LCD Screen Backlight
  pinMode(AudioPin,INPUT);  // Set the pin to read from sensor
}

void loop() {
  value = analogRead (AudioPin);  // Reading the sensor data
    if (value>50){          // Initializing the minimum sensitivity value
    lcd.setCursor(5,0);   // Set the screen print location
    lcd.print("Keep");    // Printing the message
    lcd.setCursor(5,1);   // Set the screen print location
    lcd.print("Quite");  // Printing the message
    delay(1000);   // Providing delay for the message
    lcd.clear();  // Clear the lcd screen for next printing
    }
}
