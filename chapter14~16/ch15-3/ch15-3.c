// 20194146 이승진, 연습문제 15-3
#include <stdio.h>
#define SIZE 30

// 매개변수 없는 함수 2개 선언
void open();
void data_p();

// 전역 변수 선언
char fileName[] = "sample.dat";
FILE* fb;
errno_t err;

int main() {
	puts("■ 바이너리 파일 생성 후 데이터 읽어오기");

	// 메인 함수에서 함수 2개를 순차적으로 호출
	open();
	data_p();

	return 0;
}

// 사용자 정의 함수 1 : 바이너리 파일인 sample.dat 생성
void open() {
	int su = 0x0000035;
	puts("[open( ) 함수 호출]");

	err = fopen_s(&fb, fileName, "wb");
	if (err != 0) {
		printf("바이너리 파일 생성 실패\n");
		exit(1);
	}
	printf("바이너리 파일 생성 : %s\n", fileName);
	
	fwrite(&su, sizeof(int), 1, fb);
	fclose(fb);
}

// 사용자 정의 함수 2 : sample.dat 파일의 데이터 읽어온 뒤 화면에 출력
void data_p() {
	int data = 0;
	puts("\n[data_p( ) 함수 호출]");

	err = fopen_s(&fb, fileName, "rb");
	if (err != 0) {
		printf("%s 파일 열기 실패...\n", fileName);
		exit(1);
	}
	printf("%s 파일 열기 성공!\n", fileName);

	fread(&data, sizeof(int), 1, fb);
	printf("읽어온 데이터 : %d(%#0.4x)\n", data, data);
	fclose(fb);
}
