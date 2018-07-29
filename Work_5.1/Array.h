#pragma once
#include "Lib.h"

class Array{
private:
	int size;
	double *ptr;
	static int count;
public:
	Array(int = 10);
	Array(const Array&);
	~Array();
	
	friend ostream& operator << (ostream&, const Array&);
	friend istream& operator >> (istream&, Array&);
	int getSize()const;

	bool operator == (const Array&)const;
	bool operator != (const Array&)const;

	Array& operator = (const Array&);
	double& operator [](int);

	static int getCount();

};

