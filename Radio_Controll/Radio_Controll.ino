int ButtonA = LOW;
int ButtonB = LOW;
int ButtonC = LOW;
int ButtonD = LOW;

void setup() {
  
  pinMode(8, INPUT);
  pinMode(9, INPUT);
  pinMode(10, INPUT);
  pinMode(11, INPUT);
  Serial.begin(9600);
}

void loop() {
  ButtonA = digitalRead(10);
  ButtonB = digitalRead(8);
  ButtonC = digitalRead(11);
  ButtonD = digitalRead(9);

  if (ButtonA == HIGH){
    Serial.println("A");
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
