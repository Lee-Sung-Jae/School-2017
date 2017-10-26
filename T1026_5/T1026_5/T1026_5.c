// Page 198, Problem 9.

#include <stdio.h>

int heater(int);

int main(void) {
	int flag, floor, index, count = 0, room[2][5] = {{21, 32, 18, 20, 30}, {20, 32, 26, 19, 20}}, use[2][5] = {{1, 1, 0, 1, 1}, {0, 1, 1, 1, 0}};

	for(floor = 0; floor < 2; floor++)
		for(index = 0; index < 5; index++)
			if(heater(room[floor][index]) && use[floor][index])
				count++;

	printf("%d\n", count);

	return 0;
}

int heater(int val) {
	if(val < 22)
		return 1;
	else
		return 0;
}