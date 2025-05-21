const int PIN_BUZZER = 2; 
const int PIN_LED_GREEN = 4;


int numeroSorteado;
int chute;

void setup() {

  randomSeed(analogRead(A0));
  numeroSorteado = random(10);

  Serial.begin(9600);
}

void loop() {

  Serial.println("Tente sua sorte: ");

  // verifica se existe dados na entrada serial
  if(Serial.available()){
    
    // lê um número inteiro disponível
    chute = Serial.parseInt();

    if(chute == numeroSorteado){
    
      Serial.println("acertou!");
      //digitalWrite(PIN_LED_GREEN, HIGH);

      //tone(PIN_BUZZER, 392);
      //delay(500);
      //noTone(PIN_BUZZER);

    } else {
      Serial.println("errou!");
    }
  }

  delay(1000);
}
