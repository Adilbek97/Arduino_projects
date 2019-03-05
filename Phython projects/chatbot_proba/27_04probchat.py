from chatterbot.trainers import ListTrainer
from chatterbot import ChatBot
bot=ChatBot('Test')
conv=open('chat1.txt','r').readlines()
bot.set_trainer(ListTrainer)
bot.train(conv)
request = input()
    # if request=="null":
     #   return "Говорите громче"
     #elif request=="warning":
      #   return "ни понял "
print(request)
response = bot.get_response(request)
print(str( response))
