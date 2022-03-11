// 20194146 이승진, 연습문제 15-1
#include <stdio.h>

int main() {
	char fileName[] = "test05.txt";
	char str[30];	// 문자형 배열 선언: 배열 크기는 30
	int cnt;		// 문자열 카운터 변수 선언: 정수형 변수
	FILE* fp;		// FILE형 구조체 선언: 1개 선언
	errno_t err;

	puts("■ 'test05.txt' 파일을 열고 닫는 프로그램");

	// test05.txt 파일 생성
	err = fopen_s(&fp, fileName, "wt");
	if (err != 0) {
		printf("%s 파일 생성 실패\n", fileName);
		exit(1);
	}
	printf("%s 파일 생성 완료\n", fileName);

	// test05.txt 파일에 키보드로 문자열 추가(저장)
	for (cnt = 1; cnt <= 2 * 2; cnt += 2) {
		printf("%d.문자열 입력 : ", cnt);
		gets_s(str, sizeof(str));
		printf("%d.파일에 입력한 문자열은 %s\n", cnt+1, str);
		fprintf(fp, "%s", str);
	}

	// test05.txt 파일 전체 내용 출력
	printf("%d.%s 파일의 전체 내용을 확인하세요.\n", cnt, fileName);

	fclose(fp);
	return 0;
}