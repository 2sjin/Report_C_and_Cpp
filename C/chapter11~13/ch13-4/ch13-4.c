// 20194146 �̽���, �������� 13-4
#include <stdio.h>

int main(void) {
	int index = 0;
	
	// ������ �迭 ����
	char str[] = "SpaceZone";
	char size = sizeof(str);	// ���ڿ� ũ�� 10(���� ����)

	printf("�� ���ĺ� �빮�ڸ� �����Ͽ� ����ϴ� ���α׷�\n");

	// �־��� ���ڿ� ���
	printf("���α׷����� �־��� ���ڿ�\n");
	printf("char str[%d] = \"%s\"\n", size, str);

	// while ���� ����Ͽ� ���ڿ����� ���ĺ� �빮�� �˻�
	printf("���ĺ� �빮�ڸ� �����Ͽ� ��� : ");	
	while (*(str + index) != '\0') {	// null ����(\0)�� ���� �� ���� �ݺ�
		// isupper() �Լ��� ����Ͽ� ���ڿ����� ���ĺ� �빮�ڸ� ����
		if (isupper(*(str+index)))			// ��� ���ڰ� �빮���̸�
			printf("%c", *(str + index));	// ���
		index++;		// �ε��� ����
	}
	printf("\n���α׷��� �����մϴ�.\n");
	return 0;
}