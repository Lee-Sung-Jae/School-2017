#include <stdio.h>

main() {
	int a[5] = { 1, 2, 3, 4, 5 }, b[5], c[5], d;

	for(d = 0; d <= 4; d++) {
		printf("%d번째 입력 : ", d + 1);
		scanf("%d", &b[d]);
	}

	printf("\n");

	for(d = 0; d <= 4; d++) c[d] = a[d] + b[d];

	for(d = 0; d <= 4; d++) printf("c의 %d번째 값 : %d\n", d + 1, c[d]);
}