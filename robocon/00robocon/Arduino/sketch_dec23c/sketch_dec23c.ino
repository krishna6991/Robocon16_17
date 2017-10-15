#include <SoftwareSerial.h>
SoftwareSerial BT(2, 3);

void setup()
{

  Serial.begin(9600);
  BT.begin(9600);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);

}

/*functions*/
void forward()
{
  digitalWrite(6, HIGH);
  digitalWrite(7, LOW);
  digitalWrite(8, HIGH);
  digitalWrite(9, LOW);


}

void reverse()
{
  digitalWrite(6, LOW);
  digitalWrite(7, HIGH);
  digitalWrite(8, LOW);
  digitalWrite(9, HIGH);

}

void left()
{
  digitalWrite(6, HIGH);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, HIGH);


}

void right()
{
  digitalWrite(6, LOW);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(9, LOW);


}

void Stop()
{
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(9, HIGH);

}
/*****************************/
int x;
void loop()
{
  if (BT.available())
  {
    x = BT.read();
    Serial.write(x);
    if (x == 'S')
    {
      Stop();
    }
    if (x == 'F')
    {
      forward();

    }
    if (x == 'L')
    {
      left();

    }
    if (x == 'R')
    {
      right();

    }
    if (x == 'B')
    {
      reverse();

    }
  }
}
