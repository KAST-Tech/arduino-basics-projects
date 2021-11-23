// Date: 23/11/21
// Khaled Md. Saifullah
// KastTech

int greenLed = 6;
int redLed = 7;
int buzzPin = 5;
int potPin = A0;
int potValue;

void setup() {
  
  pinMode(greenLed, OUTPUT);
  pinMode(redLed, OUTPUT);
  pinMode(buzzPin, OUTPUT);
  pinMode(potPin, INPUT);
  Serial.begin(9600);
}

void loop() {

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
