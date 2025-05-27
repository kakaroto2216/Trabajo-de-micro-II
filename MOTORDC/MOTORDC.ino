const int IN1 = 8;
const int IN2 = 9;
const int ENA = 10;  // PWM para velocidad

void setup() {
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(ENA, OUTPUT);
}

void loop() {
  // Giro hacia la derecha
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  analogWrite(ENA, 200);
  delay(5000);  // Mantiene el giro 5 segundos

  // Giro hacia la izquierda
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  analogWrite(ENA, 200);
  delay(5000);  // Mantiene el giro 5 segundos
}
