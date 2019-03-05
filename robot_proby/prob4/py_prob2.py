import speech_recognition as sr
import pyttsx3;
from chatterbot.trainers import ListTrainer #method to train the chatbot
from chatterbot import ChatBot
import serial
class Chatterbot:#chat bot 
 def __init__(self):
     bot = ChatBot('Test')
     conv=open('chats.txt','r').readlines()

 def answer(self,soz:str):
    bot = ChatBot('Test')
    request=soz
    response=bot.get_response(request)
    #print(str(response))
    return response

def recog():#speech to text
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
    
def saying(soz:str):#text to speech
  engine = pyttsx3.init();
  engine.say(soz);
  engine.runAndWait() ;
bot1=Chatterbot()
data =serial.Serial('com4',9600)
def jan():
    data.write(bytes('1',"ascii"))
def och():
    data.write(bytes('0',"ascii"))
def moyun_k():
    data.write(bytes('2',"ascii"))
    
def main():
  och()
  word=str(recog())
  print(word)
  joop=bot1.answer(word)
  jan()
  saying(joop)
while(True):
 main()
  
