// 20194146 이승진, 연습문제 13-4
#include <stdio.h>

int main(void) {
	int index = 0;
	
	// 문자형 배열 선언
	char str[] = "SpaceZone";
	char size = sizeof(str);	// 문자열 크기 10(공백 포함)

	printf("■ 알파벳 대문자만 추출하여 출력하는 프로그램\n");

	// 주어진 문자열 출력
	printf("프로그램에서 주어진 문자열\n");
	printf("char str[%d] = \"%s\"\n", size, str);

	// while 문을 사용하여 문자열에서 알파벳 대문자 검색
	printf("알파벳 대문자만 추출하여 출력 : ");	
	while (*(str + index) != '\0') {	// null 문자(\0)를 만날 때 까지 반복
		// isupper() 함수를 사용하여 문자열에서 알파벳 대문자만 추출
		if (isupper(*(str+index)))			// 요소 문자가 대문자이면
			printf("%c", *(str + index));	// 출력
		index++;		// 인덱스 증가
	}
	printf("\n프로그램을 종료합니다.\n");
	return 0;
}