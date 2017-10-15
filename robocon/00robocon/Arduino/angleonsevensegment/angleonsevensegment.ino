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
double double_angle;
int dela = 0;
int int_angle = 0;
int one_seg = 11;
int ten_seg = 10;
int dec_seg = 9;
int ten;
int one;
int decimal=0;
double temp;
void loop()
{
  double_angle = 23.78;
  int_angle = double_angle;
  temp=double_angle*10;
  decimal=temp;
  decimal=decimal%10;
  one = int_angle % 10;
  ten = int_angle / 10;

        digitalWrite(dec_seg, HIGH);
        digitalWrite(one_seg, LOW);
        digitalWrite(ten_seg, LOW);


        for (int i = 0; i <= 7; i++)
        {
          digitalWrite(i, data[decimal][i]);
        } delay(5);

        digitalWrite(dec_seg, LOW);
        digitalWrite(one_seg, HIGH);
        digitalWrite(ten_seg, LOW);


        for (int i = 0; i <= 6; i++)
        {
          digitalWrite(i, data[one][i]);
          digitalWrite(7, HIGH);
        } delay(5);

        digitalWrite(dec_seg, LOW);
        digitalWrite(one_seg, LOW);
        digitalWrite(ten_seg, HIGH);

        for (int i = 0; i <= 7; i++)
        {
          digitalWrite(i, data[ten][i]);
        } delay(5);
      

}

