// 20194146 �̽���, �������� 12-1
#include <stdio.h>

int main(void) {
	// �迭 ����
	int arr[] = {23, 10, 15, 92, 88};
	int size = sizeof(arr) / sizeof(arr[0]);	// 20 / 4 = 5

	// ������ *max�� �����Ͽ� arr[0]�� �ִ밪���� �����Ͽ� �ִ� ����
	int* max = arr;

	// ù ��° �迭 ��Ҹ� ������ �迭�� ��ȯ
	*arr = (int*)arr[0];

	printf("�� �־��� �迭 ��� �߿��� �ִ� ���ϴ� ���α׷�\n");
	printf("�迭 ��� : arr[ ] = {23, 10, 15, 92, 88}\n\n");

	// arr+i ������ ������ �� ���(arr�� �迭�� ���� �ּ�)
	for (int i = 0; i < size; i++) {
		printf("%d��° �迭 ��� : %d\n", i, *(arr+i)); 

		// �迭 ��ҿ� (int)max�� if ������ ���Ͽ� �ִ� �Ǻ�
		if (*(arr+i) > *max)
			*max = *(arr+i);
	}

	printf("%d�� ���� �߿��� �ִ��� %d�Դϴ�.\n", size, *max);
	return 0;
}