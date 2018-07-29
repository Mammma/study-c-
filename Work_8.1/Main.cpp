#include "List.h"

void main(){
	List l;
	for (int i = 0; i < 10; i++){
		l.Add((char)('a' + i));
	}
	cout << l;
	for (int i = 0; i < 8; i++){
		l.Del();
	}
	for (int i = 0; i < 10; i++){
		l.Add((char)('a' + i));
	}
	cout << l;
	l.DelAll();
	cout << l;

}