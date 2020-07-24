# Importing Libraries
import cv2
import numpy as np

# Reading image from the folder
img = cv2.imread(r"Day 2 Files\Task Image\rose_flower.jpg")

# Lower and Upper Bound Objects
bgrl = np.array([90,0,120],np.uint8)
bgrh = np.array([215,255,255],np.uint8)

# Color Masking
mask = cv2.inRange(img,bgrl,bgrh)

# Defining a Kernal
kernal = np.array(([3, 2, 6],[5, 7, 8],[2, 4, 8]),np.uint8)

# Blurring Operations
# Filter 2D
filter = cv2.filter2D(mask,-1,kernal)

# Defining pot image to draw flower pot
pot = cv2.filter2D(mask,-1,kernal)

# Averaging
avg = cv2.blur(mask,(5,5))

# Gaussian Blurring
gaus_blur = cv2.GaussianBlur(mask,(5,5),0)

# Median Blurring
med_blur = cv2.medianBlur(mask,5)

# Bilateral Blurring
bilateral = cv2.bilateralFilter(mask,5,111,111)

# Making Flower Pot Design
# Drawing left side line of pot
pot = cv2.line(pot,(10,450),(38 ,746),(42,42,165),5)

# Drawing right side line of plot
pot = cv2.line(pot,(210,450),(165,746),(42,42,165),5)

# Drawing horizontal line between two lines
pot = cv2.line(pot,(38,746),(165,746),(42,42,165),5)

# Drawing ellipse between two lines
pot = cv2.ellipse(pot,(110,450),(103,30),0,0,360,(42,42,165),-1)

# Font Styling HERSHEY DUPLEX
font = cv2.FONT_HERSHEY_DUPLEX

# Printing the flower name
cv2.putText(pot,"ROSE",(200,80),font,3,(80,0,220),5,cv2.LINE_AA)

# Displaying Output
cv2.imshow("Original",img)
cv2.imshow("Masked",mask)
cv2.imshow("Flower with Pot",pot)
cv2.imshow("Filter 2D",filter)
cv2.imshow("Averaging",avg)
cv2.imshow("Gaussian Blurring",gaus_blur)
cv2.imshow("Median Blurring",med_blur)
cv2.imshow("Bilateral Blurring",bilateral)

# Saving Images
cv2.imwrite("Day 2 Files/Mask.jpg",mask)
cv2.imwrite("Day 2 Files/Filter2D.jpg",filter)
cv2.imwrite("Day 2 Files/Averaging_blur.jpg",avg)
cv2.imwrite("Day 2 Files/Gaussian_blur.jpg",gaus_blur)
cv2.imwrite("Day 2 Files/Median_blur.jpg",med_blur)
cv2.imwrite("Day 2 Files/Bilateral_blur.jpg",bilateral)
cv2.imwrite("Day 2 Files/Flower_Pot_Text.jpg",pot)

# Exit Controls
cv2.waitKey(0)
cv2.destroyAllWindows()