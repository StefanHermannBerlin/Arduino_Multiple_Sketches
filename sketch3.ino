void sketch3loop(){
  // sehr schnelles Blinken
  interval = 50;
  
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
