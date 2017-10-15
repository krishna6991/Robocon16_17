void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(8, INPUT);
  pinMode(9, INPUT);
  pinMode(10, INPUT);
  pinMode(11, INPUT);
  Serial.begin(9600);
  for (int i = 2; i <= 5; i++)
  {
    digitalWrite(i, LOW);
  }
}
int data[4] = {0, 0, 0, 0};
int sum = 0;

//*******************************************************
void pattern1()
{ while (1)
  {
    for (int i = 2; i <= 5; i++)
    {
      digitalWrite(i, HIGH);
      mydelay1(100);
    }
    for (int i = 2; i <= 5; i++)
    {
      digitalWrite(i, LOW);

    }
  }
}

void pattern2()
{ while (1)
  {
    for (int i = 2; i <= 5; i++)
    {
      digitalWrite(i, HIGH);
      mydelay2(100);
    }
    for (int i = 2; i <= 5; i++)
    {
      digitalWrite(i, LOW);
      mydelay2(100);

    }
  }
}

void pattern3()
{
  while (1)
  {
    for (int i = 2; i <= 5; i++)
    {
      digitalWrite(i, HIGH);
      mydelay3(1);
    }
  }
}

void pattern4()
{ while (1)
  { 
    digitalWrite(2, HIGH);
    digitalWrite(4, HIGH);
    mydelay4(300);
    digitalWrite(2, LOW);
    digitalWrite(4, LOW);
    mydelay4(300);
  }
}

void poff()
{
  for (int i = 2; i <= 5; i++)
  {
    digitalWrite(i, LOW);


  }

}


//*******************************************************
int mydelay1(int m)
{ for (int t = 0; t <= m; t++)
  {
    for (int i = 0; i <= 3; i++)
    {
      data[i] = digitalRead(i + 8);
    }
    sum = data[0] * 8 + data[1] * 4 + data[2] * 2 + data[3] * 1;
    if (sum == 2)
    { poff();
      pattern2();
    }

    if (sum == 3)
    { poff();
      pattern3();
    }

    if (sum == 4)
    { poff();
      pattern4();
    }
    delay(1);
  }
}
//*******************************************************
int mydelay2(int m)
{ for (int t = 0; t <= m; t++)
  {
    for (int i = 0; i <= 3; i++)
    {
      data[i] = digitalRead(i + 8);
    }
    sum = data[0] * 8 + data[1] * 4 + data[2] * 2 + data[3] * 1;
    if (sum == 1)
    { poff();
      pattern1();
    }

    if (sum == 3)
    { poff();
      pattern3();
    }

    if (sum == 4)
    { poff();
      pattern4();
    }
    delay(1);
  }
}
//*******************************************************
int mydelay3(int m)
{ for (int t = 0; t <= m; t++)
  {
    for (int i = 0; i <= 3; i++)
    {
      data[i] = digitalRead(i + 8);
    }
    sum = data[0] * 8 + data[1] * 4 + data[2] * 2 + data[3] * 1;
    if (sum == 2)
    { poff();
      pattern2();
    }

    if (sum == 1)
    { poff();
      pattern1();
    }

    if (sum == 4)
    { poff();
      pattern4();
    }
    delay(1);
  }
}
//*******************************************************
int mydelay4(int m)
{ for (int t = 0; t <= m; t++)
  {
    for (int i = 0; i <= 3; i++)
    {
      data[i] = digitalRead(i + 8);
    }
    sum = data[0] * 8 + data[1] * 4 + data[2] * 2 + data[3] * 1;
    if (sum == 2)
    { poff();
      pattern2();
    }

    if (sum == 3)
    { poff();
      pattern3();
    }

    if (sum == 1)
    { poff();
      pattern1();
    }
    delay(1);
  }
}
//*******************************************************


void loop()
{
  for (int i = 0; i <= 3; i++)
  {
    data[i] = digitalRead(i + 8);
  }
  sum = data[0] * 8 + data[1] * 4 + data[2] * 2 + data[3] * 1;
  if (sum == 1)
  { poff();
    pattern1();

  }

  if (sum == 2)
  { poff();
    pattern2();
  }

  if (sum == 3)
  { poff();
    pattern3();
  }

  if (sum == 4)
  { poff();
    pattern4();
  }
}
