#include <stdio.h>

int main(void) {
	int number;

	printf("정수 입력 : ");
	scanf("%d", &number);

	if(number >= 0)
		if(number % 2 == 0)
			printf("짝수입니다.\n");
		else
			printf("홀수입니다.\n");
	/* Original Code dose not have 'if number less than 0' */
	else
		printf("음수입니다.\n");

	return 0;
}