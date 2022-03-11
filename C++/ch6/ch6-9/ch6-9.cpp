#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

class Board {
	static int num;
	static string* post;
public:
	static void add(string msg);
	static void print();
};

int Board::num = 0;
string* Board::post = new string[100];

void Board::add(string msg) {
	post[num] = msg;
	num += 1;
}

void Board::print() {
	cout << "************* 게시판입니다. *************" << endl;
	for (int i = 0; i < num; i++)
		cout << i << ": " << post[i] << endl;
	cout << endl;
}

int main() {
	Board::add("중간고사를 위해 예제와 연습문제를 공부해주세요.");
	Board::add("정보관 4층 프라임실 신설. 많이 이용해 주세요.");
	Board::print();
	Board::add("이승진 학생이 경진대회 입상하였습니다. 축하해주세요");
	Board::print();
	Board::add("동의대학교 컴퓨터공학과 이승진(20194146) 다녀갑니다.");
	Board::print();
}