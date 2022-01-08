int ButtonA = LOW;
int ButtonB = LOW;
int ButtonC = LOW;
int ButtonD = LOW;
int pinBuzzer = 3;//buzzer pin 3

void setup() {
  
  pinMode(8, INPUT);//button A pin 8
  pinMode(9, INPUT);
  pinMode(10, INPUT);
  pinMode(11, INPUT);
  pinMode(pinBuzzer, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  ButtonA = digitalRead(10);
  ButtonB = digitalRead(8);
  ButtonC = digitalRead(11);
  ButtonD = digitalRead(9);

  if (ButtonA == HIGH){
    Serial.println("A");
    digitalWrite(pinBuzzer, HIGH);//play the sound while button pressed
    delay(300);
    digitalWrite(pinBuzzer, LOW);
    delay(300);
    }
  if (ButtonB == HIGH){
    Serial.println("B");
    delay(300);
    }
  if (ButtonC == HIGH){
    Serial.println("C");
    delay(300);
    }
  if (ButtonD == HIGH){
    Serial.println("D");
    delay(300);
    }
  
}
