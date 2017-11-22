#include <stdio.h>

int main(void) {
    int score;
    float ratio, result = 0.0f;

    printf("*** 과목별 점수 계산 프로그램 ***\n");

    printf("중간고사 반영 비율과 받은 점수를 입려(예시 : 0.5 100) : ");
    scanf("%f %d", &ratio, &score);
    result += ratio * score;

    printf("기말고사 반영 비율과 받은 점수를 입려(예시 : 0.5 100) : ");
    scanf("%f %d", &ratio, &score);
    result += ratio * score;

    printf("수행평가 반영 비율과 받은 점수를 입려(예시 : 0.5 100) : ");
    scanf("%f %d", &ratio, &score);
    result += ratio * score;

    printf("총 점수 : %.1f", result);

    return 0;
}
