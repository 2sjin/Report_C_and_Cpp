// 20194146 이승진, 연습문제 16-1
#include <stdio.h>
#include <stdlib.h>

// 품목의 문자열 길이 20은 #define으로 선언
#define SIZE 20

// 새로운 NODE 타입 정의 : typedef 사용
typedef struct node {
	char name[SIZE];
	int quantity;
	struct node* link;	// 자기 참조 구조체를 선언하여 링크 노드로 사용
} NODE;

// 사용자 정의 함수 선언
NODE* inputNodes(NODE*);
void printList(NODE*);
void destroyNodes(NODE*);

int main() {
	NODE* list = NULL;

	list = inputNodes(list);
	printf("\n프로그램을 종료합니다.");
	printList(list);
	destroyNodes(list);

	return 0;
}

// 함수 정의: 데이터 입력 및 노드 연결
NODE* inputNodes(NODE* p_start) {
	NODE* p_now;			// 현재 노드의 주소
	NODE* p_prev = NULL;	// 이전 노드의 주소(초깃값은 반드시 NULL)
	char buffer[SIZE];
	int quantity;

	// 연결 리스트는 while 문으로 생성
	while (1) {
		p_now = (NODE*)malloc(sizeof(NODE));	// 동적 메모리 할당
		if (p_now == NULL) {
			puts("메모리 동적 할당 오류 발생\n");
			exit(1);
		}

		// get_s() 함수를 사용하여 키보드로부터 값을 입력받음
		printf("품목 입력(종료는 Q 또는 q) : ");
		gets_s(buffer, SIZE);
		if (buffer[0] == 'Q' || buffer[0] == 'q')
			break;	// 알파벳 대소 문자 구별 없이 Q 또는 q를 입력하면 프로그램 종료
		strcpy_s(p_now->name, sizeof(p_now->name), buffer);
		printf("수량 입력 : ");
		gets_s(buffer, SIZE);
		quantity = atoi(buffer);
		p_now->quantity = quantity;

		// 노드 연결
		if (p_start == NULL)	// 리스트가 비어있으면(시작 노드가 없으면)
			p_start = p_now;		// 새로운 노드를 시작 노드로 설정
		else					// 리스트가 비어있지 않으면
			p_prev->link = p_now;	// 새로운 노드를 이전 노드의 링크 필드에 연결
		p_now->link = NULL;	// 새로운 노드의 링크 필드를 NULL로 설정
		p_prev = p_now;		// 현재 노드(새로운 노드)를 이전 노드로 대입
	}
	return p_start;	// 시작 노드의 주소값 리턴
}

// 함수 정의: 입력받은 품목과 수량을 출력 결과로 화면에 출력
void printList(NODE* p_start) {
	NODE* p_now;		// 현재 노드의 주소
	p_now = p_start;	// 시작 노드로 포인터 이동
	puts("");
	while (p_now != NULL) {	// 마지막 노드까지 반복
		printf("[%s, %d]", p_now->name, p_now->quantity);
		p_now = p_now->link;	// 링크 필드가 가리키는 노드로 포인터 이동
		if (p_now != NULL)
			printf(" -> ");
	}
	puts("");
	return;
}

// 함수 정의: 연결 리스트의 노드에 할당된 동적 메모리는 free() 함수를 사용하여 반납
void destroyNodes(NODE* p_start) {
	NODE* p_now;	// 현재 노드의 주소
	NODE* p_next;	// 다음 노드의 주소
	p_now = p_start;	// 시작 노드로 포인터 이동
	while (p_now != NULL) {		// 마지막 노드까지 반복
		p_next = p_now->link;	// 현재 노드의 링크 필드가 가리키는 노드를 다음 노드로 대입
		free(p_now);			// 동적 메모리 반납
		p_now = p_next;			// 다음 노드로 포인터 이동
	}
	return;
}