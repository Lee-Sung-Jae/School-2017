#include <stdio.h>

int main(void) {
    int score;
    float ratio, result = 0.0f;

    printf("*** ���� ���� ��� ���α׷� ***\n");

    printf("�߰���� �ݿ� ������ ���� ������ �Է�(���� : 0.5 100) : ");
    scanf("%f %d", &ratio, &score);
    result += ratio * score;

    printf("�⸻��� �ݿ� ������ ���� ������ �Է�(���� : 0.5 100) : ");
    scanf("%f %d", &ratio, &score);
    result += ratio * score;

    printf("������ �ݿ� ������ ���� ������ �Է�(���� : 0.5 100) : ");
    scanf("%f %d", &ratio, &score);
    result += ratio * score;

    printf("�� ���� : %.1f", result);

    return 0;
}
