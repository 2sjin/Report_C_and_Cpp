// 20194146 이승진, 연습문제 14-3
#include <stdio.h>
#include <string.h>

// 멤버 변수 2개를 가진 구조체 선언
typedef struct {
	char name[20];	// 품목
	int price;		// 가격
} Hardware;

// 사용자 정의 함수 원형: 구조체 포인터를 함수의 매개변수로 선언
int comp(Hardware*);

int main() {
	int flag;

	// 구조체 멤버 변수는 메인 함수에서 초기화
	Hardware item[2] = { {"노트북", 20000}, {"스마트폰", 10000}};

	printf("■ 구조체 포인터를 함수의 인수로 전달하는 프로그램\n");

	// 메인 함수에서 구조체 멤버가 가리키는 주소값을 인수로 함수 호출
	flag = comp(item);

	// 메인 함수의 printf() 출력문 안에서 구조체 멤버 연산자 '.'를 사용하여 2개 품목을 각각 출력
	// 반환된 값이 1이면 "동일한 품목", 아니면 "다른 품목" 메시지를 메인 함수에서 출력
	if (flag == 1)
		printf("\"%s\"과 \"%s\"은 같은 품목입니다.\n", item[0].name, item[1].name);
	else
		printf("\"%s\"과 \"%s\"은 다른 품목입니다.\n", item[0].name, item[1].name);

	return 0;
}

// 사용자 정의 함수
int comp(Hardware* item) {
	// if~else 문을 사용해 2개의 품목이 같으면 1, 다르면 0을 반환
	if (strcmp(item[0].name, item[1].name) == 0)
		return 1;
	else
		return 0;
}