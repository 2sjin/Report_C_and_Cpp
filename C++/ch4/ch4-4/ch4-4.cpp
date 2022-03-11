#include <iostream>
using namespace std;

class Sample {
	int* p;
	int size;
public:
	Sample(int n) {
		size = n; p = new int[n];
	}
	void read();
	void write();
	int big();
	~Sample();
};

// main() 함수가 실행되도록 아래 부분부터 작성하면 된다.
void Sample::read() {
	cout << "정수 " << size << " 개를 입력하세요(정수 사이 띄어쓰기) >> ";
	for (int i = 0; i < size; i++) {
		cin >> p[i];
	}
}

void Sample::write() {
	for (int i = 0; i < size; i++) {
		cout << p[i] << " ";
	}
	cout << endl;
}

int Sample::big() {
	int max = p[0];
	for (int i = 0; i < size; i++) {
		if (p[i] > max)
			max = p[i];
	}
	return max;
}

Sample::~Sample() { }
// 작성을 완료하면 main() 함수가 설계대로 동작한다.

int main() {
	Sample s(10);
	s.read();
	s.write();
	cout << "가장 큰 수는 " << s.big() << endl;
}