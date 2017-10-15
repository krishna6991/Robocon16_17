int row[4] = {2, 3, 4, 5};
int col[4] = {6, 7, 8, 9,};
int flag = 0;
char data[4][4] =
{
  {'1', '2', '3', '4'},
  {'5', '6', '7', '8'},
  {'9', '0', 'a', 'b'},
  {'c', 'd', 'e', 'f'}
};
//***************************************************
//mydelay
void mydelay1( int temp)
{
  for (int t = 0; t <= temp; t++)
  {
    delay(1);
    if ((digitalRead(col[1]) == LOW) || (digitalRead(col[2]) == LOW) || (digitalRead(col[3]) == LOW) )
    {
      flag = 1;
      break;
    }
  }
}

void mydelay2( int temp)
{
  for (int t = 0; t <= temp; t++)
  {
    delay(1);
    if ((digitalRead(col[0]) == LOW) || (digitalRead(col[2]) == LOW) || (digitalRead(col[3]) == LOW) )
    {
      flag = 1;
      break;
    }
  }
}

void mydelay3( int temp)
{
  for (int t = 0; t <= temp; t++)
  {
    delay(1);
    if ((digitalRead(col[1]) == LOW) || (digitalRead(col[0]) == LOW) || (digitalRead(col[3]) == LOW) )
    {
      flag = 1;
      break;
    }
  }
}

void mydelay4( int temp)
{
  for (int t = 0; t <= temp; t++)
  {
    delay(1);
    if ((digitalRead(col[1]) == LOW) || (digitalRead(col[2]) == LOW) || (digitalRead(col[0]) == LOW) )
    {
      flag = 1;
      break;
    }
  }
}

//***************************************************
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
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}
int x = 0;
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
        if (x == '1')
        {
          digitalWrite(10, HIGH);
          mydelay1(2000);
          digitalWrite(10, LOW);
          x = 70;
        } else if (x == '2')
        {
          digitalWrite(10, HIGH);
          digitalWrite(11, HIGH);
          mydelay2(2000);
          digitalWrite(10, LOW);
          digitalWrite(11, LOW);
          x = 70;
        } else if (x == '3')
        {
          digitalWrite(10, HIGH);
          digitalWrite(11, HIGH);
          digitalWrite(12, HIGH);
          mydelay3(2000);
          digitalWrite(10, LOW);
          digitalWrite(11, LOW);
          digitalWrite(12, LOW);
          x = 70;
        } else if (x == '4')
        {
          digitalWrite(10, HIGH);
          digitalWrite(11, HIGH);
          digitalWrite(12, HIGH);
          digitalWrite(13, HIGH);
          mydelay4(2000);
          digitalWrite(10, LOW);
          digitalWrite(11, LOW);
          digitalWrite(12, LOW);
          digitalWrite(13, LOW);
          x = 70;
        }
      }
      delay(1);
    }
    digitalWrite(row[i], HIGH);
  }
}
