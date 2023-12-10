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

  int front_left = 0; 
  int front_right = 0;
  int rear_left = 0;
  int rear_right =0;
  int rear = 0;
  int front = 0; 

  while(1) {

    // Open CAN device
    fp = open("/dev/can0", O_RDWR);
    
    // Update values
    front_left = rand() % 2;
    front_right = rand() % 2;
    rear_left = rand() % 2;
    rear_right = rand() % 2;
    front = rand() % 2;
    rear = rand() % 2;
    
    // Construct CAN frame
    frame.can_id = 0x789; 
    frame.can_dlc = 6; 
    frame.data[0] = front_left; 
    frame.data[1] = front_right;
    frame.data[2] = rear_left;
    frame.data[3] = rear_right;
    frame.data[4] = front;
    frame.data[5] = rear;

    // Write frame to device
    write(fp, &frame, sizeof(frame)); 
    // Delay
    usleep(10000000);

    // Close device
    close(fp);
  }

  return 0;
}