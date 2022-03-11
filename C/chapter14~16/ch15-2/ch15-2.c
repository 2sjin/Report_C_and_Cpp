// 20194146 이승진, 연습문제 15-2
#include <stdio.h>
#define SIZE 30

int main() {
	int cnt;
	char str[SIZE];
	char fileName[] = "input.txt";
	FILE* fp;		// FILE형 구조체 포인터 선언
	errno_t err;	// typedef로 생성한 자료형으로 정수값 저장: errno_t 사용

	puts("■ 키보드로 입력한 문자열을 파일에 저장");

	// 파일이 존재하지 않으면 파일 모드인 w 선언하여 텍스트 파일 생성
	err = fopen_s(&fp, fileName, "wt");
	
	// if~else 문으로 파일 생성 완료 또는 실패 메시지 출력
	if (err != 0) {
		printf("%s 파일 생성 실패...\n", fileName);
		exit(1);
	}
	else
		printf("%s 파일 생성 완료!\n", fileName);

	// 문자열 입력은 gets_s() 함수 사용
	printf("1.문자열 입력 : ");
	gets_s(str, sizeof(str));

	// for 문으로 파일에 저장된 문자열을 1개씩 읽고 지정된 파일로 출력: fputc() 함수 사용
	printf("2.파일에 쓴 내용 출력 : ");
	for (cnt = 0; cnt < SIZE; cnt++) {
		printf("%c", str[cnt]);
		fputc(str[cnt], fp);
	}

	fclose(fp);
	printf("\n%s 파일 닫기 성공!\n", fileName);

	return 0;
}