// CAN frame structure 
#include <sys/stat.h>

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <linux/types.h>
#include <fcntl.h>
#define EFF			(1 << 31)
#define RTR			(1 << 30)

#ifndef S_IRUSR
#define S_IRUSR 00400
#endif

#ifndef S_IWUSR
#define S_IWUSR 00200
#endif



/*
 * Controller Area Network Identifier structure
 *
 * bit 0-28	: CAN identifier (11/29 bit)
 * bit 29	: error frame flag (0 = data frame, 1 = error frame)
 * bit 30	: remote transmission request flag (1 = rtr frame)
 * bit 31	: frame format flag (0 = standard 11 bit, 1 = extended 29 bit)
 */
typedef __u32 canid_t;

struct can_frame {
	canid_t can_id;  /* 32 bit CAN_ID + EFF/RTR/ERR flags */
	__u8    can_dlc; /* data length code: 0 .. 8 */
	__u8    data[8] __attribute__((aligned(8)));
};


int main() {

  int fp;
  struct can_frame frame;

  int speed = 0; 
  float rpm = 0.0;
  float fuel = 100.0; 

  while(1) {

    // Open CAN device
    fp = open("/dev/can0", O_RDWR);
    
    // Update values

    rpm += 0.1;
    if(rpm > 3.5) {
      rpm = 2 + (rand()%15)/10.0; 
    }

    speed++;
    if(speed > 90) {
      speed = 80 + rand()%10; 
    }
    
    fuel -= 0.1; 
    if(fuel < 0) {
      fuel = 0;
    }
    
    // Construct CAN frame
    frame.can_id = 0x123; 
    frame.can_dlc = 3; 
    frame.data[0] = speed; 
    frame.data[1] = rpm;
    frame.data[2] = fuel;

    // Write frame to device
    write(fp, &frame, sizeof(frame)); 
    // Delay
    usleep(100000);

    // Close device
    close(fp);
  }

  return 0;
}