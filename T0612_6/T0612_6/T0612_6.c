#include <stdio.h>

int main(void) {
	int first, second;

	printf("�� ���� �Է� : ");
	scanf("%d %d", &first, &second);

	if(first >= second) {
		if(first == second)
			printf("%d(��)�� %d�� ����.\n", first, second);
		else
			printf("%d(��)�� %d���� ũ��.\n", first, second);
	}
	else
		printf("%d(��)�� %d���� �۴�.\n", first, second);

	return 0;
}