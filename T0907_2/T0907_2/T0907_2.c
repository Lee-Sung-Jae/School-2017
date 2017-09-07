#include <stdio.h> // 표준 입출력 헤더 참조

#define PI 3.14159 // PI 선언

float circle(float); // 함수 선언

int main(void) {
	float radius, area; // 변수 선언

	printf("원의 반지름 입력 : ");
	scanf("%f", &radius); // 유저 인풋

	area = circle(radius); //circle 함수 이용해서 원의 면적 계산, area에 저장
	printf("반지름 = %.2fcm, 원의 면적 = %.2fcm^2\n", radius, area);

	return 0;
}

float circle(float radius) { // 5라인에서 선언 되었던 circle 함수 정의
	float area; // 변수 선언
	area = PI * radius * radius; // 들어온 매개 변수 값을 이용하여 원의 면적을 계산

	return area; // 결과 반환
}