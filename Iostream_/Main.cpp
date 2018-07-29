#include <iostream>
#include <iomanip>
using namespace std;

class PhoneNumber{
public:
	friend ostream& operator << (ostream&, const PhoneNumber&);
	friend istream& operator >> (istream&, PhoneNumber&);

private:
	char oper[4];
	char part[4];
	char part2[5];

};

ostream& operator << (ostream& output, const PhoneNumber& obj){
	output << "(" << obj.oper << ") " << obj.part << "-" << obj.part2 << endl;
	return output;
}

istream& operator >> (istream& input, PhoneNumber& obj){
	input.ignore();
	input >> setw(4) >> obj.oper;
	input.ignore(2);
	input >> setw(4) >> obj.part;
	input.ignore();
	input >> setw(5) >> obj.part2;
	return input;
}

void main(){
	PhoneNumber ph;
	cin >> ph;
	cout << ph;
}