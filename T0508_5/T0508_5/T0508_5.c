#include <stdio.h>

int main(void) {
	int a = 2, b = 5, c = 4;

	printf("%d + 2 > %d = %d\n", a, b, a + 2 > b);
	printf("%d + (2 > %d) = %d\n", a, b, a + (2 > b));
	printf("%d < %d = %d\n", c, a, c < a);
	printf("%d <= %d = %d\n", a, b, a <= b);
	printf("%d != %d = %d\n", a, b, a != b);

	return 0;
}