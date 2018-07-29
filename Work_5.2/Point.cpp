#include "Point.h"

Point::Point(int x_, int y_) :x(x_),y(y_) {
}
Point::Point(const Point& obj) : x(obj.x), y(obj.y) {
}

ostream& operator << (ostream& output, const Point& obj){
	output << "( " << obj.x << " ; " << obj.y << " )" << endl;
	return output;
}
void Point::operator () (int x, int y){
	this->x = x;
	this->y = y;
}