#include <iostream>
using namespace std;

// 클래스 선언부
class Oval {
	int width;
	int height;
public:
	Oval(int w, int h);
	Oval();
	~Oval();
	int getWidth();
	int getHeight();
	void set(int w, int h);
	void show();
};

// 클래스 구현부
Oval::Oval(int w, int h) { width = w; height = h; }
Oval::Oval() { width = height = 1; }
Oval::~Oval() { cout << "Oval 소멸 : width = " << width << ", height = " << height << endl; }
int Oval::getWidth() { return width; }
int Oval::getHeight() { return height; }
void Oval::set(int w, int h) { width = w; height = h; }
void Oval::show() { cout << "width = " << width << ", height = " << height << endl; }

// main
int main() {
	Oval a, b(3, 4);
	a.set(10, 20);
	a.show();
	cout << b.getWidth() << "," << b.getHeight() << endl;
}