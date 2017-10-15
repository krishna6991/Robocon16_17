int i=0;
void setup() {
  // put your setup code here, to run once:
  pinMode(0,OUTPUT);
  pinMode(8,INPUT);
  

}

void loop() {
  
  
  
  if(digitalRead(8)==1)
  { 
    delay(15);
    while(digitalRead(8)==1);
    delay(15);
    i++;
    if(i==10)
    {
      digitalWrite(0,HIGH);    
      i=0;
      delay(10000);
    }
  }

}
