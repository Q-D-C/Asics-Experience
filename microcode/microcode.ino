
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  pinMode(12, OUTPUT);
}

void loop() {
  // reads the input on analog pin A0 (value between 0 and 1023)
  int analogValue = analogRead(A0);
  Serial.println(analogValue);
  if (analogValue < 300) {
    //   Serial.println("Dark");
    digitalWrite(12, HIGH);
  } else {
    //   Serial.println("Light");
    digitalWrite(12, LOW);
  }
  delay(50);
}
