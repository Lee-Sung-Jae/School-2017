#include <stdio.h>

#define MAX 5

int main(void) {
	int kor[MAX], eng[MAX], math[MAX];
	int sum, i = 0;
	float average[MAX];

	while(i < MAX) {
		printf("%d��° �л��� ����, ����, ���� ���� �Է� : ", i + 1);
		scanf("%d %d %d", &kor[i], &eng[i], &math[i]);

		i++;
	}

	i = 0;

	do {
		sum = kor[i] + eng[i] + math[i];
		average[i] = sum / 3.0;
		
		i++;
	} while(i < MAX);
	
	for(i = 0; i < MAX; i++) {
		printf("���� = %3d, ���� = %3d, ���� = %3d, ��� = %5.2f\n", kor[i], eng[i], math[i], average[i]);
	}

	return 0;
}