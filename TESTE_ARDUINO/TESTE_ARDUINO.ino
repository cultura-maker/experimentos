const int PIN_BUZZER = 2; 
const int PIN_LED_RED = 3;
const int PIN_LED_GREEN = 4;
const int PIN_LED_YELLOW = 5;

void setup() {

  pinMode(PIN_LED_RED, OUTPUT);
  pinMode(PIN_LED_GREEN, OUTPUT);
  pinMode(PIN_LED_YELLOW, OUTPUT);
  pinMode(PIN_BUZZER, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  
    //acende leds
    digitalWrite(PIN_LED_RED, HIGH);    // Acende led
    digitalWrite(PIN_LED_GREEN, HIGH);  // Acende led
    digitalWrite(PIN_LED_YELLOW, HIGH); // Acende led
    tone(PIN_BUZZER, 392);
    delay(2000);

    //apaga leds
    digitalWrite(PIN_LED_RED, LOW);    // Apaga led
    digitalWrite(PIN_LED_GREEN, LOW);  // Apaga led
    digitalWrite(PIN_LED_YELLOW, LOW); // Apaga led
    noTone(PIN_BUZZER);
    delay(2000);

}
