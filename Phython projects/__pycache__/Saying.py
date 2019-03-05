# Чтение вслух
import os
import re
from pygame import mixer
import datetime
import time
from gtts import gTTS
class bot:
 def __init__(self):
     mixer.init()
     mp3_nameold='111'
     mp3_name = "1.mp3"
     f = open("text.txt","r")
     ss = f.readline()
 def get_word(self,soz):
    file=open("text.txt", "w") 
    file.write(str(soz))
    file.close()
 def speak(self):
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

# Устанвливаем текущим файлом 1.mp3 и закрываем звуковое устройство
# Это нужно чтобы мы могли удалить предыдущий mp3 файл без колизий
  mixer.music.load('1.mp3')
  mixer.stop
  mixer.quit

# Удаляем последний предыдущий mp3 файл
  if(os.path.exists(mp3_nameold)):
    os.remove(mp3_nameold)

def main():
  soz1=input("sozdu kirgiz ")
  bot2=bot()
  bot2.get_word(soz1)
  bot2.speak()

main()
  

            
