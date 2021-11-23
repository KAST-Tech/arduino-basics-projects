int button = 10;
int led = 11;
int buttonState;

void setup()
{
  pinMode(button, INPUT);
  pinMode(led, OUTPUT);
}

void loop()
{
  buttonState = digitalRead(button);
  if (buttonState == HIGH)
  {
    digitalWrite(led, HIGH);
    delay(2000);
  } 
  else{
    digitalWrite(led, LOW);
  }
}
