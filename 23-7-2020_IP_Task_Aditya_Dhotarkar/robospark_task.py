import cv2
# Reading the image
img = cv2.imread(r"Robospark Task\text.jpg",cv2.IMREAD_UNCHANGED)
cv2.imshow("Original",img)

# Converting the image into greyscale and hsv using cvt function
gray = cv2.cvtColor(img,cv2.COLOR_RGB2GRAY)
hsv = cv2.cvtColor(img,cv2.COLOR_RGB2HSV)

# Printing the Image
cv2.imshow("Greyscale Image",gray)
cv2.imshow("HSV Image",hsv)

# Resizing the Image
img2 = cv2.resize(img,(500,500))
cv2.imshow("After Resizing",img2)

# Saving the Image into the folder
cv2.imwrite(r"Robospark Task/gray_img.jpg",gray)
cv2.imwrite(r"Robospark Task/hsv_img.jpg",hsv)
cv2.imwrite(r"Robospark Task/resize_img.jpg",img2)

# Printing the size and shape of old and new image
print("Original Image Shape: ",img.shape)
print("Original Image Size: ",img.size)
print("Resize Image Shape: ",img2.shape)
print("Resize Image Size: ",img2.size)

# Apply Thresholding Image
ret,thresh = cv2.threshold(gray,150,255,cv2.THRESH_BINARY)
ret,thresh1 = cv2.threshold(gray,150,255,cv2.THRESH_BINARY_INV)

# Printing the Thresholding Images
cv2.imshow("Binary Thresholding",thresh)
cv2.imshow("Binary INV Threshholding",thresh1)

# Saving the Thresholding images into folder
cv2.imwrite(r"Robospark Task/gray_thresh_binary.jpg",thresh)
cv2.imwrite(r"Robospark Task/gray_thresh_binary_INV.jpg",thresh1)

# Adaptive Thresholding
adaptive_thresh = cv2.adaptiveThreshold(gray,255,cv2.ADAPTIVE_THRESH_MEAN_C,cv2.THRESH_BINARY,5,2)
adaptive_thresh1 = cv2.adaptiveThreshold(gray,255,cv2.ADAPTIVE_THRESH_GAUSSIAN_C,cv2.THRESH_BINARY,5,2)

# printing the adaptive threshold image
cv2.imshow("Adaptive", adaptive_thresh)
cv2.imshow("Adaptive Gaussian", adaptive_thresh1)

# Saving the Adaptive Thresholding images into folder
cv2.imwrite(r"Robospark Task/gray_adaptive_thresh_mean.jpg", thresh)
cv2.imwrite(r"Robospark Task/gray_adaptive_thresh_gaussian_INV.jpg", thresh1)

cv2.waitKey(0)
cv2.destroyAllWindows()

