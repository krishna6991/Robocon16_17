void setup() {
  // put your setup code here, to run once:

  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);


  pinMode(8, INPUT);
  pinMode(9, INPUT);
  pinMode(10, INPUT);
  pinMode(11, INPUT);


}
int pass = 0;
int flag=0;

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(8) == HIGH)
  {
    delay(10);
    while (digitalRead(8) == 1);
    delay(10);
    pass = 1;
  }


  if (pass == 1)
  {
    if (digitalRead(9) == 1)
    {
      delay(10);
      while (digitalRead(9) == 1);
      delay(10);
      pass = 12;
      flag=1;
    }
  } else
  { while (pass == 1)
    {
      if (((digitalRead(10)) || (digitalRead(11))) == 1)
      {
        delay(10);
        while (((digitalRead(11)) || (digitalRead(10))) == 1);
        delay(10);
        pass = 0;
      }
    }
  }
  if (pass == 12)
  {
    if (digitalRead(10) == 1)
    {
      delay(10);
      while (digitalRead(10) == 1);
      delay(10);
      pass = 123;
    }
  }
  if (pass == 123)
  {
    if (digitalRead(11) == 1)
    {
      delay(10);
      while (digitalRead(11) == 1);
      delay(10);
      pass = 1234;
    }
  }


  if (pass == 1234)
  {

    digitalWrite(1, HIGH);
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    delay(2000);
    digitalWrite(1, LOW);
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);

    pass = 0;
  }








}
