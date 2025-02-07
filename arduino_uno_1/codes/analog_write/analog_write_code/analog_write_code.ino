void setup(){
  pinMode(A0,INPUT);
  pinMode(9,OUTPUT);
  pinMode(8,OUTPUT);
  
  Serial.begin(9600);
}
void loop(){
  int a = analogRead(A0);
  int t = map(a,0,1023,0,255);
  Serial.println(t);
  analogWrite(9,t);
  analogWrite(5,t);
  
}