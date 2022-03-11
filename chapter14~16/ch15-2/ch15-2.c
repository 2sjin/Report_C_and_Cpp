// 20194146 �̽���, �������� 15-2
#include <stdio.h>
#define SIZE 30

int main() {
	int cnt;
	char str[SIZE];
	char fileName[] = "input.txt";
	FILE* fp;		// FILE�� ����ü ������ ����
	errno_t err;	// typedef�� ������ �ڷ������� ������ ����: errno_t ���

	puts("�� Ű����� �Է��� ���ڿ��� ���Ͽ� ����");

	// ������ �������� ������ ���� ����� w �����Ͽ� �ؽ�Ʈ ���� ����
	err = fopen_s(&fp, fileName, "wt");
	
	// if~else ������ ���� ���� �Ϸ� �Ǵ� ���� �޽��� ���
	if (err != 0) {
		printf("%s ���� ���� ����...\n", fileName);
		exit(1);
	}
	else
		printf("%s ���� ���� �Ϸ�!\n", fileName);

	// ���ڿ� �Է��� gets_s() �Լ� ���
	printf("1.���ڿ� �Է� : ");
	gets_s(str, sizeof(str));

	// for ������ ���Ͽ� ����� ���ڿ��� 1���� �а� ������ ���Ϸ� ���: fputc() �Լ� ���
	printf("2.���Ͽ� �� ���� ��� : ");
	for (cnt = 0; cnt < SIZE; cnt++) {
		printf("%c", str[cnt]);
		fputc(str[cnt], fp);
	}

	fclose(fp);
	printf("\n%s ���� �ݱ� ����!\n", fileName);

	return 0;
}