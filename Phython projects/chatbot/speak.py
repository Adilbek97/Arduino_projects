from gtts import gTTS
import pyglet
import time,os
text="здравствуйте, как дело"
tts=gTTS(text = text,lang='ru')
tts.save("hello.mp3")
os.system(" hello.mp3")
#filename='temp.mp3'
#file.save(filename)

#music=pyglet.media.load('hello.mp3')
#music.play()
#pyglet.app.run()

#time.sleep(music.duration)
#os.remove("hello.mp3")
