// 20194146 이승진, 연습문제 11-3
#include <stdio.h>

int main(void) {
	// float형 변수와 포인터 각각 선언
	float num;
	float* pd = &num;	// 포인터 pd가 일반 변수 num의 주소를 가리킴

	// 키보드로 실수값 입력 : 소수 셋째 자리까지
	printf("실수 입력(소수 셋째 자리까지) : ");
	scanf_s("%f", pd);

	// 포인터의 현재 주소값과 데이터값을 각각 출력
	printf("\n포인터 pd의 현재 주소값 : %d", pd);
	printf("\n포인터 pd의 현재 데이터값 : %.3f", *pd);

	// 기존 데이터를 대상으로 *(포인터 변수)++ 증감 연산 후 주소값과 데이터값을 각각 출력
	*(pd)++;
	printf("\n\n포인터 *(pd)++ 증감 연산 후 주소값 : %d", pd);
	
	pd = &num;	// pd가 가리키는 주소값을 원래대로 되돌림
	printf("\n포인터 *(pd)++ 증감 연산 후 데이터값 : %.3f", *(pd)++);

	return 0;
}