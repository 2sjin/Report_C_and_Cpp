#include <iostream>
using namespace std;

class Container {
	int size;
public:
	Container() { size = 10; }
	void fill() { size = 10; }
	void consume() { size -= 1; }
	void consume(int n) { size -= n; }
	int getSize() { return size; }
};

class CoffeeVendingMachine {
	Container tong[3];	// tong[0] = 커피, tong[1] = 물, tong[2] = 설탕
	void fill() { tong[0].fill(); tong[1].fill(); tong[2].fill(); }
	void selectEspresso() { tong[0].consume(); tong[1].consume(); }
	void selectAmericano() { tong[0].consume(); tong[1].consume(2); }
	void selectSugarCoffee() { tong[0].consume(); tong[1].consume(2); tong[2].consume(); }
	void show() { cout << "커피 " << tong[0].getSize() << ", 물 " << tong[1].getSize() << ", 설탕 " << tong[2].getSize() << endl; }
public:
	void run();
};

void CoffeeVendingMachine::run() {
	cout << "***** 커피자판기를 작동합니다. *****" << endl;
	int select;
	while (true) {
		cout << "메뉴를 눌러주세요(1:에스프레소, 2:아메리카노, 3:설탕커피, 4:잔량보기, 5:채우기)>> ";
		cin >> select;
		switch (select) {
		case 1: cout << "에스프레소 드세요" << endl; selectEspresso();  break;
		case 2: cout << "아메리카노 드세요" << endl; selectAmericano(); break;
		case 3: cout << "설탕커피 드세요" << endl; selectSugarCoffee(); break;
		case 4: show(); break;
		case 5: fill(); show(); break;
		default: cout << "ERROR" << endl;
		}
	}
}

int main() {
	CoffeeVendingMachine cafe;
	cafe.run();
}