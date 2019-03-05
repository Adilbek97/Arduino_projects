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
def led_k():
    Data.write(bytes('1',"ascii"))
def led_j():
    Data.write(bytes('2',"ascii"))
def led_s():
    Data.write(bytes('3',"ascii"))
while True:
    sozdor=str(soz())
    print(sozdor)
    if(sozdor=='красный'):
        led_k()
    if(sozdor=='зелёный' or sozdor=='зелeный' or sozdor=='зелённый'):
        led_j()
    if(sozdor=='жёлтый'):
        led_s()
