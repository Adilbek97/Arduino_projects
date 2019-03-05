import os
from gtts import gTTS
import time
from pygame import mixer
#engine =pyttsx.init()
#engine.say('Hello World')
#engine.runAndWait()
mixer.init()
i=0
name="hello.mp3"
nameold="hello"
while i<=3:
 txt=input()
 tts = gTTS(text=txt,lang='ru')

 tts.save(name)
 mixer.music.load(name)
 mixer.music.play()
 while mixer.music.get_busy():
    time.sleep(0.1)
 name=nameold+str(i)+".mp3"
 
#if(os.path.exists("C:\\Users\\ASHIROV\\Documents\\Phython projects\\hello.mp3") ):
#os.remove("C:\\Users\\ASHIROV\\Documents\\Phython projects\\hello.mp3")
#os.chdir("C:\\Users\\ASHIROV\\Documents\\Phython projects")
#os.system("hello.mp3")
 #path = os.path.join(os.path.abspath(os.path.dirname(__file__)), 'hello.mp3')
 #os.remove(path)
 i+=1




            
