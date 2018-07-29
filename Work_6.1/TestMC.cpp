#pragma once
#include "TestMC.h"

int TestMC::count = 0;

TestMC::TestMC(){
	count++;
	n = 0;
	ptr = nullptr;
	cout << "Work default constructer; numb of object: " << count << endl;
	ShowObject();
}

TestMC::TestMC(int _n): n(_n),ptr(new char[n]){
	count++;
	cout << "Work int constructer; numb of object: " << count << endl;
	ShowObject();
}
TestMC::TestMC(int _n, char p): n(_n),ptr(new char[n]){
	count++;
	for (int i = 0; i < n; i++){
		ptr[i] = p;
	}
	cout << "Work int, char constructer; numb of object: " << count << endl;
	ShowObject();
}
TestMC::TestMC(const TestMC& obj):n(obj.n),ptr(new char[n]){
	count++;
	for (int i = 0; i < n; i++){
		ptr[i] = obj.ptr[i];
	}
	cout << "Work copy constructer; numb of object: " << count << endl;
	ShowObject();
}
TestMC::TestMC(TestMC&& obj):n(obj.n){
	count++;
	ptr = obj.ptr;
	obj.ptr = nullptr;
	obj.n = 0;//not neccesary
	cout << "Work move constructer; numb of object: " << count << endl;
	ShowObject();
}
TestMC::~TestMC(){
	count--;
	if (ptr){
		delete[] ptr;
	}
	n = 0;
	cout << "Work destructure; numb of object: " << count << endl;
	ShowObject();
}

void TestMC::ShowObject() const {
	cout << "Number element: " << n <<endl;
	cout << "Data address: " << (void*)ptr << endl<<endl;
}

TestMC TestMC::operator + (const TestMC& obj) const{
	cout << "Work operator+" << endl;
	//TestMC temp = TestMC(n + obj.n);
	TestMC temp(n + obj.n);
	for (int i = 0; i < n; i++){
		temp.ptr[i] = ptr[i];
	}
	for (int i = n; i < temp.n; i++){
		temp.ptr[i] = obj.ptr[i-n];
	}
	return temp;
}
//void TestMC::showData() const{
//
//}
TestMC& TestMC::operator = (const TestMC& obj){
	cout << "Work = copy" << endl;
	if (this==&obj)
		return *this;
	if(ptr){
		delete[] ptr;
	}
	n = obj.n;
	for (int i = 0; i < n; i++){
		ptr[i] = obj.ptr[i];
	}
	return *this;

}
TestMC& TestMC::operator = (TestMC&& obj){
	cout << "Work = move" << endl;
	if (this == &obj)
		return *this;
	if (ptr){
		delete[] ptr;
	}
	this->ptr = obj.ptr;
	this->n = obj.n;
	obj.ptr = nullptr;
	obj.n = 0;
	return *this;
}