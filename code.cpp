#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

const int tempPin = A0;
const int pulsePin = A1;
const int buzzer = 9;

void setup() {
    Serial.begin(9600);
    lcd.begin();
    lcd.backlight();
    
    pinMode(buzzer, OUTPUT);
    digitalWrite(buzzer, LOW);
    
    lcd.setCursor(0, 0);
    lcd.print("Health Monitor");
    delay(2000);
    lcd.clear();
}

void loop() {
    // Read temperature from LM35
    int tempValue = analogRead(tempPin);
    float temperature = (tempValue * 5.0 * 100.0) / 1024.0;

    // Read pulse sensor value
    int pulseValue = analogRead(pulsePin);
    int heartRate = map(pulseValue, 500, 1023, 60, 120); // Adjust range

    // Display on LCD
    lcd.setCursor(0, 0);
    lcd.print("Temp: ");
    lcd.print(temperature);
    lcd.print("C ");

    lcd.setCursor(0, 1);
    lcd.print("Heart: ");
    lcd.print(heartRate);
    lcd.print(" bpm");

    // Serial Output for Debugging
    Serial.print("Temperature: ");
    Serial.print(temperature);
    Serial.println("C");

    Serial.print("Heart Rate: ");
    Serial.print(heartRate);
    Serial.println(" bpm");

    // Alert Condition
    if (temperature > 38.0 || heartRate > 100 || heartRate < 50) {
        digitalWrite(buzzer, HIGH);
    } else {
        digitalWrite(buzzer, LOW);
    }

    delay(2000); // Wait 2 seconds before next reading
}
