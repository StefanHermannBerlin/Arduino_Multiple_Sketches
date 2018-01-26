void sketch2loop(){
  // schnelles Blinken
  interval = 100;
  
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
