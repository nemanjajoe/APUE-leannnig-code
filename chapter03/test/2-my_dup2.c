#include "../../apue.h"

int 
my_dup2(int fd, int fd2){
	
	int tempfd;
	long openmax = open_max();

	if(fd == fd2) 
		return fd2;

	if(lseek(fd2, 0, SEEK_CUR) >= 0)
		if(close(fd2) == -1)
			err_sys("close function error");
		
	while((tempfd = dup(fd)) < openmax)
		if(tempfd == fd2)
			return fd2;
}


int main(void){

	return 0;
}
