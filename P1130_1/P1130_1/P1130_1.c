#include <stdio.h>

int main(void) {
	int times[2], time;

	printf("시각 입력 : ");
	scanf("%d %d", &times[0], &times[1]);
	time = ((times[0] * 60) + times[1]) - 30;
	time = time < 0 ? (24 * 60) + time : time;

	printf("입력 된 시각으로부터 30분 이전의 시각 : %d시 %d분\n", (time / 60), (time % 60));
	
	return 0;
}