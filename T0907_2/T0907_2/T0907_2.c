#include <stdio.h> // ǥ�� ����� ��� ����

#define PI 3.14159 // PI ����

float circle(float); // �Լ� ����

int main(void) {
	float radius, area; // ���� ����

	printf("���� ������ �Է� : ");
	scanf("%f", &radius); // ���� ��ǲ

	area = circle(radius); //circle �Լ� �̿��ؼ� ���� ���� ���, area�� ����
	printf("������ = %.2fcm, ���� ���� = %.2fcm^2\n", radius, area);

	return 0;
}

float circle(float radius) { // 5���ο��� ���� �Ǿ��� circle �Լ� ����
	float area; // ���� ����
	area = PI * radius * radius; // ���� �Ű� ���� ���� �̿��Ͽ� ���� ������ ���

	return area; // ��� ��ȯ
}