const int vib1 = 3;
const int led1 = 4;
const int vib2 = 5;
const int led2 = 6;
const int vib3 = 9;
const int led3 = 10;
const int vib4 = 11;
const int led4 = 12;
void setup()
{
  // initialize the serial communication:
  Serial.begin(9600);
  // initialize the ledPin as an output:
  pinMode(vib1, OUTPUT);
  pinMode(led1, OUTPUT);//잘안됨
  pinMode(vib2, OUTPUT);
  pinMode(led2, OUTPUT);//잘됨
  pinMode(vib3, OUTPUT);
  pinMode(led3, OUTPUT);//잘됨
  pinMode(vib4, OUTPUT);
  pinMode(led4, OUTPUT);//잘안됨
}

void loop() {
  byte flag;

  if(Serial.available()>0) {
    flag = Serial.read();
    
    switch(flag){
      case 0:
      analogWrite(vib1, 0);
      analogWrite(led1, 0);
      analogWrite(vib2, 0);
      analogWrite(led2, 0);
      analogWrite(vib3, 0);
      analogWrite(led3, 0);
      analogWrite(vib4, 0);
      analogWrite(led4, 0);
        break;
      case 1:
      analogWrite(vib1, 70);
      analogWrite(led1, 150);
        break;
      case 2:
      analogWrite(vib2, 70);
      analogWrite(led2, 150);
      analogWrite(vib3, 70);
      analogWrite(led3, 150);
        break;
      case 3:
      analogWrite(vib2, 120);
      analogWrite(led2, 250);
      analogWrite(vib3, 120);
      analogWrite(led3, 250);
        break;
      case 4:
      analogWrite(vib1, 70);
      analogWrite(led1, 150);
      analogWrite(vib4, 70);
      analogWrite(led4, 150);
        break;
      case 5:
      analogWrite(vib1, 120);
      analogWrite(led1, 250);
      analogWrite(vib4, 120);
      analogWrite(led4, 250);
        break;
    }
  }
}
