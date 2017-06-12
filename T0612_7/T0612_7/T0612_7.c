#include <stdio.h>

int main(void) {
	/* Original Code used 2 lines, but this will more fancy. */
	int black_mark, speed;

	printf("현재 벌점을 입력 : ");
	scanf("%d", &black_mark);

	printf("주행 속도를 입력 : ");
	scanf("%d", &speed);

	/* Original Code is `70 + 20`, but this will be good. */
	if(speed > 90) {
		black_mark += 15;

		if(black_mark >= 120) {
			black_mark = 0;
			
			printf("운전 면허 취소입니다.\n");
		}
		else
			printf("현재 벌점은 %d점입니다.\n", black_mark);
	}

	return 0;
}