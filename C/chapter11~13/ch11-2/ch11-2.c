// 20194146 �̽���, �������� 11-2
#include <stdio.h>

// �迭�� ũ��� #define Ű���带 ����Ͽ� ��ȣ ����� ����
#define SIZE 3

int main() {
	int sum = 0;
	double avg = 0;

	// 3�� ������ ������ ���� 95, 89, 97
	int score[SIZE] = { 95, 89, 97 };

	// �����͸� �����Ͽ� �Ϲ� ������ �ּҸ� ����
	int* pArr = score;		// �迭�� ��ü�� �迭�� ���� �ּҰ� �����('&' ���ʿ�)
	int* pSum = &sum;
	double* pAvg = &avg;

	// for ������ 3�� ���� ������ ���� ����
	for (int i = 0; i < SIZE; i++) {
		printf("%d��° ���� ���� : %d > ������ �ּ� : %d\n", i, *(pArr+i), pArr+i);
		sum += score[i];
	}

	avg = (double)sum / SIZE;

	// �����: ������ ��ü �ڸ��� 3�ڸ�, ����� �Ҽ� ��° �ڸ����� ���
	printf("\n���� : %3d > ������ �ּ� : %d", sum, pSum);
	printf("\n��� : %.2f > ������ �ּ� : %d\n", avg, pAvg);

	return 0;
}