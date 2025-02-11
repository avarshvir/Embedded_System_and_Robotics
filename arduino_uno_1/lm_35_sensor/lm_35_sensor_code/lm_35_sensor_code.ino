void setup() {
  // put your setup code here, to run once:
  pinMode(A0,INPUT_PULLUP);
  pinMode(10,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int a = analogRead(A0);
  float b = a*4.88;
  float c = b/10;
  Serial.println(c);
  if(c > 27){
    digitalWrite(10,HIGH);
  }
  if(c < 27){
    digitalWrite(10,LOW);
  }
  
}
