#include<Servo.h>
char val;
Servo camX;
String value;
int gradusX=0,gradusY=0;
void setup() {
  Serial.begin(9600);
  camX.attach(4);
}
int funk(char val2){
  if(val=='0') return 0;
  if(val=='1') return 1;
  if(val=='2') return 2;
  if(val=='3') return 3;
  if(val=='4') return 4;
  if(val=='5') return 5;
  if(val=='6') return 6;
  if(val=='7') return 7;
  if(val=='8') return 8;
  if(val=='9') return 9;
  }
void loop() {
if(Serial.available()){
  val = Serial.read();
//  Serial.println(val);
  
  if(val!=' '){
    value+=val;
    }
  else{
    if(value[0]=='x'){
      for(int i=1;i<value.length();i++)
        gradusX=gradusX*10+funk(value[i]);
      }
     else if(value[0]=='y'){
        for(int i=1;i<value.length();i++)
        gradusY=gradusY*10+funk(value[i]);
      }
     }
//        Serial.println();
//        Serial.print("value = ");
//        Serial.print(value.length());
//        Serial.println();
//        Serial.print(value[1]);
       value="";
      camX.write(map(gradusX,20,530,10,100));
    }
      
}
