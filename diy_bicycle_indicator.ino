#define leftbtn 5
#define rightbtn 6
#define centerLed 7
#define leftLed 8
#define rightLed 9
int leftStatus = 0;
int rightStatus = 0;

void setup() {
  pinMode(leftbtn, INPUT);
  pinMode(rightbtn, INPUT);
  pinMode(leftLed, OUTPUT);
  pinMode(rightLed, OUTPUT);
  pinMode(centerLed, OUTPUT);
}

void loop() {
  if(digitalRead(leftbtn)){
    if(leftStatus == 0){
        for(int i = 1; i>0; i++){
          digitalWrite(leftLed, HIGH);
          digitalWrite(centerLed, HIGH);
          delay(700);
          digitalWrite(leftLed, LOW);
          digitalWrite(centerLed, LOW);
          delay(700);
        }
      leftStatus = 1;
    }
    else{
      digitalWrite(leftLed, LOW);
      digitalWrite(centerLed, LOW);
      leftStatus = 0;
    }    
  }
  if(digitalRead(rightbtn)){
    if(rightStatus == 0){
        for(int j = 1; j>0; j++){
          digitalWrite(rightLed, HIGH);
          digitalWrite(centerLed, HIGH);
          delay(700);
          digitalWrite(rightLed, LOW);
          digitalWrite(centerLed, LOW);
          delay(700);
        }
        rightStatus = 1;
    }
    else{
      digitalWrite(rightLed, LOW);
      digitalWrite(centerLed, LOW);
      rightStatus = 0;
    }    
  }
}
