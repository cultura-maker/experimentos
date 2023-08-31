String nome = "Jefferson";

void setup() {
  Serial.begin(9600);

}

void loop() {

  // verifica se existe dados na entrada serial
  if (Serial.available() > 0) {

    // lê um texto disponível
    nome = Serial.readString();

    // exibe os dados recebidos
    Serial.print("Eu recebi: ");
    Serial.println(nome);
  }

  delay(2500);
}
