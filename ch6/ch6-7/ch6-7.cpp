#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;

class Random {
public:
	static void seed() { srand((unsigned)time(0)); }
	static int nextInt(int min = 0, int max = 32767);
	static char nextAlphabet();
	static double nextDouble();
};

int Random::nextInt(int min, int max) {
	int n = rand() % (max - min + 1) + min;
	return n;
}

char Random::nextAlphabet() {
	int ch;
	int upper = rand();
	if (upper % 2 == 1)
		ch = rand() % 26 + 65;	// ASCII 코드 A~Z
	else
		ch = rand() % 26 + 97;	// ASCII 코드 a~z
	return ch;
}

double Random::nextDouble() {
	double d = (double)rand() / RAND_MAX;
	return d;
}

int main() {
	Random r;
	r.seed();

	cout << "1에서 100까지 랜덤한 정수 10개를 출력합니다" << endl;
	for (int i = 0; i < 10; i++) {
		cout << r.nextInt(1, 100) << ' ';
	}
	cout << endl;

	cout << "알파벳을 랜덤하게 10개를 출력합니다" << endl;
	for (int i = 0; i < 10; i++) {
		cout << r.nextAlphabet() << ' ';
	}
	cout << endl;

	cout << "랜덤한 실수를 10개를 출력합니다" << endl;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 5; j++) {
			cout << r.nextDouble() << ' ';
		}
		cout << endl;
	}
}