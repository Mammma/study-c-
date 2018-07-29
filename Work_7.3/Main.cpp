#include "Queue.h"

void main(){
	srand(time(NULL));
	Queue qu(25);

	for (int i = 0; i < 5; i++){
		qu.add(rand() % 50);
	}
	qu.show();
	qu.extract();
	qu.show();
}