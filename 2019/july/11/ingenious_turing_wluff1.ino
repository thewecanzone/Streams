int lightDisplay = 0;
int numberOfLightDisplays = 2;

void setup()
{
  // lightDisplay == 0 is Jump Rope
  // lightDisplay == 1 is Circle  
  pinMode(4, INPUT);
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(A0, OUTPUT);
  pinMode(A1, OUTPUT);
  pinMode(A2, OUTPUT);
  pinMode(A3, OUTPUT);
  pinMode(A4, OUTPUT);
}

void loop()
{
  // if the button is pressed go to the next light show
  if (digitalRead(4) == 1) {
    turnOffLights();
    if (lightDisplay + 1 == numberOfLightDisplays) {
      lightDisplay = 0;
    } else {
      lightDisplay += 1;
    }
  }
  if (lightDisplay == 0) {
    jumpRopeLightShow();
  } else if (lightDisplay == 1) {
    circleLightShow();
  }
}

void circleLightShow()
{
    digitalWrite(A0, HIGH);
    digitalWrite(A1, HIGH);
    digitalWrite(A2, HIGH);
    digitalWrite(A3, HIGH);
    digitalWrite(A4, HIGH);
    delay(5000); // Wait for 5000 millisecond(s)
}

void jumpRopeLightShow()
{
  digitalWrite(A0, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(A0, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(A1, HIGH);
  digitalWrite(1, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(A1, LOW);
  digitalWrite(1, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(A2, HIGH);
  digitalWrite(2, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(A2, LOW);
  digitalWrite(2, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(A3, HIGH);
  digitalWrite(3, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(A3, LOW);
  digitalWrite(3, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(A4, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(A4, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(A3, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(A3, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(A2, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(A2, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(A1, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(A1, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
}

void turnOffLights()
{
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(A0, LOW);
  digitalWrite(A1, LOW);
  digitalWrite(A2, LOW);
  digitalWrite(A3, LOW);
  digitalWrite(A4, LOW);
}
