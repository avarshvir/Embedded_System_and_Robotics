void setup() {
  // put your setup code here, to run once:
  pinMode(A0,INPUT);
  pinMode(A1,INPUT);
  pinMode(10,OUTPUT);
  pinMode(9,OUTPUT);
  
  Serial.begin(9600);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  int a = analogRead(A0);
  Serial.println(a);
  int b = analogRead(A1);
  float c = b*4.88;
  float d = c/10;
  Serial.println(d);

  /*if(a < 500){
    digitalWrite(10,HIGH);
  }

  if(b > 27){
    digitalWrite(10,HIGH);
  }*/

  if(a <= 500){
    digitalWrite(10,HIGH);
  }
  if(a > 500){
    digitalWrite(10,LOW);
  }

  if(d > 27){
    digitalWrite(9,HIGH);
  }
  if(d < 27){
    digitalWrite(9,LOW);
  }
  

  /*if(a < 500 && d > 27){
    digitalWrite(10,HIGH);
  }
  if(a > 500 && d < 27){
    digitalWrite(10,LOW);
  }
  /*if(a < 500 || d > 27){
    digitalWrite(10,HIGH);
  }
  if(a > 500 || d < 27){
    digitalWrite(10,LOW);
  }*/
  



}
