# Rainbow Dash TX2

### Dependencies

[rosserial](https://github.com/ros-drivers/rosserial)

```
sudo apt-get install ros-kinetic-rosserial-arduino
sudo apt-get install ros-kinetic-rosserial
```

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
