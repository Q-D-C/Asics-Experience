
void setup() {
  Serial.begin(9600);
  pinMode(12, INPUT);
  pinMode(10, INPUT);
  pinMode(8, INPUT);
}

void loop() {

  if (digitalRead(12)) {
    Serial.print("0,");
  } else {
    Serial.print("1,");
  }
  if (digitalRead(10)) {
    Serial.print("0,");
  } else {
    Serial.print("1,");
  }
  if (digitalRead(8)) {
    Serial.println("0");
  } else {
    Serial.println("1");
  }
}
