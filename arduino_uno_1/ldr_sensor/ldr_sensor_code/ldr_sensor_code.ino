void setup() {
  pinMode(A0,INPUT_PULLUP);
  pinMode(10,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  int a = analogRead(A0);
  Serial.println(a);
  if(a <= 500){
    digitalWrite(10,HIGH);
  }
  if(a > 500){
    digitalWrite(10,LOW);
  }

}
