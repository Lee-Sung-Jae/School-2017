#include <stdio.h>
#include <stdlib.h>

#define name ".\\T1102_1.txt"

int main(void) {
	FILE *fptr = fopen(name, "w");

	if(fptr == (FILE *)NULL) {
		printf("%s 파일을 여는 것에 실패하였습니다.\n", name);
	} else {
		printf("%s 파일을 여는 것에 성공하였습니다.\n", name);
		fprintf(fptr, "독도는 대한민국의 영토이다.\n");
	}

	fclose(fptr);

	return 0;
}