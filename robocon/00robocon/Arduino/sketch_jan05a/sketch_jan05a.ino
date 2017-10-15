void setup() 
{
  pinMode(3,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);

}

void loop() 
{
   /* for(int i=0;i<=255;)
    {
      analogWrite(3,i);
      
      analogWrite(6,i);
      analogWrite(9,i);
      
      analogWrite(11,i);
      
      i=i+3;
      delay(300);
      
    }

    for(int i=255;i>=0;)
    {
      
      analogWrite(5,i);
      analogWrite(6,i);
      
      analogWrite(10,i);
      analogWrite(11,i);
      i=i-3;
      delay(300);
    }*/
    analogWrite(3,100);
    analogWrite(5,80);
    analogWrite(6,0);

    analogWrite(9,0);
    analogWrite(10,255);
    analogWrite(11,255);

}
