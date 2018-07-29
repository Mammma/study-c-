#include <iostream>
using namespace std;

class Point_{
public:
	const int x=0;
	const int y=0;

	Point_(int x = -5, int y = -5) :x(x), y(y) {
		
	}

};

void main(){
	Point_ p;
	cout << p.x << endl;
}