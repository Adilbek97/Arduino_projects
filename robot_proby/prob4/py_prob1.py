import speech_recognition as sr
import pyttsx3;
from chatterbot.trainers import ListTrainer #method to train the chatbot
from chatterbot import ChatBot
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
        audio = r.listen(source,phrase_time_limit=5)
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
def main():
  word=str(recog())
  print(word)
  if(str(word) == 'null' or str(word) == 'oshibka'):
    print("not ")
  else:
      joop=bot1.answer(word)
      print(joop)
      saying(joop)
    
while(True):
 main()
  
