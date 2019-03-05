import speech_recognition as sr
from chatterbot.trainers import ListTrainer
from chatterbot import ChatBot
import os
import re
from pygame import mixer
import datetime
import time
from gtts import gTTS
import speak_my

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

#print(recog())
def answer(bot):
     request = recog()
     if request=="null":
        return "ujdjhbnt uhjvxt"
     elif request=="warning":
         return "ujdjhbnt "
     print(request)
     response = bot.get_response(request)
     print('Bot: ', response)
     return response



    
def main():
    #bot=ChatBot('Test')
    #conv=open('chats.txt','r').readlines()
    #bot.set_trainer(ListTrainer)
    #bot.train(conv)

    Soz=input()
    #Soz=str(answer(bot))
    say(Soz)
    print("sozdor= ",Soz)
main()
