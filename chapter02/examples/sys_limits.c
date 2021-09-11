#include "common.h"
#include <limits.h>

int main(void){
	printf("below are the compile time limits of magic numbers and constants of this system:\n\n");

	printf("--------char type limits---------\n");
	printf("bits in a char   : %d\n", CHAR_BIT);
	printf("max value of char: %d\n", CHAR_MAX);
	printf("min value of char: %d\n", CHAR_MIN);
	printf("max value of signed char  : %d\n", SCHAR_MAX);
	printf("min value of signed char  : %d\n", SCHAR_MIN);
	printf("max value of unsigned char: %d\n\n", UCHAR_MAX);
	
	printf("--------int type limits---------\n");
	printf("max value of int         : %d\n", INT_MAX);
	printf("min value of int         : %d\n", INT_MIN);
	printf("max value of unsinged int: %u\n\n", UINT_MAX);

	printf("--------short type limits-------\n");
	printf("max value of short         : %d\n", SHRT_MAX);
	printf("min value of short         : %d\n", SHRT_MIN);
	printf("max value of unsigned short: %d\n\n", USHRT_MAX);	

	printf("--------long type limits--------\n");
	printf("max value of long         : %ld\n", LONG_MAX);
	printf("min value of long         : %ld\n", LONG_MIN);
	printf("max value of unsigned long: %lu\n\n", ULONG_MAX);
	
	printf("-----long long type limits------\n");
	printf("max value of long long          :%lld\n", LLONG_MAX);
	printf("min value of long long          :%lld\n", LLONG_MIN);
	printf("max value of unsigned long long :%llu\n\n", ULLONG_MAX);

	
	printf("blow are run time limits of types of this system\n");
	

}
