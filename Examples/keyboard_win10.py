import keyboard
import time
#TODO: import RR/ROS libraries and ROS message/service type 

#TODO: Initialize ROS/RR node
#ROS: create publisher to publish Twist message to corresponding topic name

#RR: connect to service with url

print("Running")
print("Press Arrow Key to Control Turtle")
print("Press q to quit")

#TODO: hold the script running with ROS/RR way
while True:

    # #TODO: ROS create message type variable, publish command
    # #TODO: RR call drive function
    if keyboard.is_pressed(keyboard.KEY_UP): # Detects if key is backspace
        print("drive forward")
    elif keyboard.is_pressed(keyboard.KEY_DOWN): # Detecs if key is the enter(return) key
        print("drive backward")
    elif keyboard.is_pressed('left'): # Detecs if key is the enter(return) key
        print("drive left")
    elif keyboard.is_pressed('right'): # Detecs if key is the enter(return) key
        print("drive right")
    else:
        pass 
    
    time.sleep(0.01)