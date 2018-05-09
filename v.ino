int diodaPin = 13;
int Pot;
int PotPin = 0;
int przerwa;

void setup() {
  pinMode (diodaPin, OUTPUT);
  
}

void loop() {
  Pot = analogRead(PotPin)
  przerwa = map(Pot, 0, 1023, 50, 3000)
  digitalWrite(diodaPin, HIGH);
  delay(przerwa);             
  digitalWrite(diodaPin, LOW);
  delay(przerwa);             

}
