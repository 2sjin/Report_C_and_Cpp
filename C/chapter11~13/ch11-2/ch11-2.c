// 20194146 이승진, 연습문제 11-2
#include <stdio.h>

// 배열의 크기는 #define 키워드를 사용하여 기호 상수로 선언
#define SIZE 3

int main() {
	int sum = 0;
	double avg = 0;

	// 3개 과목의 점수는 각각 95, 89, 97
	int score[SIZE] = { 95, 89, 97 };

	// 포인터를 선언하여 일반 변수의 주소를 대입
	int* pArr = score;		// 배열명 자체에 배열의 시작 주소가 저장됨('&' 불필요)
	int* pSum = &sum;
	double* pAvg = &avg;

	// for 문으로 3개 과목 점수의 총점 산출
	for (int i = 0; i < SIZE; i++) {
		printf("%d번째 과목 점수 : %d > 포인터 주소 : %d\n", i, *(pArr+i), pArr+i);
		sum += score[i];
	}

	avg = (double)sum / SIZE;

	// 결과값: 총점은 전체 자릿수 3자리, 평균은 소수 둘째 자리까지 출력
	printf("\n총점 : %3d > 포인터 주소 : %d", sum, pSum);
	printf("\n평균 : %.2f > 포인터 주소 : %d\n", avg, pAvg);

	return 0;
}