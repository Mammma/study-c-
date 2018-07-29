#pragma once
#include "Header.h"

class Point3D{
	int x, y, z;
	char *name;
public:
	Point3D(){
		x = y = z = 0;
		name = new char[2];
		strcpy(name, "A");
	}
	Point3D(int x, int y, int z);
	Point3D(int x, int y, int z,char *name);
	void show(){
		cout << x << " , " << y << " , " << z <<" , "<< name << endl;
	}
	~Point3D(){ 
		cout << "Point3D dtor" << endl;
		delete name;
	}
	Point3D(const Point3D &);
};

Point3D::Point3D(const Point3D& p){
	this->x = p.x;
	this->y = p.y;
	this->z = p.z;
	this->name = new char[strlen(p.name) + 1];
	strcpy(this->name, p.name);
	cout << "Copy constr" << endl;
}

Point3D::Point3D(int x, int y, int z){
	this->x = x;
	this->y = y;
	this->z = z;
	name = new char[2];
	strcpy(name, "A");
}

Point3D::Point3D(int x,int y,int z,char *name){
	this->x = x;
	this->y = y;
	this->z = z;
	this->name = new char[strlen(name)+1];
	strcpy(this->name, name);
}

void printPoint(Point3D p){
	cout << "function PrintPoint " << endl;
	p.show();
}

Point3D getNewPoint3D(){
	Point3D p(3, 4, 1,"A1");
	cout << "func get new Point" << endl;
	return p;
}

void main(){
	//Point3D p;
	//p.show();
	//Point3D p2(10, 3, 2);
	//p2.show();
	//Point3D *point = new Point3D();
	//if (!point){	//if memory don't load
	//	cout << "Error" << endl;
	//	exit(0);
	//}
	//point->show();
	//Point3D *point2 = new Point3D(2, 3, 5);
	//point2->show();
	//Point3D *point3 = &p2;
	//point3->show();

	//Point3D* point4 = new Point3D[10]; // Array 
	//for (int i = 0; i < 10; i++){
	//	point4[i].show();
	//}

	//Point3D** point5 = new Point3D*[10];
	//for (int i = 0; i < 10; i++){
	//	point5[i] = new Point3D(i + 2, i * 3, i + 10);
	//	point5[i]->show();
	//}

	//delete point;
	//delete[] point4;
	//for (int i = 0; i < 10; i++){
	//	delete point5[i];
	//}
	//delete point5;

	//Point3D p3[2] = { Point3D(1, 11, 2), Point3D(5, 2, 1) };
	//p3[0].show();
	//p3[1].show();


	//////------Second lesson-------
	/*
	Point3D p4(4, 8, 3);
	p4.show();
	printPoint(p4);
	*/
	/*
	Point3D p5 = getNewPoint3D();
	Point3D p6 = p5;
	*/
	Point3D p7 = getNewPoint3D();
	p7.show();
	{
		Point3D p8 = Point3D(p7);
		p8.show();
	}
	p7.show();

}