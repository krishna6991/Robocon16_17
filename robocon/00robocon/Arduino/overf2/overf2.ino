int flag = 0;
void setup() {
  // put your setup code here, to run once:
  for (int i = 0; i <= 7; i++)
  {
    pinMode(i, OUTPUT);
  }
  pinMode(8, INPUT);
  pinMode(9, INPUT);
  pinMode(10, INPUT);
  pinMode(11, INPUT);
}

void mydelay1( int temp)
{
  for (int i = 0; i <= temp; i++)
  {
    delay(1);
    if ((digitalRead(8) == HIGH) || (digitalRead(9) == HIGH) || (digitalRead(10) == HIGH) || (digitalRead(11) == HIGH) )
    {
      flag = 1;
      break;
    }
  }
}
/*void mydelay2( int temp)
  {
  for (int i = 0; i <= temp; i++)
  {
    delay(1);
    if (digitalRead(8) == HIGH)
      break;
    if (digitalRead(10) == HIGH)
      break;
    if (digitalRead(11) == HIGH)
      break;
  }
  }
  void mydelay3( int temp)
  {
  for (int i = 0; i <= temp; i++)
  {
    delay(1);
    if (digitalRead(8) == HIGH)
      break;
    if (digitalRead(9) == HIGH)
      break;
    if (digitalRead(11) == HIGH)
      break;
  }
  }
  void mydelay4( int temp)
  {
  for (int i = 0; i <= temp; i++)
  {
    delay(1);
    if (digitalRead(8) == HIGH)
      break;
    if (digitalRead(9) == HIGH)
      break;
    if (digitalRead(10) == HIGH)
      break;

  }
  }*/

void p1()
{ for (int t = 0; t <= 7; t++)
  {
    digitalWrite(t, 0);
  }
  while (1)
  {
    for (int i = 0; i <= 7; i++)
    {
      digitalWrite(i, HIGH);
      mydelay1(100);
      if (flag == 1)
      {
        break;

      }


      digitalWrite(i, LOW);
      mydelay1(100);
      if (flag == 1)
      {
        break;

      }
    }
    if (flag == 1)
    {
      flag = 0;
      break;

    }
    for (int i = 7; i >= 0; i--)
    {
      digitalWrite(i, HIGH);
      mydelay1(100);
      if (flag == 1)
      {
        break;

      }

    }
    if (flag == 1)
    {
      flag = 0;
      break;

    }
  }
}


void p2()
{ for (int t = 0; t <= 7; t++)
  {
    digitalWrite(t, 0);
  }

  while (1)
  {
    for (int i = 0; i <= 3; i++)
    { digitalWrite(i, HIGH);
    }
    mydelay1(100);
    if (flag == 1)
    {
      flag = 0;
      break;

    }
    for (int i = 0; i <= 3; i++)
    {
      digitalWrite(i, 0);
    }
    for (int i = 4; i <= 7; i++)
    { digitalWrite(i, HIGH);
    }
    mydelay1(100);
    if (flag == 1)
    {
      flag = 0;
      break;

    }
    for (int i = 4; i <= 7; i++)
    { digitalWrite(i, LOW);
    }
  }
}


void p3()
{ for (int t = 0; t <= 7; t++)
  {
    digitalWrite(t, 0);
  }
  while (1)
  {
    for (int i = 0; i <= 7; i++)
    { digitalWrite(i, HIGH);
      digitalWrite(7 - i, HIGH);
      mydelay1(500);
      if (flag == 1)
      {
        break;

      }
      digitalWrite(i, LOW);
      digitalWrite(7 - i, LOW);
    }
    if (flag == 1)
    {
      flag = 0;
      break;

    }
  }
}

void p4()
{ for (int t = 0; t <= 7; t++)
  {
    digitalWrite(t, 0);
  }
  while (1)
  {
    for (int k = 1; k <= 3; k++)
    {
      for (int i = 0; i <= 7; i++)
      {
        digitalWrite(i, HIGH);
        mydelay1(100);
        if (flag == 1)
        {
          break;

        }


        digitalWrite(i, LOW);
        mydelay1(100);
        if (flag == 1)
        {
          break;

        }
      }

      if (flag == 1)
      {
        break;

      }
    }
    for (int i = 7; i >= 0; i--)
    {
      digitalWrite(i, HIGH);
      mydelay1(100);
      if (flag == 1)
      {
        break;

      }


      digitalWrite(i, LOW);
      mydelay1(100);
      if (flag == 1)
      {
        break;

      }
    } if (flag == 1)
    {
      flag = 0;
      break;

    }

  }
}



void loop() {
  // put your main code here, to run repeatedly:

  if (digitalRead(8) == HIGH)
  {
    delay(10);
    while (digitalRead(8) == HIGH);
    delay(10);

    p1();


  }

  if (digitalRead(9) == HIGH)
  {
    delay(10);
    while (digitalRead(9) == HIGH);
    delay(10);

    p2();



  }
  if (digitalRead(10) == HIGH)
  {
    delay(10);
    while (digitalRead(10) == HIGH);
    delay(10);

    p3();


  }
  if (digitalRead(11) == HIGH)
  {
    delay(10);
    while (digitalRead(11) == HIGH);
    delay(10);

    p4();


  }
}
