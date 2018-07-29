#pragma once
#include "Header.h"

//int count1;
//
//struct test{
//	int i;
//};
//
//void funTest(test t){
//	cout << t.i << endl;
//}

class newClass {

private:
	int a;
	int b;
public:
	newClass(){
		a = 5;
		b = 10;
		cout << "constructor 1" << endl;
	}
	newClass(int a,int b){
		this->a = a;
		this->b = b;
		cout << "constructor 2" << endl;
	}
	void show(){
		cout << "a = " << a << "\tb = " << b << endl;
	}
	int getA(){
		return a;
	}
	int getB(){
		return b;
	}
	void setA(int a){
		this->a = a;
	}
	void setB(int b){
		this->b = b;
	}

	~newClass(){
		
		cout << "distructur" << endl;
	}
};

class MyClass{
private:
	int i;
public:
	MyClass(int i){
		this->i = i;
		cout << "Constructure my" <<i<< endl;
	}
	~MyClass(){
		cout << "Distructure my" <<i<< endl;
		i = 0;
	}
	void print(){
		cout << "i = " << i << endl;
		
	}
};

void main(){
	/*test T;
	count1++;
	T.i = 10;
	funTest(T);*/

	/*newClass* cl1 = new newClass();
	cl1->show();
	cl1 = NULL;
	cl1 = new newClass(10,20);
	cl1->show();*/

	/*newClass cl;
	cl.show();*/

	MyClass t1(1);
	t1.print();
	t1.~MyClass();
	t1.print();


	
	
}