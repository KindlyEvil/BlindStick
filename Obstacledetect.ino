const int trigPin =10;
const int echoPin = 9; 
const int buzzer=2;
long dur,dist;
 
void setup()
{
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(buzzer,OUTPUT);
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

  if(dist<=70&&dist>=40)
  {
    digitalWrite(buzzer,HIGH);
    delay(300);
    digitalWrite(buzzer,LOW);
    delay(300);
  }
  else if(dist<40&&dist>=20)
  { 
    digitalWrite(buzzer,HIGH);
    delay(170);
    digitalWrite(buzzer,LOW);
    delay(170);
  }
  else if(dist<20)
  {
    digitalWrite(buzzer,HIGH);
    delay(40);
    digitalWrite(buzzer,LOW);
    delay(40);
  }
  
  else
  digitalWrite(buzzer,LOW);
  
  delay(500);
}
