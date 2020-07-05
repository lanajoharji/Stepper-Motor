int pin1 = 3;
int pin2 = 4;
int pin3 = 5;
int pin4 = 6;

void setup() {
  pinMode(pin1, OUTPUT);
  pinMode(pin2, OUTPUT);
  pinMode(pin3, OUTPUT);
  pinMode(pin4, OUTPUT);
}

void loop() {
 motor1();
}

void motor1(){
  digitalWrite(pin1,HIGH);
  delay(1000);
  digitalWrite(pin4,LOW);
  delay(1000);
  digitalWrite(pin2,HIGH);
  delay(1000);
  digitalWrite(pin1,LOW);
  delay(1000);
  digitalWrite(pin3,HIGH);
  delay(1000);
  digitalWrite(pin2,LOW);
  delay(1000);
  digitalWrite(pin4,HIGH);
  delay(1000);
  digitalWrite(pin3,LOW);
  delay(1000);
  digitalWrite(pin1,HIGH);
}

/* void motor1(){
   digitalWrite(pin1,HIGH);
   delay(1000);
   digitalWrite(pin4,LOW);
   delay(1000);
   digitalWrite(pin2,HIGH);
   delay(1000);
   digitalWrite(pin1,LOW);
   delay(1000);
   digitalWrite(pin3,HIGH);
   delay(1000);
   digitalWrite(pin2,LOW);
   delay(1000);
   digitalWrite(pin4,HIGH);
   delay(1000);
   digitalWrite(pin3,LOW);
   delay(1000);
   digitalWrite(pin1,HIGH);
    }
  
 */
