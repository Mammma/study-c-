#include "QueueRing.h"

void main(){
	srand(time(NULL));
	QueueRing qu(25);

	for (int i = 0; i < 5; i++){
		qu.add(rand() % 50);
	}
	qu.show();
	qu.extract();
	qu.show();
}