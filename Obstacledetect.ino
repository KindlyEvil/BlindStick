const int trigPin =10;
const int echoPin = 9; 
const int buzzer=2;
const int vib=5;
long dur,dist;
 
void setup()
{
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(buzzer,OUTPUT);
  pinMode(vib,OUTPUT);
}
 
void loop()
{
  digitalWrite(trigPin,LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  
  dur=pulseIn(echoPin, HIGH);
  dist = (dur/2)/29.1;

  if(dist<=50&&dist>=40)
  {
    digitalWrite(buzzer,HIGH);
    delay(300);
    digitalWrite(buzzer,LOW);
    delay(300);
  }
  else if(dist<40&&dist>=20)
  { 
    digitalWrite(buzzer,HIGH);
    delay(200);
    digitalWrite(buzzer,LOW);
    delay(200);
  }
  else if(dist<20)
  {
    digitalWrite(vib,HIGH);
    digitalWrite(buzzer,HIGH);
    delay(60);
    digitalWrite(buzzer,LOW);
    delay(60);
  }
  
  else
  digitalWrite(buzzer,LOW);
  digitalWrite(vib,LOW);
  delay(10);
}
