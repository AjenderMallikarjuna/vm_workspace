#include <linux/init.h>
#include <linux/module.h>
#include <linux/device.h>
#include <linux/kernel.h>
#include <linux/fs.h>
#include <linux/uaccess.h>

#define DEVICE_NAME "simplechar"
#define CLASS_NAME  "simpchar"

struct person {
    char name[100];
    int age;
    char address[200];
};
MODULE_LICENSE("GPL");
MODULE_AUTHOR("ChatGPT");
MODULE_DESCRIPTION("A simple Linux char driver");
MODULE_VERSION("0.1");

static int    majorNumber;
static char   message[256] = {0};
static short  size_of_message;
static struct class*  simplecharClass  = NULL;
static struct device* simplecharDevice = NULL;

// Function prototypes
static int     dev_open(struct inode *, struct file *);
static int     dev_release(struct inode *, struct file *);
static ssize_t dev_read(struct file *, char *, size_t, loff_t *);
static ssize_t dev_write(struct file *, const char *, size_t, loff_t *);

// File operations structure
static struct file_operations fops =
{
   .open = dev_open,
   .read = dev_read,
   .write = dev_write,
   .release = dev_release,
};

static int __init simplechar_init(void) {
   printk(KERN_INFO "SimpleChar: Initializing the SimpleChar LKM\n");

   majorNumber = register_chrdev(0, DEVICE_NAME, &fops);
   if (majorNumber < 0) {
      printk(KERN_ALERT "SimpleChar failed to register a major number\n");
      return majorNumber;
   }

   simplecharClass = class_create(THIS_MODULE, CLASS_NAME);
   if (IS_ERR(simplecharClass)) {
      unregister_chrdev(majorNumber, DEVICE_NAME);
      printk(KERN_ALERT "Failed to register device class\n");
      return PTR_ERR(simplecharClass);
   }

   simplecharDevice = device_create(simplecharClass, NULL, MKDEV(majorNumber, 0), NULL, DEVICE_NAME);
   if (IS_ERR(simplecharDevice)) {
      class_destroy(simplecharClass);
      unregister_chrdev(majorNumber, DEVICE_NAME);
      printk(KERN_ALERT "Failed to create the device\n");
      return PTR_ERR(simplecharDevice);
   }

   return 0;
}

static void __exit simplechar_exit(void) {
   device_destroy(simplecharClass, MKDEV(majorNumber, 0));
   class_unregister(simplecharClass);
   class_destroy(simplecharClass);
   unregister_chrdev(majorNumber, DEVICE_NAME);
   printk(KERN_INFO "SimpleChar: Goodbye from the LKM!\n");
}

static int dev_open(struct inode *inodep, struct file *filep) {
   printk(KERN_INFO "SimpleChar: Device has been opened\n");
   return 0;
}

static ssize_t dev_read(struct file *filep, char *buffer, size_t len, loff_t *offset) {
 struct person kernel_person = {
        .name = "John Doe",
        .age = 30,
        .address = "123 Elm Street"
    };

    if (len != sizeof(kernel_person)) {
        printk(KERN_INFO "SimpleChar: Invalid output size\n");
        return -EINVAL;
    }

    if (copy_to_user(buffer, &kernel_person, sizeof(kernel_person))) {
        printk(KERN_INFO "SimpleChar: Failed to send person details to user\n");
        return -EFAULT;
    }

    return sizeof(kernel_person);
}

static ssize_t dev_write(struct file *filep, const char *buffer, size_t len, loff_t *offset) {
    struct person user_person;

    if (len != sizeof(user_person)) {
        printk(KERN_INFO "SimpleChar: Invalid input size\n");
        return -EINVAL;
    }

    if (copy_from_user(&user_person, buffer, len)) {
        printk(KERN_INFO "SimpleChar: Failed to read person details from user\n");
        return -EFAULT;
    }

    // You can now access user_person fields, for example:
    printk(KERN_INFO "SimpleChar: Received name: %s, age: %d, address: %s\n", 
           user_person.name, user_person.age, user_person.address);

    return len;
}

static int dev_release(struct inode *inodep, struct file *filep) {
   printk(KERN_INFO "SimpleChar: Device successfully closed\n");
   return 0;
}

module_init(simplechar_init);
module_exit(simplechar_exit);
