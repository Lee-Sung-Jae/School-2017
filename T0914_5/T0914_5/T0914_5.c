#include <stdio.h>
#include <math.h>

int main(void) {
	int num = -123;
	double dnum = -3.14;

	printf("%d�� ���밪 = %d\n", num, abs(num)); // ���� ���밪
	printf("%.2ff�� ������ = %.2ff\n", fabs(dnum), sqrt(fabs(dnum))); // �Ǽ� ������
	printf("floor(3.14) = %f\n", floor(fabs(dnum))); // �Ǽ� ����
	printf("ceil(3.14) = %f\n", ceil(fabs(dnum))); // �Ǽ� �ø�
	printf("floor-(-3.14) = %f\n", floor(fabs(dnum))); // ���� �Ǽ� ����
	printf("ceil-(-3.14) = %f\n", ceil(fabs(dnum))); // ���� �Ǽ� �ø�
	printf("sin(%.2f) = %f\n", fabs(dnum), sin(fabs(dnum))); // sin
	printf("cos(%.2f) = %f\n", fabs(dnum), cos(fabs(dnum))); // sin
	printf("tan(%.2f) = %f\n", fabs(dnum), tan(fabs(dnum))); // sin

	return 0;
}