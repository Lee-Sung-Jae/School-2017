// Page 196, Problem 3.

#include <stdio.h>

static int point;

void input(int data[], int value) {
	data[point++] = value;
}

int output(int * data) {
	return * (data + --point);
}

int main (void) {
	static int data[5];
	int a, b, c;

	input(data, 100);
	input(data, 200);
	input(data, 300);
	input(data, 400);

	a = output(data);
	b = output(data);

	input(data, 500);
	input(data, 600);

	c = output(data);

	printf("%d\n", a + b + c);

	return 0;
}