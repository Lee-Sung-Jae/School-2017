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
		printf("%d�� ȸ�� �̸� �Է� : ", i + 1);
		scanf("%s", man[i].name);

		printf("%s���� ���� �ڵ� �Է� (�л� = 1, ȸ��� = 2) : ", man[i].name);
		scanf("%d", &man[i].job_code);

		switch(man[i].job_code) {
		case 1:
			printf("%s���� �б� �̸� �Է� : ", man[i].name);
			scanf("%s", man[i].info.school);
			break;

		case 2:
			printf("%s���� ȸ�� �̸� �Է� : ", man[i].name);
			scanf("%s", man[i].info.company);
		}

		printf("\n");
	}

	for(i = 0; i < SIZE; i++) {
		printf("%d�� ȸ�� �̸� : %s\n", i + 1, man[i].name);

		switch(man[i].job_code) {
		case 1:
			printf("%s���� �б� �̸� : %s\n", man[i].name, man[i].info.school);
			break;
		case 2:
			printf("%s���� ȸ�� �̸� : %s\n", man[i].name, man[i].info.school);
		}

		printf("\n");
	}

	return 0;
}