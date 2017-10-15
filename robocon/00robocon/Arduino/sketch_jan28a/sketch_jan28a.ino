#include<Servo.h>
Servo myservo;
void setup()
{

  myservo.attach(9);

  for (int i = 0; i <= 7; i++)
  {
    pinMode(i, OUTPUT);

  }
  for (int i = 10; i <= 13; i++)
    pinMode(i, INPUT);

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
int pos ;
int sevseg;

void loop()
{
  for (int i = 0; i <= 7; i++)
  {
    digitalWrite(i, data[sevseg][i]);
  }
  if (digitalRead(10) == HIGH)
  {
    delay(15);
    while (digitalRead(10) == HIGH);
    delay(15);
    
    sevseg = 1;
    myservo.write(45);

  }
  if (digitalRead(11) == HIGH)
  { delay(15);
    while (digitalRead(11) == HIGH);
    delay(15);
    
    sevseg = 2;
    myservo.write(90);

  }

  if (digitalRead(12) == HIGH)
  {
    delay(15);
    while (digitalRead(12) == HIGH);
    delay(15);
    
    sevseg = 3;
    myservo.write(135);

  }
  if (digitalRead(13) == HIGH)
  {
    delay(15);
    while (digitalRead(13) == HIGH);
    delay(15);
    
    sevseg = 4;
    myservo.write(180);

  }
}

