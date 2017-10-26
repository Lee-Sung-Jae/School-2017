// Page 195, Problem 2.

#include <stdio.h>

#define SIZE 5

void sum(int, int *);

int main(void) {
	int number, index, data[SIZE][SIZE] = {{0,},};

	do {
		printf("1~10�� ���� �ȿ� �ִ� �ڿ��� �Է� : ");
		scanf("%d", &number);

		if(number > 1 || number < 10)
			break;

		printf("[E] �Է� �� �ڿ��� %d�� 1~10 ������ ���� �ʽ��ϴ�!\n", number);
	} while(1);

	for(index = 0; index < SIZE; index++)
		sum(number, data[index]);

	printf("%d %d %d\n", data[1][4], data[2][3], data[4][1]);

	return 0;
}

void sum(int number, int * data) {
	int index;

	for(index = 0; index < SIZE; index++)
		*(data + index) = number++;
}