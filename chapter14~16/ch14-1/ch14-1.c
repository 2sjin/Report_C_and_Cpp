// 20194146 �̽���, �������� 14-1
#include <stdio.h>
#define SIZE 3

// ����ü ����� ��� ����
typedef struct {
	char name[20];	// ǰ��
	int quantity;	// ����
	int price;		// �ܰ�
	int sum;		// �ݾ�
} HardWare;

int main() {
	// ����ü ������ ũ�Ⱑ 3�� �迭�� ����
	HardWare item[SIZE] = { 0 };

	puts("����ü �迭�� ����Ͽ� ǰ�� 3���� ó���ϴ� ���α׷�");

	// for ���� ����Ͽ� 3�� ��ǰ�� ǰ��, ����, �ܰ��� ���� �Է¹���
	for (int i = 0; i < SIZE; i++) {
		printf("%d��° ǰ���� ǰ��, ����, �ܰ� �Է�\n", i + 1);
		printf("ǰ�� : ");
		scanf_s("%s", item[i].name, 20);
		printf("���� : ");
		scanf_s("%d", &item[i].quantity);
		printf("�ܰ� : ");
		scanf_s("%d", &item[i].price);
		// �� ǰ�� �ݾ��� �Է¹��� ���� * �ܰ��� ����
		item[i].sum = item[i].quantity * item[i].price;
	}

	puts("[ǰ�� 3���� ����, �ܰ�, �ݾ� ���]");
	puts("��ǰ��\t����\t����\t�ݾ�(õ ��)");
	for (int i = 0; i < SIZE; i++) {
		printf("%s\t%4d\t%4d\t%10d\n", item[i].name, item[i].quantity, item[i].price, item[i].sum);
	}

	puts("");
	return 0;
}