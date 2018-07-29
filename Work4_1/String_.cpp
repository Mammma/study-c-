#pragma once
#include "String_.h"


String_::String_(char* s){
	if (this->s)
		delete[] this->s;
	setString(s,*this);
}

char * String_::setString(char* s, String_& obj){
	obj.len = strlen(s);
	obj.s = new char[obj.len + 1];
	strncpy(obj.s, s,obj.len + 1);
	return obj.s;
}

String_::String_(const String_& obj){
	if (this->s)
		delete[] this->s;
	len = obj.len;
	this->s = new char[len + 1];
	strncpy(this->s, obj.s, len + 1);
}
String_::~String_(){
	if (s){
		delete[] s;
	}
	len = 0;
}

char* String_::getString()const{
	return this->s;
}
int String_::getLen()const{
	return this->len;
}


String_ String_::operator + (const String_ & obj){
	String_ temp;
	temp.len = this->len + obj.len;
	temp.s = new char[temp.len+1];
	strncpy(temp.s, this->s, this->len + 1);
	strncat(temp.s, obj.s,obj.len+1);
	return temp;
}


String_& String_::operator = (const String_ & obj){
	if (this == &obj){
		return *this;
	}
	if (this->s)
		delete[] this->s;
	this->len = obj.len;
	this->s = new char[this->len + 1];
	strncpy(this->s, obj.s, this->len + 1);
	
	return *this;
}

ostream& operator <<(ostream& out , const String_& obj){
	out << obj.s << endl;
	return out;
}

istream& operator >>(istream& in, String_& obj){
	char buf[256];
	in >> buf;
	if (obj.s)
		delete[] obj.s;
	obj.len = strlen(buf);
	obj.s = new char[obj.len + 1];
	strncpy(obj.s, buf, obj.len + 1);
	return in;
}
