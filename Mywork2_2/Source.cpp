#pragma once
#include "Header.h"

class Matrix {
private:
	int** matrix;
	int colum;
	int row;

	void makeArray(){
		matrix = new int*[row];
		for (int i = 0; i < row; i++){
			matrix[i] = new int[colum];
		}
	}
public:
	Matrix(){
		colum = 5;
		row = 5;
		makeArray();
	}
	Matrix(int colum,int row){
		this->colum = colum;
		this->row = row;
		makeArray();
	}

	void setRandom(){
		for (int i = 0; i < colum; i++){
			for (int j = 0; j < row; j++){
				matrix[j][i] = rand() % 10;
			}
		}
	}

	void show(){
		for (int i = 0; i < colum; i++){
			for (int j = 0; j < row; j++){
				cout << matrix[i][j] << " ";
			}
			cout << endl;
		}
	}

	int getElem(){
		int r, c;
		cout << "Input row index :";
		cin >> r;
		cout << "Input colum index :";
		cin >> c;
		if ((r < row) && (c < colum)){
			cout << matrix[r][c];
			return matrix[r][c];
		}
		else{
			cout << "Error size";
			return 0;
		}
	}

	void setElem(){
		int r, c, el;
		cout << "Input number :";
		cin >> el;
		cout << "Input row index :";
		cin >> r;
		cout << "Input colum index :";
		cin >> c;
		if ((r < row) && (c < colum)){
			matrix[r][c]  = el;
		}
		else{
			cout << "Error size";
		}
	}

	int getRow(){ return row; }

	int getColum() { return colum; }

	
	Matrix(const Matrix &m){
		cout << "copy data" << endl;
	}

	~Matrix(){
		cout << "delete data" << endl;
	
	}
};

void main(){
	Matrix m;
	m.setRandom();
	m.show();
	m.setElem();
	m.show();
	m.getElem();
}