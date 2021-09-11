#include "../../apue.h"
#include <errno.h>
#include <limits.h>
#include <sys/resource.h>
#include <sys/time.h>

#ifdef OPEN_MAX
static long openmax = OPEN_MAX;
#else
static long openmax = 0;
#endif

#define OPEN_MAX_GUESS 256

long 
open_max(void);

int main(void){
	printf("max open file: %ld\n", open_max());
	exit(0);
}

long
open_max(void){

	struct rlimit r1;
	if(openmax == 0){
		errno = 0;
		if((openmax = sysconf(_SC_OPEN_MAX)) < 0
		|| openmax == LONG_MAX){
			if(getrlimit(RLIMIT_NOFILE, &r1) < 0)
				err_sys("sysconf error for _SC_OPEN_MAX");
			if(r1.rlim_max == RLIM_INFINITY)
				openmax = OPEN_MAX_GUESS;
			else
				openmax = r1.rlim_max;

		}
	}
	return (openmax);
}
