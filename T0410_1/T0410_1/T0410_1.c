#include <stdio.h>

int main(void) {
/*	int age;
	float height;
	char name[10];

	printf("����� �̸���? : ");
	scanf("%s", name);

	printf("%s���� ���� �� ���Դϱ�? : ", name);
	scanf("%2d", &age);

	printf("%s���� Ű�� ���Դϱ�? : ", name);
	scanf("%5f", &height);

	printf("%s���� Ű�� %5.1fcm, ���̴� %2d���Դϴ�.\n", name, height, age);

	return 0;*/

	char name[10];
	char school[20];
	char depart[10];

	printf("������ �̸��� �Է����ּ���. : ");
	scanf("%s", name);

	printf("%s��, ���� �������̽� �б� �̸��� �Է����ּ���. : ", name);
	scanf("%s", school);

	printf("%s��, ���� %s���� �������̽� �а� �̸��� �Է����ּ���. : ", name, school);
	scanf("%s", depart);

	printf("%s���� ���� %s�� �������̽ø� �а��� %s�Դϴ�.", name, school, depart);
}