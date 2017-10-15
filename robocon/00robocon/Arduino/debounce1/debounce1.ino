void setup() {
  // put your setup code here, to run once:
  pinMode(0,OUTPUT);
  pinMode(8,INPUT);
  pinMode(9,INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  
    int flag=digitalRead(8);
    
    flag=!flag;
    digitalWrite(0,flag);

 
  
 

}
