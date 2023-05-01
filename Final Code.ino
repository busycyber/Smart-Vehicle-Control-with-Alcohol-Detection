// Libraries
#include <Wire.h> // I2C library
#include <LiquidCrystal_I2C.h> // Library for I2C LCD
#include <TinyGPS++.h> // Library for GPS

// Pins
#define MQ3_ANALOG_PIN A0 // Analog pin for alcohol sensor
#define BUZZER_PIN 9 // Digital pin for buzzer

// LCD
LiquidCrystal_I2C lcd(0x27, 16, 2); // Address and size of the I2C LCD display

// GPS
TinyGPSPlus gps; // Create an instance of the GPS object

// Thresholds
const int ALCOHOL_THRESHOLD = 300; // adjust according to your sensor

void setup() {
  // Serial port for debugging
  Serial.begin(9600); // Start serial communication with a baud rate of 9600
  Serial.println("Alcohol Detector with GPS");

  // LCD
  lcd.init(); // Initialize the LCD display
  lcd.backlight(); // Turn on the backlight
  lcd.setCursor(0, 0); // Set the cursor to the first column of the first row
  lcd.print("Welcome!"); // Display a welcome message
  delay(2000); // Wait for 2 seconds
  lcd.clear(); // Clear the display
  lcd.setCursor(0, 0); // Set the cursor to the first column of the first row
  lcd.print("Drive Safe!"); // Display a message to drive safe

  // Buzzer
  pinMode(BUZZER_PIN, OUTPUT); // Set the buzzer pin as an output
}

void loop() {
  // Read alcohol sensor
  int alcoholLevel = analogRead(MQ3_ANALOG_PIN); // Read the analog value from the alcohol sensor

  // Check if alcohol level is above the threshold
  if (alcoholLevel > ALCOHOL_THRESHOLD) {
    lcd.clear(); // Clear the display
    lcd.setCursor(0, 0); // Set the cursor to the first column of the first row
    lcd.print("Over Drunk"); // Display a message for over drunk
    digitalWrite(BUZZER_PIN, HIGH); // Turn on the buzzer
  } else {
    lcd.clear(); // Clear the display
    lcd.setCursor(0, 0); // Set the cursor to the first column of the first row
    lcd.print("Not Drunk"); // Display a message for not drunk
    digitalWrite(BUZZER_PIN, LOW); // Turn off the buzzer
  }

  // GPS
  while (Serial.available() > 0) {
    gps.encode(Serial.read()); // Read the data from the GPS module
  }

  if (gps.location.isValid()) { // Check if the GPS location is valid
    lcd.setCursor(0, 1); // Set the cursor to the first column of the second row
    lcd.print("Lat:"); // Display the latitude label
    lcd.print(gps.location.lat(), 6); // Display the latitude value with 6 decimal places
    lcd.print("  "); // Add some spaces
    lcd.setCursor(9, 1); // Set the cursor to the 10th column of the second row
    lcd.print("Lng:"); // Display the longitude label
    lcd.print(gps.location.lng(), 6); // Display the longitude value with 6 decimal places
  }
}




