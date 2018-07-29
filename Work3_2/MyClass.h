#pragma once
#include <iostream>
//#include <string>
//#include <stdlib.h>
using namespace std;


class Person
{
public:
	Person(char*,char*,int);
	~Person();

	void setPicture_data(const char*);
	void setName(const char*);
	void setAge(const short);

	char* getPicture_data()const;
	char* getName()const;
	short getAge()const;
	void show()const;

private:
	char *picture_data;
	char *name;
	short age;
};
