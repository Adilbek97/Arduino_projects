import speech_recognition as sr
import pyttsx3
import serial
import datetime
from datetime import datetime as dt
import requests
from chatterbot import ChatBot
from chatterbot.trainers import ListTrainer



class Chatterbot:  # chat bot
    def __init__(self):
        bot = ChatBot('Test')
        conv = open('chats.txt', 'r').readlines()

        # i=0
        # while(i<4):
        #     bot.set_trainer(ListTrainer)
        #     bot.train(conv)
        #     i+=1

    def answer(self, soz: str):
        bot = ChatBot('Test')
        request = soz
        response = bot.get_response(request)
        # print(str(response))
        return response


def saying(word):
    engine = pyttsx3.init()
    engine.say(word)
    engine.runAndWait()

def recording(r):
    with sr.Microphone() as source:
        r.adjust_for_ambient_noise(source, duration=1)
        print("Скажите что-нибудь")
        audio = r.listen(source, phrase_time_limit=3)
    try:
        return (r.recognize_google(audio, language="ru-RU"))
    except sr.UnknownValueError:
        print("Робот не расслышал фразу")
        return "null"
    except sr.RequestError as e:
        print("Ошибка сервиса; {0}".format(e))
        return "oshibka"


def wait_question(r, bot):
    print('qet question')

    while True:
        word = str(recording(r))
        print(word)
        if str(word) == 'null':
            print('Null')
            continue
        else:
            answer = bot.answer(word)
            print(answer)
            saying(answer)

def questions_answer():
    r = sr.Recognizer()
    bot = Chatterbot()

    while True:
        word = recording(r)
        print(word)

if __name__ == '__main__':
    r = sr.Recognizer()
    bot = Chatterbot()
    while True:
        wait_question(r, bot)






