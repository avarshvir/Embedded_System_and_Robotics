void setup(){
Serial.begin(9600);     // Communication started with
 
}
void loop(){
int sensor=analogRead(A0); // Incoming analog
Serial.println(sensor);   //Wrote serial port
}
