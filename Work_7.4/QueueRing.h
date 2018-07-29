#pragma once
#include "Lib.h"

class QueueRing{
private:
	int *wait;
	int MaxQueueLength;
	int LengthQueue;
public:
	QueueRing(int);
	~QueueRing();
	void add(int);
	int extract();
	void clear();
	bool isEmpty();
	bool isFull();
	int getCount();
	void show();
};