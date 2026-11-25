// C++ code
//Roi Sieira Piñeiro

String cor = ""; //creamos a nosa string e non lle engadimos ningun valor 
                 //se quixéramos encender un dos LED sen escribir no monitor teríamos que escribrir entre os "" esa cor
void setup() {
  pinMode(12, OUTPUT); // marcamos as saídas que imos empregar
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  Serial.begin(9600); // utilizamos esta librería

}

void loop() {
  if (Serial.available() > 0) { //para que non esté comprovando contínuamnete cando non hai nada escrito
    cor = Serial.readString(); //fai que o que escribes no monitor sexa igual á string cor
    cor.trim(); //quita os espacios do que escribas por si acaso 
    
  }

  if (cor == "branco") { //se a string cor coincide co que escribas, neste caso "branco" o bucle realiza esta acción
    digitalWrite(12, HIGH); //led encende
    delay(500); //espera medio segundo
    digitalWrite(12, LOW); //led apaga
    delay(500); //espera medio segundo
  }
  else if (cor == "verde") { // a partir de aquí engadimos opcións co else if
    digitalWrite(11, HIGH);
    delay(500);
    digitalWrite(11, LOW);
    delay(500);
  }
  else if (cor == "amarelo") {
    digitalWrite(10, HIGH);
    delay(500);
    digitalWrite(10, LOW);
    delay(500);
  }
  else if (cor == "laranxa") {
    digitalWrite(9, HIGH);
    delay(500);
    digitalWrite(9, LOW);
    delay(500);
  }
  else if (cor == "azul") {
    digitalWrite(8, HIGH);
    delay(500);
    digitalWrite(8, LOW);
    delay(500);
  }
  else if (cor == "vermello") {
    digitalWrite(7, HIGH);
    delay(500);
    digitalWrite(7, LOW);
    delay(500);
  }
  
  
}