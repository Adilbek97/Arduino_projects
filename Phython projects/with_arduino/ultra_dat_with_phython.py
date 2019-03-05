import serial
import os
import re
from pygame import mixer
import datetime
import time
from gtts import gTTS
def strok(strk):
    st=""
    for i in strk:
        if i in "1234567890":
            st+=i
    return st

def speak(sss,w):
 mp3_nameold = '111'
 mp3_name = str(w)+".mp3"
 soz = sss
 if(soz=="null"):
        soz="говорите громче"
        ss=soz
        #ss = str(bot1.answer(str(soz)))
 elif(soz=="oshibka"):
        soz="где то произашло ошибка"
        ss=soz
        #ss = str(bot1.answer(str(soz)))
 else:
     ss = soz
     if ss=="":
         ss="Лучше не знать этого"
     i = 0
     while ss:
        if (i != 0):
            break
        split_regex = re.compile(r'[.|!|?|…]')
        sentences = filter(lambda t: t, [t.strip() for t in split_regex.split(ss)])
        for x in sentences:
            if (x != ""):
                print("Бот отвечает: ")
                print(x)
                tts = gTTS(text=x, lang='ru')
                tts.save(mp3_name)
                mixer.music.load(mp3_name)
                mixer.music.play()
                while mixer.music.get_busy():
                    time.sleep(0.1)
                if (os.path.exists(mp3_nameold) and (mp3_nameold != "0.mp3")):
                    os.remove(mp3_nameold)
                mp3_nameold = mp3_name
                now_time = datetime.datetime.now()
                mp3_name = now_time.strftime("%d%m%Y%I%M%S") + ".mp3"
        i += 1
 mixer.music.load('0.mp3')
 mixer.stop
 mixer.quit
 


sdata=serial.Serial('com6',9600)
k=0
t=0
l=0
w=0
mixer.init()
while True:
    if(sdata.inWaiting()>0):
        mydata=sdata.readline()
        value=str(mydata)
        dat=strok(value)
        if(int(dat)<=10 and t==0 ):
             sdata.write(bytes('1',"ascii"))
             word="Дистанция "+dat + " см  от тебя, ростаяние слишком близко, включено красный свет."
             speak(word,w)
             w+=1
             k=0
             t+=1
             l=0
        elif(int(dat)<=30 and int(dat)>10 and k==0):
             sdata.write(bytes('2',"ascii"))
             word="Дистанция "+dat + " см  от тебя ,ростаяние средна ,  включено жёлтый свет."
             speak(word,w)
             w+=1
             t=0
             k+=1
             l=0
        elif(int(dat)>30 and l==0 ):
            sdata.write(bytes('3',"ascii"))
            word="Дистанция "+dat + " см  от тебя ,ростаяние не близко, включено зелённый свет."
            speak(word,w)
            w+=1
            t=0
            l+=1
            k=0
        
        
            
    
