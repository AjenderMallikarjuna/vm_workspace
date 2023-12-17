# QEMU CAN Bus Emulation for Automotive Testing

## Overview

As automotive systems become more complex, the demand for rapid and continuous testing is critical. This master's project explores the use of emulation as a solution for frequent validation in a flexible virtual environment.

The system utilizes QEMU and Buildroot to replicate CAN bus communications between electronic control units (ECUs). It is centered around an emulated Versatile PB board with a custom CAN bus driver interfacing with simulated Kvaser PCI and SJA1000 hardware models.

Three distinct "dummy" ECU applications were developed to transmit sensor data as CAN messages. These ECUs interact with a Qt-based virtual dashboard application, providing real-time telemetry visualizations.

Docker containerization ensures modularity, portability, and scalability of the overall system. This emulation approach offers an alternative to traditional hardware-in-the-loop testing paradigms for efficient and robust CAN bus system development and testing.

![ecu_comm](https://github.com/AjenderMallikarjuna/vm_workspace/assets/47362832/cdbd2919-1124-43f2-ba52-a1ec09329803)
![System_arch](https://github.com/AjenderMallikarjuna/vm_workspace/assets/47362832/71bf58cc-8a7a-42a7-8dd8-cafc91c87cb6)


## Repository Structure

- `docker/`             : contains docker files and docker-compose files(requrired environment to build and run qemu from src)
- `Hello/`              : User files, contains ecu appliacations and custon can_pci driver files
- `qemu-8.0.1/`         : QEMU src files
- `Output/`             : Contains kernel image, root file system, device tree files 
- `compile_user_program/`: script file to compile user application files with arm-cross-compiler provided by buildroot and move compiled file to rootfs
- `vmconfig/`          : configration script to run qemu with requried startup options

### Prerequisites
- 'Docker'
- 'python>3.8'
  
# Testing the Environment Setup
## Host-Side Configuration
### Load CAN Modules 
```
modprobe can-raw
modprobe vcan
```

### Create a virtual CAN Interface
```
ip link add dev vcan0 type vcan
ip link set vcan0 up
```

### clone the repository and navigate to Docker directory
cd Docker
docker-compose build           
docker-compose run my_qemu

### inside the docker navigate to qemu-8.1.0 path
````
make install
````

### launch custom kernel image with qemu using vmconfig script
```
../vmconfig ecu1
```       

### you will see the starup messages and finally buildroot login type root to login 
```
udhcpc: started, v1.31.0
random: mktemp: uninitialized urandom read (6 bytes read)
udhcpc: sending discover
udhcpc: sending discover
udhcpc: sending discover
udhcpc: no lease, failing
FAIL

Welcome to Buildroot
buildroot login: root 
```
### inside the Guest system load required can_pci driver
```
./load
```

### launch ecu1 application
```
./ecu1
```


### similarly launch another docker containers and follow all the above steps to launch guest system and finally start
```
./ecu2
```

### launch third ecu application in a similar way
```
./ecu3
```

# Finally on the Host side 
## navigate to virtual dashboard folder
### launch virtual dashboard using 
```
python3 virtual-dashboard.py
```

![dashboard](https://github.com/AjenderMallikarjuna/vm_workspace/assets/47362832/6bb5a097-3fba-4444-a296-96acc10e55d5)
