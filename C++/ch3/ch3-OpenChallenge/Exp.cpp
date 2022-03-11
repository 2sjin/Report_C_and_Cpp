// Exp.cpp

#include <iostream>
#include <cmath>
using namespace std;

#include "Exp.h"

Exp::Exp() { base = 1, exp = 1; }
Exp::Exp(int x) { base = x, exp = 1; }
Exp::Exp(int x, int y) { base = x, exp = y; }

int Exp::getValue() { return pow(base, exp); }
int Exp::getBase() { return base; }
int Exp::getExp() { return exp; }

bool Exp::equals(Exp b) {
	if (getValue() == b.getValue())	return true;
	else				return false;
}