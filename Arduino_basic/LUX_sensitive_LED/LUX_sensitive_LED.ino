void setup()
{
  pinMode(A0, INPUT);
  pinMode(8, OUTPUT);
}
void loop() 
{
  if (analogRead(A0) < 150) 
  {
    digitalWrite(8, HIGH);
  }
  digitalWrite(8, LOW);
  delay(10);
}
