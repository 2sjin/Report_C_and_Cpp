// 20194146 �̽���, �������� 13-3
#include <stdio.h>

int main(void) {
	// ���ڿ� �迭 ����
	char str1[20] = "Have a ";
	char str2[10] = "good time";

	printf("�� ���ڿ��� ���հ� ����, ���ڿ� �˻� ���α׷�\n");

	// �־��� ���ڿ� 2���� ���� ���
	printf("�־��� ���ڿ�\n");
	printf("char str1[%d] = \"%s\"\n", sizeof(str1), str1);
	printf("char str2[%d] = \"%s\"\n", sizeof(str2), str2);

	// strcat_s() �Լ��� ����Ͽ� ���ڿ� 2�� ����
	strcat_s(str1, sizeof(str1), str2);		// str1 �ڿ� str2 ����
	printf("���յ� ���ڿ� : %s\n", str1);

	// strchar() �Լ��� ����Ͽ� ���յ� ���ڿ�(str1)���� ���� 'a' �˻� �� ���
	printf("���ڿ����� \'a\' �˻� : %s\n", strstr(str1, "a"));

	// strstr() �Լ��� ����Ͽ� ���յ� ���ڿ�(str1)���� ���� 'go' �˻� �� ���
	printf("���ڿ����� \"go\" �˻� : %s\n", strstr(str1, "go"));

	printf("���α׷��� �����մϴ�.\n");
	return 0;
}