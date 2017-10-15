void setup()
{
  for (int i = 2; i <= 11; i++)
  {
    pinMode(i, OUTPUT);
    digitalWrite(i, LOW);
  }
  pinMode(12, INPUT);

}

int data[10][8] =
{
  {1, 1, 1, 1, 1, 1, 0, 0},
  {0, 1, 1, 0, 0, 0, 0, 0},
  {1, 1, 0, 1, 1, 0, 1, 0},
  {1, 1, 1, 1, 0, 0, 1, 0},
  {0, 1, 1, 0, 0, 1, 1, 0},
  {1, 0, 1, 1, 0, 1, 1, 0},
  {1, 0, 1, 1, 1, 1, 1, 0},
  {1, 1, 1, 0, 0, 0, 0, 0},
  {1, 1, 1, 1, 1, 1, 1, 0},
  {1, 1, 1, 0, 0, 1, 1, 0}

};
int dela = 0;
int coun;
int one_seg = 10;
int ten_seg = 11;
int dyndel = 70;

void loop()
{
  if (digitalRead(12) == HIGH)
  {
    delay(15);
    while (digitalRead(12) == HIGH)
    {
      coun++;
      if (coun == 100)
      {
        coun = 0;
      }
      if (dyndel >= 10)
      {
        dyndel = dyndel - 5;
      }



      while (dela < dyndel)
      {
        digitalWrite(one_seg, HIGH);
        digitalWrite(ten_seg, LOW);


        for (int i = 2; i <= 9; i++)
        {
          digitalWrite(i, data[coun % 10][i - 2]);
        } delay(5);


        digitalWrite(one_seg, LOW);
        digitalWrite(ten_seg, HIGH);

        for (int i = 2; i <= 9; i++)
        {
          digitalWrite(i, data[coun / 10][i - 2]);
        } delay(5);
        dela++;
      }
      dela = 0;
    } dyndel = 70;
  }

  digitalWrite(one_seg, HIGH);
  digitalWrite(ten_seg, LOW);


  for (int i = 2; i <= 9; i++)
  {
    digitalWrite(i, data[coun % 10][i - 2]);
  } delay(5);


  digitalWrite(one_seg, LOW);
  digitalWrite(ten_seg, HIGH);

  for (int i = 2; i <= 9; i++)
  {
    digitalWrite(i, data[coun / 10][i - 2]);
  } delay(5);


}
