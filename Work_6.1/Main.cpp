#include "TestMC.h"

void main(){
	TestMC t1(10,'x');
	TestMC t2 = t1;
	TestMC t3(5, 'y');
	TestMC t4(t1 + t3);
	
}