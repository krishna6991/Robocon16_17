#include <SoftwareSerial.h>
SoftwareSerial multi(10, 11);
int one_seg = 12;
int ten_seg = 13;
void setup()
{
  Serial.begin(9600);
  multi.begin(9600);
  for (int i = 2; i <= 9; i++)
  {
    pinMode(i, OUTPUT);
    digitalWrite(i, LOW);
  }
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
  Serial.print("Enter a 2 digit no");

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
int x[2] = {0, 0};
int flag = 0;
int y;

void loop()
{


  if (multi.available())
  { if (flag == 0)
    {
      for (int i = 0; i <= 1;)
      {
        x[i] = multi.read()-48;
        Serial.print(x[i]);
        i++;
        if (multi.read() == 97)
        { flag = 1;
          break;

        }



      }
    }
  }


  digitalWrite(one_seg, HIGH);
  digitalWrite(ten_seg, LOW);

  for (int i = 0; i <= 7; i++)
  {
    digitalWrite(i + 2, data[x[1]][i]);
  } delay(5);


  digitalWrite(one_seg, LOW);
  digitalWrite(ten_seg, HIGH);


  for (int i = 0; i <= 7; i++)
  {
    digitalWrite(i + 2, data[x[0]][i]);
  } delay(5);


}
