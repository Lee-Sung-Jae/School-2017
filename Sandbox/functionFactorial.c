#include <stdio.h>

int factorial(int);

int main(void) {
    int input;

    printf("팩토리얼 값을 얻고 싶은 정수를 입력: ");
    scanf("%d", &input);

    printf("%d! = %d", input, factorial(input));

    return 0;
}

int factorial(i) {
    return (i <= 1) ? 1 : i * factorial(i - 1);
}
