const int PIN_BUZZER = 2; 
const int PIN_LED_RED = 3;
const int PIN_LED_GREEN = 4;
const int PIN_LED_YELLOW = 5;

char led;

void setup() {

  pinMode(PIN_LED_RED, OUTPUT);
  pinMode(PIN_LED_GREEN, OUTPUT);
  pinMode(PIN_LED_YELLOW, OUTPUT);
  
  Serial.begin(9600);
}

void loop() {
  
  if (Serial.available()) {
    led = Serial.read();
  }

  if (led == 'R') {                     // Led vermelho - red
    digitalWrite(PIN_LED_RED, HIGH);    // Acende led
  }

  if (led == 'G') {                     // Led verde - green
    digitalWrite(PIN_LED_GREEN, HIGH);  // Acende led
  }

  if (led == 'Y') {                     // Led amarelo - yellow
    digitalWrite(PIN_LED_YELLOW, HIGH); // Acende led
  }
  
}
