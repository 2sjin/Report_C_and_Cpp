// 20194146 �̽���, �������� 15-3
#include <stdio.h>
#define SIZE 30

// �Ű����� ���� �Լ� 2�� ����
void open();
void data_p();

// ���� ���� ����
char fileName[] = "sample.dat";
FILE* fb;
errno_t err;

int main() {
	puts("�� ���̳ʸ� ���� ���� �� ������ �о����");

	// ���� �Լ����� �Լ� 2���� ���������� ȣ��
	open();
	data_p();

	return 0;
}

// ����� ���� �Լ� 1 : ���̳ʸ� ������ sample.dat ����
void open() {
	int su = 0x0000035;
	puts("[open( ) �Լ� ȣ��]");

	err = fopen_s(&fb, fileName, "wb");
	if (err != 0) {
		printf("���̳ʸ� ���� ���� ����\n");
		exit(1);
	}
	printf("���̳ʸ� ���� ���� : %s\n", fileName);
	
	fwrite(&su, sizeof(int), 1, fb);
	fclose(fb);
}

// ����� ���� �Լ� 2 : sample.dat ������ ������ �о�� �� ȭ�鿡 ���
void data_p() {
	int data = 0;
	puts("\n[data_p( ) �Լ� ȣ��]");

	err = fopen_s(&fb, fileName, "rb");
	if (err != 0) {
		printf("%s ���� ���� ����...\n", fileName);
		exit(1);
	}
	printf("%s ���� ���� ����!\n", fileName);

	fread(&data, sizeof(int), 1, fb);
	printf("�о�� ������ : %d(%#0.4x)\n", data, data);
	fclose(fb);
}
