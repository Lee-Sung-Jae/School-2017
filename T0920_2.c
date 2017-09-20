#include <stdio.h>

int g(int);

main() {
    int a;
    char b;
    float c;
    int d[5];
    char e[5];
    float f[5];

    printf("이름 입력 : ");
    scanf("%s", e);

    printf("입력 받은 이름 : %s\n", e);

    printf("나이 입력 : ");
    scanf("%d", &a);

    if(a >= 20) {
        printf("성인입니다.\n");
    } else {
        printf("청소년입니다.\n");
    }

    printf("정수 입력 : ");
    scanf("%d", &a);

    if(a % 2) {
        printf("홀수입니다.\n");
    } else {
        printf("짝수입니다.\n");
    }
}
