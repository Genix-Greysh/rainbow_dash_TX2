# Rainbow Dash TX2

### Dependencies

##### Enable Arduino Support


The TX2 kernel will need to be rebuilt to enable support for the FTDI converter on the Arduino.

[Follow these instructions.](http://www.jetsonhacks.com/2017/03/25/build-kernel-and-modules-nvidia-jetson-tx2/) Before ./makeKernel.sh, execute this:

`sudo sed -i 's/.*CONFIG_USB_ACM.*/CONFIG_USB_ACM=y/' /usr/src/kernel/kernel-4.4/.config`

And then finish the instructions.

Finally: `sudo apt-get install arduino arduino-core`

Upon attaching an Arduino to the TX2, a device named beginning with ttyACM should be listed in your /dev/.

##### ROS Dependencies

[rosserial](https://github.com/ros-drivers/rosserial)

##### Terminal dependencies:

```
sudo apt-get install ros-kinetic-openni2-camera
sudo apt-get install ros-kinetic-openni2-launch
sudo apt-get install ros-kinetic-rosserial-arduino
sudo apt-get install ros-kinetic-rosserial
```

##### Set up your TX2 ROS to use Ground Station's roscore

Find your IP with:
`hostname -I` (case sensitive)

Add the following to your ~/.bashrc:
```
export ROS_IP=<IP>
export ROS_HOSTNAME=<IP>
export ROS_MASTER_URI=http://<HOST IP>:11311
```

And then: `source ~/.bashrc`

Acquire HOST IP from `hostname -I` on the ground control computer. See [Rainbow Dash Ground Control](http://github.com/Yonder-Dynamics/rainbow_dash_ground_control.git)
