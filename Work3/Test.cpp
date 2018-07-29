#pragma once
#include "Test.h"
#include "Header.h"

Point::Point(int x, int y){
	this->x = x;
	this->y = y;

	cout << "Const" << endl;

	this->string = new char[20];
	strcpy(this->string, "lol");
}

void Point::show(){
	cout << "(x-" << x << "; y-"<<y<<")"<< endl;
	cout << this->string << endl;
}

Point::~Point(){
	x = -1;
	y = -1;
	delete string;
	cout << "Distr" << endl;
	
}

Point::Point(const Point &obj){
	cout << "copy" << endl;
	this->x = obj.x;
	this->y = obj.y;
	this->string = new char[strlen(obj.string)+1];
	strcpy(this->string, obj.string);
}