#include <stdio.h>

int main(void) {
	long int number;

	printf("임의의 자연수를 입럭하세요 : ");
	scanf("%ld", &number);

	if(number % 2 == 0)
		printf("입력받은 수 %ld(은)는 짝수입니다.\n", number);
	if(number % 2 != 0)
		printf("입력받은 수 %ld(은)는 홀수입니다.\n", number);
	
	return 0;
}