#include <iostream>
#include <string>
using namespace std;

int main() {
	string strIn;	// 입력 문자열
	string strOut;	// 출력 문자열(거꾸로)
	cout << "아래에 한 줄을 입력하세요.(exit를 입력하면 종료합니다)" << endl;
	while (true) {
		strOut = "";	// 출력 문자열의 초기화
		cout << ">>";
		getline(cin, strIn, '\n');
		if (strIn == "exit")
			break;	// 입력 문자열이 exit 이면 종료
		for (int i = strIn.length(); i >= 0; i--) {
			strOut += strIn.substr(i, 1);	// 마지막 문자부터 첫 문자까지 하나씩 추출
		}
		cout << strOut << endl;
	}
}