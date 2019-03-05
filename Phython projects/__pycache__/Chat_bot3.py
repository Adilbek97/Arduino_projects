import speech_recognition as sr
from chatterbot.trainers import ListTrainer
from chatterbot import ChatBot
import os
import re
from pygame import mixer
import datetime
import time
from gtts import gTTS


def get_word(soz):
    mixer.init()
    mp3_nameold='111'
    mp3_name = "1.mp3"
    file=open("text.txt", "w") 
    file.write(str(soz))
    file.close()
def speak():
  f = open("text.txt","r")
  ss = f.readline()
  while ss:
    # Делим прочитанные строки на отдельные предложения
    split_regex = re.compile(r'[.|!|?|…]')
    sentences = filter(lambda t: t, [t.strip() for t in split_regex.split(ss)])

    # Перебираем массив с предложениями 
    for x in sentences:
        if(x!=""):
            print(x)
            # Эта строка отправляет предложение которое нужно озвучить гуглу
            tts=gTTS(text=x, lang='ru')
            # Получаем от гугла озвученное предложение в виде mp3 файла           
            tts.save(mp3_name)
            # Проигрываем полученный mp3 файл
            mixer.music.load(mp3_name)
            mixer.music.play()
            while mixer.music.get_busy():
                time.sleep(0.1)
            # Если предыдущий mp3 файл существует удаляем его
            # чтобы не захламлять папку с приложением кучей mp3 файлов
            if(os.path.exists(mp3_nameold) and (mp3_nameold!="1.mp3")):
                os.remove(mp3_nameold)
            mp3_nameold=mp3_name
            # Формируем имя mp3 файла куда будет сохраняться озвученный текст текущего предложения
            # В качестве имени файла используем текущие дату и время
            now_time = datetime.datetime.now()
            mp3_name = now_time.strftime("%d%m%Y%I%M%S")+".mp3"
    ss = f.readline()

   
  f.close
  mixer.music.load('1.mp3')
  mixer.stop
  mixer.quit

# Удаляем последний предыдущий mp3 файл
  if(os.path.exists(mp3_nameold)):
    os.remove(mp3_nameold)


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
        return "не слышал"
     elif request=="warning":
         return "не понял "
     print(request)
     response = bot.get_response(request)
     print('Bot: ', response)
     return response
def main():
    bot1=ChatBot('Test')
    conv=open('chat1.txt','r').readlines()
    bot1.set_trainer(ListTrainer)
    bot1.train(conv)

    i=0
    while True:
     Soz=str(answer(bot1))
     print("sozdor= ",Soz)
     get_word(Soz)
     speak()
     i+=1
main()
