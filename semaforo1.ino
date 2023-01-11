// C++ code
//
void setup()
{
  pinMode(7, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(8,OUTPUT);

  digitalWrite(8, HIGH);
  delay(2000); // Wait for 2000 millisecond(s)
  digitalWrite(8, LOW);
  delay(1000);
  digitalWrite(7, HIGH);
  delay(2000); // Wait for 2000 millisecond(s)
  digitalWrite(7, LOW);
  delay(1000);
  digitalWrite(2, HIGH);
  delay(2000); // Wait for 2000 millisecond(s)
  digitalWrite(2, LOW);
}

void loop()
{
  delay(10); // Delay a little bit to improve simulation performance
}
