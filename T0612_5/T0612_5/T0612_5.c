#include <stdio.h>

int main(void) {
	int number;

	printf("���� �Է� : ");
	scanf("%d", &number);

	if(number >= 0)
		if(number % 2 == 0)
			printf("¦���Դϴ�.\n");
		else
			printf("Ȧ���Դϴ�.\n");
	/* Original Code dose not have 'if number less than 0' */
	else
		printf("�����Դϴ�.\n");

	return 0;
}