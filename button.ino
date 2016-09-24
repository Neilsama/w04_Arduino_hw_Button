int pinRed = 10;
int pinYellow = 12;
int pinGreen = 13;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(7,INPUT);
  pinMode(pinRed,OUTPUT);
  pinMode(pinYellow,OUTPUT);
  pinMode(pinGreen,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(7) == 1){
     delay(1000);
     digitalWrite(pinRed,LOW); //red light off

     //yellow light blinks 4 times
     for(int count = 0; count <= 4; count++){ 
      digitalWrite(pinYellow,HIGH);
      delay(300);
      digitalWrite(pinYellow,LOW);
      delay(300);
     }

     //green light on
     digitalWrite(pinGreen,HIGH);
     delay(6000);
    }
   else if(digitalRead(7) == 0){
      digitalWrite(pinGreen,LOW);
      digitalWrite(pinYellow,LOW);
      digitalWrite(pinRed,HIGH);
    }
}
