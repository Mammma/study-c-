#include "QueuePriority.h"

QueuePriority::QueuePriority(int m){
	MaxQueueLength = m;
	wait = new int[MaxQueueLength];
	LengthQueue = 0;
	priority = new int[MaxQueueLength];
}
QueuePriority::~QueuePriority(){
	if (wait){
		delete[] wait;
	}
	if (priority){
		delete[] priority;
	}
}

void QueuePriority::show(){
	for (int i = LengthQueue-1; i >=0; i--){
		cout << wait[i] << " - " << priority[i] << " ";
	}
	cout << endl;
}

void QueuePriority::add(int c,int p){
	if (!isFull()){
		wait[LengthQueue] = c;
		priority[LengthQueue++] = p;
	}
}
int QueuePriority::extract(){
	if (!isEmpty()){
		int max_pri = priority[0];
		int pos_max = 0;
		for (int i = 1; i < LengthQueue; i++){
			if (priority[i] > max_pri){
				max_pri = priority[i];
				pos_max = i;
			}
		}

		int n = wait[pos_max];
		for (int i = pos_max; i < LengthQueue - 1; i++){
			wait[i] = wait[i + 1];
			priority[i] = priority[i + 1];
		}
		LengthQueue--;
		return n;
	}
	return -1;
}
void QueuePriority::clear(){
	LengthQueue = 0;
}
bool QueuePriority::isEmpty(){
	return !LengthQueue;
}
bool QueuePriority::isFull(){
	return LengthQueue == MaxQueueLength;
}
int QueuePriority::getCount(){
	return LengthQueue;
}
