// 20194146 �̽���, �������� 16-2
#include <stdio.h>
#include <stdlib.h>

// typedef struct ������� ���ο� �ڷ��� ST ����
typedef struct {
	char name[20];	// �����
	int score;		// ����
} ST;

// ����� ���� �Լ� ����
int inputSize();
int inputScore(ST*, int);
void outputScore(ST*, int, int);

int main() {
	int size, sum;
	ST* st;	// ���� �޸� ������ ����Ű�� ������ ����: ���� ������ ST �ڷ���

	// �Է��� �������ŭ ���� �޸� ���� �Ҵ�
	size = inputSize();
	st = (ST*)malloc(sizeof(ST) * size);
	if (st == NULL) {
		puts("���� �޸� ���� �Ҵ� ����");
		exit(1);
	}

	// ���� �� ���� �����
	sum = inputScore(st, size);
	outputScore(st, size, sum);
	
	// �Ҵ�� ���� �޸� ���� �ݳ�
	free(st);

	return 0;
}

// ����� �Է�: ���� ������ ���. ���� ������ �ƴϸ� ���α׷� ����
int inputSize() {
	int temp;
	printf("�Է� ����� ���� : ");
	scanf_s("%d", &temp);
	if (temp < 0) {
		puts("���� ������ ������� �ʽ��ϴ�.");
		exit(-1);
	}
	return temp;
}

// for ������ �Է��� ����ŭ ����� ���� �Է�
int inputScore(ST* st, int size) {
	int cnt, sum = 0;
	for (cnt = 0; cnt < size; cnt++) {
		getchar();
		printf("���� : ");
		gets_s((st + cnt)->name, sizeof((st + cnt)->name));
		printf("���� : ");
		scanf_s("%d", &((st + cnt)->score));
		sum += (st + cnt)->score;
	}
	return sum;
}

// ���
void outputScore(ST* st, int size, int sum) {
	int cnt;
	puts("\n����\t\t����");
	puts("-------------------------------");
	for (cnt = 0; cnt < size; cnt++)
		printf("%s\t%d\n", (st + cnt)->name, (st + cnt)->score);

	// ������ ��� ����: ����� �Ҽ� ��° �ڸ����� ���
	printf("\n���� : %d", sum);
	printf("\n��� : %.2f\n", (double)sum / size);
}

