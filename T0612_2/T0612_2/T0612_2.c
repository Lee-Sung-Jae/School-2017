#include <stdio.h>

int main(void) {
	int number;

	printf("임의의 자연수를 입력하세요 : ");
	scanf("%d", &number);

	/*  Original Code is `if(1 <= number <= 10), but that dose not we want working. */
	if((1 <= number) && (number <= 10))
		printf("수 %d(은)는 1~10 사이의 값입니다.\n", number);
	/* Original Code dose not have else code. */
	else
		printf("수 %d(은)는 1~10 사이의 값이 아닙니다.\n", number);

	return 0;
}