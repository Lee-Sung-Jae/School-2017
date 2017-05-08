#include <stdio.h>

void sub1(void);
//Original Code not have this, but i think this will remove error.
//When remove this, code will run correctly, but IDE show an error.
extern void sub2(void);
int value = 100;

int main(void) {
	int value = 130;

	sub1();
	sub2();

	printf("main ----- value = %d\n", value);

	return 0;
}

void sub1(void) {
	++value;
	printf("sub1 ----- value = %d\n", value++);
}