#include <stdio.h> //ǥ�� ����� ��� ����

int max(int, int); //max �Լ� ���� (�� ȣ�� ���)
int min(int *, int *); // min �Լ� ���� (�ּ� ȣ�� ���)

int main(void) { // ����
	int one, two, result; // ���� ���� ����

	// ���� �Է� �ޱ�
	printf("�� ���� �Է� : ");
	scanf("%d %d", &one, &two);

	// �� ū �� ��� �� ���
	result = max(one, two);
	printf("%d�� %d �� �� ū ���� %d�Դϴ�.\n", one, two , result);

	// �� ���� �� ��� �� ���
	result = min(&one, &two);
	printf("%d�� %d �� �� ���� ���� %d�Դϴ�.\n", one, two , result);

	return 0; // ����
}

int max(int m, int n) { // 3L���� ���� �� max �Լ� ����
	return (m >= n ? m : n);
}

int min(int *m, int *n) { // 4L���� ���� �� min �Լ� ����
	return ( *m <= *n ? *m : *n);
}