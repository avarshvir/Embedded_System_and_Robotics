//int t = 1000;

void setup() {
  // put your setup code here, to run once:
  pinMode(A0,INPUT);
  pinMode(12,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(3,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int a = analogRead(A0);
  int t = map(a,0,1023,0,5000);
  Serial.println(t);

  digitalWrite(12,HIGH);
  delay(t);

  digitalWrite(12,HIGH);
  digitalWrite(11,HIGH);
  delay(t);
  
  digitalWrite(12,HIGH);
  digitalWrite(11,HIGH);
  digitalWrite(10,HIGH);
  delay(t);
  
  digitalWrite(12,HIGH);
  digitalWrite(11,HIGH);
  digitalWrite(10,HIGH);
  digitalWrite(9,HIGH);
  delay(t);

  digitalWrite(12,LOW);
  digitalWrite(11,HIGH);
  digitalWrite(10,HIGH);
  digitalWrite(9,HIGH);
  digitalWrite(8,HIGH);
  delay(t);
  
  digitalWrite(11,LOW);
  digitalWrite(10,HIGH);
  digitalWrite(9,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(7,HIGH);
  delay(t);
  
  digitalWrite(10,LOW);
  digitalWrite(9,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(6,HIGH);
  delay(t);
  
  digitalWrite(9,LOW);
  digitalWrite(8,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(5,HIGH);
  delay(t);

  digitalWrite(8,LOW);
  digitalWrite(7,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(4,HIGH);
  delay(t);
  
  digitalWrite(7,LOW);
  digitalWrite(6,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(3,HIGH);
  delay(t);
  
  digitalWrite(6,LOW);
  digitalWrite(5,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(3,HIGH);
  delay(t); 

  digitalWrite(5,LOW);
  digitalWrite(4,HIGH);
  digitalWrite(3,HIGH);
  delay(t); 
  
  digitalWrite(4,LOW);
  digitalWrite(3,HIGH);
  delay(t); 

  digitalWrite(3,LOW);
  delay(t); 
}
