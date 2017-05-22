#include <stdio.h>

int main(void) {
	int a, b, c, max;

	printf("3개의 정수 입력 : ");
	scanf("%d%d%d", &a, &b, &c);

	max = (a > b) ? a : b;
	max = (max > c) ? max : c;

	printf("%d, %d, %d중 가장 큰 수는 %d이다.\n", a, b, c, max);

	return 0;
}