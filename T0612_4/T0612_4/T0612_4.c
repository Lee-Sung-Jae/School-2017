#include <stdio.h>

int main(void) {
	int score;
	/* Original Code using `int`, but this variable's type will be `char`. */
	char grade;

	printf("���� �Է� : ");
	scanf("%d", &score);

	if(score >= 90)
		grade = 'A';
	else if(score >= 80)
		grade = 'B';
	else if(score >= 70)
		grade = 'C';
	else if(score >= 60)
		grade = 'D';
	else
		grade = 'F';

	printf("%d���� %c ����Դϴ�.\n", score, grade);

	return 0;
}