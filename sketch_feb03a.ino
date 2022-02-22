int motorPin = 3;
int buttonPin = 4;

void setup()
{
  pinMode(motorPin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);
}

void loop()
{
  
  int button = digitalRead(buttonPin);
  if (button == HIGH) {
    digitalWrite(motorPin, LOW);
  } else {
    digitalWrite(motorPin, HIGH);
  }

}
