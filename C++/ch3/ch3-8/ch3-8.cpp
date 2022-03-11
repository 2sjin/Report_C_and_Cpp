#include <iostream>
#include <string>
using namespace std;

class Integer {
	int value;
public:
	Integer(int a) { value = a; };
	Integer(string a) { value = stoi(a); }
	void set(int a) { value = a; };
	int get() { return value; };
	bool isEven() { return true; };
};

int main() {
	Integer n(30);
	cout << n.get() << ' ';
	n.set(50);
	cout << n.get() << ' ';

	Integer m("300");
	cout << m.get() << ' ';
	cout << m.isEven();
}