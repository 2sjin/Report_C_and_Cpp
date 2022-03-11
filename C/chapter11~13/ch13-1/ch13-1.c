// 20194146 이승진, 연습문제 13-1
#include <stdio.h>

int main(void) {
	// printf() 출력 함수 : 사용 금지
	puts("■ 표준 입출력 단일 문자 함수로 문자열을 출력하는 프로그램\n");
	char blank = ' ';
	char* str;

	// putchar() 함수로 문자열 출력
	puts("3개의 공백 문자 출력");		// puts : 문자열 출력 후 줄바꿈
	putchar('|');					// putchar : 문자 출력
	for(int i=0; i<3; i++)
		putchar(blank);
	putchar('|');

	// putchar() 함수로 문자열 출력
	puts("\n\nspace 문자열을 각각 하나의 문자로 출력");
	str = "space";
	putchar('|');
	for (int i = 0; i < strlen(str); i++)
		putchar(*(str + i));
	putchar('|');

	// puts() 함수로 문자열 출력
	puts("\n\nputs( ) 함수로 문자열 출력");
	putchar('|');
	str = "   zone";
	puts(str);
	putchar('|');

	// putchar()와 puts() 함수로 문자열 출력
	puts("\nspacezone 문자열 출력");
	str = "spacezone";
	putchar('|');
	putchar(blank);
	puts(str);
	putchar(blank);
	putchar('|');

	puts("\n\n프로그램을 종료합니다.");
	return 0;
}