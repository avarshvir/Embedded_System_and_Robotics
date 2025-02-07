void setup() {
  // put your setup code here, to run once:
  pinMode(A0,INPUT);
  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(11,OUTPUT);
  
  
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
    int a = analogRead(A0);
    Serial.println(a);
    if(a < 300){
      digitalWrite(13,HIGH);
      digitalWrite(12,LOW);
      digitalWrite(11,LOW);
    }
    if(a >= 300 && a < 600){
      digitalWrite(13,LOW);
      digitalWrite(12,HIGH);
      digitalWrite(11,LOW);
    }
    if(a >= 600){
      digitalWrite(13,LOW);
      digitalWrite(12,LOW);
      digitalWrite(11,HIGH);
    }
    

}
