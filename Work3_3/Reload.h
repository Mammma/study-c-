#pragma once
#include "Header.h"

class Digit
{
public:
	Digit(int = 0);
	void show()const;
	Digit operator + (const Digit &);
	Digit operator - (const Digit &);
	Digit operator % (const Digit &);

	Digit operator + (const int&);

	friend Digit operator + (const int&, const Digit&);

private:
	int dig;
};


