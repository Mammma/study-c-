#include <iostream>
using namespace std;

int getNumber(int min, int max){
	int number;// = min - 1;
	while (true){
		cin >> number;
		if (number >= min && number <= max && cin.peek() == '\n'){
			break;
		}
		else{
			cout << "Enter number(min - " << min << "; max - " << max << ")" << endl;
			cin.clear();
			while (cin.get() != '\n'){

			}
		}
	}
	return number;
}

double getDouble(){
	double number;
	while (true)
	{
		cin >> number;
		if (cin.peek() == '\n') break;
		else{
			cout << "Enter number" << endl;
			cin.clear();
			while (cin.get() != '\n'){

			}
		}
	}

	return number;
}

void main() {
	//int num = getNumber(10, 20);
	double num2 = getDouble();

}