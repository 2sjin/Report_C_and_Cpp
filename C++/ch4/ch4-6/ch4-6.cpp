#include <iostream>
#include <string>
using namespace std;

int main() {
	string strIn;	// �Է� ���ڿ�
	string strOut;	// ��� ���ڿ�(�Ųٷ�)
	cout << "�Ʒ��� �� ���� �Է��ϼ���.(exit�� �Է��ϸ� �����մϴ�)" << endl;
	while (true) {
		strOut = "";	// ��� ���ڿ��� �ʱ�ȭ
		cout << ">>";
		getline(cin, strIn, '\n');
		if (strIn == "exit")
			break;	// �Է� ���ڿ��� exit �̸� ����
		for (int i = strIn.length(); i >= 0; i--) {
			strOut += strIn.substr(i, 1);	// ������ ���ں��� ù ���ڱ��� �ϳ��� ����
		}
		cout << strOut << endl;
	}
}