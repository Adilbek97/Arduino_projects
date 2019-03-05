from chatterbot.trainers import ListTrainer 
from chatterbot import ChatBot
import os
import re
from pygame import mixer
import datetime
import time
from gtts import gTTS
import speech_recognition as sr
class Chatterbot:
 def __init__(self):
     bot = ChatBot('Test')
     conv=open('chats.txt','r').readlines()

 def answer(self,soz):
    bot = ChatBot('Test')
    request=soz
    response=bot.get_response(request)
    #print(str(response))
    return response
def recog():
 r = sr.Recognizer()
 with sr.Microphone() as source:
        print("Скажите что-нибудь")
        audio = r.listen(source)
 try:
         return (r.recognize_google(audio, language="ru-RU"))
 except sr.UnknownValueError:
        print("Робот не расслышал фразу")
        return "null"
 except sr.RequestError as e:
        print("Ошибка сервиса; {0}".format(e))
        return "oshibka"
mp3_nameold = '111'
mp3_name = "1.mp3"
bot1=Chatterbot()
mixer.init()
while True:
    soz = input()
    if(soz=="null"):
        soz="говорите громче"
        ss=soz
        #ss = str(bot1.answer(str(soz)))
    elif(soz=="oshibka"):
        soz="где то произашло ошибка"
        ss=soz
        #ss = str(bot1.answer(str(soz)))
    else:
     print("Вы сказали: "+soz)
     ss = str(bot1.answer(str(soz)))
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
                if (os.path.exists(mp3_nameold) and (mp3_nameold != "1.mp3")):
                    os.remove(mp3_nameold)
                mp3_nameold = mp3_name
                now_time = datetime.datetime.now()
                mp3_name = now_time.strftime("%d%m%Y%I%M%S") + ".mp3"
        i += 1
mixer.music.load('1.mp3')
mixer.stop
mixer.quit
if (os.path.exists(mp3_nameold)):
    os.remove(mp3_nameold)


