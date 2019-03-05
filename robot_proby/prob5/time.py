from datetime import datetime as dt
import pyttsx3;
import datetime
def currentTime():
    month={1:"Январь",2:"Февраль",3:"Март",4:"Апрель",5:"Май",6:"Июнь",7:"Июль",8:"Август",9:"Сентябрь",10:"Октябрь",11:"Ноябрь",12:"Декабрь"}
    day={0:"Понедельник",1:"Вторник",2:"Вторник",3:"Среда",4:"Четверг",5:"Пятница",6:"Воскресенье"}
    now =dt.now()
    tday=datetime.date.today()
    word=str(now.year)+"й год "+str(now.day )+"й "+month[int(now.month)]+' '+day[int(tday.weekday())]+' '+str(now.hour)+" часов "+str(now.minute)+" минут "+str(now.second)+" секунд"
    return str(word)
#print("weakday ", tday.weekday())
word1=currentTime()
print(word1)
def saying(soz:str):#text to speech
  engine = pyttsx3.init();
  engine.say(soz);
  engine.runAndWait();
  #word=str(now.year)+"й год "+str(now.day )+"й "+month[int(now.month)]+day[6]+str(now.hour)+"часов "+str(now.minute)+" минут"+str(now.second)+" секунд"
saying(word1)
