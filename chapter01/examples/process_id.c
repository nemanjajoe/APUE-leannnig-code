#include "common.h"

int main(void){
	printf("hello world from process: %ld\n", (long) getpid());
	exit(0);
}
