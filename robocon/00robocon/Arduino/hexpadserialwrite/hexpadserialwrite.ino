int row[4] = {2, 3, 4, 5};
int col[4] = {6, 7, 8, 9,};
char data[4][4] =
{
  {'1', '2', '3', '4'},
  {'5', '6', '7', '8'},
  {'9', '0', 'a', 'b'},
  {'c', 'd', 'e', 'f'}
};

void setup()
{
  Serial.begin(9600);
  for (int i = 0; i <= 3; i++)
  {
    pinMode(row[i], OUTPUT);
    pinMode(col[i], INPUT);
    digitalWrite(row[i], HIGH);
    digitalWrite(col[i], HIGH);
  }
}
int x;
void loop()
{
  for (int i = 0; i <= 3; i++)
  {
    digitalWrite(row[i], LOW);
    for (int j = 0; j <= 3; j++)
    {
      if (digitalRead(col[j]) == LOW)
      {
        delay(15);
        while (digitalRead(col[j]) == LOW);
        delay(15);
        x = data[i][j];
        Serial.write(x);
      }
      delay(1);
    }
    digitalWrite(row[i], HIGH);
  }

}
