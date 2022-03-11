// 20194146 �̽���, �������� 14-2
#include <stdio.h>

// ��������� ó���ϴ� ����ü
typedef struct {
	int year;	// ��
	int month;	// ��
	int day;	// ��
} Date;

// �л� ������ ó���ϴ� ����ü
typedef struct {
	int id;			// �й�
	char name[20];	// ����
	Date* birth;	// �������(������ ���)
} Student;

int main() {
	// ���� �Լ����� ����ü ���� ����� �ʱ�ȭ
	Date myBirth = {1997, 6, 18};
	Student myInfo = {20194146, "�̽���", &myBirth};	// ����ü ������ �����Ϳ� ������� ����ü�� �ּ� ����

	printf("�� �����͸� ����ü ����� �����ϴ� ���α׷�\n");

	// �й��� ���� ��� : ����ü ��� �������� '.' ���
	printf("�й� : %d\n", myInfo.id);
	printf("���� : %s\n", myInfo.name);

	// ������� ��� : ����ü ���� ��� �������� '->' ���
	printf("������� : %04d. %02d. %02d.\n", (myInfo.birth)->year, (myInfo.birth)->month, (myInfo.birth)->day);

	return 0;
}