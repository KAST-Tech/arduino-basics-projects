//Date:27/07/2021
//Name: Khaled Saifullah
//MakerBuddy
//Dhaka,Bangladesh

int greenLed = 4;
int redLed = 3;
int yellowLed = 2;

void setup()
{
  pinMode(yellowLed, OUTPUT);
  pinMode(redLed, OUTPUT);
  pinMode(greenLed, OUTPUT);
}

void loop()
{
  digitalWrite(greenLed, HIGH);
  digitalWrite(redLed, HIGH);
  digitalWrite(yellowLed, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(greenLed, LOW);
  digitalWrite(redLed, LOW);
  digitalWrite(yellowLed, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
}
