#define BUZZER_PIN 11

void setup() {
  // Initializeaza pinul buzzer-ului ca iesire
  //pinMode(BUZZER_PIN, OUTPUT);
  // Porneste comunicarea seriala pentru debug
  Serial.begin(9600);
  Serial.println("Pornire test buzzer...");
}

void loop() {
  // Genereaza un ton continuu de 1000 Hz
  Serial.println("Pornire buzzer - frecventa 1000 Hz");
  tone(BUZZER_PIN, 1000); // 1000 Hz
  delay(1000); // Asteapta 1 secunda

  // Opreste tonul pentru 1 secunda
  Serial.println("Oprire buzzer");
  noTone(BUZZER_PIN);
  delay(1000); // Asteapta 1 secunda

  // Repeta ciclul
}
