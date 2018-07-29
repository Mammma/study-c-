#pragma once
#include "Header.h"

class MyDigit {
private:
	int n;
public:
	MyDigit(int = 0);
	void show()const;
	MyDigit& operator ++(int x);
	MyDigit& operator --(int y);
	void operator ++();
	void operator --();
};