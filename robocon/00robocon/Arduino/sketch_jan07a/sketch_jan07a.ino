int data[4][4] =
{
  {1, 1, 0, 0},
  {0, 1, 1, 0},
  {0, 0, 1, 1},
  {1, 0, 0, 1}
};

void setup()
{ Serial.begin(9600);
  for (int i = 2; i <= 6; i++)
  {
    pinMode(i, OUTPUT);
  }
  pinMode(8, INPUT);
  digitalWrite(6,LOW);
}
int flag = 0;
int turns = 0;


void loop()
{
  
  int sensorValue = analogRead(A0);
  
  
 if ((analogRead(A0) >= 0) && (analogRead(A0) < 102))
  {
    turns = 500;
    Serial.println("1");
    
  }

  if ((analogRead(A0) >= 102) && (analogRead(A0) < 204))
  {
    turns = 1000;
    Serial.println("2");
    

  }

  if ((analogRead(A0) >= 204) && (analogRead(A0) < 307))
  {
    turns = 1500;
    Serial.println("3");
    
  }

  if ((analogRead(A0) >= 307) && (analogRead(A0) < 409))
  {
    turns = 2000;
    Serial.println("4");
    
  }

  if ((analogRead(A0) >= 409) && (analogRead(A0) < 511))
  {
    turns = 2500;
    Serial.println("5");
    
  }

  if ((analogRead(A0) >= 511) && (analogRead(A0) < 613))
  {
    turns = 3000;
    Serial.println("6");
    
  }

  if ((analogRead(A0) >= 613) && (analogRead(A0) < 716))
  {
    turns = 3500;
    Serial.println("7");
    
  }

  if ((analogRead(A0) >= 716) && (analogRead(A0) < 818))
  {
    turns = 4000;
    Serial.println("8");
    
  }

  if ((analogRead(A0) >= 818) && (analogRead(A0) < 920))
  {
    turns = 4500;
    Serial.println("9");
    
  }

  if ((analogRead(A0) >= 920) && (analogRead(A0) < 1024))
  {
    turns = 5000;
    Serial.println("10");
    
  }


  if (digitalRead(8) == HIGH)
  {
    delay(15);
    while (digitalRead(8) == HIGH);
    delay(15);
    flag = 1;
    digitalWrite(6, HIGH);
    delay(2000);
  }


  if (flag == 1)
  {
    for (int m = 0; m <= turns; m++)
    {
      for (int i = 0; i <= 3; i++)
      {
        for (int j = 2; j <= 5; j++)
        {
          digitalWrite(j, data[i][j - 2]);
        } delay(5);
      }
    }
    flag = 0;
    digitalWrite(6, LOW);
  }
  delay(1);
}
