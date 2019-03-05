import matplotlib.pyplot as plt
import numpy as np
import cv2
#                               0
img = cv2.imread('images.jpg',cv2.IMREAD_GRAYSCALE)
img = cv2.rectangle(img,(384,0),(510,128),(0,255,0),3)
#IMREAD_COLOR = 1
#IMREAD_UNCHANGED = -1

#cv2.imshow('image', img)
#cv2.waitKey(0)
#cv2.destroyAllWindows()

plt.imshow(img, cmap='gray', interpolation='bicubic')
plt.plot([25,20],[25,90],'c',linewidth=3)
plt.show()
