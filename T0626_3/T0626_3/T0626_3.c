#include <stdio.h>

#define MILLION 100000000L
#define START 100

int main(void) {
	long int deposit = 0L;
	long int money = START;
	int day = 0;

	while(deposit < MILLION) {
		day++;
		deposit += money;

		if((day % 2) == 1) {
			printf("%2d���� ���ݾ� = %8ld��\t", day, money);
			printf("���� �հ� = %9ld��\n", deposit);
		}

		money *= 2;
	}

	printf("%2d���� ���ݾ� = %8ld��\t", day, money / 2);
	printf("���� �հ� = %9ld��\n", deposit);
	printf("�� �ݾ��� ���ʷ� 1����� �Ѵ� ���� %d��° ���Դϴ�.\n", day);

	return 0;
}