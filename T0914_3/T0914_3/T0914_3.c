#include <stdio.h>
#include <ctype.h>

int main(void) {
	char ch;

	printf("문장을 입력 : ");

	while((ch = getchar()) != EOF) { // Ctrl-Z
		if(isupper(ch)) putchar(tolower(ch)); // If uppercase makes to lowercase
		else putchar(toupper(ch)); // else makes to uppercase
	}

	return 0;
}