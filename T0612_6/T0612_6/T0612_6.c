#include <stdio.h>

int main(void) {
	int first, second;

	printf("두 정수 입력 : ");
	scanf("%d %d", &first, &second);

	if(first >= second) {
		if(first == second)
			printf("%d(은)는 %d와 같다.\n", first, second);
		else
			printf("%d(은)는 %d보다 크다.\n", first, second);
	}
	else
		printf("%d(은)는 %d보다 작다.\n", first, second);

	return 0;
}