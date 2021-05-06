#define buton1 digitalRead (8)
#define buton2 digitalRead (9)
#define buton3 digitalRead (10)
void setup() {
  pinMode(8, INPUT);
  pinMode(9, INPUT);
  pinMode(10, INPUT);

  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);

}

void loop() {
  if(buton1){
    Button1(500);
  }else if(buton2){
    Button2(500);
  }else if(buton3){
    Button3(500);
  }
  
}

void Button1(int time){
  for(int i=2; i<=6; i++){
    digitalWrite(i, HIGH);
    delay(time);
    digitalWrite(i,LOW);
    delay(time);
  }
}

void Button2(int time){
  for(int i=6; i>=2; i--){
    if(i==6){
      digitalWrite(6, HIGH);
      delay(time);
      digitalWrite(6,LOW);
      delay(time);
    }else if(i==5){
      digitalWrite(6, HIGH);
      digitalWrite(5, HIGH);
      delay(time);
      digitalWrite(6,LOW);
      digitalWrite(5,LOW);
      delay(time);
    }else if(i==4){
      digitalWrite(6, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(4, HIGH);
      delay(time);
      digitalWrite(6,LOW);
      digitalWrite(5,LOW);
      digitalWrite(4, LOW);
      delay(time);
    }else if(i==3){
      digitalWrite(6, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(3, HIGH);
      delay(time);
      digitalWrite(6,LOW);
      digitalWrite(5,LOW);
      digitalWrite(4, LOW);
      digitalWrite(3,LOW);
      delay(time);
    }else if(i==2){
      digitalWrite(6, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(3, HIGH);
      digitalWrite(2, HIGH);
      delay(time);
      digitalWrite(6,LOW);
      digitalWrite(5,LOW);
      digitalWrite(4, LOW);
      digitalWrite(3,LOW);
      digitalWrite(2,LOW);
      delay(time);
    }
  }
}
void Button3(int time){
  for(int i=0; i<10; i++){
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
    delay(time);
    digitalWrite(2,LOW);
    digitalWrite(3,LOW);
    digitalWrite(4, LOW);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    delay(time);
  }
}