// main.cpp

#include <iostream>
#include <cmath>
using namespace std;

#include "Exp.h"

int main() {
	Exp a(3, 2);	// =3^2 
	Exp b(9);	// =9^1
	Exp c;		// =1^1

	cout << a.getValue() << ' ' << b.getValue() << ' ' << c.getValue() << endl;
	cout << "a의 베이스 " << a.getBase() << ',' << "지수 " << a.getExp() << endl;

	if (a.equals(b))
		cout << "same" << endl;
	else
		cout << "not same" << endl;
}