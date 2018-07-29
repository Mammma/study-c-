#include "Stack.h"

Stack::Stack(){
	top = Empty;
}
void Stack::push(char c){
	if (!isFull()){
		st[++top] = c;
	}
}
char Stack::pop(){
	if (!isEmpty()){
		return st[top--];
	}
	else
		return (char)0;
}

char Stack::seek(){
	if (!isEmpty()){
		return st[top];
	}
	else
		return (char)0;
}
void Stack::clear(){
	top = Empty;
}
bool Stack::isEmpty(){
	return top == Empty;
}
bool Stack::isFull(){
	return top == Full;
}
int Stack::getCount() const{
	return top;
}