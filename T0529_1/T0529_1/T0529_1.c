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

	printf("1���� %d��, ", day);
	printf("%d�ð�, %d��, %d���Դϴ�.\n", hour, min, sec);

	return 0;
}