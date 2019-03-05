import os
import re
from pygame import mixer
import datetime
import time
from gtts import gTTS


mixer.init()
while True:
 soz=input()
 ss=soz
 split_regex = re.compile(r'[.|!|?|…]')
 sentences = filter(lambda t: t, [t.strip() for t in split_regex.split(ss)])
 name="123.mp3"
 nameold='1234'
 i=5

 for x in sentences:
    if(x!=""):
        print(x)
        tts=gTTS(text=x,lang='ru')
        tts.save(name)
        mixer.music.load(name)
        mixer.music.play()
        while mixer.music.get_busy():
            time.sleep(0.1)
        if(os.path.exists(name)and (name!="12.mp3")):
            os.remove(name)
        nameold=name
        name=str(i)+".mp3"
        i+=1
