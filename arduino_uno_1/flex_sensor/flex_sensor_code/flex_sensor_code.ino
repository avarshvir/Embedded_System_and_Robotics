void setup() {
  // put your setup code here, to run once:
  pinMode(A0,INPUT);
  pinMode(9,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  int a = analogRead(A0);
  
  int b = map(a, 93, 293, 0,1000);

  Serial.println(b);

  if(b>500){
    digitalWrite(9,1);
  }
  else{
    digitalWrite(9,0);
  }

}
