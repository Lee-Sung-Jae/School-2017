#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int start, end;

    printf("���� ��ȣ �Է� : ");
    scanf("%d", &start);

    printf("�� ��ȣ �Է� : ");
    scanf("%d", &end);

    srand(time(NULL));

    printf("��ȣ : %d\n", (rand() % (end - start + 1)) + start);

    return 0;
}
