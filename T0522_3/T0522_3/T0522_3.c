#include <stdio.h>

int main(void) {
	int a, b, c, min;

	printf("3���� ���� �Է� : ");
	scanf("%d%d%d", &a, &b, &c);

	min = (a < b) ? a : b;
	min = (min < c) ? min : c;

	printf("%d, %d, %d�� ���� ���� ���� %d�̴�.\n", a, b, c, min);

	return 0;
}