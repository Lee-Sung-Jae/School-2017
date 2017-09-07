#include <stdio.h> // 표준 입출력 헤더 참조

#define STUDENT 10 // STUDENT 선언

float average(int []); // average 함수 선언

int main(void) { // 프로그램 시작점
	// 변수 선언 및 정의
	int korean[STUDENT] = {100, 80, 92, 96, 88, 96, 80, 78, 92, 98};
	float ave;
	
	// ave 변수 정의
	ave = average(korean);

	// 출력
	printf("학생들 국어 점수의 평균은 %.2f점입니다.\n", ave);

	return 0; // 종료
}

float average(int score[]) { // 5L에서 선언 된 average 함수 정의
	int index, sum = 0; // 변수 선언 및 정의

	for(index = 0; index < STUDENT; index++) // score에 있는 점수들을 모두 합쳐서 sum에 저장하기 위한 반복문
		sum += score[index]; // score 변수 배열의 index번 데이터를 sum에 추가

	return (sum / (float) STUDENT); // 결과 반환
}