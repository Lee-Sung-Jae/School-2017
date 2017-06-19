#include <stdio.h>

int main(void) {
	int score;
	char grade;

	printf("원하는 점수를 입력 : ");
	scanf("%d", &score);

	switch(score / 10) {
		case 10:
		case 9: grade = 'A';
			break;
		case 8: grade = 'B';
			break;
		case 7: grade = 'C';
			break;
		case 6: grade = 'D';
			break;
		default: grade = 'F';
	}

	printf("%d점은 %c 등급입니다.\n", score, grade);

	return 0;
}
	