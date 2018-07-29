#pragma once

class Point {
	int x, y;
	char * string;
	
public:
	
	Point(int x = 0, int y = 0);
	void show();
	~Point();
	Point(const Point&);
};