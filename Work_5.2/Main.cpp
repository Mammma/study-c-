#pragma once
#include "Point.h"
#include "Flag.h"

void set(Point* p,int x,int y){
	p->x = x;
	p->y = y;
}

void main(){
	/*Point p1(4, 2);
	cout << p1;
	p1(2, 3);
	cout << p1;*/

	Flag f(true);
	cout << f << endl;
	f = !f;
	cout << f << endl;
}