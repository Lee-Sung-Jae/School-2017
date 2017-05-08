#include <stdio.h>

void test(void);

int main(void) {
	register int loop;

	printf("\t\t자동 변수와 내부 정적 변수의 차이점 \n");

	for (loop = 1; loop<= 3; loop++) {
		printf("제 %d회 : ", loop);
		test();
	}

	return 0;
}

static int scount = 100;

void test(void) {
	static int scount;
	//Original Code is `auto int acount = 0;`, but this correct.
	auto acount = 0;
	scount++;
	acount++;
	printf("static count(scount) = %2d", scount);
	printf("\tauto count(acount) = %2d\n", acount);
}