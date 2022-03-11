#include <iostream>
using namespace std;

class Trace {
	static int count;
	static string* debugTag;
	static string* debugLog;
public:
	static void put(string tag, string info);
	static void print(string tag = "all");
};

int Trace::count = 0;
string* Trace::debugTag = new string[100];
string* Trace::debugLog = new string[100];

void Trace::put(string tag, string info) {
	debugTag[count] = tag;
	debugLog[count] = info;
	count += 1;
}

void Trace::print(string tag) {
	if (tag == "f()") {
		cout << "----- f()태그의 Trace 정보를 출력합니다. -----" << endl;
		for (int i = 0; i < count; i++)
			if (debugTag[i] == "f()")
				cout << debugTag[i] << ":" << debugLog[i] << endl;
	}
	else if (tag == "all") {
		cout << "----- 모든 Trace 정보를 출력합니다. -----" << endl;
		for (int i = 0; i < count; i++)
			cout << debugTag[i] << ":" << debugLog[i] << endl;
	}
}

void f() {
	int a, b, c;
	cout << "두 개의 정수를 입력하세요>>";
	cin >> a >> b;
	Trace::put("f()", "정수를 입력 받았음");
	c = a + b;
	Trace::put("f()", "합 계산");
	cout << "합은 " << c << endl;
}

int main() {
	Trace::put("main()", "프로그램 시작합니다");
	f();
	Trace::put("main()", "종료");

	Trace::print("f()");
	Trace::print();
}