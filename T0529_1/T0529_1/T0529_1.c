#include <stdio.h>

int main(void) {
	float annual = 365.2422;
	int day, hour, min, sec;

	day = annual;
	annual -= day;
	annual = annual * 24;
	hour = annual;
	annual -= hour;
	annual = annual * 60;
	min = annual;
	annual -= min;
	annual = annual * 60;
	sec = annual;

	printf("1년은 %d일, ", day);
	printf("%d시간, %d분, %d초입니다.\n", hour, min, sec);

	return 0;
}