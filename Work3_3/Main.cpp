#pragma once
#include "Header.h"
#include "Reload.h"

void main(){
	Digit x(10);
	Digit y(20);
	Digit z;
	x.show();
	y.show();
	z = x + y;
	z.show();
	z = x - y;
	z.show();
	z = x % y;
	z.show();

	z = x + 5;
	z.show();

	z = 1000+x;
	z.show();
}