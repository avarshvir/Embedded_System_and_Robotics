void setup() {
  // put your setup code here, to run once:
  pinMode(A0,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int a = analogRead(A0);
  Serial.println(a);
  delay(1000);
}
