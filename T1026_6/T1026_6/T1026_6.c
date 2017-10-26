// Page 199, Problem 10.

#include <stdio.h>

int main(void) {
	int i, dx[] = {2, 1, 0, 3, 4, 4, 3};
	char pwd[] = {'p', 'w', 'd', '0', '3'}, outpwd[7];

	for(i = 0; i < 7; i++) {
		outpwd[i] = pwd[dx[i]];
		printf("%c", outpwd[i]);
	}

	printf("\n");

	return 0;
}