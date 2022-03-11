#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	void setRadius(int radius);
	double getArea();
};

void Circle::setRadius(int radius) {
	this->radius = radius;
}

double Circle::getArea() {
	return 3.14 * radius * radius;
}

int main() {
	int num;		// 원의 개수 
	int r_input;	// 반지름 입력 	
	int count = 0;	// 면적이 100보다 큰 원의 개수
	cout << "원의 개수 >> ";
	cin >> num;
	Circle* arr = new Circle[num];
	for (int i = 1; i <= num; i++) {
		cout << "원 " << i << "의 반지름 >> ";
		cin >> r_input;
		arr->setRadius(r_input);
		if (arr->getArea() > 100)
			count++;
		arr++;
	}
	cout << "면적이 100보다 큰 원은 " << count << "개 입니다" << endl;
}