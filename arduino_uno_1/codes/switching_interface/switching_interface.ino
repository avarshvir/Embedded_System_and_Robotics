void setup() {
  //pinMode(10,INPUT_PULLUP);
  pinMode(13,INPUT_PULLUP);
  pinMode(12,INPUT_PULLUP);
  pinMode(11,INPUT_PULLUP);
  pinMode(10,INPUT_PULLUP);
  
  pinMode(4,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(2,OUTPUT);
  pinMode(1,OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  int a = digitalRead(13);
  int b = digitalRead(12);
  int c = digitalRead(11);
  int d = digitalRead(10);

  /*digitalWrite(4,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(2,HIGH);
  digitalWrite(1,HIGH);
  delay(1000);
  digitalWrite(4,LOW);
  digitalWrite(3,LOW);
  digitalWrite(2,LOW);
  digitalWrite(1,LOW);*/
  
  

  if(a == 0){
    digitalWrite(4,HIGH); 
    digitalWrite(3,LOW);
    digitalWrite(2,LOW);
    digitalWrite(1,LOW);
       
  }
  if(b == 0){
    digitalWrite(3,HIGH);
    digitalWrite(4,LOW);
    digitalWrite(2,LOW);
    digitalWrite(1,LOW);
    
  }
  if(c == 0){
    digitalWrite(3,LOW);
    digitalWrite(4,LOW);
    digitalWrite(2,HIGH);
    digitalWrite(1,LOW);
    
  }if(d == 0){
    digitalWrite(3,LOW);
    digitalWrite(4,LOW);
    digitalWrite(2,LOW);
    digitalWrite(1,HIGH);
    
  }


  /*if(a == 1){
    digitalWrite(4,LOW);
  }
  if(b == 0){
    digitalWrite(3,HIGH);
  }
  if(b == 1){
    digitalWrite(3,LOW);
  }
  if(c == 0){
    digitalWrite(2,HIGH);
  }
  if(c == 1){
    digitalWrite(2,LOW);
  }
  if(d == 0){
    digitalWrite(1,HIGH);
  }
  if(d == 1){
    digitalWrite(1,LOW);
  }*/
  
  

  
  
}
