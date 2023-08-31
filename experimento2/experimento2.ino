String nome = "Jefferson";

void setup() {
  Serial.begin(9600);

}

void loop() {

  Serial.print("Hello World " + nome);

  delay(2500);
}
