#include "Lib.h"

//class Point{
//private:
//	int x, y;
//public:
//	Point();
//	static void Print(Point& p){
//		cout << "(" << p.x << "," << p.y << ")" << endl;
//	}
//
//};

class Singleton{
	static Singleton* s;
	int k;
	Singleton(int i = 0){
		k = i;
	}
public:
	static Singleton* getSingleton(){
		return s;
	}

	int getValue(){
		return k;
	}
};

Singleton* Singleton::s = new Singleton(10);