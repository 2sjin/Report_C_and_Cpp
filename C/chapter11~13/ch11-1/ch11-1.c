// 20194146 이승진, 연습문제 11-1
#include <stdio.h>

// 사용자 정의 함수 선언
int Gob(int* pa, int* pb);

int main() {
	// 메인 함수에서 a = 10, b = 20 선언
	int a = 10;
	int b = 20;

	int result;

	printf("■ 함수의 매개변수로 포인터를 전달받아 곱셈 연산을 하는 프로그램\n");
	printf("주어진 값 : a = %d, b = %d\n", a, b);

	// 메인 함수에서 Gob() 함수를 2개의 인수를 전달하여 호출
	result = Gob(a, b);

	// 메인 함수에서 곱셈 결과값 출력
	printf("반환된 값 : a * b = %d\n", result);

	printf("프로그램 종료\n");
	return 0;
}

// 함수 정의 : Gob() 함수에는 정수 2개의 곱셈 결과값을 메인 함수로 반환
int Gob(int* pa, int* pb) {		// 정수형 포인터가 매개 변수
	int a = pa;
	int b = pb;
	printf("[곱셈 함수 영역]\n");
	return a*b;
}