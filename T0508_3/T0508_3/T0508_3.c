#include <stdio.h>

int main(void) {
	printf("30 + 20 = %d\n", 30 + 20);
	printf("30 * 20 =  %d\n", 30 * 20);
	//Orignal Code is `%f`, but teacher said change to `%d`.
	//If do original, return `0.000000`, which in book example return value.
	printf("10 / 3 = %d\n", 10 / 3);
	printf("10 / 3.0 = %f\n", 10 / 3.0);
	printf("-10 %% 3 = %d\n", -10 % 3);
	printf("10 ^ 3 = %d\n", 10 * 10 * 10);
	
	return 0;
}