#include "Card.h"

Card::Card(){
	suit = Heart;
	point = 10;
	name = King;
}

int Card::getPoint()const{
	return point;
}
Suit Card::getSuit()const{
	return suit;
}
Face Card::getFace()const{
	return name;
}
void Card::ShowCard()const{
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	if (name == Ten) { cout << "10"; }
	else{
		cout <<" "<< (char)name;
	}
	if (getSuit() == Heart || getSuit() == Diamond){
		SetConsoleTextAttribute(h, Red);
	}
	else{
		SetConsoleTextAttribute(h, Black);
	}
	cout << (char)suit << " ";
	SetConsoleTextAttribute(h, White);
	
}