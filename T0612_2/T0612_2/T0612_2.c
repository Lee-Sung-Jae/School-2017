#include <stdio.h>

int main(void) {
	int number;

	printf("������ �ڿ����� �Է��ϼ��� : ");
	scanf("%d", &number);

	/*  Original Code is `if(1 <= number <= 10), but that dose not we want working. */
	if((1 <= number) && (number <= 10))
		printf("�� %d(��)�� 1~10 ������ ���Դϴ�.\n", number);
	/* Original Code dose not have else code. */
	else
		printf("�� %d(��)�� 1~10 ������ ���� �ƴմϴ�.\n", number);

	return 0;
}