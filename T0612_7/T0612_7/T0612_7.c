#include <stdio.h>

int main(void) {
	/* Original Code used 2 lines, but this will more fancy. */
	int black_mark, speed;

	printf("���� ������ �Է� : ");
	scanf("%d", &black_mark);

	printf("���� �ӵ��� �Է� : ");
	scanf("%d", &speed);

	/* Original Code is `70 + 20`, but this will be good. */
	if(speed > 90) {
		black_mark += 15;

		if(black_mark >= 120) {
			black_mark = 0;
			
			printf("���� ���� ����Դϴ�.\n");
		}
		else
			printf("���� ������ %d���Դϴ�.\n", black_mark);
	}

	return 0;
}