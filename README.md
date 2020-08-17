# Robotics Middleware Trial Python Turtle
## Prerequisite:
* Ubuntu 18.04 ([Native](https://www.linuxtechi.com/ubuntu-18-04-lts-desktop-installation-guide-screenshots/) or [Virtual](https://www.toptechskills.com/linux-tutorials-courses/how-to-install-ubuntu-1804-bionic-virtualbox/))
* python2/python3
* OpenCV (`pip/pip3 install opencv-python`)
* git (`sudo apt-get install git`)
* [RobotRaconteur](https://github.com/robotraconteur/robotraconteur/wiki/Download) (Follow instruction to download)
* [ROS Melodic](http://wiki.ros.org/melodic/Installation/Ubuntu) (Follow instruction to download)

Clone this repo before continuing the trial:
```
cd ~
git clone https://github.com/hehonglu123/ROS_RR_turtle_trial.git
```
## Sample Python Scripts:
Inside `Example/` folder, there're three basic ready-to-run example scripts:

`turtlebot.py`: A simple python turtle script drive the turtle around and change color on screen.

`keyboard.py`: A simple python script reads in arrow key on keyboard and print message based on key press.

`detection_red.py`: A python script with OpenCV module reads in an image `Examples/images/red.jpeg` as OpenCV object, filtered with red filter (`cv2.inRange()`), and go through [Connected Component Labelling](https://docs.opencv.org/3.4/d3/dc0/group__imgproc__shape.html) to find connected parts as red objects.

### detection.py:
Takes in an image with red circle, outputs a red filtered image.
### keyboard.py
Print command based on arrow key pressed.
### turtlebot.py
Initialize screen display, spawn a turtle and drive the turtle.

## Trial Instruction:
* ROS (https://github.com/hehonglu123/ROS_RR_turtle_trial/blob/master/ROS/src/Trial_instruction.md)
* RR (https://github.com/hehonglu123/ROS_RR_turtle_trial/blob/master/RR/Trial_instruction.md)

![](color_code.gif)

