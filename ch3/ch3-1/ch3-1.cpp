#include <iostream>
using namespace std;

class Tower {
	int height;
public:
	Tower() { height = 1; }	// 생성자 1
	Tower(int h) { height = h; }	// 생성자 2
	int getHeight() { return height; }
};

int main() {
	Tower myTower;
	Tower seoulTower(100);
	cout << "높이는 " << myTower.getHeight() << "미터" << endl;
	cout << "높이는 " << seoulTower.getHeight() << "미터" << endl;
}