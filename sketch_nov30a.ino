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
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);//잘안됨
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);//잘됨
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);//잘됨
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);//잘안됨
}

void loop() {
  int flag;

  if(Serial.available()>0) {
    flag = Serial.read();

    
   // if(flag ==0){
      analogWrite(vib1, 0);
      analogWrite(led1, 0);
      analogWrite(vib2, 0);
      analogWrite(led2, 0);
      analogWrite(vib3, 0);
      analogWrite(led3, 0);
      analogWrite(vib4, 0);
      analogWrite(led4, 0);
    //}
    if(flag == 1){
      analogWrite(vib1, 100);
      analogWrite(led1, 100);
    }
    else if(flag == 2){
      analogWrite(vib2, 150);
      analogWrite(led2, 200);
      analogWrite(vib3, 150);
      analogWrite(led3, 200);
    }
    else if(flag ==3){
      analogWrite(vib2, 0);
      analogWrite(led2, 0);
      analogWrite(vib3, 0);
      analogWrite(led3, 0);
    }
    else if(flag==4){

      analogWrite(vib4, 150);
      analogWrite(led4, 200);
    }
    else if(flag==5){

      analogWrite(vib4, 0);
      analogWrite(led4, 0);
      
    }
  }
}
