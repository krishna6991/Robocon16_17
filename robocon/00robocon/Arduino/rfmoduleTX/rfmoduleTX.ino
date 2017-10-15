void setup()
{

  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  for (int i = 0; i < 4; i++)
    {
      digitalWrite(i+2,LOW);
    }
}

int data[4][4] =
{
  {0, 0, 0, 1},
  {0, 0, 1, 0},
  {0, 0, 1, 1},
  {0, 1, 0, 0}
};

void loop()
{
    
    for (int i = 0; i < 4; i++)
    {
      for (int j = 0; j < 4; j++)
      {
        digitalWrite(j + 2, data[i][j]);

      }
      delay(5000);
    }
    
  

}
