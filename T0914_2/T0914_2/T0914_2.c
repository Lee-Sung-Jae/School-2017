#include <stdio.h>

int main(void) {
	char name[20];

	puts("����� �̸���? : ");

	if(gets(name) == (char *) NULL) puts("Error!");
	else printf("�� �̸��� %s�Դϴ�.\n", name);

	return 0;
}