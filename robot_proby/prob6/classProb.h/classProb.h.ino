#include<Servo.h>
class Kol{
 private:
 Servo plecho,bissep,koltuk;
  
 public:
 Kol(){
  plecho.attach(2);
  bissep.attach(3);
  koltuk.attach(4);
  }
  void setPlecho(int rad){
     plecho.write(rad);
    }
  
  };
