#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>

#define DEVICE_PATH "/dev/simplechar0"

struct person {
    char name[100];
    int age;
    char address[200];
};

int main() {
    int ret, fd;
    char write_buf[100];
    char read_buf[256];
    struct person p = {
    .name = "Alice",
    .age = 25,
    .address = "456 Maple Drive"
    };
    struct person p_read;
    // Open the device
    fd = open(DEVICE_PATH, O_RDWR);
    if (fd < 0) {
        perror("Failed to open the device");
        return 1;
    }

    printf("Type a short message to write to the kernel module:\n");
   // scanf("%[^\n]%*c", write_buf); // Read until newline

    // Write the message to the device
    ret = write(fd, &p, sizeof(p));
    if (ret < 0) {
        perror("Failed to write to the device");
        close(fd);
        return 1;
    }

    printf("Press Enter to read back from the device...");
    getchar(); // Wait for Enter

    // Read the message back from the device
    // ret = read(fd, read_buf, sizeof(read_buf));
    // if (ret < 0) {
    //     perror("Failed to read from the device");
    //     close(fd);
    //     return 1;
    // }
    // printf("Received message: [%s]\n", read_buf);

    read(fd, &p_read, sizeof(p_read));
    printf("Name: %s, Age: %d, Address: %s\n", p_read.name, p_read.age, p_read.address);


    // Close the device
    close(fd);
    return 0;
}
