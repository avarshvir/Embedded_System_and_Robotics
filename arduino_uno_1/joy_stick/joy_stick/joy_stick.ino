
void setup(){
  pinMode(A0,INPUT);
  pinMode(A1,INPUT);
  Serial.begin(9600);
  
}
void loop(){
  int y = analogRead(A0);
  int x = analogRead(A1);
  
  if (y > 900 && x < 150) {
    Serial.println("Forward Left");
  } 
  else if (y > 900 && x > 900) {
    Serial.println("Forward Right");
  } 
  else if (y < 150 && x < 150) {
    Serial.println("Backward Left");
  } 
  else if (y < 150 && x > 900) {
    Serial.println("Backward Right");
  } 
  else if (y < 150) {
    Serial.println("Backward");
  } 
  else if (y > 900) {
    Serial.println("Forward");
  } 
  else if (x < 150) {
    Serial.println("Left");
  } 
  else if (x > 900) {
    Serial.println("Right");
  } 
  else {
    Serial.println("Mid"); 
  }

  delay(100);
  
  
  
}
