#include <stdio.h>


int main(void) {
	int a, b, c, d, e;
	int sum = 0;
	double average;

	printf("5���� ������ �Է��ϼ��� : ");
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

	sum = a + b + c + d + e;
	average = (double) sum / 5;

	printf("�Է¹��� �������� ��� ���� %f�Դϴ�.\n", average);

	return 0;
}