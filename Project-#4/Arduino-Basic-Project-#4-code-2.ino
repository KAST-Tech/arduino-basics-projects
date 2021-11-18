//Date: 18/11/21
//Name: Khaled Md. Saifullah
//KastTech
//Dhaka,Bangladesh

// RGB light using anolog value
int red= 11;
int blue = 9;
int green = 8;

void setup() {
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
}
void loop() {
  rgbColor(255, 0, 0); // Red
  delay(1000);
  rgbColor(0, 255, 0); // Green
  delay(1000);
  rgbColor(0, 0, 255); // Blue
  delay(1000);
  rgbColor(255, 255, 125); // Raspberry
  delay(1000);
  rgbColor(255,105,180); // Pink
  delay(1000);
  rgbColor(0, 255, 255); // Cyan
  delay(1000);
  rgbColor(255, 0, 255); // Magenta
  delay(1000);
  rgbColor(255, 255, 0); // Yellow
  delay(1000);
  rgbColor(255, 255, 255); // White
  delay(1000);
}
void rgbColor(int redValue, int greenValue, int blueValue)
 {
  analogWrite(red, redValue);
  analogWrite(green, greenValue);
  analogWrite(blue, blueValue);
}
