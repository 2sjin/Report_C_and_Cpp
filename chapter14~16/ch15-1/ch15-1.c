// 20194146 �̽���, �������� 15-1
#include <stdio.h>

int main() {
	char fileName[] = "test05.txt";
	char str[30];	// ������ �迭 ����: �迭 ũ��� 30
	int cnt;		// ���ڿ� ī���� ���� ����: ������ ����
	FILE* fp;		// FILE�� ����ü ����: 1�� ����
	errno_t err;

	puts("�� 'test05.txt' ������ ���� �ݴ� ���α׷�");

	// test05.txt ���� ����
	err = fopen_s(&fp, fileName, "wt");
	if (err != 0) {
		printf("%s ���� ���� ����\n", fileName);
		exit(1);
	}
	printf("%s ���� ���� �Ϸ�\n", fileName);

	// test05.txt ���Ͽ� Ű����� ���ڿ� �߰�(����)
	for (cnt = 1; cnt <= 2 * 2; cnt += 2) {
		printf("%d.���ڿ� �Է� : ", cnt);
		gets_s(str, sizeof(str));
		printf("%d.���Ͽ� �Է��� ���ڿ��� %s\n", cnt+1, str);
		fprintf(fp, "%s", str);
	}

	// test05.txt ���� ��ü ���� ���
	printf("%d.%s ������ ��ü ������ Ȯ���ϼ���.\n", cnt, fileName);

	fclose(fp);
	return 0;
}