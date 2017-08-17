#include <stdio.h>


int main(void) {
	int a, b, c, d, e;
	int sum = 0;
	double average;

	printf("5개의 정수를 입력하세요 : ");
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

	sum = a + b + c + d + e;
	average = (double) sum / 5;

	printf("입력받은 정수들의 평균 값은 %f입니다.\n", average);

	return 0;
}