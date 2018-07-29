#include <iostream>
using namespace std;

class Test{
	int num;
public:
	explicit Test(int n = 1) :num(n){}
	 Test  operator * (const Test& t) const{
		Test temp;
		temp.num = this->num*t.num;
		return temp;
	}
	void show() const{
		cout << num << endl;
	}
};

int main(){
	Test t1(5);
	Test t2 = t1 * (Test)2;
	t2.show();

	t2 = (Test)2;
	t2.show();

	return 0;
}