#include <stdio.h>

int main(void) {
	int index, count;

	for(index = 0; index < 5; index++) {
		count = 1;
		
		for ( ; ; ) {
			printf("%d ", count);
		
			count++;

			if(count == 10)
				break;
		}

		printf("\n");
	}
	
	return 0;
}