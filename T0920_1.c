#include <stdio.h>

int g(int);

main() {
    int a;
    char b;
    float c;
    int d[5];
    char e[5];
    float f[5];

    a = 5;
    b = 'h';
    c = 5.12;
    a = 10;

    printf("\t%d \n%c \n%.3f", a, b, c);

    scanf("%c", &b);
    printf("%c\n", b);

    scanf("%d", &a);
    printf("%d\n", a * 2);
}
