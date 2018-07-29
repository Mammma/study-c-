#pragma once
#include "lib.h"

//template <class T> class Point{
//private:
//	T x, y;
//public:
//	Point(T x1 = 0, T y1 = 0) :x(x1), y(y1){}
//	void show()const;
//
//};
//
//template <class T> void Point<T>::show() const{
//	cout << x << " " << y << endl;
//}

//template <class T1,class T2> class Point{
//private:
//	T1 x;
//	T2 y;
//public:
//	Point(T1 x1 = 0, T2 y1 = 0) :x(x1), y(y1){}
//	void show()const;
//
//};
//
//template <class T1,class T2> void Point<T1,T2>::show() const{
//	cout << x << " " << y << endl;
//}

template <class T = int, int size = 5> class Array{
private:
	T arr[size];
public:
	Array(){
		for (int i = 0; i < size; i++){
			arr[i] = (T)i;
		}
	}

	T& operator [](int);

};


template <class T, int size> T& Array<T, size>::operator [](int i){
	if (i<0 || i>size){
		cout << "Error index";
		exit(1);
	}
	return arr[i];

}