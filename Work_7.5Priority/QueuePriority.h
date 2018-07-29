#pragma once
#include "Lib.h"

class QueuePriority{
private:
	int *wait;
	int MaxQueueLength;
	int LengthQueue;
	int *priority;
public:
	QueuePriority(int);
	~QueuePriority();
	void add(int,int);
	int extract();
	void clear();
	bool isEmpty();
	bool isFull();
	int getCount();
	void show();
};