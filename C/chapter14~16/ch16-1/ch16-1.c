// 20194146 �̽���, �������� 16-1
#include <stdio.h>
#include <stdlib.h>

// ǰ���� ���ڿ� ���� 20�� #define���� ����
#define SIZE 20

// ���ο� NODE Ÿ�� ���� : typedef ���
typedef struct node {
	char name[SIZE];
	int quantity;
	struct node* link;	// �ڱ� ���� ����ü�� �����Ͽ� ��ũ ���� ���
} NODE;

// ����� ���� �Լ� ����
NODE* inputNodes(NODE*);
void printList(NODE*);
void destroyNodes(NODE*);

int main() {
	NODE* list = NULL;

	list = inputNodes(list);
	printf("\n���α׷��� �����մϴ�.");
	printList(list);
	destroyNodes(list);

	return 0;
}

// �Լ� ����: ������ �Է� �� ��� ����
NODE* inputNodes(NODE* p_start) {
	NODE* p_now;			// ���� ����� �ּ�
	NODE* p_prev = NULL;	// ���� ����� �ּ�(�ʱ갪�� �ݵ�� NULL)
	char buffer[SIZE];
	int quantity;

	// ���� ����Ʈ�� while ������ ����
	while (1) {
		p_now = (NODE*)malloc(sizeof(NODE));	// ���� �޸� �Ҵ�
		if (p_now == NULL) {
			puts("�޸� ���� �Ҵ� ���� �߻�\n");
			exit(1);
		}

		// get_s() �Լ��� ����Ͽ� Ű����κ��� ���� �Է¹���
		printf("ǰ�� �Է�(����� Q �Ǵ� q) : ");
		gets_s(buffer, SIZE);
		if (buffer[0] == 'Q' || buffer[0] == 'q')
			break;	// ���ĺ� ��� ���� ���� ���� Q �Ǵ� q�� �Է��ϸ� ���α׷� ����
		strcpy_s(p_now->name, sizeof(p_now->name), buffer);
		printf("���� �Է� : ");
		gets_s(buffer, SIZE);
		quantity = atoi(buffer);
		p_now->quantity = quantity;

		// ��� ����
		if (p_start == NULL)	// ����Ʈ�� ���������(���� ��尡 ������)
			p_start = p_now;		// ���ο� ��带 ���� ���� ����
		else					// ����Ʈ�� ������� ������
			p_prev->link = p_now;	// ���ο� ��带 ���� ����� ��ũ �ʵ忡 ����
		p_now->link = NULL;	// ���ο� ����� ��ũ �ʵ带 NULL�� ����
		p_prev = p_now;		// ���� ���(���ο� ���)�� ���� ���� ����
	}
	return p_start;	// ���� ����� �ּҰ� ����
}

// �Լ� ����: �Է¹��� ǰ��� ������ ��� ����� ȭ�鿡 ���
void printList(NODE* p_start) {
	NODE* p_now;		// ���� ����� �ּ�
	p_now = p_start;	// ���� ���� ������ �̵�
	puts("");
	while (p_now != NULL) {	// ������ ������ �ݺ�
		printf("[%s, %d]", p_now->name, p_now->quantity);
		p_now = p_now->link;	// ��ũ �ʵ尡 ����Ű�� ���� ������ �̵�
		if (p_now != NULL)
			printf(" -> ");
	}
	puts("");
	return;
}

// �Լ� ����: ���� ����Ʈ�� ��忡 �Ҵ�� ���� �޸𸮴� free() �Լ��� ����Ͽ� �ݳ�
void destroyNodes(NODE* p_start) {
	NODE* p_now;	// ���� ����� �ּ�
	NODE* p_next;	// ���� ����� �ּ�
	p_now = p_start;	// ���� ���� ������ �̵�
	while (p_now != NULL) {		// ������ ������ �ݺ�
		p_next = p_now->link;	// ���� ����� ��ũ �ʵ尡 ����Ű�� ��带 ���� ���� ����
		free(p_now);			// ���� �޸� �ݳ�
		p_now = p_next;			// ���� ���� ������ �̵�
	}
	return;
}