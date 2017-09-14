#include <stdio.h>
#include <math.h>

int main(void) {
	int num = -123;
	double dnum = -3.14;

	printf("%d의 절대값 = %d\n", num, abs(num)); // 정수 절대값
	printf("%.2ff의 제곱근 = %.2ff\n", fabs(dnum), sqrt(fabs(dnum))); // 실수 제곱근
	printf("floor(3.14) = %f\n", floor(fabs(dnum))); // 실수 버림
	printf("ceil(3.14) = %f\n", ceil(fabs(dnum))); // 실수 올림
	printf("floor-(-3.14) = %f\n", floor(fabs(dnum))); // 음의 실수 버림
	printf("ceil-(-3.14) = %f\n", ceil(fabs(dnum))); // 음의 실수 올림
	printf("sin(%.2f) = %f\n", fabs(dnum), sin(fabs(dnum))); // sin
	printf("cos(%.2f) = %f\n", fabs(dnum), cos(fabs(dnum))); // sin
	printf("tan(%.2f) = %f\n", fabs(dnum), tan(fabs(dnum))); // sin

	return 0;
}