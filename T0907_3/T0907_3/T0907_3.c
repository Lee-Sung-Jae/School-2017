#include <stdio.h> //표준 입출력 헤더 참조

int max(int, int); //max 함수 선언 (값 호출 방식)
int min(int *, int *); // min 함수 선언 (주소 호출 방식)

int main(void) { // 메인
	int one, two, result; // 정수 변수 선언

	// 정수 입력 받기
	printf("두 정수 입력 : ");
	scanf("%d %d", &one, &two);

	// 더 큰 수 계산 및 출력
	result = max(one, two);
	printf("%d와 %d 중 더 큰 수는 %d입니다.\n", one, two , result);

	// 더 작은 수 계산 및 출력
	result = min(&one, &two);
	printf("%d와 %d 중 더 작은 수는 %d입니다.\n", one, two , result);

	return 0; // 종료
}

int max(int m, int n) { // 3L에서 선언 된 max 함수 정의
	return (m >= n ? m : n);
}

int min(int *m, int *n) { // 4L에서 선언 된 min 함수 정의
	return ( *m <= *n ? *m : *n);
}