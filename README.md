# Robotics Middleware Trial Python Turtle

This is a evaluation trial on Robot Operating System ([ROS](https://www.ros.org/)), Robot Operating System 2 ([ROS2](https://docs.ros.org/en/foxy/index.html)) and Robot Raconteur ([RR](robotraconteur.com)) using python turtle module. Participants are provided with ready-to-run example scripts, and the goal upon completion is to integrate those standalone python codes with ROS/ROS2/RR and control the on screen turtle with a webcam.

## Prerequisite:

### System

#### ROS
* Ubuntu 20.04 ([Native](https://releases.ubuntu.com/20.04/))
* python3.8
* OpenCV (`sudo apt-get install python3-opencv`)
* git (`sudo apt-get install git`)
* [ROS Noetic](http://wiki.ros.org/noetic/Installation/Ubuntu) (Follow instruction to download)

#### ROS2

##### Ubuntu 20.04 as the OS
* Ubuntu 20.04 ([Native](https://www.linuxtechi.com/ubuntu-20-04-lts-installation-steps-screenshots/))
* python3
* OpenCV (`pip3 install opencv-python --user`)
* git (`sudo apt-get install git`)
* [ROS2 Foxy](https://docs.ros.org/en/foxy/Installation/Ubuntu-Install-Debians.html) (Follow instruction to download)
* [Colcon](https://docs.ros.org/en/foxy/Tutorials/Colcon-Tutorial.html#install-colcon), simply run the command
```
sudo apt install python3-colcon-common-extensions

```

##### Win10 as the OS
* Window 10
* Follow this [link](https://docs.ros.org/en/foxy/Installation/Windows-Install-Binary.html#install-visual-c-redistributables) to install all requirements (ROS2 foxy/python3.8/OpenCV)
* Install RTI Connext [Link](https://docs.ros.org/en/foxy/Installation/DDS-Implementations.html#windows-binary-install)
* Go to C:\Python38. Copy python and paste it with the new name `python_d`.
* [Colcon](https://docs.ros.org/en/foxy/Tutorials/Colcon-Tutorial.html#install-colcon), simply run the command
```
pip install -U colcon-common-extensions
```


##### Docker
* Follow these instruction to install [docker-engine](https://docs.docker.com/engine/install/ubuntu/) on ubuntu.
* Fire up container with the following commands
```
cd ~/robotics_middleware_trial_python_turtle_ros2
source docker_run_ros2.sh
```
* Join a conatiner with the following commands
```
```
cd ~/robotics_middleware_trial_python_turtle_ros2
source docker_join_ros2.sh
```
```

#### RR
* Ubuntu 20.04 ([Native](https://releases.ubuntu.com/20.04/))
* python3.8
* OpenCV (`sudo apt-get install python3-opencv`)
* git (`sudo apt-get install git`)
* [RobotRaconteur 0.14](https://github.com/robotraconteur/robotraconteur/wiki/Download) (Follow instruction to download)

### Repo
Clone this repo before continuing the trial:
```
cd ~
git clone https://github.com/hehonglu123/Robotics_Middleware_Trial_Python_Turtle.git
```

## Question Post:
During the trial process, if you encounter questions specific about this trial, feel free to ask in the workspace. For questions about RobotRaconteur or ROS, please go to http://wiki.ros.org/answers.ros.org for ROS/ROS2, and https://www.robotraconteur.com/forum for RR. Please include the following while posting your questions:
* Setup: Ubuntu 18.04/ Ubuntu 20.04, ROS Noetic/ROS2 Foxy/RR 0.14
* ROS/ROS2/RR Error Message
* Related scripts


## Pre-trial Python Scripts:
Inside `Example/` folder, there're three basic ready-to-run example scripts, and they could be run simply by `$ python <script name>`. Please run each one individually and make sure you have a good understanding of them. 
* `turtlebot.py`: A simple python turtle script drive the turtle around and change color on screen. 
* `keyboard.py`: A simple python script reads in arrow key on keyboard and print message based on key press.
* `detection.py`: A python script with OpenCV module reads in an image `Examples/images/red.jpeg` as OpenCV object, filtered with red filter (`cv2.inRange()`), display the filtered image, and go through [Connected Component Labeling](https://docs.opencv.org/3.4/d3/dc0/group__imgproc__shape.html) to find connected parts as red objects.

### `turtlebot.py`

The python turtle module is imported by
```
import turtle
``` 
And the display and turtle is initialized by
```
screen = turtle.Screen()
t1 = turtle.Turtle()
t1.shape("turtle")
screen.bgcolor("lightblue")
```
After that, we have a `drive()` function and a `setpose()` function which drive the turtle based on given speed and set its absolute pose on screen respectively.
```
def drive(turtlebot,move_speed,turn_speed):  #Drive function, update new position, this is the one referred in definition

	turtlebot.forward(move_speed)
	turtlebot.left(turn_speed)

def setpose(turtlebot,x,y,angle):            #set a new pose for turtlebot

	turtlebot.setpos(x,y)
	turtlebot.seth(angle)
```
Inside the first `for` loop, the turtle is driven forward:
```
for i in range(50):
	drive(t1,10,0)
```
Then the turtle color is changed to red:
```
t1.pencolor("red")
```
In the second `for` loop, the turtle is driven in a spiral shape:
```
for i in range(50):
	drive(t1,10,i)
```

### `keyboard.py`

The system is set and initialzied to read keyboard press:
```
import termios, fcntl, sys, os

#keyboard reading settings
fd = sys.stdin.fileno()
oldterm = termios.tcgetattr(fd)
newattr = termios.tcgetattr(fd)
newattr[3] = newattr[3] & ~termios.ICANON & ~termios.ECHO
termios.tcsetattr(fd, termios.TCSANOW, newattr)
oldflags = fcntl.fcntl(fd, fcntl.F_GETFL)
fcntl.fcntl(fd, fcntl.F_SETFL, oldflags | os.O_NONBLOCK)
```
Above settings set the terminal to read characters in nonblocking mode.

In the while loop, the keyboard buffer is kept read in and detected. The arrow key starts with `\x1b[`, and if `q` is pressed, it breaks out of the loop and exit.
```
try:
  while True:
        try:
            #read input and print "command"
            c = sys.stdin.read()
            if "\x1b[A" in c:
                print("drive forward")          ####Drive forward
            if "\x1b[B" in c:
                print("drive backward")         ####Drive backward               
            if "\x1b[C" in c:
                print("drive right")            ####Drive right
            if "\x1b[D" in c:
                print("drive left")             ####Drive left
            if "q" in c:
                break

        except IOError: pass
        except TypeError: pass
```
The two `except` here prevents empty buffer error. And finally up exit the system is set back to normal:
```
#finish reading keyboard input
finally:
    termios.tcsetattr(fd, termios.TCSAFLUSH, oldterm)
    fcntl.fcntl(fd, fcntl.F_SETFL, oldflags)
```


### `detection_red.py`
This is an example detecting if an image containing large section of red color. 

First the libraries are imported:
```
import cv2
import numpy as np
```
And then the image is read in as an OpenCV object with metadate variables:
```
image=cv2.imread("images/red.jpeg")        #read in image
image_size=len(image)*len(image[0]) #get image size
image_dimension=np.array([len(image),len(image[0])])    #get image dimension
```
Then the image is filtered with red filter, and display the filtered result on screen:
```
filtered_red=cv2.inRange(image,np.array([5,5,200]),np.array([200,200,255])) #filter the image with upper bound and lower bound in bgr format
#show filtered image
cv2.namedWindow("Image")
cv2.imshow("Image",filtered_red)
cv2.waitKey()
```

![](Examples/images/red.jpeg) 
![](Examples/images/filtered_red.png)


As a result, this script will read in the image at left and output image on the right. The second step is to filter out the "noise", so the Connect Component Labeling is used here on the filtered image:
```
#run color connected components to filter the counts and centroid
retval, labels, stats, centroids=cv2.connectedComponentsWithStats(filtered_red) #run CCC on the filtered image
idx=np.where(np.logical_and(stats[:,4]>=0.01*image_size, stats[:,4]<=0.1*image_size))[0]    #threshold the components to find the best one
for i in idx:
    if np.linalg.norm(centroids[i]-image_dimension/2.)<50:  #threshold again, only for ones near the center
        print("red detected")
```



## Trial Instruction:
* ROS (https://github.com/robotraconteur-contrib/Robotics_Middleware_Trial_Python_Turtle/blob/master/ROS/src/Trial_instruction.md)
* ROS2 (https://github.com/robotraconteur-contrib/Robotics_Middleware_Trial_Python_Turtle/blob/master/ROS2/Trial_instruction.md)
* RR (https://github.com/robotraconteur-contrib/Robotics_Middleware_Trial_Python_Turtle/blob/master/RR/Trial_instruction.md)

The final goal is to integrate those standalone python examples with ROS/RR, such that the python turtle will be able to drive based on what webcam sees.

![](color_code.gif)

