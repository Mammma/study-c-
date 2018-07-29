#pragma once
#include "Nod.h"

class List {
	Nod *head, *tail;
	int count;
public:
	List();
	List(const List&);
	~List();
	int GetCount(){
		return count;
	}
	Nod* GetElem(int);
	void DelAll();
	void Del(int = 0);
	void Insert(int = 0);

	void AddTail(int);
	void AddHead(int);

	friend ostream& operator<<(ostream&, List&);

	void Print(int);

	List& operator = (const List&);
	List operator + (const List&);

	bool operator == (const List&);
	bool operator != (const List&);
	bool operator <= (const List&);
	bool operator >= (const List&);
	bool operator < (const List&);
	bool operator > (const List&);

	List operator - ();
};