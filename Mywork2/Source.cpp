#pragma once
#include "Header.h"

class Children {
private:
	char *firstName,*secondName;
	int age;
public:
	Children(){}
	Children(char *firstName, char *secondName, int age){
		/*this->firstName = new char[strlen(firstName) + 1];
		strcpy(this->firstName, firstName);
		this->secondName = new char[strlen(secondName) + 1];
		strcpy(this->secondName, secondName);
		this->age = age;*/
		input(firstName, secondName, age);
	}
	void show(){
		cout << firstName << " " << secondName << " , age : " << age << endl;
	}
	void input(char *firstName,char *secondName,int age){
		this->firstName = new char[strlen(firstName) + 1];
		strcpy(this->firstName, firstName);
		this->secondName = new char[strlen(secondName) + 1];
		strcpy(this->secondName, secondName);
		this->age = age;
	}

	void input(){
		char firstName[30],secondName[30];
		int age;
		cout << "Input first name : ";
		cin >> firstName;
		cout << "Input second name : ";
		cin >> secondName;
		cout << "Input age : ";
		cin >> age;
		input(firstName, secondName, age);
	}

	Children(const Children &ch){
		cout << "copy data" << endl;
		this->firstName = new char[strlen(ch.firstName) + 1];
		strcpy(this->firstName, ch.firstName);
		this->secondName = new char[strlen(ch.secondName) + 1];
		strcpy(this->secondName, ch.secondName);
		this->age = ch.age;
	}

	~Children(){
		cout << "delete data" << endl;
		delete firstName;
		delete secondName;
	}
};

void main(){
	Children child1("Maks","Minashkin",16);
	Children child2;
	child2.input("Violet","Lozovskaya",8);
	child1.show();
	child2.show();
	Children child3;
	child3.input();
	child3.show();

}