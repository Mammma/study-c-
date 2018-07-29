#pragma once
#include "Array.h"

int Array::count = 0;
int Array::getSize() const { return size; }

int Array::getCount(){ return count; }

Array::Array(int length){
	size = length > 0 ? length : 10;
	ptr = new double[length];
	if (!ptr){
		cout << "Error! Array doesn't create." << endl;
		return;
	}
	count++;
}

Array::Array(const Array& obj):size(obj.size), ptr(new double[size]){
	if (!ptr){
		cout << "Error! Array doesn't create." << endl;
		return;
	}
	for (int i = 0; i < size; i++)
		ptr[i] = obj.ptr[i];
	count++;
}

Array::~Array(){
	if (ptr)
		delete[] ptr;
	ptr = nullptr;
	count--;
}

ostream& operator<<(ostream& output, const Array& obj){
	for (int i = 0; i < obj.size; i++){
		output << setw(10) << obj.ptr[i];
		if (!((i+1) % 5 )){
			output << endl;
		}
		
	}
	return output;
}
istream& operator>>(istream& input, Array& obj){
	for (int i = 0; i < obj.size; i++){
		input >> obj.ptr[i];
	}
	return input;
}

bool Array::operator == (const Array& obj)const{
	if (this->ptr == obj.ptr)
		return true;
	if (this->size != obj.size)
		return false;
	for (int i = 0; i < obj.size; i++){
		if (this->ptr[i] != obj.ptr[i])
			return false;
	}
	return true;
}
bool Array::operator != (const Array& obj)const{
	return !(*this== obj);
}

Array& Array::operator = (const Array& obj){
	if (obj != *this){
		if (size != obj.size){
			delete[] ptr;
			size = obj.size;
			ptr = new double[size];
			if (!ptr){
				cout << "Error! Array doesn't create." << endl;
				return *this;
			}
			
		}
		for (int i = 0; i < size; i++)
			ptr[i] = obj.ptr[i];
	}
	return *this;
}

double& Array::operator[](int index){
	return ptr[index];
}

