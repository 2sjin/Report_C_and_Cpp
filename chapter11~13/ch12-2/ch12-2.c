// 20194146 �̽���, �������� 12-2
#include <stdio.h>

int main(void) {
	int choice;

	// ������ �迭�� ���� ��� ����
	char* fruit[] = { "Apple", "Tomato", "Pineapple" };

	// ��ü ���α׷��� do~while ���� �����Ͽ� ���� �ݺ� ����
	do {
		for (int i = 0; i < 3; i++)
			printf("%d.%s  ", i + 1, *(fruit+i));
		printf("4.Exit");

		// Ű����� ���� ��� �� 1�� ����: ��ȿ ���ڴ� 1~4
		printf("\n���� : ");
		scanf_s("%d", &choice);

		if (choice < 1 || choice > 4) {
			// 1~4 �̿��� ���ڴ� if~else ������ ���� �޽��� ��� �� �ݺ� ����
			printf("���ڴ� 1, 2, 3, 4�� ���˴ϴ�.\n\n");
			continue;
		}
		else if (choice == 4) {
			// ���� 4�� �Է��ϸ� ���α׷� ����
			printf("���α׷��� �����մϴ�.\n");
			break;
		}
		else {
			// ������ ���� ���
			// (�迭�� ���� �ּ� + �Է��� ��ȣ - 1) �� ������ �� ���
			printf("������ ������ \"%s\"�Դϴ�.\n\n", *(fruit + choice - 1));
		}
	} while (1);

	return 0;
}