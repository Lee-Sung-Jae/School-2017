#include <stdio.h>

int main(void) {
/*	int age;
	float height;
	char name[10];

	printf("당신의 이름은? : ");
	scanf("%s", name);

	printf("%s님은 올해 몇 살입니까? : ", name);
	scanf("%2d", &age);

	printf("%s님의 키는 얼마입니까? : ", name);
	scanf("%5f", &height);

	printf("%s님의 키는 %5.1fcm, 나이는 %2d살입니다.\n", name, height, age);

	return 0;*/

	char name[10];
	char school[20];
	char depart[10];

	printf("본인의 이름을 입력해주세요. : ");
	scanf("%s", name);

	printf("%s님, 현재 재학중이신 학교 이름을 입력해주세요. : ", name);
	scanf("%s", school);

	printf("%s님, 현재 %s에서 재학중이신 학과 이름을 입력해주세요. : ", name, school);
	scanf("%s", depart);

	printf("%s님은 현재 %s에 재학중이시며 학과는 %s입니다.", name, school, depart);
}