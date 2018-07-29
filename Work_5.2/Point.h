#pragma once
#include "Lib.h"

class Point{
private:
	int x, y;

	friend void set(Point*, int, int);

public:
	Point(int = 0, int = 0);
	Point(const Point&);
	//~Point(){};

	friend ostream& operator << (ostream&,const Point&);
	void operator () (int, int);

};