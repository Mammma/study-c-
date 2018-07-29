#include "List.h"

List::List(){
	head = tail = NULL;
	count = 0;
}
List::List(const List& obj){
	if (obj.head == NULL){
		head = tail = NULL;
		count = 0;
		return;
	}
	Nod *temp = obj.head;
	while (temp)
	{
		AddTail(temp->data);
		temp = temp->next;
	}
}
List::~List(){
	DelAll();
}

Nod* List::GetElem(int){
	
}
void List::DelAll(){

}
void List::Del(int = 0){

}
void List::Insert(int pos = 0){
	if (pos == 0){
		cout << "Enter position: ";
		cin >> pos;
	}
	if (pos<1 || pos>count + 1){
		cout << "Error blalbalba" << endl;
		return;
	}
	if (pos == count + 1){
		int data;
		cout << "Enter data: ";
		cin >> data;
		AddTail(data);
	}else if (pos==1){
		int data;
		cout << "Enter data: ";
		cin >> data;
		AddHead(data);
	}
	else{
		int i = 1;
		Nod* ins = head;
		while (i<pos){
			ins = ins->next;
		}
		Nod* prevInt = ins->prev;

		int data;
		cout << "enter data: ";
		cin >> data;
		Nod *temp = new Nod;
		temp->data = data;

		prevInt->next = temp;
		temp->prev = prevInt;

		temp->next = ins;
		ins->prev = temp;
		count++;
	}
}

void List::AddTail(int n){
	Nod *temp = new Nod;
	temp->data = n;
	temp->prev = tail;
	temp->next = NULL;
	if (tail){
		tail->next = temp;
		tail = temp;
	}
	else
	{
		head = tail = temp;

	}
	count++;
}
void List::AddHead(int n){
	Nod *temp = new Nod;
	temp->data = n;
	temp->prev = NULL; 
	temp->next = head;
	if (head){
		head->prev = temp;
		head = temp;
	}else
	{
		head = tail = temp;
	
	}
	count++;
		
}

ostream& operator<<(ostream&, List&){

}

void List::Print(int){

}

List& List::operator = (const List&){

}
List List::operator + (const List&){

}

bool List::operator == (const List&){

}
bool List::operator != (const List&){

}
bool List::operator <= (const List&){

}
bool List::operator >= (const List&){

}
bool List::operator < (const List&){

}
bool List::operator > (const List&){

}

List List::operator - (){

}