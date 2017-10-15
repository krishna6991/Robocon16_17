void setup()
{

  for (int i = 2; i <= 10; i++)
  {
    pinMode(i, OUTPUT);
    digitalWrite(i, LOW);
  }
  pinMode(11, INPUT);
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
int curr = 0;
int x;
void loop()
{

  if (digitalRead(11) == HIGH)
  { delay(15);
    while (digitalRead(11) == HIGH);
    delay(15);
    if (curr < 9)
    {
      curr = curr + 1;
    } 
    x = 3;
  }

  if (digitalRead(12) == HIGH)
  {
    delay(15);
    while (digitalRead(12) == HIGH);
    delay(15);
    if (curr > 0)
    {
      curr = curr - 1;
    } x = 3;
  }
//************************************************************************  
  
  digitalWrite(10, HIGH);
  
  for (int i = 2; i <= 9; i++)
  {
    digitalWrite(i, data[curr][i - 2]);
  }


}
