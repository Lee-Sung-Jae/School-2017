#include <stdio.h>

int main(void) {
	char ch;

	while((ch = getchar()) != EOF) {
		if(ch == ' ') ch = '\n';
		putchar(ch);
	}

	return 0;
}