#include <iostream>
using namespace std;

class MyVector {
	int* mem;
	int size;
public:
	// 디폴트 매개 변수 값이 교재에는 n = 100 으로 되어 있음
	// 하지만 실행 결과 화면의 간략화를 위해 n = 10 으로 임의 수정
	MyVector(int n = 10, int val = 0);
	~MyVector() { delete[] mem; }
	void show();
};

MyVector::MyVector(int n, int val) {
	mem = new int[n];
	size = n;
	for (int i = 0; i < size; i++) mem[i] = val;
}

void MyVector::show() {
	for (int i = 0; i < size; i++) {
		cout << mem[i] << ' ';
	}
	cout << endl;
}

int main() {
	MyVector v1, v2(15, 4);
	v1.show();
	v2.show();
}