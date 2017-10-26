// Page 195, Problem 2.

#include <stdio.h>

#define SIZE 5

void sum(int, int *);

int main(void) {
	int number, index, data[SIZE][SIZE] = {{0,},};

	do {
		printf("1~10의 범위 안에 있는 자연수 입력 : ");
		scanf("%d", &number);

		if(number > 1 || number < 10)
			break;

		printf("[E] 입력 된 자연수 %d가 1~10 범위에 있지 않습니다!\n", number);
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