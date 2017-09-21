#include <stdio.h>

int fac(int);

main() {
	int input/*, fac, i*/, value;

	printf("n!에서 n의 값 입력 : ");
	scanf("%d", &input);

	/* for(i = 1, fac = 1; i <= input; i++) fac *= i;
	 *
	 * This works good.. but this class time require declaration */
	value = fac(input);

	// printf("%d! = %d\n", input, fac);
	printf("%d! = %d\n", input, value);
}

int fac(int x) {
	if(x <= 1) return 1;
	else return x * fac(x - 1);
}