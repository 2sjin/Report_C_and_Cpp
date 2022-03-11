// Exp.h

class Exp {
public:
	int base, exp;

	Exp(int x, int y);
	Exp(int x);
	Exp();

	int getValue();
	int getBase();
	int getExp();

	bool equals(Exp x);
};