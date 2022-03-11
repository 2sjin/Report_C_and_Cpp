
#include <iostream>
#include <string>
using namespace std;

int main() {

	int count = 0;
	int index;
	string str;

	// (1) string 클래스의 멤버 at()나 []를 이용
	cout << "문자열 입력>> ";
	getline(cin, str, '\n');
	for (int i = 0; i < str.length(); i++) {
		if (str.at(i) == 'a')
			count++;
	}
	cout << "문자 a는 " << count << "개 있습니다." << endl;

	// (2) find() 멤버 함수를 이용
	count = 0;
	cout << "문자열 입력>> ";
	getline(cin, str, '\n');
	for (int i = 0; i < str.length(); i++) {
		index = str.find('a', i);
		if (index != -1) {
			count++;
			i = index;
		}
	}
	cout << "문자 a는 " << count << "개 있습니다.";
}