#include <stdio.h>

/*
 * Signum function returns
 * -1 if input is negative
 *  0 for 0 input
 *  1 if imput is positive
*/

ssize_t signum(ssize_t input ){
	printf("Call from the library. I got input of %li \n",input);
	if (input == 0){
		return 0;
	}
	return input < 0 ? -1 : 1;
}
