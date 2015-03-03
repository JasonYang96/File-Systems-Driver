#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

#define IOCTL_SET_NWRITES 0

int main (int argc, char** argv) {
	int fd;
	if (argc != 2)
	{
		return -1;
	}
	if ((fd = open("/tmp/cs111/lab3-jasoniful/test/tmp1234", O_CREAT | O_NONBLOCK)) < 0)
	{
		perror(NULL);
		exit(-1);
	}
	if(ioctl(fd, IOCTL_SET_NWRITES, atoi(argv[1])) < 0)
	{
	perror(NULL);
	exit(-1);
	}
	close(fd);	
}
