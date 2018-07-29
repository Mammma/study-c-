#pragma once
#include "Header.h"

class String_ {
private:
	char * s = NULL;
	char * setString(char*, String_&);
	int len=0;
public:
	//String_();
	String_(char* = "");
	String_(const String_&);
	~String_();

	char* getString()const;
	int getLen()const;

	friend ostream& operator <<(ostream&, const String_&);
	friend istream& operator >>(istream&, String_&);

	void show()const;

	String_ operator + (const String_ &);
	String_& operator = (const String_ &);
	
};