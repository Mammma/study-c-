#include "Stack.h"

void main(){
	srand(time(NULL));
	Stack st;
	while (!st.isFull()){
		st.push(rand() % 4 + 2);
	}
	while (!st.isEmpty()){
		cout << st.pop();
	}
	cout << endl;
	
}