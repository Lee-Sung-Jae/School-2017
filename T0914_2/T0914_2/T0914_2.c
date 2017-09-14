#include <stdio.h>

int main(void) {
	char name[20];

	puts("당신의 이름은? : ");

	if(gets(name) == (char *) NULL) puts("Error!");
	else printf("내 이름은 %s입니다.\n", name);

	return 0;
}