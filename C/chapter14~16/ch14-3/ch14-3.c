// 20194146 �̽���, �������� 14-3
#include <stdio.h>
#include <string.h>

// ��� ���� 2���� ���� ����ü ����
typedef struct {
	char name[20];	// ǰ��
	int price;		// ����
} Hardware;

// ����� ���� �Լ� ����: ����ü �����͸� �Լ��� �Ű������� ����
int comp(Hardware*);

int main() {
	int flag;

	// ����ü ��� ������ ���� �Լ����� �ʱ�ȭ
	Hardware item[2] = { {"��Ʈ��", 20000}, {"����Ʈ��", 10000}};

	printf("�� ����ü �����͸� �Լ��� �μ��� �����ϴ� ���α׷�\n");

	// ���� �Լ����� ����ü ����� ����Ű�� �ּҰ��� �μ��� �Լ� ȣ��
	flag = comp(item);

	// ���� �Լ��� printf() ��¹� �ȿ��� ����ü ��� ������ '.'�� ����Ͽ� 2�� ǰ���� ���� ���
	// ��ȯ�� ���� 1�̸� "������ ǰ��", �ƴϸ� "�ٸ� ǰ��" �޽����� ���� �Լ����� ���
	if (flag == 1)
		printf("\"%s\"�� \"%s\"�� ���� ǰ���Դϴ�.\n", item[0].name, item[1].name);
	else
		printf("\"%s\"�� \"%s\"�� �ٸ� ǰ���Դϴ�.\n", item[0].name, item[1].name);

	return 0;
}

// ����� ���� �Լ�
int comp(Hardware* item) {
	// if~else ���� ����� 2���� ǰ���� ������ 1, �ٸ��� 0�� ��ȯ
	if (strcmp(item[0].name, item[1].name) == 0)
		return 1;
	else
		return 0;
}