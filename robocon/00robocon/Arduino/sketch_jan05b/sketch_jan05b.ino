void setup() {
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);

}

void loop()
{
  int sensorValue = analogRead(A0);
  Serial.println(sensorValue);
  delay(1);
  if ((analogRead(A0) >= 0) && (analogRead(A0) < 170))
  {
    for (int i = 0; i <= 255;)
    {
      analogWrite(3, i);
      i = analogRead(A0) * (255 / 170);
      if(i==0)
      break;
    }
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    digitalWrite(9, LOW);
    digitalWrite(10, LOW);
    digitalWrite(11, LOW);


  }

  if ((analogRead(A0) >= 170) && (analogRead(A0) < 340))
  {
    digitalWrite(3, HIGH);
    for (int i = 0; i <= 255;)
    {
      analogWrite(5, i);
      i = (analogRead(A0) - 170) * (255 / 170);
      if(i==0)
      break;
    }
    digitalWrite(6, LOW);
    digitalWrite(9, LOW);
    digitalWrite(10, LOW);
    digitalWrite(11, LOW);

  }

  if ((analogRead(A0) >= 340) && (analogRead(A0) < 510))
  {
    digitalWrite(3, HIGH);
    digitalWrite(5, HIGH);
    for (int i = 0; i <= 255;)
    {
      analogWrite(6, i);
      i = (analogRead(A0) - 340) * (255 / 170);
      if(i==0)
      break;
    }
    digitalWrite(9, LOW);
    digitalWrite(10, LOW);
    digitalWrite(11, LOW);
  }

  if ((analogRead(A0) >= 510) && (analogRead(A0) < 680))
  {
    digitalWrite(3, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
    for (int i = 0; i <= 255;)
    {
      analogWrite(9, i);
      i = (analogRead(A0) - 510) * (255 / 170);
      if(i==0)
      break;
    }
    digitalWrite(10, LOW);
    digitalWrite(11, LOW);
  }

  if ((analogRead(A0) >= 680) && (analogRead(A0) < 850))
  {
    digitalWrite(3, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(9, HIGH);
    for (int i = 0; i <= 255;)
    {
      analogWrite(10, i);
      i = (analogRead(A0) - 680) * (255 / 170);
      if(i==0)
      break;
    }
    digitalWrite(11, LOW);
  }

  if ((analogRead(A0) >= 850) && (analogRead(A0) < 1024))
  {
    digitalWrite(3, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(10, HIGH);
    for (int i = 0; i <= 255;)
    {
      analogWrite(11, i);
      i = (analogRead(A0) - 850) * (255 / 170);
      if(i==0)
      break;
    }
  }




}
