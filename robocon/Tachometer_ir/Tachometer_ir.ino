#include <Servo.h>

int rev = 0;
float t = 0;
float p = 0;
Servo myservo;
void a()
{ rev++;
if(rev%2==0)p = micros();
if(rev%2!=0)t=micros();
}
void setup() {

  /*myservo.attach(9);  // attaches the servo on pin 9 to the servo object

  Serial.println("Maximum position...");  
  myservo.write(180); // maximum position
  delay(2000);    // wait 2 seconds

  Serial.println("Minimum position...");  
  myservo.write(0); // minimum position
  delay(2000);    // wait 2 seconds

  Serial.println("Neutral position...");  
  myservo.write(90);  // "neutral"/"middle" position*/

  // put your setup code here, to run once:
  Serial.begin(9600);
  attachInterrupt(digitalPinToInterrupt(2), a, RISING);
 
}

void loop() {
 

  Serial.println(60000000 / (abs((p - t))));
  Serial.println(rev);
  Serial.println(abs(p - t));
  Serial.println();
// myservo.write(179);
delay(1);
}


