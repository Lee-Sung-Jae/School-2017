#include <stdio.h>

void sub2(void);
extern int value;

void sub2(void) {
	++value;
	printf("sub2 ----- value = %d\n", value);
}