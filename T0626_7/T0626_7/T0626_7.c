#include <stdio.h>

#define START 1
#define LAST 100

int main(void) {
	int number;
	int count = 0;

	for(number = START; number <= LAST; number += 2) {
		if(((number % 3) && (number % 5)) == 0)
			continue;

		if((count % 10) == 0)
			printf("\n");

		printf("%3d ", number);

		count++;
	}

	printf("\n");

	return 0;
}