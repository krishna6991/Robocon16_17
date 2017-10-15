void setup()
{
  for (int i = 0; i <= 11; i++)
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
int dela = 0;
int de = 0;
int one_seg = 11;
int ten_seg = 10;
int hund_seg = 9;
int thousand_seg = 8;

void loop()
{ for (int thous = 0; thous <= 9; thous++)
  {

    for (int hund = 0; hund <= 9; hund++)
    {
      for (int ten = 0; ten <= 9; ten++)
      {
        for (int one = 0; one <= 9; one++)
        {
          while (dela < 5)
          {
            digitalWrite(one_seg, HIGH);
            digitalWrite(ten_seg, LOW);
            digitalWrite(hund_seg, LOW);
            digitalWrite(thousand_seg, LOW);

            for (int i = 0; i <= 7; i++)
            {
              digitalWrite(i, data[one][i]);
            } delay(5);


            digitalWrite(one_seg, LOW);
            digitalWrite(ten_seg, HIGH);
            digitalWrite(hund_seg, LOW);
            digitalWrite(thousand_seg, LOW);

            for (int i = 0; i <= 7; i++)
            {
              digitalWrite(i, data[ten][i]);
            } delay(5);

            digitalWrite(one_seg, LOW);
            digitalWrite(ten_seg, LOW);
            digitalWrite(hund_seg, HIGH);
            digitalWrite(thousand_seg, LOW);

            for (int i = 0; i <= 7; i++)
            {
              digitalWrite(i, data[hund][i]);
            } delay(5);

            digitalWrite(one_seg, LOW);
            digitalWrite(ten_seg, LOW);
            digitalWrite(hund_seg, LOW);
            digitalWrite(thousand_seg, HIGH);

            for (int i = 0; i <= 7; i++)
            {
              digitalWrite(i, data[thous][i]);
            } delay(5);


            dela++;
          } dela = 0;
        }
      }
    }
  }

}
