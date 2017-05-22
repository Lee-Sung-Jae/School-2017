#include <stdio.h>

int main(void) {
	int a, b, c, min;

	printf("3개의 정수 입력 : ");
	scanf("%d%d%d", &a, &b, &c);

	min = (a < b) ? a : b;
	min = (min < c) ? min : c;

	printf("%d, %d, %d중 가장 작은 수는 %d이다.\n", a, b, c, min);

	return 0;
}