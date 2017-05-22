#include <stdio.h>

#define LIFE 12
#define YEAR 20
#define DAY 365
#define CASE 20
#define TABACO (CASE + CASE / 2)
#define TIME (24*60)
#define PRICE 3000

int main(void) {
	long int piece;
	unsigned long int minute;
	int day;
	long int box;
	long int price;

	piece = (long) YEAR * DAY * TABACO;
	box = piece / CASE + (piece % CASE ? 1 : 0);
	minute = (unsigned long) piece * LIFE;
	day = minute / TIME;
	price = box * PRICE;

	printf("��踦 %d�⵿�� �ǿ��", YEAR);
	printf("���� ������ %d���Դϴ�.\n", day);
	printf("%d�⵿�� ��� ����� %d���Դϴ�.\n", YEAR, price);

	return 0;
}