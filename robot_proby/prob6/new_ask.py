#file=open('new_Asks.txt','a')
#soz=input()
#i=0
#while(i<3):
 #file.write(soz+'\n\n')
 #i+=1
#file.close()
import serial
data =serial.Serial('com4',9600)
f=input()
if(f==3):
    data.write(bytes('3',"ascii"))
if(f==0):
    data.write(bytes('0',"ascii"))
