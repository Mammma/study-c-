#pragma once
#include "lib.h"

class Flag{
	bool flag;
	friend Flag& operator ! (Flag&);
	friend ostream& operator << (ostream&, const Flag&);
public:
	Flag(bool = true);

};