void setup()
{
  for (int i = 0; i <= 7; i++)
  {
    pinMode(i, OUTPUT);
    digitalWrite(i, LOW);
  }
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
int num;
void loop()
{
  for (num = 0; num <= 9; num++)
  {
    for (int i = 0; i <= 7; i++)
    {
      digitalWrite(i, data[num][i]);
    }
    delay(1000);
  }
  if (num == 10)
  {
    for (int num = 9; num >= 0; num--)
    {
      for (int i = 0; i <= 7; i++)
      {
        digitalWrite(i, data[num][i]);
      }
      delay(1000);
    }
  }
}
