#include <stdio.h>

int main(void) {
	int count = 5;

	printf("count = %d\n", count);
	printf("++count +1 = %d\n", ++count + 1);
	printf("--count + 1 = %d\n", --count + 1);
	printf("count-- - 1 = %d\n", count-- - 1);
	printf("count = %d\n", count);

	return 0;
}