// 20194146 �̽���, �������� 13-1
#include <stdio.h>

int main(void) {
	// printf() ��� �Լ� : ��� ����
	puts("�� ǥ�� ����� ���� ���� �Լ��� ���ڿ��� ����ϴ� ���α׷�\n");
	char blank = ' ';
	char* str;

	// putchar() �Լ��� ���ڿ� ���
	puts("3���� ���� ���� ���");		// puts : ���ڿ� ��� �� �ٹٲ�
	putchar('|');					// putchar : ���� ���
	for(int i=0; i<3; i++)
		putchar(blank);
	putchar('|');

	// putchar() �Լ��� ���ڿ� ���
	puts("\n\nspace ���ڿ��� ���� �ϳ��� ���ڷ� ���");
	str = "space";
	putchar('|');
	for (int i = 0; i < strlen(str); i++)
		putchar(*(str + i));
	putchar('|');

	// puts() �Լ��� ���ڿ� ���
	puts("\n\nputs( ) �Լ��� ���ڿ� ���");
	putchar('|');
	str = "   zone";
	puts(str);
	putchar('|');

	// putchar()�� puts() �Լ��� ���ڿ� ���
	puts("\nspacezone ���ڿ� ���");
	str = "spacezone";
	putchar('|');
	putchar(blank);
	puts(str);
	putchar(blank);
	putchar('|');

	puts("\n\n���α׷��� �����մϴ�.");
	return 0;
}