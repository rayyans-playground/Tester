#include <Wire.h>
#include <LiquidCrystal_I2C.h>
const int flexPin = A1;
const int buzzerPin = 9; // Connect the buzzer to this pin
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  Serial.begin(9600); // Initialize Serial for debugging
  Wire.begin();
  lcd.begin(); // Initialize the LCD (16x2 characters)
  pinMode(buzzerPin, OUTPUT);
  lcd.backlight();

  // Print a welcome message on the LCD
  lcd.print("PTNT-5 Ward 6");
}

void loop() {
  loop1();
  loop2();
  loop3();
  loop4();
  loop5();
}

void loop1() {
  const int flexPin1 = A5; // The analog input pin the flex sensor is connected to
  int sensorValue = analogRead(flexPin1); // Read the analog input from the flex sensor
  int mappedValue = map(sensorValue, 0, 1023, 0, 100); // Map the sensor value to a range (0 to 100%)

  Serial.print("Sensor Value: ");
  Serial.print(sensorValue);
  Serial.print(" | Flex Percentage: ");
  Serial.print(mappedValue);
  Serial.println("%");

  String message;
  
  if (mappedValue >= 90) {
    message = " Toilet";
    } 
    else {message = " ";
    }

    // Display the message on the LCD
    lcd.setCursor(0, 1); // Move cursor to the second line
    lcd.print("                "); // Clear the line

    lcd.setCursor(0, 1); // Move cursor to the second line again
    lcd.print(message);

    delay(100); // Add a small delay to avoid rapid updates
}

void loop2(){
const int flexPin = A1;
int sensorValue = analogRead(flexPin); // Read the analog input from the flex sensor
int mappedValue = map(sensorValue, 0, 1023, 0, 100); // Map the sensor value to a range (0 to 100%)

Serial.print("Sensor Value: ");
Serial.print(sensorValue);
Serial.print(" | Flex Percentage: "); //ZHXOQPWO9A
Serial.print(mappedValue);
Serial.println("%");

String message;
if (mappedValue >= 85) {
message = " Food";
}
else {message = "";}
lcd.setCursor(0, 1); // Move cursor to the second line
lcd.print(" "); // Clear the line

lcd.setCursor(0, 1); // Move cursor to the second line again
lcd.print(message);

delay(100); // Add a small delay to avoid rapid updates
}

void loop3(){
const int flexPin = A3;
int sensorValue = analogRead(flexPin);
int mappedValue = map(sensorValue, 0, 1023, 0, 100);

Serial.print("Sensor Value: ");
Serial.print(sensorValue);
Serial.print(" | Flex Percentage: "); //To detect the flex percentage
Serial.print(mappedValue);
Serial.println("%");

String message;
if (mappedValue >= 85) {
message = "Thirsty";
}
else {message = "";}
lcd.setCursor(0, 1); // Move cursor to the second line
lcd.print(" "); // Clear the line

lcd.setCursor(0, 1); // Move cursor to the second line again
lcd.print(message);

delay(100); // Add a small delay to avoid rapid updates
}

void loop4(){
const int flexPin = A4;
int sensorValue = analogRead(flexPin);
int mappedValue = map(sensorValue, 0, 1023, 0, 100);

Serial.print("Sensor Value: ");
Serial.print(sensorValue);
Serial.print(" | Flex Percentage: "); //ZHXOQPWO9A
Serial.print(mappedValue);
Serial.println("%");

String message;
if (mappedValue >= 85) {
message = "Need air";
}
else {message = "";}
lcd.setCursor(0, 1); // Move cursor to the second line
lcd.print(" "); // Clear the line

lcd.setCursor(0, 1); // Move cursor to the second line again
lcd.print(message);

delay(100); // Adding a small delay to avoid rapid updates
}
void loop5(){
const int flexPin = A2;
int sensorValue = analogRead(flexPin);
int mappedValue = map(sensorValue, 0, 1023, 0, 100);

Serial.print("Sensor Value: ");
Serial.print(sensorValue);
Serial.print(" | Flex Percentage: "); //ZHXOQPWO9A
Serial.print(mappedValue);
Serial.println("%");

String message;
if (mappedValue >= 85) {
message = "Tired";
}
else {message = "";}
lcd.setCursor(0, 1); // Move cursor to the second line
lcd.print(" "); // Clear the line

lcd.setCursor(0, 1); // Move cursor to the second line again
lcd.print(message);

delay(100); // Add a small delay to avoid rapid updates
}
