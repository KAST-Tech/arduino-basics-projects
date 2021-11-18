// Date: 15/11/21
// Name: Khaled Saifullah
// @kastTech
// Dhaka,Bangladesh

int led = 10;
int brightness = 255;
int fadeAmount = 2;
void setup() {
 pinMode(led, OUTPUT);
 Serial.begin(9600);
}
void loop() {
 analogWrite(10, brightness);
 delay(10);
 brightness = brightness + fadeAmount;
 Serial.println(brightness);
 Serial.println(fadeAmount);
 if((brightness == 0) || (brightness == 255))
 {
   fadeAmount = -fadeAmount;
   Serial.println(fadeAmount);
 }
}
