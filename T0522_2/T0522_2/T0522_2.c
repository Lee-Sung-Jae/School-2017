#include <stdio.h>

int main(void) {
	int a, b, c, max;

	printf("3���� ���� �Է� : ");
	scanf("%d%d%d", &a, &b, &c);

	max = (a > b) ? a : b;
	max = (max > c) ? max : c;

	printf("%d, %d, %d�� ���� ū ���� %d�̴�.\n", a, b, c, max);

	return 0;
}