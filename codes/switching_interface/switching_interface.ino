void setup() {
  //pinMode(10,INPUT_PULLUP);
  pinMode(9,INPUT_PULLUP);
  pinMode(8,OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  int a = digitalRead(9);
  if(a==0){
    digitalWrite(8,HIGH);
  }  
  if(a==1){
    digitalWrite(8,LOW);
  }
}
