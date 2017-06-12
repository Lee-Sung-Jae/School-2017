#include <stdio.h>

int main(void) {
	long int number;

	printf("임의의 자연수를 입력하세요 : ");
	scanf("%ld", &number);

	if(number % 2 == 0)
		printf("입력받은 수 %ld는 짝수입니다.\n", number);
	else
		printf("입력받은 수 %ld는 홀수입니다.\n", number);

	return 0;
}