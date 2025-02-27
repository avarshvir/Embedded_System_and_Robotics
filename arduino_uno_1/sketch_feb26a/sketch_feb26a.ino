void setup() {
  // put your setup code here, to run once:
  pinMode(A0,INPUT);
  pinMode(13,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  int a = analogRead(A0);
  
  //digitalWrite(9,HIGH);
 // int b = map(a,93,293,0,100);
  Serial.println(a);

  if(a<915){
    digitalWrite(13,HIGH);
  }
  else{
    digitalWrite(13,LOW);
  }
}
