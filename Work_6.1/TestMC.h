#pragma once
#include "Lib.h"

class TestMC{
private:
	int n;
	char *ptr = NULL;
	static int count;
	void ShowObject() const;
public:
	TestMC();
	explicit TestMC(int);
	TestMC(int, char);
	TestMC(const TestMC&); //copy
	TestMC(TestMC&&); //move
	~TestMC();

	TestMC operator + (const TestMC&) const;
	void showData() const;
	TestMC& operator = (const TestMC&); // присвоение с копированием
	TestMC& operator = (TestMC&&); // присвоение с перемещением
};

