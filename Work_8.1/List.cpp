#pragma once
#include "List.h"


List::List():count(0),head(NULL),tail(NULL){}
List::~List(){
	DelAll();
}
void List::Add(char data){
	Element *temp = new Element;
	temp->data = data;
	temp->next = NULL;
	if (head != NULL){
		tail->next = temp;
		tail = temp;
	}
	else
		head = tail = temp;
	count++;
}
void List::Del(){
	Element *temp = head;
	head = head->next;

	delete temp;
	count--;
}
void List::DelAll(){
	while (count){
		Del();
	}

}
ostream& operator  << (ostream& out, const List& obj){
	Element *temp = obj.head;
	while (temp)
	{
		out << temp->data << " " ;
		temp = temp->next;
	}
	out << endl;
	return out;
}
