void setup() {
  // put your setup code here, to run once:
  pinMode(A0,INPUT);
  pinMode(10,OUTPUT);
  pinMode(9,OUTPUT);
  

}

void loop() {
  // put your main code here, to run repeatedly:
  int pot_value = analogRead(A0);
  int delay_time = map(pot_value,0, 1023, 100, 1000);

  // Turn on LED A and turn off LED B
  digitalWrite(10, HIGH);
  digitalWrite(9, LOW);
  delay(delay_time);  // Wait for the mapped delay time
  
  // Turn off LED A and turn on LED B
  digitalWrite(10, LOW);
  digitalWrite(9, HIGH);
  delay(delay_time);
}
