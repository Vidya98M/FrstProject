
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(A0, INPUT);
pinMode(A2, INPUT);
pinMode(A4, INPUT);
pinMode(12, OUTPUT);
}


void loop() {
  // put your main code here, to run repeatedly:
int x = analogRead(A0);
int y = analogRead(A2);
int z = analogRead(A4);

Serial.print("x = ");
Serial.println(x);
/*Serial.print("y = ");
Serial.println(y);
Serial.println("z = ");
Serial.println(z);*/
delay(1000);

if( x>300)
{
 digitalWrite(12,HIGH);
}
else
{
  digitalWrite(12,LOW);
}
}
