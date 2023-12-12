int SENSOR = 0;
int LED = 3;
int VALOR;


void setup() {
  pinMode(LED, OUTPUT);

  // put your setup code here, to run once:

}

void loop() {
  VALOR = analogRead(SENSOR);
  if (VALOR < 300) {
    digitalWrite(LED, HIGH);
    delay(400);
    }
    digitalWrite(LED, LOW);
  // put your main code8 here, to8 run repeatedly:
}
