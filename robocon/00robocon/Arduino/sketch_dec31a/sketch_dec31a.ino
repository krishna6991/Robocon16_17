int rs=9;
int en=8;
void setup()
{
 for(int i=0;i<10;i++)
 pinMode(i,OUTPUT);
 

}

void loop()
{
    digitalWrite(rs,LOW);
    PORTD=0x38;
    digitalWrite(en,HIGH);
    delay(10);
    digitalWrite(en,LOW);
    digitalWrite(rs,LOW);
    PORTD=0x0E;
    digitalWrite(en,HIGH);
    delay(10);
    digitalWrite(en,LOW);

    digitalWrite(rs,HIGH);
    PORTD='V';
    digitalWrite(en,HIGH);
    delay(10);
    digitalWrite(en,LOW);
    PORTD='A';
    digitalWrite(en,HIGH);
    delay(10);
    digitalWrite(en,LOW);
    PORTD='G';
    digitalWrite(en,HIGH);
    delay(10);
    digitalWrite(en,LOW);
    PORTD='A';
    digitalWrite(en,HIGH);
    delay(10);
    digitalWrite(en,LOW);
    PORTD='R';
    digitalWrite(en,HIGH);
    delay(10);
    digitalWrite(en,LOW);
    PORTD='T';
    digitalWrite(en,HIGH);
    delay(10);
    digitalWrite(en,LOW);
    PORTD='H';
    digitalWrite(en,HIGH);
    delay(10);
    digitalWrite(en,LOW);
    delay(10000);
    digitalWrite(rs,LOW);
    PORTD=0x01;
    digitalWrite(en,HIGH);
    delay(10);
    digitalWrite(en,LOW);
    

    
    

}
