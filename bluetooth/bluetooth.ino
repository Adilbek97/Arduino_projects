char val;
int s;
void setup() {
  Serial.begin(9600);
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
}

void loop() {
  if(Serial.available()){
    val=Serial.read();
    if(val=='F'){
      digitalWrite(2,HIGH);
      digitalWrite(3,LOW);
      digitalWrite(4,HIGH);
      digitalWrite(5,LOW);
      }
      else if(val=='B'){
      digitalWrite(2,LOW);
      digitalWrite(3,HIGH);
      digitalWrite(4,LOW);
      digitalWrite(5,HIGH);
      } else if(val=='L'){
      digitalWrite(2,HIGH);
      digitalWrite(3,LOW);
      digitalWrite(4,LOW);
      digitalWrite(5,LOW);
      } else if(val=='R'){
      digitalWrite(2,LOW);
      digitalWrite(3,LOW);
      digitalWrite(4,HIGH);
      digitalWrite(5,LOW);
      }
      else if(val=='G'){
       s=2;
        }
      else if(val=='I'){
       s=3;
        }
      else if(val=='H'){
       s=4;
        }
      else if(val=='J'){
       s=5;
        }
   // s=1;
    else{
      digitalWrite(2,LOW);
      digitalWrite(3,LOW);
      digitalWrite(4,LOW);
      digitalWrite(5,LOW);
      
      } 
//    s=0;
    
    }
   if(s==2){
    digitalWrite(9,HIGH);
    digitalWrite(10,LOW);
    }
   else if(s==4){
    digitalWrite(9,LOW);
    digitalWrite(10,HIGH);
    }else{
    digitalWrite(9,LOW);
    digitalWrite(10,LOW);
      
      }
      
   
  // put your main code here, to run repeatedly:

}
