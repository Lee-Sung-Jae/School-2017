#include <stdio.h>

int main(void) {
    int A[5], i;

    for(i = 0; i < 5; i++) {
        printf("%d��° ���� �Է� : ", i + 1);
        scanf("%d", &A[i]);
    }

    printf("\n");

    for(i = 0; i < 5; i++) {
        printf("%d��°�� �Է� ���� ���� : %d\n", i + 1, A[i]);
    }

    return 0;
}
