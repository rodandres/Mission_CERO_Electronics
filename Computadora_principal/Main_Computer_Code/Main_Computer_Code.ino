// MAIN COMPUTER CODE

// SENSORS AND MODULES USED:
// * IMUGY89 (SCL-A5 SDA-A1)
// * MICRO SD moudule (MISO-D12 MOSI-D11 SCK-D5 SC-D4)
// * SW180P ()
// * SERVO (D9)
// * BUZZER (D7)
// * LED (D6)

//------------------------------------ CODE STARTS HERE --------------------------------------------------
#include <Servo.h>

// Moodules and sensors declaration
int LED = 6;
int BUZZER = 7;

Servo MAIN_SERVO;

// Functionality consts
int BUZZER_FREQUENCY = 261;
int SECURE_SERVO_ANGLE = 0;
int DEPLOY_SERVO_ANGLE = 180;

// Variables
int rocket_status = 0;

// Functions
void getDataFromSensors();
void saveDataInSD();

void setup() {
  // Moodules and sensors attachment
  pinMode(LED, OUTPUT);
  MAIN_SERVO.attach(9);

  tone(BUZZER, BUZZER_FREQUENCY, 1000);

  // Modules and sensors intialization
  Serial.begin(9600);

  // ******
  MAIN_SERVO.write(SECURE_SERVO_ANLGE);
}

void loop() {
  Serial.println("DATA TO SECONDARY COMPUTER");

  if (1 == 1) {  // Detect lift-off         DEV
    rocket_status = 1;
  }

  if (1 == 1) {  // Detect apogee         DEV
    rocket_status = 2;
    MAIN_SERVO.write(DEPLOY_SERVO_ANGLE);
  }

  if (1 == 1) {  // Detect correct parachute deployment             DEV
    rocket_status = 3;
  }
}

void getDataFromSensors() {}
void saveDataInSD() {}