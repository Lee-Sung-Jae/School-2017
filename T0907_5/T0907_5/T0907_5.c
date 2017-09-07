#include <stdio.h> // 표준 입출력 헤더 참조

int main(void) { // 프로그램 진입점
    int sort[5], i, j, tmp; // 변수 선언

	// 사용자에게서 정렬 시킬 정수들을 입력하도록 요청, sort 변수 배열에 저장
	for(i = 0; i < 5; i++) {
		printf("%d번째 정수 입력 : ", i + 1);
		scanf("%d", &sort[i]);
	}

    printf("\n");

    for(i = 0; i < 5; i++) { // i를 올리는 루프문
        for(j = 0, tmp; j < i; j++) { // j를 올리는 루프문
            if(sort[i] < sort[j]) { // 만약 sort[i]가 sort[j]보다 작다면 실행
                tmp = sort[i]; // 임시 변수에 sort[i]값 저장
                sort[i] = sort[j]; // sort[i]에 sort[j]값 저장
                sort[j] = tmp; // 임시 변수에 있던 원래의 sort[i]값을 sort[j]값에 저장
            }
        }
    }

    for(i = 0; i < 5; i++) { // 출력을 위한 반복문
        printf("%d번째로 작은 숫자 : %d\n", i + 1, sort[i]);
    }

    return 0; // 프로그램 종료
}
