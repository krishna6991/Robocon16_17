void setup()
{
  Serial.begin(9600);
  for (int i = 2; i <= 10; i++)
  {
    pinMode(i, OUTPUT);
    digitalWrite(i, LOW);
  }
  pinMode(11,INPUT);
  pinMode(12,INPUT);
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
int curr = 0;
int x;
void loop()
{

  digitalWrite(10, HIGH);
  for (int i = 2; i <= 9; i++)
  {
    digitalWrite(i, data[curr][i - 2]);
  }
  if (Serial.available())
  {
    x = Serial.read();
    delay(1);
  }

  if (x == 'i')
  {
    if (curr < 9)
    {
      curr = curr + 1;
    }x=3;
  }

  if (x == 'd')
  {
    if (curr > 0)
    {
      curr = curr - 1;
    }x=3;
  }
  digitalWrite(10, HIGH);
  for (int i = 2; i <= 9; i++)
  {
    digitalWrite(i, data[curr][i - 2]);
  }


}
