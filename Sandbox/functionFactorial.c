#include <stdio.h>

int factorial(int);

int main(void) {
    int input;

    printf("���丮�� ���� ��� ���� ������ �Է�: ");
    scanf("%d", &input);

    printf("%d! = %d", input, factorial(input));

    return 0;
}

int factorial(i) {
    return (i <= 1) ? 1 : i * factorial(i - 1);
}
