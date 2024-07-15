void setup() {
  pinMode(10, OUTPUT);
  Serial.begin(9600);
}

int first;

void loop() {
  int reading = analogRead(0);
  Serial.println(reading);
  if (!first) {
    first = reading;
  } else if (reading < first && reading > first - 3) {
    first = reading;
  } else {
    delay(200);
    if (reading > first) {
      digitalWrite(10, HIGH);
    } else {
      digitalWrite(10, LOW);
    }
  }
  // put your main code here, to run repeatedly:
}
