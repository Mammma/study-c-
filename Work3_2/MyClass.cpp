#pragma once
#include "MyClass.h"


Person::Person(char* p, char* n, int a)
{
	int temp = strlen(p);
	picture_data = new char[temp + 1];
	if (!picture_data){
		cout << "Exceptiom" << endl;
		exit(1);
	}
	strncpy(picture_data, p, temp+1);

	temp = strlen(n);
	name = new char[temp + 1];
	if (!name){
		cout << "Exceptiom" << endl;
		exit(1);
	}
	strncpy(name, n, temp+1);

	age = a;

}

Person::~Person()
{
	if (picture_data)
		delete[] picture_data;
	if (name)
		delete[] name;
	age = 0;
	//cout << "destr" << endl;
}

void Person::setPicture_data(const char* picture_data){
	if (this->picture_data)
		delete[] this->picture_data;
	int temp = strlen(picture_data);
	this->picture_data = new char[temp + 1];
	if (!this->picture_data){
		cout << "Exceptiom" << endl;
		exit(1);
	}
	strncpy(this->picture_data, picture_data, temp+1);

}



void Person::setName(const char* name){
	if (this->name)
		delete[] this->name;
	int temp = strlen(name);
	this->name = new char[temp + 1];
	if (!this->name){
		cout << "Exceptiom" << endl;
		exit(1);
	}
	strncpy(this->name, name, temp+1);

}

void Person::setAge(const short age){
	this->age = age;
}

char* Person::getPicture_data()const{
	return this->picture_data;
}

char* Person::getName()const{
	return this->name;
}

short Person::getAge()const {
	return this->age;
}

void Person::show()const{
	cout << "path - " << getPicture_data() << endl;
	cout << "name - " << getName() << endl;
	cout << "age - " << getAge() << endl;
}