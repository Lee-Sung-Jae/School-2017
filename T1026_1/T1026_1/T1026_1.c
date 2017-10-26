#include <stdio.h>

union member {
	char ch;
	int number;
};

int main(void) {
	union member data;

	data.number = 0xBC37;
	printf("ch = %c(%x) number = %x\n", data.ch, data.ch, data.number);

	data.ch = 'A';
	printf("ch = %c(%x) number = %x\n", data.ch, data.ch, data.number);

	return 0;
}