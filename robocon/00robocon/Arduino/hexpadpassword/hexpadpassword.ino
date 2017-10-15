int row[4] = {2, 3, 4, 5};
int col[4] = {6, 7, 8, 9,};
int pass[4] = {0, 0, 0, 0};
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
{ for (int m = 0; m <= 3;)
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
          pass[m] = x;
          m++;
        }
        delay(1);
      }
      digitalWrite(row[i], HIGH);
    }

  }
  if ((pass[0] == '1') && (pass[1] == '2') && (pass[2] == '3') && (pass[3] == '4'))
  {
    digitalWrite(10, HIGH);
    digitalWrite(11, HIGH);
    digitalWrite(12, HIGH);
    digitalWrite(13, HIGH);
    delay(2000);
    digitalWrite(10, LOW);
    digitalWrite(11, LOW);
    digitalWrite(12, LOW);
    digitalWrite(13, LOW);

  }

}

