# Install necessary libraries
# pip install opencv-python pyautogui numpy

import pyautogui
import cv2
import numpy as np

# Set screen resolution and other settings
resolution = (1920, 1080)
codec = cv2.VideoWriter_fourcc(*"XVID")  # "XVID" or "MJPG" can be used if "CLCO" isn't supported
filename = "Recording.mp4"
fps = 60.0

# Create VideoWriter object
out = cv2.VideoWriter(filename, codec, fps, resolution)
cv2.namedWindow("Live", cv2.WINDOW_NORMAL)
cv2.resizeWindow("Live", 480, 270)

while True:
    # Capture the screen
    img = pyautogui.screenshot()
    frame = np.array(img)
    frame = cv2.cvtColor(frame, cv2.COLOR_BGR2RGB)

    # Write frame to the file
    out.write(frame)

    # Display live recording
    cv2.imshow("Live", frame)

    # Exit recording on pressing 'q'
    if cv2.waitKey(1) == ord('q'):
        break

print("Screen Recording stopped")
out.release()
cv2.destroyAllWindows()
