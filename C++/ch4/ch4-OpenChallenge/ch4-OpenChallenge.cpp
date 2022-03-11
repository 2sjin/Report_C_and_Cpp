#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

class Player {
	string name;	// 플레이어 이름
public:
	void setName(string name) { this->name = name; }
	string getName() { return name; }
};

class WordGame {
	int numPlayers;	// 플레이어 수
	string start, a, b;
	bool GameOver;
public:
	Player* p;
	int setPlayer();
	void startGame();
};

int WordGame::setPlayer() {
	cout << "끝말 잇기 게임을 시작합니다" << endl;
	do {	// 최소 1번 이상은 do~while 반복문 실행
		cout << "게임에 참가하는 인원은 몇명입니까? (1명 이상) >> ";
		cin >> numPlayers;
	} while (numPlayers <= 0);	// 입력이 0 이하일 경우 do~while 반복문 재실행
	p = new Player[numPlayers];
	string inputName;
	for (int i = 0; i < numPlayers; i++) {
		cout << "참가자의 이름을 빈칸 없이 입력하세요. >> ";
		cin >> inputName;
		p[i].setName(inputName);
	}
	return numPlayers;
}

void WordGame::startGame() {
	cout << endl << "2~4글자 단어를 띄어쓰기 없이 입력해주세요." << endl;
	cout << "단어를 잘못 입력하는 즉시 게임이 종료됩니다." << endl;
	cout << "(두음법칙은 적용되지 않음)" << endl;
	start = "가나다라마바사아자차카타파타하";	// 시작하는 글자 후보를 나타내는 문자열
	int lenStart = start.length();
	srand((unsigned)time(0));
	// start 중 2바이트 문자(시작점) 하나를 랜덤 선택
	a = start.substr(rand() % lenStart % (lenStart / 2) * 2, 2);
	cout << endl << "시작하는 글자는 [ " << a << " ] 입니다" << endl;
	while (GameOver == false) {
		for (int i = 0; i < numPlayers; i++) {
			cout << p[i].getName() << " >> ";
			cin >> b;
			if (a.at(a.length() - 2) == b.at(0) && a.at(a.length() - 1) == b.at(1)) {
				if (b.length() >= 4 && b.length() <= 8) {
					a = b;
					continue;	// 제대로 입력: for문 반복
				}
			}
			cout << p[i].getName() << " 의 패배!" << endl;
			GameOver = true;	// 잘못 입력: 게임 종료
			break;
		}
	}
	cout << "게임을 종료합니다." << endl;
}

int main() {
	WordGame game;
	// setPlayer() 함수 실행. 종료 시 플레이어 수를 반환하여 객체 생성.
	Player* p = new Player[game.setPlayer()];
	game.startGame();
}