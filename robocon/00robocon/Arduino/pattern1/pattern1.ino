void setup() {
  // put your setup code here, to run once:
    for(int i=0; i<=7; i++)
    {
      pinMode(i,OUTPUT);
      }
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i=0; i<=7; i++)
  {
    digitalWrite(i,HIGH);
    digitalWrite(7-i,1);
    delay(300);
    digitalWrite(i,LOW);
    digitalWrite(7-i,0);
    }

}
