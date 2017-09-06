#include <stdio.h>

int main(void) {
    int A[5], i;

    for(i = 0; i < 5; i++) {
        printf("%d번째 숫자 입력 : ", i + 1);
        scanf("%d", &A[i]);
    }

    printf("\n");

    for(i = 0; i < 5; i++) {
        printf("%d번째로 입력 받은 숫자 : %d\n", i + 1, A[i]);
    }

    return 0;
}
