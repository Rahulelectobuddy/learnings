#include <stdio.h>

ssize_t signum(ssize_t input);

int main(){
	ssize_t input=-20;
	printf("Signum of %ld = %ld\n", input, signum(input));
	return 0;
}
