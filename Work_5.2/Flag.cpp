#pragma once
#include "Flag.h"

Flag::Flag(bool flag){
	this->flag = flag;
}

Flag& operator ! (Flag& obj){
	obj.flag = !obj.flag;
	return obj;
}
ostream& operator << (ostream& out, const Flag& obj){
	if (obj.flag == true)
		out << "true";
	else
		out << "false";
	return out;
}

