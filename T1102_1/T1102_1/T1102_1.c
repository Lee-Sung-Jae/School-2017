#include <stdio.h>
#include <stdlib.h>

#define name ".\\T1102_1.txt"

int main(void) {
	FILE *fptr = fopen(name, "w");

	if(fptr == (FILE *)NULL) {
		printf("%s ������ ���� �Ϳ� �����Ͽ����ϴ�.\n", name);
	} else {
		printf("%s ������ ���� �Ϳ� �����Ͽ����ϴ�.\n", name);
		fprintf(fptr, "������ ���ѹα��� �����̴�.\n");
	}

	fclose(fptr);

	return 0;
}