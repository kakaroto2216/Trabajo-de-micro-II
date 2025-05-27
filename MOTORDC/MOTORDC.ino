const int IN1 = 8;
const int IN2 = 9;
const int ENA = 10;  // PWM para velocidad

void setup() {
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(ENA, OUTPUT);

  // Giro hacia la derecha
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  analogWrite(ENA, 200); // Ajusta la velocidad (0 a 255)
}

void loop() {
  // Motor girando continuamente a la derecha
}