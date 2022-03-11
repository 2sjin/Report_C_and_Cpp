// 20194146 이승진, 연습문제 16-2
#include <stdio.h>
#include <stdlib.h>

// typedef struct 명령으로 새로운 자료형 ST 선언
typedef struct {
	char name[20];	// 과목명
	int score;		// 점수
} ST;

// 사용자 정의 함수 선언
int inputSize();
int inputScore(ST*, int);
void outputScore(ST*, int, int);

int main() {
	int size, sum;
	ST* st;	// 동적 메모리 공간을 가리키는 포인터 선언: 새로 생성한 ST 자료형

	// 입력한 과목수만큼 동적 메모리 공간 할당
	size = inputSize();
	st = (ST*)malloc(sizeof(ST) * size);
	if (st == NULL) {
		puts("동적 메모리 공간 할당 실패");
		exit(1);
	}

	// 과목 및 점수 입출력
	sum = inputScore(st, size);
	outputScore(st, size, sum);
	
	// 할당된 동적 메모리 공간 반납
	free(st);

	return 0;
}

// 과목수 입력: 양의 정수만 허용. 양의 정수가 아니면 프로그램 종료
int inputSize() {
	int temp;
	printf("입력 과목수 설정 : ");
	scanf_s("%d", &temp);
	if (temp < 0) {
		puts("음의 정수는 허용하지 않습니다.");
		exit(-1);
	}
	return temp;
}

// for 문으로 입력한 수만큼 과목과 점수 입력
int inputScore(ST* st, int size) {
	int cnt, sum = 0;
	for (cnt = 0; cnt < size; cnt++) {
		getchar();
		printf("과목 : ");
		gets_s((st + cnt)->name, sizeof((st + cnt)->name));
		printf("점수 : ");
		scanf_s("%d", &((st + cnt)->score));
		sum += (st + cnt)->score;
	}
	return sum;
}

// 출력
void outputScore(ST* st, int size, int sum) {
	int cnt;
	puts("\n과목\t\t점수");
	puts("-------------------------------");
	for (cnt = 0; cnt < size; cnt++)
		printf("%s\t%d\n", (st + cnt)->name, (st + cnt)->score);

	// 총점과 평균 산출: 평균은 소수 둘째 자리까지 출력
	printf("\n총점 : %d", sum);
	printf("\n평균 : %.2f\n", (double)sum / size);
}

