// 20194146 �̽���, �������� 11-1
#include <stdio.h>

// ����� ���� �Լ� ����
int Gob(int* pa, int* pb);

int main() {
	// ���� �Լ����� a = 10, b = 20 ����
	int a = 10;
	int b = 20;

	int result;

	printf("�� �Լ��� �Ű������� �����͸� ���޹޾� ���� ������ �ϴ� ���α׷�\n");
	printf("�־��� �� : a = %d, b = %d\n", a, b);

	// ���� �Լ����� Gob() �Լ��� 2���� �μ��� �����Ͽ� ȣ��
	result = Gob(a, b);

	// ���� �Լ����� ���� ����� ���
	printf("��ȯ�� �� : a * b = %d\n", result);

	printf("���α׷� ����\n");
	return 0;
}

// �Լ� ���� : Gob() �Լ����� ���� 2���� ���� ������� ���� �Լ��� ��ȯ
int Gob(int* pa, int* pb) {		// ������ �����Ͱ� �Ű� ����
	int a = pa;
	int b = pb;
	printf("[���� �Լ� ����]\n");
	return a*b;
}