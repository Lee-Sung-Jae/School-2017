#include <stdio.h>

int main(void) {
	int a = 5, b = 7;

	a += 5;
	printf("a = %d\n", a);

	a *= b - 2;
	printf("a = %d, b = %d\n", a, b);

	return 0;
}