#include <stdio.h>

#define LAST 100

int main(void) {
	int index = 1;
	long int total = 0L;

	while(index <= 100)
		total += index++;

	printf("1부터 %d까지의 합 = %ld\n", LAST, total);

	return 0;
}