#include <Servo.h>
//#define maxs 2300
//#define neutral 1400
//#define mins 400
//#define pin 9
//Servo motor;
Servo esc;

//#define sensor 18
int dela = 0;
int dyndel = 70;
unsigned int time = 0, RPM = 0, cim = 95;


void setup()
{ Serial.begin(9600);
  esc.attach(9);
  esc.write(179);
  delay(1000);
  esc.write(0);
  delay(1000);
  esc.write(90);
  delay(1000);

  //pinMode(sensor, INPUT);
  //  pinMode(start, INPUT);
  pinMode(13, OUTPUT);
  pinMode(11, INPUT);
  pinMode(12, INPUT);
  rpm_set();


}



/*int delay1()
  {
  //unsigned int long k;
  int i, j;
  unsigned int count = 0;
  for (i = 0; i < 1000; i++)
  {
    for (j = 0; j < 1227; j++)
    {
      if (digitalRead(sensor))
      {
        count++;
        while (digitalRead(sensor));
      }
    }
  }
  return count;
  }*/

/*void rpm_calc()
  {
  //unsigned int time = 0, RPM = 0;
  time = delay1();

  RPM = (time * 12) / 4; //no of blades


  }*/

/*void rpm_print()
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


  }*/

void rpm_set()
{
  esc.write(cim);
  delay(500);
}

void loop()
{
  if (digitalRead(11) == HIGH)
  {
    delay(15);
    while (digitalRead(11) == HIGH)
    {
      cim++;
      if (cim >= 179)
      {
        cim = 179;
      }
      if (dyndel >= 10)
      {
        dyndel = dyndel - 5;
      }
      while (dela < dyndel)
      {
        delay(10);
        rpm_set();

        dela++;


      }
      dela = 0;



    }
    dyndel = 70;
  }



  /*if (digitalRead(12) == HIGH)
    {
    delay(15);
    while (digitalRead(12) == HIGH)
    {
      cim--;
      if (cim == 95)
      {
        cim = 95;
      }
      if (dyndel >= 10)
      {
        dyndel = dyndel - 5;
      }
      while (dela < dyndel)
      {
        rpm_set();
        dela++;
      }
      dela = 0;

    }
    dyndel = 70;
    }*/

  Serial.println(cim);
}
