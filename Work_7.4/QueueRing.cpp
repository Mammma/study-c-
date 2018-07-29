#include "QueueRing.h"

QueueRing::QueueRing(int m){
	MaxQueueLength = m;
	wait = new int[MaxQueueLength];
	LengthQueue = 0;
}
QueueRing::~QueueRing(){
	if (wait){
		delete[] wait;
	}
}

void QueueRing::show(){
	for (int i = 0; i < LengthQueue; i++){
		cout << wait[i] << " ";
	}
	cout << endl;
}

void QueueRing::add(int c){
	if (!isFull()){
		wait[LengthQueue++] = c;
	}
}
int QueueRing::extract(){
	if (!isEmpty()){
		int n = wait[0];
		for (int i = 0; i < LengthQueue - 1; i++){
			wait[i] = wait[i + 1];
		}
		wait[LengthQueue-1] = n;
		return n;
	}
	return -1;
}
void QueueRing::clear(){
	LengthQueue = 0;
}
bool QueueRing::isEmpty(){
	return !LengthQueue;
}
bool QueueRing::isFull(){
	return LengthQueue == MaxQueueLength;
}
int QueueRing::getCount(){
	return LengthQueue;
}
