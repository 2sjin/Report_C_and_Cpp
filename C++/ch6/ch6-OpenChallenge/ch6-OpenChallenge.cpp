#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

class Person {
	static string name;
public:
	static void setName(string n) { name = n; }
	static string getName() { return name; }
};

string Person::name;

class UpAndDownGame {
	static Person* p;
	static int answer;
	static int numMin;
	static int numMax;
public:
	static void setPerson(string a, string b);
	static void gameStart();
};

Person* UpAndDownGame::p = new Person[2];
int UpAndDownGame::answer;
int UpAndDownGame::numMin = 0;
int UpAndDownGame::numMax = 99;

void UpAndDownGame::setPerson(string a, string b) {
	p[0].setName(a);
	p[1].setName(b);
}

void UpAndDownGame::gameStart() {
	srand((unsigned)time(0));
	int answer = rand() % 100;
	cout << answer << endl;
	cout << "Up & Down 게임을 시작합니다" << endl;
	for (int i = 0; i < 2; i++) {
		int n;
		cout << "답은 " << numMin << "과 " << numMax << " 사이에 있습니다." << endl;
		cout << p[i].getName() << ">>";
		cin >> n;
		if (n > numMax or n < numMin) {}
		else if (n > answer) numMax = n;
		else if (n < answer) numMin = n;
		else {
			cout << p[i].getName() << " 이/가 이겼습니다!!" << endl;
			break;
		}
		if (i >= 1) i = -1;
	}
}

int main() {
	UpAndDownGame game;
	game.setPerson("김인수", "오은경");
	game.gameStart();
}