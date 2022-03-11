// 20194146 이승진, 연습문제 12-2
#include <stdio.h>

int main(void) {
	int choice;

	// 포인터 배열로 과일 목록 선언
	char* fruit[] = { "Apple", "Tomato", "Pineapple" };

	// 전체 프로그램은 do~while 문을 선언하여 무한 반복 수행
	do {
		for (int i = 0; i < 3; i++)
			printf("%d.%s  ", i + 1, *(fruit+i));
		printf("4.Exit");

		// 키보드로 과일 목록 중 1개 선택: 유효 숫자는 1~4
		printf("\n선택 : ");
		scanf_s("%d", &choice);

		if (choice < 1 || choice > 4) {
			// 1~4 이외의 숫자는 if~else 문으로 오류 메시지 출력 후 반복 수행
			printf("숫자는 1, 2, 3, 4만 허용됩니다.\n\n");
			continue;
		}
		else if (choice == 4) {
			// 숫자 4를 입력하면 프로그램 종료
			printf("프로그램을 종료합니다.\n");
			break;
		}
		else {
			// 선택한 과일 출력
			// (배열의 시작 주소 + 입력한 번호 - 1) 의 데이터 값 출력
			printf("선택한 과일은 \"%s\"입니다.\n\n", *(fruit + choice - 1));
		}
	} while (1);

	return 0;
}