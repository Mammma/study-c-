#pragma once
#include "Lib.h"

class Queue {
private:
	int *wait;
	int MaxQueueLength;
	int LengthQueue;
public:
	Queue(int);
	~Queue();
	void add(int);
	int extract();
	void clear();
	bool isEmpty();
	bool isFull();

	int getCount();
	void show();
};