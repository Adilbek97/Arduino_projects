import os
from gtts import gTTS
from pygame import mixer
#engine =pyttsx.init()
#engine.say('Hello World')
#engine.runAndWait()
mixer.init()
i=0
name="hello.mp3"
while i<=3:

 tts = gTTS(text='Hello World i am bot',lang='en')

 tts.save(name)
 mixer.music.load(name)
 mixer.music.play()
 name=name+str(i)+".mp3"
#if(os.path.exists("C:\\Users\\ASHIROV\\Documents\\Phython projects\\hello.mp3") ):
#os.remove("C:\\Users\\ASHIROV\\Documents\\Phython projects\\hello.mp3")
#os.chdir("C:\\Users\\ASHIROV\\Documents\\Phython projects")
#os.system("hello.mp3")
 #path = os.path.join(os.path.abspath(os.path.dirname(__file__)), 'hello.mp3')
 #os.remove(path)
 i+=1



 mp3_nameold='111'
 mp3_name = "1.mp3"

# Инициализируем звуковое устройство
 mixer.init()
# Открываем файл с текстом и по очереди читаем с него строки в ss
 #f = open("text.txt","r")
 ss = Soz
#while ss!=" ":
    # Делим прочитанные строки на отдельные предложения
 split_regex = re.compile(r'[.|!|?|…]')
 sentences = filter(lambda t: t, [t.strip() for t in split_regex.split(ss)])

    # Перебираем массив с предложениями
 for x in sentences:
        if(x!=" "):
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
            if(os.path.exists(mp3_nameold) ):
                os.remove(mp3_nameold)
            mp3_nameold=mp3_name
            # Формируем имя mp3 файла куда будет сохраняться озвученный текст текущего предложения
            # В качестве имени файла используем текущие дату и время
            now_time = datetime.datetime.now()
            mp3_name = now_time.strftime("%d%m%Y%I%M%S")+".mp3"
           
 Soz=""
