#include <Servo.h>

Servo myservo;

void setup() {
  Serial.begin(9600);  // set up Serial library at 9600 bps

  myservo.attach(9);  // attaches the servo on pin 9 to the servo object

  Serial.println("Maximum position...");  
  myservo.write(180); // maximum position
  delay(2000);    // wait 2 seconds

  Serial.println("Minimum position...");  
  myservo.write(0); // minimum position
  delay(2000);    // wait 2 seconds

  Serial.println("Neutral position...");  
  myservo.write(90);  // "neutral"/"middle" position
}

void loop() {
  for(int i=90;i<180;i++)
  {
myservo.write(i);
delay(1000);
if(i==179)
break;
  }
while(1);
}
