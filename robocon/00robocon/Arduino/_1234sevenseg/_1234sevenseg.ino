void setup()
{
  Serial.begin(9600);
  for (int i = 2; i <= 13; i++)
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

int one_seg = 10;
int ten_seg = 11;
int hund_seg = 12;
int thousand_seg = 13;
int x[4];

void loop()
{
  if (Serial.available())
  {

    for (int s = 0; s < 4; s++)
    {
      x[s] = Serial.read();
      x[s] = x[s] - 48;

      delay(1);
    }
  }


  digitalWrite(one_seg, HIGH);
  digitalWrite(ten_seg, LOW);
  digitalWrite(hund_seg, LOW);
  digitalWrite(thousand_seg, LOW);

  for (int i = 2; i <= 9; i++)
  {
    digitalWrite(i, data[x[0]][i-2]);
  } delay(5);

  digitalWrite(one_seg, LOW);
  digitalWrite(ten_seg, HIGH);
  digitalWrite(hund_seg, LOW);
  digitalWrite(thousand_seg, LOW);

  for (int i = 2; i <= 9; i++)
  {
    digitalWrite(i, data[x[1]][i-2]);
  } delay(5);

  digitalWrite(one_seg, LOW);
  digitalWrite(ten_seg, LOW);
  digitalWrite(hund_seg, HIGH);
  digitalWrite(thousand_seg, LOW);

  for (int i = 2; i <= 9; i++)
  {
    digitalWrite(i, data[x[2]][i-2]);
  } delay(5);

  digitalWrite(one_seg, LOW);
  digitalWrite(ten_seg, LOW);
  digitalWrite(hund_seg, LOW);
  digitalWrite(thousand_seg, HIGH);

  for (int i = 2; i <= 9; i++)
  {
    digitalWrite(i, data[x[3]][i-2]);
  } delay(5);


}
