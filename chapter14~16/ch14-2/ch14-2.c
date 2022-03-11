// 20194146 이승진, 연습문제 14-2
#include <stdio.h>

// 생년월일을 처리하는 구조체
typedef struct {
	int year;	// 년
	int month;	// 월
	int day;	// 일
} Date;

// 학생 정보를 처리하는 구조체
typedef struct {
	int id;			// 학번
	char name[20];	// 성명
	Date* birth;	// 생년월일(포인터 사용)
} Student;

int main() {
	// 메인 함수에서 구조체 변수 선언과 초기화
	Date myBirth = {1997, 6, 18};
	Student myInfo = {20194146, "이승진", &myBirth};	// 구조체 변수의 포인터에 생년월일 구조체의 주소 대입

	printf("■ 포인터를 구조체 멤버로 선언하는 프로그램\n");

	// 학번과 성명 출력 : 구조체 멤버 연산자인 '.' 사용
	printf("학번 : %d\n", myInfo.id);
	printf("성명 : %s\n", myInfo.name);

	// 생년월일 출력 : 구조체 간접 멤버 연산자인 '->' 사용
	printf("생년월일 : %04d. %02d. %02d.\n", (myInfo.birth)->year, (myInfo.birth)->month, (myInfo.birth)->day);

	return 0;
}