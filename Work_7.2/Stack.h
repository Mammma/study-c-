#pragma once 
#include "Lib.h"

class Stack {
	enum {
		Empty = -1,
		Full = 20
	};

	char st[Full + 1];
	int top;
public:
	Stack();
	void push(char c);
	char pop() ;
	void clear();
	bool isEmpty();
	bool isFull();
	int getCount() const;
	char seek();
};