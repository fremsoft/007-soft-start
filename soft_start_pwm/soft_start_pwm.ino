#define IN_POT A0
#define OUT_MOT 6

int velocita;

void setup() {
  // NON  SERVE INIZIALIZZARE GLI
  // INGRESSI ANALOGICI
  // E NEANCHE LE USCITE PWM
  velocita = 0;
}

void loop() {
  analogWrite ( OUT_MOT, velocita );

  if (velocita < map(analogRead(IN_POT), 0, 1023, 0, 255)) {
    velocita ++;
  }
  else
  if (velocita > map(analogRead(IN_POT), 0, 1023, 0, 255)) {
    velocita --;
  }

  delay(10);  
}
