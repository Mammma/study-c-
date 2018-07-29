#pragma once

#include "Array.h"

void main(){
	Array a1;
	cout << a1.getCount() << endl;
	Array a2(20);
	cout << Array::getCount() << endl;
	cin >> a1;
	cout << a1 << endl;
	a1 = a2;
	
}