from chatterbot.trainers import ListTrainer
from chatterbot import ChatBot


bot=ChatBot('Test')


conv=open('chats.txt','r').readlines()
file=open("train.txt",mode='a',encoding="utf-8")

bot.set_trainer(ListTrainer)

bot.train(conv)

while True:
    request = input()
    file.write("hello ?\n")
    response = bot.get_response(request)
    file.write("Bot: privet.\n")
    print('Bot: ', response)

file.close();
