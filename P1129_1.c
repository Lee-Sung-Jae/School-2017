#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int start, end;

    printf("시작 번호 입력 : ");
    scanf("%d", &start);

    printf("끝 번호 입력 : ");
    scanf("%d", &end);

    srand(time(NULL));

    printf("번호 : %d\n", (rand() % (end - start + 1)) + start);

    return 0;
}
