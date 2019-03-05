from chatterbot.trainers import ListTrainer #method to train the chatbot
from chatterbot import ChatBot
bot=ChatBot('Test')
conv=open('chats.txt','r').readlines()
bot.set_trainer(ListTrainer)
bot.train(conv)
while True:
    request=input("You: ")
    response=bot.get_response(request)
    print('Bot: ',response)
