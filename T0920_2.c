#include <stdio.h>

int g(int);

main() {
    int a;
    char b;
    float c;
    int d[5];
    char e[5];
    float f[5];

    printf("�̸� �Է� : ");
    scanf("%s", e);

    printf("�Է� ���� �̸� : %s\n", e);

    printf("���� �Է� : ");
    scanf("%d", &a);

    if(a >= 20) {
        printf("�����Դϴ�.\n");
    } else {
        printf("û�ҳ��Դϴ�.\n");
    }

    printf("���� �Է� : ");
    scanf("%d", &a);

    if(a % 2) {
        printf("Ȧ���Դϴ�.\n");
    } else {
        printf("¦���Դϴ�.\n");
    }
}
