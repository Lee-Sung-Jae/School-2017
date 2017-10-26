#include <stdio.h>

#define SIZE 2

struct person {
	char name[8];
	int job_code;
	union {
		char company[20];
		char school[20];
	} info;
};

int main(void) {
	struct person man[SIZE];
	int i;

	for(i = 0; i < SIZE; i++) {
		printf("%d번 회원 이름 입력 : ", i + 1);
		scanf("%s", man[i].name);

		printf("%s님의 직업 코드 입력 (학생 = 1, 회사원 = 2) : ", man[i].name);
		scanf("%d", &man[i].job_code);

		switch(man[i].job_code) {
		case 1:
			printf("%s님의 학교 이름 입력 : ", man[i].name);
			scanf("%s", man[i].info.school);
			break;

		case 2:
			printf("%s님의 회사 이름 입력 : ", man[i].name);
			scanf("%s", man[i].info.company);
		}

		printf("\n");
	}

	for(i = 0; i < SIZE; i++) {
		printf("%d번 회원 이름 : %s\n", i + 1, man[i].name);

		switch(man[i].job_code) {
		case 1:
			printf("%s님의 학교 이름 : %s\n", man[i].name, man[i].info.school);
			break;
		case 2:
			printf("%s님의 회사 이름 : %s\n", man[i].name, man[i].info.school);
		}

		printf("\n");
	}

	return 0;
}