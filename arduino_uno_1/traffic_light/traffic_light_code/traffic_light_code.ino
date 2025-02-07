void setup(){
  
  pinMode(13,OUTPUT);   // top red
  pinMode(12,OUTPUT);   // top yellow
  pinMode(11,OUTPUT);   // top green

  pinMode(10,OUTPUT);   // left red
  pinMode(9,OUTPUT);    // left yellow
  pinMode(8,OUTPUT);    // left green

  pinMode(5,OUTPUT);   // bottom red
  pinMode(6,OUTPUT);   // bottom yellow
  pinMode(7,OUTPUT);   // bottom green

  pinMode(2,OUTPUT);   // right red
  pinMode(3,OUTPUT);   // right yellow
  pinMode(4,OUTPUT);   // right green
  
}
void loop(){

  digitalWrite(13,HIGH);   //top red on
  digitalWrite(10,HIGH);    // left red
  digitalWrite(5,HIGH);     // bottom red
  digitalWrite(2,HIGH);     // right red
  delay(2000);

  digitalWrite(13,LOW);    // top red off
  digitalWrite(11,HIGH);   // top green on
  delay(3000);

  digitalWrite(11,LOW);      // top green off
  digitalWrite(12,HIGH);   // top yellow on
  delay(3000);

  digitalWrite(12,LOW);    // top yellow off
  digitalWrite(13,HIGH);    // top red on
  digitalWrite(8,HIGH);     // left green on
  digitalWrite(10,LOW);       // left red off
  delay(5000);
   
  digitalWrite(8,LOW);    // left green off
  digitalWrite(9,HIGH);    // left yellow on
  delay(3000);

  digitalWrite(9,LOW);    // left yellow off
  digitalWrite(10,HIGH);   //left red on
  digitalWrite(7,HIGH);   // bottom green on
  digitalWrite(5,LOW);    // bottom red off
  delay(5000);

  digitalWrite(7,LOW); //bottom green off
  digitalWrite(6,HIGH);  // bottom yellow on
  delay(3000);

  digitalWrite(6,LOW); // bottom yellow off
  digitalWrite(5,HIGH); //bottom red on
  digitalWrite(4,HIGH); // right green on
  digitalWrite(2, LOW); // right red off
  delay(5000);

  digitalWrite(4,LOW); // right green off
  digitalWrite(3,HIGH);   // right yellow on
  delay(3000);
  

}