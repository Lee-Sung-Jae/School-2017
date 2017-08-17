#include <stdio.h>

#define MAX 5

int main(void) {
	int kor[MAX], eng[MAX], math[MAX];
	int sum, i = 0;
	float average[MAX];

	while(i < MAX) {
		printf("%d번째 학생의 국어, 영어, 수학 성적 입력 : ", i + 1);
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
		printf("국어 = %3d, 영어 = %3d, 수학 = %3d, 평균 = %5.2f\n", kor[i], eng[i], math[i], average[i]);
	}

	return 0;
}