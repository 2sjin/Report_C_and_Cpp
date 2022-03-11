#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class EvenRandom {
	int n;
public:
	EvenRandom() { srand((unsigned)time(0)); n = rand(); };
	int next() { n = rand() % (RAND_MAX / 2) * 2; return n; };
	int nextInRange(int a, int b) { n = rand() % 5 * 2 + 2;  return n; };
};

int main() {
	EvenRandom r;
	cout << "-- 0에서 " << RAND_MAX << "까지의 랜덤 정수 10 개--" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.next();
		cout << n << ' ';
	}
	cout << endl << endl << "-- 2에서 " << "10 까지의 랜덤 정수 10 개 --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.nextInRange(2, 4);
		cout << n << ' ';
	}
	cout << endl;
}