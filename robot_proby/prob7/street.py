import pyttsx3;
import serial
def saying(soz:str):#text to speech
  engine = pyttsx3.init();
  engine.say(soz);
  engine.runAndWait();
data =serial.Serial('com5',9600)
def jan():
    data.write(bytes('1',"ascii"))
def och():
    data.write(bytes('0',"ascii"))
def strok(strk):
    st=""
    for i in strk:
        if i in "1234567890":
            st+=i
    return st
#word=str(input())
while True:
  if(data.inWaiting()>0):
    date=strok(str(data.readline()))
    print(date)
    if(str(date)=='1'):
        saying("Здравствуйте, у нас курс по робототехнике, захадите")
