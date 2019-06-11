void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT);
  pinMode(7,INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(7)==LOW){
    digitalWrite(13,HIGH);
    delay(5000);
  }else{
    digitalWrite(13,LOW);
  }
}
