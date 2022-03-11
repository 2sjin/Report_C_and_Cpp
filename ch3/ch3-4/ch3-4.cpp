#include <iostream>
using namespace std;

class CoffeeMachine {
	int coffee;	// 커피
	int water;		// 물
	int sugar;		// 설탕
public:
	CoffeeMachine(int c, int w, int s) { coffee = c, water = w, sugar = s; };
	void drinkEspresso() { coffee -= 1, water -= 1; };
	void drinkAmericano() { coffee -= 1, water -= 2; };
	void drinkSugarCoffee() { coffee -= 1, water -= 2, sugar -= 1; };
	void fill() { coffee = water = sugar = 10; };
	void show();
};

void CoffeeMachine::show() {
	cout << "커피 머신 상태, 커피:" << coffee
		<< "\t물:" << water
		<< "\t설탕:" << sugar << endl;
}

int main() {
	CoffeeMachine java(5, 10, 3);
	java.drinkEspresso();
	java.show();
	java.drinkAmericano();
	java.show();
	java.drinkSugarCoffee();
	java.show();
	java.fill();
	java.show();
}