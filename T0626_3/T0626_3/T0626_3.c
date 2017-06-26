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
			printf("%2d일의 예금액 = %8ld원\t", day, money);
			printf("원금 합계 = %9ld원\n", deposit);
		}

		money *= 2;
	}

	printf("%2d일의 예금액 = %8ld원\t", day, money / 2);
	printf("원금 합계 = %9ld원\n", deposit);
	printf("총 금액이 최초로 1억원이 넘는 날은 %d일째 날입니다.\n", day);

	return 0;
}