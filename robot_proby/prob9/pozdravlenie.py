import serial
import pyttsx3;
import time

data =serial.Serial('com4',9600)
def jan():
    data.write(bytes('1',"ascii"))
def och():
    data.write(bytes('0',"ascii"))
def saying(soz:str):#text to speech
  engine = pyttsx3.init();
  jan()
  engine.say(soz);
  engine.runAndWait();
  och()
word="Робоскай поздравляет, и вручает вам сертификаты по робототехники.\
      Желаю вам творческих успехов вам в будушем, не останавливайтесь на этом."

while(True):
  if(data.inWaiting()>0):
      mydata=data.readline()
      st=int(mydata)
      if(st==5):
          saying(word)
          time.sleep(2)
          data.write(bytes('3',"ascii"))
      print(st)
      
      
