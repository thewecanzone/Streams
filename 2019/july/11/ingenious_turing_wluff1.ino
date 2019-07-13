void setup()
{
  pinMode(A0, OUTPUT);
  pinMode(A1, OUTPUT);
  pinMode(1, OUTPUT);
  pinMode(A2, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(A3, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(A4, OUTPUT);
}

void loop()
{
  jumpRope()
}
  
void jumpRope()
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
