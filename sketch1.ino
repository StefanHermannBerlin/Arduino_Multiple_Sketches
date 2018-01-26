
void sketch1loop() {
  // einfache Blinkfunktion
  interval = 200;
  
  if (millis() - timer >= interval) {
    timer = millis();

    if (ledState == LOW) {
      ledState = HIGH;
    } else {
      ledState = LOW;
    }

    digitalWrite(ledPin, ledState);
  }
}
