import speech_recognition as sr

r=sr.Recognizer()
with sr.Microphone()as source:
    print("Saying...")
    audio=r.listen(source)
try:
    print("usted: " + r.recognize_google(audio))

except sr.UnknownValueError:
    print("No se puede entender el audio")
except sr.RequestError as e:
    print("no se".format(e))
 
