#include <stdio.h>

#define WEIGHT 81
#define MAX 10

int main(void) {
	int i, j, k, total;

	printf("*** %d gram 추의 조합 ***\n", WEIGHT);

	for(i = 1; i <= MAX; i++)
		for(j = 1; j <= MAX; j++)
			for(k = 1; k <= MAX; k++) {
				total = i * 2 + j * 3 + k *5;
				
				if(total == WEIGHT)
					printf("n 2g = %2d개, 3g = %2d개, 5g = %2d개\n", i, j, k);
			}
			
	return;
}