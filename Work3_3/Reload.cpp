#pragma once
#include "Reload.h"

Digit Digit::operator + (const Digit &obj){
	Digit temp;
	temp.dig = this->dig + obj.dig;
	return temp;
}

Digit Digit::operator - (const Digit &obj){
	Digit temp;
	temp.dig = this->dig - obj.dig;
	return temp;
}

Digit Digit::operator % (const Digit &obj){
	Digit temp;
	temp.dig = this->dig % obj.dig;
	return temp;
}

Digit Digit::operator+(const int &obj)
{
	Digit temp;
	temp.dig = this->dig +obj;
	return temp;
}

Digit::Digit(int dig)
{
	this->dig = dig;
}

void Digit::show()const{
	cout << dig << endl;
}


 Digit operator+(const int &obj1, const Digit &obj2){
	Digit temp;
	temp.dig = obj1 + obj2.dig;
	return temp;
}
