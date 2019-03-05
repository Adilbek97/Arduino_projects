# Чтение вслух
import os
import glob
import re
from pygame import mixer
import datetime
import time
from gtts import gTTS
import speech_recognition as sr
from chatterbot.trainers import ListTrainer
from chatterbot import ChatBot

# Для того чтобы не возникало коллизий при удалении mp3 файлов
# заведем переменную mp3_nameold в которой будем хранить имя предыдущего mp3 фай


def say(Soz,i):
  mixer.init()
  ss = Soz
  split_regex = re.compile(r'[.|!|?|…]')
  sentences = filter(lambda t: t, [t.strip() for t in split_regex.split(ss)])
  #name="hello.mp3"
  namenew="hello"+str(i)+".mp3"
  name=namenew
  tts = gTTS(text=Soz,lang='ru')
  tts.save(name)
  mixer.music.load(name)
  mixer.music.play()
  while mixer.music.get_busy():
       time.sleep(0.1)
  #for x in sentences:
        #if(x!=" "):
            #print(x)
            

#if(os.path.exists("C:\\Users\\ASHIROV\\Documents\\Phython projects\\hello.mp3") ):
#os.remove("C:\\Users\\ASHIROV\\Documents\\Phython projects\\hello.mp3")
#os.chdir("C:\\Users\\ASHIROV\\Documents\\Phython projects")
#os.system("hello.mp3")
 #path = os.path.join(os.path.abspath(os.path.dirname(__file__)), 'hello.mp3')
 #os.remove(path)
  
    

  
            
    # Читаем следующую порцию текста из файла
    #ss = f.readline()





def recog():
 r = sr.Recognizer()
 
 
 with sr.Microphone() as source:
        print("Скажите что-нибудь")
        audio = r.listen(source)

 try:
         word=r.recognize_google(audio, language="ru-RU")
         return word
 except sr.UnknownValueError:
        print("Робот не расслышал фразу")
        return "null"
 except sr.RequestError as e:
        print("Ошибка сервиса; {0}")
        return "warning"
def answer(bot):
     request = recog()
     if request=="null":
        return "Говорите громче"
     elif request=="warning":
         return "ни понял "
     print(request)
     response = bot.get_response(request)
     print('Bot: ', response)
     return response

def main():
    bot=ChatBot('Test')
    conv=open('chat1.txt','r').readlines()
    bot.set_trainer(ListTrainer)
    bot.train(conv)
    i=0
    while True:
     Soz=str(answer(bot))
     print("sozdor= ",Soz)
     say(Soz,i)
     i+=1
    # dele()
    


    
main()
            
