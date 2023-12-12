//algoritmo computadora secundaría
int buzzer = 7;
int BUZZER_FREQUENCY = 392;  //sol
int rocket_status = 0;
int LED = 8;

unsigned long time;
unsigned long time_buzzer;

unsigned long time_LED;

void setup() {
  tone(buzzer, BUZZER_FREQUENCY, 1000);
  time_buzzer = millis();


  //inicializacion de los sensores y modulos
  // put your setup code here, to run once:
}

void loop() {
  if (rocket_status == 0 && 1 == 1) {
    if (millis() > time_LED + 500) {
      digitalWrite(LED, !digitalRead(LED));
      time_LED = millis();
    }
  }

  if (rocket_status == 0 && 1 == 1) {  // verificacion de comunicacion con la estacion terrena
    if (millis() > time_buzzer + 500) {
      digitalWrite(buzzer, !digitalRead(buzzer));
      time_buzzer = millis();
      // put your main code here, to run repeatedly:
  }
  }
}
