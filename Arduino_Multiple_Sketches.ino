/*

Dieses Programm lässt drei Sketches auf einem Arduino laufen. Die Setup-Methode ist allerdings für alle die selbe.

*/

int sketchNumber = 1;                 // aktueller Sketch, der ausgeführt wird
int numberOfSketches = 3;             // so viele unterschiedliche Sketches gibt es
int buttonPin = 7;                    // hier ist der Button zum Durchschalten der Sketches verbunden

int ledPin = 13;                      // für das Beispiel nehmen wir die eingebaute LED
int ledState = LOW;                   // ledState merkt sich, ob die LED an oder aus ist
long timer = 0;                       // Timer-variable
int interval = 200;                   // Blinkgeschwindigkeit


void setup() {
  pinMode(buttonPin,INPUT_PULLUP);    // hier wird der Button deklariert, INPUT_PULLUP schaltet den internen Pullup-Widerstand dazu, so spart man sich den echten Widerstand am Taster
  pinMode(ledPin, OUTPUT);            // hier wird LED Pin als Output deklariert  
}

void loop() {
  if (digitalRead(buttonPin)==LOW) {                          // wenn der Button gedrückt ist
      sketchNumber++;                                         // wird sketchNumber um eins erhöht
      if (sketchNumber>numberOfSketches) sketchNumber = 1;    // Zurücksetzen von sketchNumber
      delay(200);                                             // nicht die schönste Art der Entprellung, aber funktioniert
  }
  
  switch (sketchNumber){              // die switch-case-Abfrage bildet die State-Machine, je nach sketchNumber wird nun der dazugehörige Sketch ausgeführt
    case 1:
      sketch1loop();                  // führe das sketch loop aus
    break;
    case 2:
      sketch2loop();                  // führe das sketch loop aus
    break;
    case 3:  
      sketch3loop();                  // führe das sketch loop aus    
    break;
  }
}
