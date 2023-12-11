#include <SD.h>
#include <Wire.h>
#include <LSM303.h>
#include <Adafruit_L3GD20_U.h>
#include <Adafruit_BMP085.h>

// Pins for Micro_SD card.
#define SD_CS_PIN 4

// Code sentence for Initializing sensors
LSM303 sensor;  // sensor is class LSM303´s instance for Accelerometer and Magnetometer
Adafruit_L3GD20_Unified gyro = Adafruit_L3GD20_Unified(20);  //gyro: instance of Adafruit_L3GD20 for gyroscope
Adafruit_BMP085 bmp;  //instance fo class for Pressure and Temperature.

File dataFile;

void setup() {
  Serial.begin(9600);

  if (!SD.begin(SD_CS_PIN)) {
    Serial.println("¡Initializing Micro SD card failed!");
    //return;
  }

  if (!sensor.init() || !gyro.begin()) {
    Serial.println("¡Initializing the sensors failed!");
    while (1);
  }

  if (!bmp.begin()) {
    Serial.println("¡It can not find the sensor BMP085!");
    while (1);
  }
  //Generate a new file where will be written the raw data.
  dataFile = SD.open("sensor_data.txt", FILE_WRITE);

  if (!dataFile) {
    Serial.println("¡Error to open the file for writting!");
    return;
  }

  // Print the Headers for the data on the file
  dataFile.println("AccelX,AccelY,AccelZ,MagX,MagY,MagZ,GyroX,GyroY,GyroZ,Pressure,Temperature");
}

void loop() {
  // Read data sensor
  sensor.read();
  sensors_event_t gyroEvent;  //variable of type sensors_event_t to save data events provided by gyroscope sensor 
  gyro.getEvent(&gyroEvent);

  // Get data from accelerometer
  int accelX = sensor.a.x;
  int accelY = sensor.a.y;
  int accelZ = sensor.a.z;

  // Get data from Magnetometer
  int magX = sensor.m.x;
  int magY = sensor.m.y;
  int magZ = sensor.m.z;

  // Get data from the Gyroscope
  
  float gyroX = gyroEvent.gyro.x;
  float gyroY = gyroEvent.gyro.y;
  float gyroZ = gyroEvent.gyro.z;

  // Get Pressure and Temperature
  float pressure = bmp.readPressure() / 100.0F;  // Pressure given in hPa
  float temperature = bmp.readTemperature();  // Temperature given in Celsius Degrees

  //Write the IMU GY89 data into the SD Card
  dataFile.print(accelX); dataFile.print(",");
  dataFile.print(accelY); dataFile.print(",");
  dataFile.print(accelZ); dataFile.print(",");
  dataFile.print(magX); dataFile.print(",");
  dataFile.print(magY); dataFile.print(",");
  dataFile.print(magZ); dataFile.print(",");
  dataFile.print(gyroX); dataFile.print(",");
  dataFile.print(gyroY); dataFile.print(",");
  dataFile.print(gyroZ); dataFile.print(",");
  dataFile.print(pressure); dataFile.print(",");
  dataFile.println(temperature);

  // Print data in the port serie (plotter)
  Serial.print("A:");
  Serial.print(accelX); Serial.print(",");
  Serial.print(accelY); Serial.print(",");
  Serial.print(accelZ); Serial.print(",");
  Serial.print("M:");
  Serial.print(magX); Serial.print(",");
  Serial.print(magY); Serial.print(",");
  Serial.print(magZ); Serial.print(",");
  Serial.print("G:");
  Serial.print(gyroX); Serial.print(",");
  Serial.print(gyroY); Serial.print(",");
  Serial.print(gyroZ); Serial.print(",");
  Serial.print("P:");
  Serial.print(pressure); Serial.print(",");
  Serial.print("T:");
  Serial.println(temperature);

  delay(100);  // Adjust the delay/late if it´s needed.
}
