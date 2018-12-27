int val = 0;
int soilPin = A0;
int soilPower = 7;
char incoming;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(soilPower, OUTPUT);
  digitalWrite(soilPower, LOW);

}

void loop() {
  //if(Serial.read() == 'a') {
    Serial.print(Serial.read());
    Serial.println(readSoil());
    delay(1000);
    //Serial.flush();
    //incoming = Serial.read();
    //if(incoming == 'a') {
      //Serial.print("Soil Moisture = ");
     // Serial.println(readSoil());
      //delay(1000);
    //}
  //}
  // put your main code here, to run repeatedly
}


int readSoil() {
  digitalWrite(soilPower, HIGH);
  delay(10);
  val = analogRead(soilPin);
  digitalWrite(soilPower, LOW);
  return val;
}
