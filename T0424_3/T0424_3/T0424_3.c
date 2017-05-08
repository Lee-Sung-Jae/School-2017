#include <stdio.h>

int value = 200, test;
void sub(void);
int main(void) {
	int value = 100;
	test = 300;

	printf("%d + %d = %d\n", value, test, value + test);
	sub();
}
void sub(void) {
	int test = 200;
	printf("%d + %d = %d\n", value, test, value + test);
}