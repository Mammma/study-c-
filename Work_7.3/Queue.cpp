#include "Queue.h"

Queue::Queue(int m){
	MaxQueueLength = m;
	wait = new int[MaxQueueLength];
	LengthQueue = 0;
}
Queue::~Queue(){
	if (wait){
		delete[] wait;
	}
}

void Queue::show(){
	for (int i = 0; i < LengthQueue; i++){
		cout << wait[i] << " ";
	}
	cout << endl;
}

void Queue::add(int c){
	if (!isFull()){
		wait[LengthQueue++] = c;
	}
}
int Queue::extract(){
	if (!isEmpty()){
		int n = wait[0];
		for (int i = 0; i < LengthQueue - 1; i++){
			wait[i] = wait[i + 1];
		}
		LengthQueue--;
		return n;
	}
	return -1;
}
void Queue::clear(){
	LengthQueue = 0;
}
bool Queue::isEmpty(){
	return !LengthQueue;
}
bool Queue::isFull(){
	return LengthQueue == MaxQueueLength;
}
int Queue::getCount(){
	return LengthQueue;
}
