int rs = 9;
int en = 8;
void setup()
{
  for (int i = 0; i < 10; i++)
    pinMode(i, OUTPUT);
}
int flag = 0;
void loop()
{ char ar[7] = {'V', 'A', 'G', 'A', 'R', 'T', 'H'};
  if (flag == 0)
  { digitalWrite(rs, LOW);
    PORTD = 0x01;
    digitalWrite(en, HIGH);
    delay(10);
    digitalWrite(en, LOW);


    digitalWrite(rs, LOW);
    PORTD = 0x38;
    digitalWrite(en, HIGH);
    delay(10);
    digitalWrite(en, LOW);
    digitalWrite(rs, LOW);
    PORTD = 0x0E;
    digitalWrite(en, HIGH);
    delay(10);
    digitalWrite(en, LOW);
    PORTD = 0x84;

    digitalWrite(en, HIGH);
    delay(10);
    digitalWrite(en, LOW);
    for (int i = 0; i < 7; i++)
    {
      digitalWrite(rs, HIGH);
      PORTD = ar[i];
      digitalWrite(en, HIGH);
      delay(10);
      digitalWrite(en, LOW);
    }
    flag = 1;
  }
}
