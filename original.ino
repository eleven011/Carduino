#define motorPin1 9 //wheel 1
#define motorPin2 10 //wheel 1
#define motorPin3 5 //wheel 2 
#define motorPin4 6 //wheel 2

void setup() {
  pinMode(motorPin1, OUTPUT);
  pinMode(motorPin2, OUTPUT);
  pinMode(motorPin3, OUTPUT);
  pinMode(motorPin4, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  digi_go(HIGH, LOW, HIGH, LOW);
  delay(20);
}

void digi_go(int wheel1pos, int wheel1neg, int wheel2pos, int wheel2neg) {
  digitalWrite(motorPin1, HIGH);
  digitalWrite(motorPin2, LOW);
  digitalWrite(motorPin3, HIGH);
  digitalWrite(motorPin4, LOW);
}

void analog_go(int wheel1pos, int wheel1neg, int wheel2pos, int wheel2neg) {
  analogWrite(motorPin1, wheel1pos);
  analogWrite(motorPin2, wheel1neg);
  analogWrite(motorPin3, wheel2pos);
  analogWrite(motorPin4, wheel2neg);
}
