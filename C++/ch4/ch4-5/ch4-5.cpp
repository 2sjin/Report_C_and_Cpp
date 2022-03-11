#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
	int index;
	string str, ch, alphabet;
	alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	cout << "아래에 한 줄을 입력하세요.(exit를 입력하면 종료합니다)" << endl;
	while (true) {
		srand((unsigned)time(0));
		cout << ">>";
		getline(cin, str, '\n');
		if (str.compare("exit") == 0)
			break;
		index = rand() % alphabet.length();
		ch = alphabet.substr(index, 1);
		index = rand() % str.length();
		str.replace(index, 1, ch);
		cout << str << endl;
	}
}