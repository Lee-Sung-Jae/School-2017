#include <stdio.h>

int main(void) {
    int sort[5], i, j, temp;

    for(i = 0; i < 5; i++) {
        printf("%d번째 숫자 입력 : ", i + 1);
        scanf("%d", &sort[i]);
    }

    printf("\n");

    for(i = 0; i < 5; i++) {
        for(j = 0; j < i; j++) {
            if(sort[i] > sort[j]) {
                temp = sort[i];
                sort[i] = sort[j];
                sort[j] = temp;
            }
        }
    }

    for(i = 0; i < 5; i++) {
        printf("%d번째로 큰 숫자 : %d\n", i + 1, sort[i]);
    }

    return 0;
}

