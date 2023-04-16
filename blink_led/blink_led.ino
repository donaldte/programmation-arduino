void setup() {
  // Definir les ports
pinMode(13, OUTPUT);
pinMode(12, OUTPUT);
}

void loop() {
  // Ecriture du code principal
digitalWrite(13, HIGH); // Allumer la led(HIGH)
digitalWrite(12, LOW); // Eteindre la led(LOW)
delay(500);  // attendre pour une seconde
digitalWrite(13, LOW); // Eteindre la led(LOW)
digitalWrite(12, HIGH); // Allumer la led(LOW)
delay(500);  // attendre pour une seconde
}
