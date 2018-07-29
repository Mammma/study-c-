#pragma once
#include "Lib.h"
#include "sing.h"
void main(){
	cout << Singleton::getSingleton()->getValue() << endl;
}