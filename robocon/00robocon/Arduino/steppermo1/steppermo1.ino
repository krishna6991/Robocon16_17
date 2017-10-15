
const int steppin = 3;
const int dirpin = 4;


void setup() {
  // put your setup code here, to run once :

  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(dirpin, LOW);
  while (1)
  {
    for (int x = 0; x <= 1000; x++)
    {
      digitalWrite(steppin, HIGH);
      delay(5);
      digitalWrite(steppin, LOW);
      delay(5);
    }
  }

}
