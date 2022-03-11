#include <iostream>
using namespace std;

int big(int a, int b) {
	int local;
	if (a > b)
		local = a;
	else
		local = b;
	if (local > 100)
		return 100;
	else
		return local;
}

int big(int a, int b, int max) {
	int local;
	if (a > b)
		local = a;
	else
		local = b;
	if (local > max)
		return max;
	else
		return local;
}

int main() {
	int x = big(3, 5);
	int y = big(300, 60);
	int z = big(30, 60, 50);
	cout << x << ' ' << y << ' ' << z << endl;
}