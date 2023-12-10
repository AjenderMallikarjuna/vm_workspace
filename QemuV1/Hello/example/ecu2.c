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

static void display(struct can_frame *msg)
{
	int i;

	printf("%03X [%01d] -", (msg->can_id & 0x1fffffff), msg->can_dlc);
	if(msg->can_id & (1 << 31)) printf("EFF "); else printf("SFF ");
	if(msg->can_id & (1 << 30)) printf("RTR-"); else printf("DAT-");
	for(i = 0; i < msg->can_dlc-1; i++) {
		printf("recieved [can] data 0x%02X 0x%02X", msg->data[i],msg->data[i+1]);
	}
	printf("\n");
}

int main() {

  int fp,ret=0; 
  struct can_frame frame,canrcv;

  float humidity = 30;
  float precipitation = 40; 
  float wind_speed = 10.0;
  float in_temp = 15.0;
  float out_temp = 25.0;

  while(1) {

    // Open CAN device
    fp = open("/dev/can0", O_RDWR);
    frame.can_id = 0x456; 
    frame.can_dlc = 5;

    frame.data[0] = (int)(humidity); 
    frame.data[1] = (int)(precipitation);
    frame.data[2] = (int)(wind_speed); 
    frame.data[3] = (int)(in_temp);
    frame.data[4] = (int)(out_temp);

    // Write frame to device
    ret = read(fp, &canrcv, sizeof(struct can_frame));
		if(ret>0 && (canrcv.data[0] > 0 || canrcv.data[1]>0) && canrcv.can_id == 564)
		{
			display(&canrcv);
		}
    usleep(10000);
    // Update sensor values
    humidity += rand()%5 - 2;
    precipitation += (rand()%3 - 1) / 10.0; 
    wind_speed += rand()%4 - 2; 
    in_temp += (rand()%3 - 1) / 2.0;
    out_temp += (rand()%3 - 1) / 2.0;
  // Write frame to device
    write(fp, &frame, sizeof(frame)); 
    // Delay
    usleep(100000);

    // Close device
    close(fp);
  }
  
  return 0;
}