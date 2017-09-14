#include <stdio.h>
#include <string.h>

int main(void) {
	char s1[20] = "Korea", s2[10] = "Seoul", *s3 = "Fighting";

	strcat(s1, s3); // Connect s1, s3
	printf("s1 : %s, ���ڿ� ���� = %d\n", s1, strlen(s1));

	strncat(s2, s3, 3); // Connect s1, s3, length 3
	printf("s2 : %s, ���ڿ� ���� = %d\n", s2, strlen(s2));

	strcpy(s1, s3); // Copy s3 to s1
	printf("s1 : %s, ���ڿ� ���� = %d\n", s1, strlen(s1));

	if(strcmp(s1, s3) == 0) printf("s1 : %s, s3 : %s (���� ���ڿ�)\n", s1, s3); // Compare

	_strrev(s1); // Reverse
	printf("s1 : %s, ���ڿ� ���� = %d\n", s1, strlen(s1));

	return 0;
}