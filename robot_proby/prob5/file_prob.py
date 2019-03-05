new_questions=open('new_Asks.txt','w')
i=0
def Upload():
    new_questions.close()
    new_questions=open('new_Asks.txt','a')
while(True):
    word=input()
    if((i+1)%3==0):
        break
    new_questions.write(word+'\n')
    i+=1
while(True):
    word=input()
    new_questions.write(word+'\n')
    i+=1

