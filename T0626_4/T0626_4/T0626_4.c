#include <stdio.h>

#define LAST 100

int main(void) {
	int index = 1;
	long int sum = 0L;

	do {
		sum += index;
		index++;
	} while(index <= LAST);

	printf("1부터 %d까지의 합 : %ld\n", LAST, sum);

	return 0;
}