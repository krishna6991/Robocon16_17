void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  for (int i = 0; i <= 11; i++)
  {
    pinMode(i, OUTPUT);
    digitalWrite(i, LOW);
  }
}

int data[10][8] =
{
  {1, 1, 1, 1, 1, 1, 0, 0},
  {0, 1, 1, 0, 0, 0, 0, 0},
  {1, 1, 0, 1, 1, 0, 1, 0},
  {1, 1, 1, 1, 0, 0, 1, 0},
  {0, 1, 1, 0, 0, 1, 1, 0},
  {1, 0, 1, 1, 0, 1, 1, 0},
  {1, 0, 1, 1, 1, 1, 1, 0},
  {1, 1, 1, 0, 0, 0, 0, 0},
  {1, 1, 1, 1, 1, 1, 1, 0},
  {1, 1, 1, 0, 0, 1, 1, 0}

};
int dela = 0;
int de = 0;
int one_seg = 11;
int ten_seg = 10;
int val = 0;
int one = 0;
int ten = 0;
float j;
void loop()
{

  int sensorValue = analogRead(A0);
  Serial.println(sensorValue);
  delay(1);
  j = (sensorValue/1023)*99;
  int val=(int)(j + 0.5);
  one = val % 10;
  ten = val / 10;
  Serial.println(j);
  digitalWrite(one_seg, HIGH);
  digitalWrite(ten_seg, LOW);
  for (int i = 0; i <= 7; i++)
  {
    digitalWrite(i, data[one][i]);
  } delay(5);



  digitalWrite(one_seg, LOW);
  digitalWrite(ten_seg, HIGH);
  for (int i = 0; i <= 7; i++)
  {
    digitalWrite(i, data[ten][i]);
  } delay(5);
  delay(500);
}
