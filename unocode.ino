
void setup() {
  Serial.begin(9600);
  pinMode(12, INPUT);
  pinMode(11, INPUT);
  pinMode(10, INPUT);
}

void loop() {

  if (digitalRead(12)) {
    Serial.print("0,");
  } else {
    Serial.print("1,");
  }
  if (digitalRead(11)) {
    Serial.print("0,");
  } else {
    Serial.print("1,");
  }
  if (digitalRead(10)) {
    Serial.println("0");
  } else {
    Serial.println("1");
  }
}
