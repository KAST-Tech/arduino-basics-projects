int greenLed = 6;
int redLed = 7;
int buzzPin = 5;
int potPin = A0;
int potValue;
void setup() {
  // put your setup code here, to run once:
  pinMode(greenLed, OUTPUT);
  pinMode(redLed, OUTPUT);
  pinMode(buzzPin, OUTPUT);
  pinMode(potPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  potValue = analogRead(potPin);
  Serial.println(potValue);
  delay(1000);
  if (potValue >= 700) {
    digitalWrite(redLed, HIGH);
    digitalWrite(buzzPin, HIGH);
    digitalWrite(greenLed, LOW);
  } else {
    digitalWrite(greenLed, HIGH);
    digitalWrite(redLed, LOW);
    digitalWrite(buzzPin, LOW);
  }
}