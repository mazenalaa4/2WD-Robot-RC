// C++ code
//
int speedl=10;
int in1=8;
int in2=9;
int in3=6;
int in4=7;
int speedr=5;



void setup()
{
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
if (Serial.available()>0){
char reading=Serial.read();
switch(reading)
{
  case 'f':
  analogWrite(speedl,155);
  digitalWrite(in1,1);
  digitalWrite(in2,0);
  analogWrite(speedr,155);
  digitalWrite(in3,1);
  digitalWrite(in4,0);
  break;
  
  case 'r':
  analogWrite(speedl,155);
  digitalWrite(in1,1);
  digitalWrite(in2,0);
  analogWrite(speedr,155);
  digitalWrite(in3,0);
  digitalWrite(in4,0);
  break;
  
  case 'l':
  analogWrite(speedl,155);
  digitalWrite(in1,0);
  digitalWrite(in2,0);
  analogWrite(speedr,155);
  digitalWrite(in3,1);
  digitalWrite(in4,0);
  break;
  
  
  case 'b':
    analogWrite(speedl,155);
  digitalWrite(in1,0);
  digitalWrite(in2,1);
  analogWrite(speedr,155);
  digitalWrite(in3,0);
  digitalWrite(in4,1);
  break;
  
  
  case 's':
    analogWrite(speedl,155);
  digitalWrite(in1,0);
  digitalWrite(in2,0);
  analogWrite(speedr,155);
  digitalWrite(in3,0);
  digitalWrite(in4,0);
  break;
}
  




}

}