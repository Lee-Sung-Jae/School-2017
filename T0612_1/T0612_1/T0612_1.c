#include <stdio.h>

int main(void) {
	long int number;

	printf("������ �ڿ����� �Է��ϼ��� : ");
	scanf("%ld", &number);

	if(number % 2 == 0)
		printf("�Է¹��� �� %ld(��)�� ¦���Դϴ�.\n", number);
	if(number % 2 != 0)
		printf("�Է¹��� �� %ld(��)�� Ȧ���Դϴ�.\n", number);
	
	return 0;
}