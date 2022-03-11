// 20194146 이승진, 연습문제 13-3
#include <stdio.h>

int main(void) {
	// 문자열 배열 선언
	char str1[20] = "Have a ";
	char str2[10] = "good time";

	printf("■ 문자열의 결합과 문자, 문자열 검색 프로그램\n");

	// 주어진 문자열 2개를 각각 출력
	printf("주어진 문자열\n");
	printf("char str1[%d] = \"%s\"\n", sizeof(str1), str1);
	printf("char str2[%d] = \"%s\"\n", sizeof(str2), str2);

	// strcat_s() 함수를 사용하여 문자열 2개 결합
	strcat_s(str1, sizeof(str1), str2);		// str1 뒤에 str2 결합
	printf("결합된 문자열 : %s\n", str1);

	// strchar() 함수를 사용하여 결합된 문자열(str1)에서 문자 'a' 검색 후 출력
	printf("문자열에서 \'a\' 검색 : %s\n", strstr(str1, "a"));

	// strstr() 함수를 사용하여 결합된 문자열(str1)에서 문자 'go' 검색 후 출력
	printf("문자열에서 \"go\" 검색 : %s\n", strstr(str1, "go"));

	printf("프로그램을 종료합니다.\n");
	return 0;
}