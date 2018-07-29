#pragma once
#include "Header.h"
#include "String_.h"

void test(String_ t){
	cout << t.getString() << endl;
}

void main(){
	//String_ string("lol");
	//
	//String_ newString("poc");
	//string = string + newString;
	//test(string);

	String_ test;
	cin >> test;
	cout << test << endl;
}