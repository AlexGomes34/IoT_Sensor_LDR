const int LED_ESCURO = 13;
const int LDR = 4;

const int limite_escuridao = 4000;

void setup() {
  Serial.begin(115200);
  Serial.println("Hello, ESP32!");
  pinMode(LED_ESCURO, OUTPUT);
}

void loop() {

  int luminosidade = analogRead(LDR);

  Serial.print("Valor Luminosidade: ");
  Serial.println(luminosidade);

  if(luminosidade < limite_escuridao){
    digitalWrite(LED_ESCURO, HIGH);
    Serial.print("AIN TA ESCURINHO ");
  }else{
    digitalWrite(LED_ESCURO, LOW);
    Serial.print("YOU SHALL NOT PASS ");
  }
  delay(1000);
}
