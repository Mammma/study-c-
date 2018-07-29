#pragma once
#include "Element.h"

class List {
	Element* head;
	Element* tail;
	int count = 0;
public:
	List();
	~List();
	void Add(char data);
	void Del();
	void DelAll();
	friend ostream& operator  << (ostream& out, const List&);
	int GetCount() const { return count; }
};