import serial
SerialData=serial.Serial('COM5',9600)
def strok(strk):
    st=""
    for i in strk:
        if i in "1234567890":
            st+=i
    return st
while (1==1):
    if(SerialData.inWaiting()>0):
        mydata=SerialData.readline()
        stk=str(mydata)
        print(strok(stk))

    
