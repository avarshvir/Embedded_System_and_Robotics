void setup() {
  // put your setup code here, to run once:
  pinMode(A0,INPUT);
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);
  //Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
    int a = analogRead(A0);
    //Serial.println(a);
    if(a < 100){
      digitalWrite(2,HIGH);
      digitalWrite(3,LOW);
      digitalWrite(4,LOW);
      digitalWrite(5,LOW);
      digitalWrite(6,LOW);
      digitalWrite(7,LOW);
      digitalWrite(8,LOW);
      digitalWrite(11,LOW);
      digitalWrite(12,LOW);
      digitalWrite(13,LOW);
    }

    if(a >= 100 && a < 200){
      digitalWrite(2,HIGH);
      digitalWrite(3,HIGH);
      digitalWrite(4,LOW);
      digitalWrite(5,LOW);
      digitalWrite(6,LOW);
      digitalWrite(7,LOW);
      digitalWrite(8,LOW);
      digitalWrite(11,LOW);
      digitalWrite(12,LOW);
      digitalWrite(13,LOW);
    }

    if(a >= 200 && a < 300){
      digitalWrite(2,HIGH);
      digitalWrite(3,HIGH);
      digitalWrite(4,HIGH);
      digitalWrite(5,LOW);
      digitalWrite(6,LOW);
      digitalWrite(7,LOW);
      digitalWrite(8,LOW);
      digitalWrite(11,LOW);
      digitalWrite(12,LOW);
      digitalWrite(13,LOW);
    }
    
    
    if(a >= 300 && a < 400){
      digitalWrite(2,HIGH);
      digitalWrite(3,HIGH);
      digitalWrite(4,HIGH);
      digitalWrite(5,HIGH);
      digitalWrite(6,LOW);
      digitalWrite(7,LOW);
      digitalWrite(8,LOW);
      digitalWrite(11,LOW);
      digitalWrite(12,LOW);
      digitalWrite(13,LOW);
    }

    if(a >= 400 && a < 500){
      digitalWrite(2,HIGH);
      digitalWrite(3,HIGH);
      digitalWrite(4,HIGH);
      digitalWrite(5,HIGH);
      digitalWrite(6,HIGH);
      digitalWrite(7,LOW);
      digitalWrite(8,LOW);
      digitalWrite(11,LOW);
      digitalWrite(12,LOW);
      digitalWrite(13,LOW);
    }

    if(a >= 500 && a < 600){
      digitalWrite(2,HIGH);
      digitalWrite(3,HIGH);
      digitalWrite(4,HIGH);
      digitalWrite(5,HIGH);
      digitalWrite(6,HIGH);
      digitalWrite(7,HIGH);
      digitalWrite(8,LOW);
      digitalWrite(11,LOW);
      digitalWrite(12,LOW);
      digitalWrite(13,LOW);
    }

    if(a >= 600 && a < 700){
      digitalWrite(2,HIGH);
      digitalWrite(3,HIGH);
      digitalWrite(4,HIGH);
      digitalWrite(5,HIGH);
      digitalWrite(6,HIGH);
      digitalWrite(7,HIGH);
      digitalWrite(8,HIGH);
      digitalWrite(11,LOW);
      digitalWrite(12,LOW);
      digitalWrite(13,LOW);
    }

    if(a >= 700 && a < 800){
      digitalWrite(2,HIGH);
      digitalWrite(3,HIGH);
      digitalWrite(4,HIGH);
      digitalWrite(5,HIGH);
      digitalWrite(6,HIGH);
      digitalWrite(7,HIGH);
      digitalWrite(8,HIGH);
      digitalWrite(11,HIGH);
      digitalWrite(12,LOW);
      digitalWrite(13,LOW);
    }

    if(a >= 800 && a < 900){
      digitalWrite(2,HIGH);
      digitalWrite(3,HIGH);
      digitalWrite(4,HIGH);
      digitalWrite(5,HIGH);
      digitalWrite(6,HIGH);
      digitalWrite(7,HIGH);
      digitalWrite(8,HIGH);
      digitalWrite(11,HIGH);
      digitalWrite(12,HIGH);
      digitalWrite(13,LOW);
    }

    if(a >= 900){
      digitalWrite(2,HIGH);
      digitalWrite(3,HIGH);
      digitalWrite(4,HIGH);
      digitalWrite(5,HIGH);
      digitalWrite(6,HIGH);
      digitalWrite(7,HIGH);
      digitalWrite(8,HIGH);
      digitalWrite(11,HIGH);
      digitalWrite(12,HIGH);
      digitalWrite(13,HIGH);
    }
    
    

    
    

}
