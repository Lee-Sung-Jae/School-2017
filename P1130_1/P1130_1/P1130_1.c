#include <stdio.h>

int main(void) {
	int times[2], time;

	printf("�ð� �Է� : ");
	scanf("%d %d", &times[0], &times[1]);
	time = ((times[0] * 60) + times[1]) - 30;
	time = time < 0 ? (24 * 60) + time : time;

	printf("�Է� �� �ð����κ��� 30�� ������ �ð� : %d�� %d��\n", (time / 60), (time % 60));
	
	return 0;
}