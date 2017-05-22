#include <stdio.h>

int main(void) {
	int apple, pear, candy, desk, chair, football = 5;

	desk = ((apple = 5, pear = 3, candy = 4), 55);
	chair = (football = 2, football + 3);

	printf("apple = %d, pear = %d, candy = %d\n", apple, pear, candy);
	printf("desk = %d, chair = %d, football = %d\n", desk, chair, football);
	printf("desk = %d, chair = %d\n", (desk, chair), football);

	return 0;
}