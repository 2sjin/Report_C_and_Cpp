// 20194146 이승진, 연습문제 13-2
#include <stdio.h>

int main(void) {
	char command;
	char* str[31];	// 문자열 30바이트 + 공백 1바이트
	char* p = str;	// 배열의 시작 주소를 저장하는 포인터

	// do~while 문으로 프로그램을 무한 반복 수행
	do {
		printf("■ 문자열을 정수형과 실수형으로 변환하는 프로그램\n");

		// get_s() 함수로 문자열을 최대 30바이트까지 입력
		printf("문자열을 30바이트 이내로 입력 : ");
		gets_s(p, 31);	// 문자열 30바이트 + 공백 1바이트

		printf("입력 문자열 : \"%s\"\n", p);

		// atoi() 함수로 문자열을 정수형으로 변환
		printf("문자열 → 정수형으로 변환 : %d\n", atoi(p));

	restart:	// 알파벳 입력 오류 시 goto 문에 의해 분기되는 곳
		// _getche() 함수로 반복 여부를 결정하는 문자 입력
		printf("프로그램을 계속 수행할까요? (Y / N) : ");
		command = _getche();	// <Enter> 키 입력 없이 문자 입력(입력 문자 표시함)

		// 반복 여부는 알파벳 대소 문자 구분 없이,
		switch (command) {
			// Y는 재실행,
			case 'Y': case 'y':
				printf("\n\n");
				continue;
			// N은 종료,
			case 'N': case 'n':
				printf("\n프로그램을 종료합니다.\n");
				return 0;
			// 그 외는 오류 메시지 출력 후 goto 문으로 강제 분기
			default:
				printf("\n알파벳 입력 오류!\n알파벳을 다시 입력하세요.\n");
				goto restart;
		}
	} while (1);

	return 0;
}