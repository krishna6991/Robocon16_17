void setup() {
  Serial.begin(9600);
  pinMode(3,OUTPUT);
}

void loop() {
  if(Serial.available())
  {
    int x;
    x=Serial.read();

    if(x=='a'){delay(2000);Serial.println("LED ON");digitalWrite(3,HIGH);}
    if(x=='A'){delay(2000);Serial.println("LED OFF");digitalWrite(3,LOW);}
  }
}
