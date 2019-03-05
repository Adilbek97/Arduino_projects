import serial
import speech_recognition as sr


def soz():
    r = sr.Recognizer()
    with sr.Microphone() as source:
        print("Скажите что-нибудь")
        audio = r.listen(source)

    try:
         return(r.recognize_google(audio, language="ru-RU"))
    except sr.UnknownValueError:
        print("Робот не расслышал фразу")
    except sr.RequestError as e:
        print("Ошибка сервиса; {0}".format(e))
    
Data = serial.Serial('com6',9600)
def led_on():
    Data.write(bytes('1',"ascii"))
def led_off():
    Data.write(bytes('0',"ascii"))
def led_go():
    Data.write(bytes('2',"ascii"))
def led_stop():
    Data.write(bytes('3',"ascii"))

while True:
    sozdor=str(soz())
    print(sozdor)
    if(str(sozdor)=='Включи свет'):
      led_on()
    elif(str(sozdor)=='можешь отключить'):
        led_off()
    elif(str(sozdor)=='ходи' or str(sozdor)=='хади'):
        led_go()
    elif(str(sozdor)=='стой'):
        led_stop()
        
       
