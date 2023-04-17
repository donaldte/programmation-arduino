#include <LiquidCrystal.h>
#define rs 9
#define en 8
#define d4 7
#define d5 6
#define d6 5
#define d7 4

// initialisation des pins du lcd 

LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
void setup() {

  // initialize lcd 16 x 2

  lcd.begin(16, 2);
  
  // Definir les ports
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
}

void loop() {
  // Ecriture du code principal
  digitalWrite(13, HIGH); // Allumer la led(HIGH)
  digitalWrite(12, LOW); // Eteindre la led(LOW)
  lcd.clear(); // Enlever les caracteres sur le lcd
  lcd.print("D1 allume"); // Ecrire sur le Lcd D1 allume
  delay(1000);  // attendre pour une seconde
  digitalWrite(13, LOW); // Eteindre la led(LOW)
  digitalWrite(12, HIGH); // Allumer la led(LOW)
  lcd.clear(); // Enlever les carateres sur le lcd
  lcd.print("D2 allume"); // Ecrire sur le lcd D2 allume
  delay(1000);  // attendre pour une seconde
}
