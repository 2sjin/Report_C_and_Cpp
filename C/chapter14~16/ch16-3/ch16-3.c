// 20194146 이승진, 연습문제 16-3
#include <stdio.h>
#include <stdlib.h>

int main() {
	// 변수 3개 선언: 정수형 1개, 정수형 포인터 2개
	int cnt;
	int* pa;
	int* pb;

	// 정수형 동적 메모리 공간 할당의 크기: 3
	puts("정수 3개를 저장할 메모리 확보");
	pa = (int*)malloc(sizeof(int) * 3);

	// 정수형 배열 요소: 100, 200, 300
	pa[0] = 100;
	pa[1] = 200;
	pa[2] = 300;

	// for 문으로 3개의 정수형 배열 요소를 화면에 출력
	for (cnt = 0; cnt < 3; cnt++)
		printf("%d ", pa[cnt]);

	// 정수형 동적 메모리 블록의 크기를 5로 변경
	puts("\n\n정수 5개를 저장할 메모리 공간으로 확장");
	pb = (int*)realloc(pa, sizeof(int) * 5);

	// 정수형 배열 요소 추가: 400, 500
	pb[3] = 400;
	pb[4] = 500;

	// for 문으로 5개의 정수형 배열 요소를 화면에 출력
	for (cnt = 0; cnt < 5; cnt++)
		printf("%d ", pb[cnt]);

	puts("");
	return 0;
}