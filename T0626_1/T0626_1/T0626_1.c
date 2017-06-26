#include <stdio.h>

#define MAX 100

int main(void) {
	int count;
	long int total = 0L;

	for(count = 1; count <= MAX; count++)
		total += count;

	printf("1 + 2 + 3 + .... + %d = %ld\n", MAX, total);

	return 0;
}