#include <stdio.h>

main() {
	int a, b, c;

	for(a = 0; a < 10; a++) {
		for(b = 0; b < a + 1; b++) {
			printf("*");
		}

		printf("\n");
	}
}