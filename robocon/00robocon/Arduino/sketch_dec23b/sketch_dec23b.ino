
#include <SoftwareSerial.h>
SoftwareSerial BT(2, 3);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  BT.begin(9600);
  pinMode(5, OUTPUT);

}
int x;
void loop() {
  // put your main code here, to run repeatedly:
  if (BT.available())
  {
    x = BT.read();
    Serial.write(x);
    if (x == 'A')
    {
      digitalWrite(5, HIGH);

    }
    if (x == 'a')
    {
      digitalWrite(5, LOW);

    }
  }
}
