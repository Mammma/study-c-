             #pragma once
#include "Digit.h"

MyDigit::MyDigit(int n){
	this->n = n;
}
void MyDigit::show()const{
	cout << n << endl;
}
MyDigit& MyDigit::operator++(int x){
	MyDigit temp(this->n);
	n++;
	return temp;
}
MyDigit& MyDigit::operator--(int y){
	MyDigit temp(this->n);
	n--;
	return temp;
}

void MyDigit::operator++(){
	n = n+5;
}
void MyDigit::operator--(){
	n = n - 5;
}