// 20194146 이승진, 연습문제 14-1
#include <stdio.h>
#define SIZE 3

// 구조체 선언과 멤버 선언
typedef struct {
	char name[20];	// 품목
	int quantity;	// 수량
	int price;		// 단가
	int sum;		// 금액
} HardWare;

int main() {
	// 구조체 변수는 크기가 3인 배열로 선언
	HardWare item[SIZE] = { 0 };

	puts("구조체 배열을 사용하여 품목 3개를 처리하는 프로그램");

	// for 문을 사용하여 3개 상품의 품목, 수량, 단가를 각각 입력받음
	for (int i = 0; i < SIZE; i++) {
		printf("%d번째 품목의 품목, 수량, 단가 입력\n", i + 1);
		printf("품목 : ");
		scanf_s("%s", item[i].name, 20);
		printf("수량 : ");
		scanf_s("%d", &item[i].quantity);
		printf("단가 : ");
		scanf_s("%d", &item[i].price);
		// 각 품목별 금액은 입력받은 수량 * 단가로 산출
		item[i].sum = item[i].quantity * item[i].price;
	}

	puts("[품목 3개의 수량, 단가, 금액 출력]");
	puts("상품명\t수량\t가격\t금액(천 원)");
	for (int i = 0; i < SIZE; i++) {
		printf("%s\t%4d\t%4d\t%10d\n", item[i].name, item[i].quantity, item[i].price, item[i].sum);
	}

	puts("");
	return 0;
}