
void setup(){
  pinMode(A0,INPUT);
  pinMode(A1,INPUT);
  Serial.begin(9600);
  
}
void loop(){
  int y = analogRead(A0);
  int x = analogRead(A1);
  if(y < 150){
    Serial.println("Backward");
  }
 else if(y > 900){
    Serial.println("Forward");
  }
  else if(x < 150){
    Serial.println("Left");
  }
  else if(x > 900){
    Serial.println("Right");
  }
   if(y > 900 && x <150){
    Serial.println("Forward Left");
  }
   if(y > 900 && x > 900){
    Serial.println("Forward Right");
  }
   if(y < 150 && x < 150){
    Serial.println("Backward Left");
  }
   if(y > 900 && x > 900){
    Serial.println("Backward Right");
  }
  
  
  
  
}
