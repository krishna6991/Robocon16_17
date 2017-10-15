void setup()
{
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(4, INPUT);
  pinMode(5, INPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
}

void forward()
{
  digitalWrite(6, HIGH);
  digitalWrite(7, LOW);
  digitalWrite(8, HIGH);
  digitalWrite(9, LOW);
  while (digitalRead(2) == HIGH);

}

void reverse()
{
  digitalWrite(6, LOW);
  digitalWrite(7, HIGH);
  digitalWrite(8, LOW);
  digitalWrite(9, HIGH);
  while (digitalRead(3) == HIGH);

}

void left()
{
  digitalWrite(6, HIGH);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, HIGH);
  while (digitalRead(4) == HIGH);

}

void right()
{
  digitalWrite(6, LOW);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(9, LOW);
  while (digitalRead(5) == HIGH);

}

void Stop()
{
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(9, HIGH);
  
  }

void loop()
{
  if (digitalRead(2) == HIGH)
  {
    forward();
    Stop();
  }

  if (digitalRead(3) == HIGH)
  {
    reverse();
    Stop();
  }

  if (digitalRead(4) == HIGH)
  {
    left();
    Stop();
  }

  if (digitalRead(5) == HIGH)
  {
    right();
    Stop();
  }
7
}



