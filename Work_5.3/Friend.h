#pragma once
#include "Lib.h"

class First;

class Second{

	static int count;

	int z;
	friend First;
public:
	void test(First& obj){
		cout << obj.x << endl;
		cout << obj.y << endl;
	}
};

int  Second::count = 0;

class First{
private:
	int x, y;
public:
	First() :x(0), y(0){};
	friend Second;

	void func(Second& obj){
		obj.z = 10;
	}

};