#include <stdio.h> // ǥ�� ����� ��� ����

#define STUDENT 10 // STUDENT ����

float average(int []); // average �Լ� ����

int main(void) { // ���α׷� ������
	// ���� ���� �� ����
	int korean[STUDENT] = {100, 80, 92, 96, 88, 96, 80, 78, 92, 98};
	float ave;
	
	// ave ���� ����
	ave = average(korean);

	// ���
	printf("�л��� ���� ������ ����� %.2f���Դϴ�.\n", ave);

	return 0; // ����
}

float average(int score[]) { // 5L���� ���� �� average �Լ� ����
	int index, sum = 0; // ���� ���� �� ����

	for(index = 0; index < STUDENT; index++) // score�� �ִ� �������� ��� ���ļ� sum�� �����ϱ� ���� �ݺ���
		sum += score[index]; // score ���� �迭�� index�� �����͸� sum�� �߰�

	return (sum / (float) STUDENT); // ��� ��ȯ
}