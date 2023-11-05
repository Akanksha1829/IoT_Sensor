int ir_sensor=8;
int buzzer=6;
void setup() {
  pinMode(ir_sensor,INPUT);
   pinMode(buzzer,OUTPUT);
  // put your setup code here, to run once:

}

void loop() {
  int data=digitalRead(ir_sensor);
  if (data==1)
  {
      digitalWrite(buzzer,HIGH);
  }
  else
  {
    digitalWrite(buzzer,LOW);
  }
  Serial.println(data);
  // put your main code here, to run repeatedly:

}
