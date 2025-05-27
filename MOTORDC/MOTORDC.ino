// Pines conectados al L298N
const int IN1 = 8;
const int IN2 = 9;
const int ENA = 10;  // PWM para controlar velocidad

void setup() {
  // Configurar pines como salida
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(ENA, OUTPUT);

  // Iniciar motor apagado
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  analogWrite(ENA, 0);  // Velocidad 0
}

void loop() {
  // Girar motor hacia adelante
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  analogWrite(ENA, 200);  // Velocidad entre 0-255
  delay(3000);

  // Detener motor
  analogWrite(ENA, 0);
  delay(1000);

  // Girar motor hacia atrás
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  analogWrite(ENA, 200);  // Velocidad 200
  delay(3000);

  // Detener motor
  analogWrite(ENA, 0);
  delay(1000);
}
