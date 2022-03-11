#include <iostream>
using namespace std;

class Account {
	string name;	// 이름
	int id;		// 계좌번호
	int balance;	// 잔액
public:
	Account(string n, int i, int b) { name = n, id = i, balance = b; };
	string getOwner() { return name; };
	int deposit(int d) { balance += d; return balance; };
	int whthdraw(int w) { balance -= w; return balance; };
	int inquiry() { return balance; };
};

int main() {
	Account a("kitae", 1, 5000);
	a.deposit(50000);
	cout << a.getOwner() << "의 잔액은 " << a.inquiry() << endl;
	int money = a.whthdraw(20000);
	cout << a.getOwner() << "의 잔액은 " << a.inquiry() << endl;
}