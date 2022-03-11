// 20194146 이승진, 연습문제 12-3
#include <stdio.h>

int main(void) {
	// 문자열은 최대 30바이트 이내로 입력하도록 배열 선언
	char str[31];	// 문자열 30바이트 + 공백 1바이트

	// 포인터를 선언한 후 배열 요소를 포인터에 대입
	char* ps = str;

	// 키보드로 문자열 입력
	printf("문자열 입력(30바이트 이내) : ");
	scanf_s("%s", str, 31);		// 문자열 30바이트 + 공백 1바이트

	// strlen() 함수를 사용하여 입력한 문자열의 길이 산출
	printf("입력한 문자열의 길이 : %d바이트\n", strlen(str));

	// for 문으로 입력한 문자열의 길이만큼 반복해서 문자 출력
	for (int i = 0; i < strlen(str); i++) {
		printf("*(ps + %02d) : %c\n", i, *(str+i));	// (str+i)번지의 데이터 값 출력
	}

	return 0;
}