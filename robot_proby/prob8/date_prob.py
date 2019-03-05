from datetime import datetime as dt
import pyttsx3;
import datetime
now =dt.now()
tday=datetime.date.today()
print(now)
print("year ",now.year)
print("month ",now.month)
print("day ",now.day)
print("hour ",now.hour)
print("minute ",now.minute)
print("second ",now.second)

print("weakday ", tday.weekday())
month={7:"Июль"}
day={0:"Понедельник",1:"Вторник",6:"Воскресенье"}
keyMonth=int(now.month)
keyDay=int()
word=str(now.year)+"й год "+str(now.day )+"й "+month[int(now.month)]+day[int(tday.weekday())]+str(now.hour)+"часов "+str(now.minute)+" минут"+str(now.second)+" секунд"
print(word)
def saying(soz:str):#text to speech
  engine = pyttsx3.init();
  engine.say(soz);
  engine.runAndWait();
saying(word)
